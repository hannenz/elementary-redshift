/*-
 * Copyright (c) 2016 Sam Thomas (https://github.com/sgpthomas/elementary-redshift)
 *
 * This is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Authored by: Sam Thomas <sgpthomas@gmail.com>
 */
namespace ElementaryRedshift.Daemon {

	public class Child : Object {

		Subprocess process;
		Pid child_pid;

		DataInputStream stdout_pipe;
		uint? monitor_id;

		Services.Settings settings;

		public Child (Services.Settings settings) {
			this.settings = settings;
		}

		public bool get_info () {
			spawn_child ();
			if (settings.schedule_mode == "custom") {
				if (transitioning ()) {
					float step = (settings.day_temperature - settings.night_temperature) / 30;
					settings.temperature += (int) step;
				}
			}

			return Source.CONTINUE;
		}

        private void spawn_child () {
            // kill old processes if any exist
            if (process != null) {
                terminate ();
            }

			string day_night_temp = "%i:%i".printf (settings.day_temperature, settings.night_temperature);
            string[] spawn_args = {"redshift", "-vp", "-t", day_night_temp};

            try {
                var launcher = new SubprocessLauncher (SubprocessFlags.STDOUT_PIPE);
                launcher.set_cwd ("/usr/bin/");
                launcher.set_environ (Environ.get ());

                process = launcher.spawnv (spawn_args);

                child_pid = int.parse (process.get_identifier ());
                
            } catch (Error e) {
                error ("Error: %s", e.message);
            }

            // get input stream for stdout pipe
            stdout_pipe = new DataInputStream (process.get_stdout_pipe ());
            monitor_id = Idle.add_full (Priority.LOW, (GLib.SourceFunc) monitor_stream);
        }

        public void terminate () {
			if (process != null) {
				process.send_signal (ProcessSignal.INT);
			}
        }

        private bool monitor_stream () {
            read_buffer_async.begin ();

            return Source.REMOVE;
        }

        private async void read_buffer_async () {
            if (stdout_pipe.has_pending ()) {
                return;
            }
            try {
				while (true) {
					var line = yield stdout_pipe.read_line_async ();
					if (line != null) {
						if (line.contains (": ")) {
							update_property (line);
						}
					} else {
						break;
					}
				}

            } catch (IOError e) {
                error ("IOError: %s", e.message);
            }
        }

		private int get_time_int (DateTime dt) {
			return (dt.get_hour () * 100) + dt.get_minute ();
		}

        private void update_property (string ret) {
            var parts = ret.split (": ");

			if (!settings.active) {
				return;
			}

            switch (parts[0]) {
                case "Color temperature":
					if (settings.schedule_mode == "auto") {
						settings.temperature = int.parse (parts[1].replace ("K", ""));
					} else if (settings.schedule_mode == "custom") {
						var now = get_time_int (new DateTime.now_local ());
						var factor = (settings.day_temperature - settings.night_temperature) / (60 * 15);

						// day
						if (now > settings.day_time && now < settings.night_time) {
							var diff = settings.night_time - now;
							if (diff < 100 && diff >= 0) {
								settings.temperature = settings.night_temperature + (factor * (diff - 40));
								var progress = (((double)(diff) - 60.0) / 60.0) * 100.0;
								settings.period = _("Transition(%.2f% Day)".printf (progress));
							} else {
								settings.temperature = settings.day_temperature;
								settings.period = _("Daytime");
							}
						} else { // night
							var diff = settings.day_time - now;
							if (diff < 100 && diff >= 0) {
								settings.temperature = settings.day_temperature - (factor * (diff - 40));
								var progress = (((double)(diff) - 60.0) / 60.0) * 100.0;
								settings.period = _("Transition(%.2f% Night)".printf (progress));
							} else {
								settings.temperature = settings.night_temperature;
								settings.period = _("Nighttime");
							}
						}
					}
                    break;
                case "Period":
					if (settings.schedule_mode == "auto") {
						settings.period = parts[1];
					}
                    break;
            }
        }

		private bool transitioning () {
			return false;
		}
	}
}
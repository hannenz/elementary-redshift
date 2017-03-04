# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/samthomas/Development/elementary-redshift

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/samthomas/Development/elementary-redshift/cmake

# Include any dependencies generated for this target.
include src/CMakeFiles/elementary-redshift-plug.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/elementary-redshift-plug.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/elementary-redshift-plug.dir/flags.make

src/Plug.c: src/elementary-redshift-plug_valac.stamp


src/Services/Settings.c: src/Plug.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/Services/Settings.c

src/Widgets/General.c: src/Plug.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/Widgets/General.c

src/Widgets/Schedule.c: src/Plug.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/Widgets/Schedule.c

src/Widgets/SettingLabel.c: src/Plug.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/Widgets/SettingLabel.c

src/Widgets/Temperature.c: src/Plug.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/Widgets/Temperature.c

src/config.c: src/Plug.c
	@$(CMAKE_COMMAND) -E touch_nocreate src/config.c

src/elementary-redshift-plug_valac.stamp: ../src/Plug.vala
src/elementary-redshift-plug_valac.stamp: ../src/Services/Settings.vala
src/elementary-redshift-plug_valac.stamp: ../src/Widgets/General.vala
src/elementary-redshift-plug_valac.stamp: ../src/Widgets/Schedule.vala
src/elementary-redshift-plug_valac.stamp: ../src/Widgets/SettingLabel.vala
src/elementary-redshift-plug_valac.stamp: ../src/Widgets/Temperature.vala
src/elementary-redshift-plug_valac.stamp: src/config.vala
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating Plug.c;Services/Settings.c;Widgets/General.c;Widgets/Schedule.c;Widgets/SettingLabel.c;Widgets/Temperature.c;/home/samthomas/Development/elementary-redshift/cmake/src/config.c"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/valac -C -b /home/samthomas/Development/elementary-redshift/src -d /home/samthomas/Development/elementary-redshift/cmake/src --pkg=gtk+-3.0 --pkg=switchboard-2.0 --pkg=wingpanel-2.0 --pkg=granite --thread -g /home/samthomas/Development/elementary-redshift/src/Plug.vala /home/samthomas/Development/elementary-redshift/src/Services/Settings.vala /home/samthomas/Development/elementary-redshift/src/Widgets/General.vala /home/samthomas/Development/elementary-redshift/src/Widgets/Schedule.vala /home/samthomas/Development/elementary-redshift/src/Widgets/SettingLabel.vala /home/samthomas/Development/elementary-redshift/src/Widgets/Temperature.vala /home/samthomas/Development/elementary-redshift/cmake/src/config.vala
	cd /home/samthomas/Development/elementary-redshift/cmake/src && touch /home/samthomas/Development/elementary-redshift/cmake/src/elementary-redshift-plug_valac.stamp

src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o: src/CMakeFiles/elementary-redshift-plug.dir/flags.make
src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o: src/Plug.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/elementary-redshift-plug.dir/Plug.c.o   -c /home/samthomas/Development/elementary-redshift/cmake/src/Plug.c

src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/elementary-redshift-plug.dir/Plug.c.i"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/samthomas/Development/elementary-redshift/cmake/src/Plug.c > CMakeFiles/elementary-redshift-plug.dir/Plug.c.i

src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/elementary-redshift-plug.dir/Plug.c.s"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/samthomas/Development/elementary-redshift/cmake/src/Plug.c -o CMakeFiles/elementary-redshift-plug.dir/Plug.c.s

src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o.requires:

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o.requires

src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o.provides: src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o.requires
	$(MAKE) -f src/CMakeFiles/elementary-redshift-plug.dir/build.make src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o.provides.build
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o.provides

src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o.provides.build: src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o


src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o: src/CMakeFiles/elementary-redshift-plug.dir/flags.make
src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o: src/Services/Settings.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o   -c /home/samthomas/Development/elementary-redshift/cmake/src/Services/Settings.c

src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.i"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/samthomas/Development/elementary-redshift/cmake/src/Services/Settings.c > CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.i

src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.s"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/samthomas/Development/elementary-redshift/cmake/src/Services/Settings.c -o CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.s

src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o.requires:

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o.requires

src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o.provides: src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o.requires
	$(MAKE) -f src/CMakeFiles/elementary-redshift-plug.dir/build.make src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o.provides.build
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o.provides

src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o.provides.build: src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o


src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o: src/CMakeFiles/elementary-redshift-plug.dir/flags.make
src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o: src/Widgets/General.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o   -c /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/General.c

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.i"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/General.c > CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.i

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.s"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/General.c -o CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.s

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o.requires:

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o.requires

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o.provides: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o.requires
	$(MAKE) -f src/CMakeFiles/elementary-redshift-plug.dir/build.make src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o.provides.build
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o.provides

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o.provides.build: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o


src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o: src/CMakeFiles/elementary-redshift-plug.dir/flags.make
src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o: src/Widgets/Schedule.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o   -c /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/Schedule.c

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.i"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/Schedule.c > CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.i

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.s"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/Schedule.c -o CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.s

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o.requires:

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o.requires

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o.provides: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o.requires
	$(MAKE) -f src/CMakeFiles/elementary-redshift-plug.dir/build.make src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o.provides.build
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o.provides

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o.provides.build: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o


src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o: src/CMakeFiles/elementary-redshift-plug.dir/flags.make
src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o: src/Widgets/SettingLabel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o   -c /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/SettingLabel.c

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.i"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/SettingLabel.c > CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.i

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.s"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/SettingLabel.c -o CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.s

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o.requires:

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o.requires

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o.provides: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o.requires
	$(MAKE) -f src/CMakeFiles/elementary-redshift-plug.dir/build.make src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o.provides.build
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o.provides

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o.provides.build: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o


src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o: src/CMakeFiles/elementary-redshift-plug.dir/flags.make
src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o: src/Widgets/Temperature.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o   -c /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/Temperature.c

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.i"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/Temperature.c > CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.i

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.s"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/samthomas/Development/elementary-redshift/cmake/src/Widgets/Temperature.c -o CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.s

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o.requires:

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o.requires

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o.provides: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o.requires
	$(MAKE) -f src/CMakeFiles/elementary-redshift-plug.dir/build.make src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o.provides.build
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o.provides

src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o.provides.build: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o


src/CMakeFiles/elementary-redshift-plug.dir/config.c.o: src/CMakeFiles/elementary-redshift-plug.dir/flags.make
src/CMakeFiles/elementary-redshift-plug.dir/config.c.o: src/config.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object src/CMakeFiles/elementary-redshift-plug.dir/config.c.o"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/elementary-redshift-plug.dir/config.c.o   -c /home/samthomas/Development/elementary-redshift/cmake/src/config.c

src/CMakeFiles/elementary-redshift-plug.dir/config.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/elementary-redshift-plug.dir/config.c.i"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/samthomas/Development/elementary-redshift/cmake/src/config.c > CMakeFiles/elementary-redshift-plug.dir/config.c.i

src/CMakeFiles/elementary-redshift-plug.dir/config.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/elementary-redshift-plug.dir/config.c.s"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/samthomas/Development/elementary-redshift/cmake/src/config.c -o CMakeFiles/elementary-redshift-plug.dir/config.c.s

src/CMakeFiles/elementary-redshift-plug.dir/config.c.o.requires:

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/config.c.o.requires

src/CMakeFiles/elementary-redshift-plug.dir/config.c.o.provides: src/CMakeFiles/elementary-redshift-plug.dir/config.c.o.requires
	$(MAKE) -f src/CMakeFiles/elementary-redshift-plug.dir/build.make src/CMakeFiles/elementary-redshift-plug.dir/config.c.o.provides.build
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/config.c.o.provides

src/CMakeFiles/elementary-redshift-plug.dir/config.c.o.provides.build: src/CMakeFiles/elementary-redshift-plug.dir/config.c.o


# Object files for target elementary-redshift-plug
elementary__redshift__plug_OBJECTS = \
"CMakeFiles/elementary-redshift-plug.dir/Plug.c.o" \
"CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o" \
"CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o" \
"CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o" \
"CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o" \
"CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o" \
"CMakeFiles/elementary-redshift-plug.dir/config.c.o"

# External object files for target elementary-redshift-plug
elementary__redshift__plug_EXTERNAL_OBJECTS =

src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o
src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o
src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o
src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o
src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o
src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o
src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/config.c.o
src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/build.make
src/libelementary-redshift-plug.so: src/CMakeFiles/elementary-redshift-plug.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/samthomas/Development/elementary-redshift/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C shared module libelementary-redshift-plug.so"
	cd /home/samthomas/Development/elementary-redshift/cmake/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/elementary-redshift-plug.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/elementary-redshift-plug.dir/build: src/libelementary-redshift-plug.so

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/build

src/CMakeFiles/elementary-redshift-plug.dir/requires: src/CMakeFiles/elementary-redshift-plug.dir/Plug.c.o.requires
src/CMakeFiles/elementary-redshift-plug.dir/requires: src/CMakeFiles/elementary-redshift-plug.dir/Services/Settings.c.o.requires
src/CMakeFiles/elementary-redshift-plug.dir/requires: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/General.c.o.requires
src/CMakeFiles/elementary-redshift-plug.dir/requires: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Schedule.c.o.requires
src/CMakeFiles/elementary-redshift-plug.dir/requires: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/SettingLabel.c.o.requires
src/CMakeFiles/elementary-redshift-plug.dir/requires: src/CMakeFiles/elementary-redshift-plug.dir/Widgets/Temperature.c.o.requires
src/CMakeFiles/elementary-redshift-plug.dir/requires: src/CMakeFiles/elementary-redshift-plug.dir/config.c.o.requires

.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/requires

src/CMakeFiles/elementary-redshift-plug.dir/clean:
	cd /home/samthomas/Development/elementary-redshift/cmake/src && $(CMAKE_COMMAND) -P CMakeFiles/elementary-redshift-plug.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/clean

src/CMakeFiles/elementary-redshift-plug.dir/depend: src/Plug.c
src/CMakeFiles/elementary-redshift-plug.dir/depend: src/Services/Settings.c
src/CMakeFiles/elementary-redshift-plug.dir/depend: src/Widgets/General.c
src/CMakeFiles/elementary-redshift-plug.dir/depend: src/Widgets/Schedule.c
src/CMakeFiles/elementary-redshift-plug.dir/depend: src/Widgets/SettingLabel.c
src/CMakeFiles/elementary-redshift-plug.dir/depend: src/Widgets/Temperature.c
src/CMakeFiles/elementary-redshift-plug.dir/depend: src/config.c
src/CMakeFiles/elementary-redshift-plug.dir/depend: src/elementary-redshift-plug_valac.stamp
	cd /home/samthomas/Development/elementary-redshift/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/samthomas/Development/elementary-redshift /home/samthomas/Development/elementary-redshift/src /home/samthomas/Development/elementary-redshift/cmake /home/samthomas/Development/elementary-redshift/cmake/src /home/samthomas/Development/elementary-redshift/cmake/src/CMakeFiles/elementary-redshift-plug.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/elementary-redshift-plug.dir/depend

/* Indicator.c generated by valac 0.34.5, the Vala compiler
 * generated from Indicator.vala, do not modify */

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

#include <glib.h>
#include <glib-object.h>
#include <wingpanel.h>
#include <gtk/gtk.h>
#include <granite.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>
#include <gmodule.h>


#define ELEMENTARY_REDSHIFT_TYPE_INDICATOR (elementary_redshift_indicator_get_type ())
#define ELEMENTARY_REDSHIFT_INDICATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ELEMENTARY_REDSHIFT_TYPE_INDICATOR, ElementaryRedshiftIndicator))
#define ELEMENTARY_REDSHIFT_INDICATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ELEMENTARY_REDSHIFT_TYPE_INDICATOR, ElementaryRedshiftIndicatorClass))
#define ELEMENTARY_REDSHIFT_IS_INDICATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ELEMENTARY_REDSHIFT_TYPE_INDICATOR))
#define ELEMENTARY_REDSHIFT_IS_INDICATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ELEMENTARY_REDSHIFT_TYPE_INDICATOR))
#define ELEMENTARY_REDSHIFT_INDICATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ELEMENTARY_REDSHIFT_TYPE_INDICATOR, ElementaryRedshiftIndicatorClass))

typedef struct _ElementaryRedshiftIndicator ElementaryRedshiftIndicator;
typedef struct _ElementaryRedshiftIndicatorClass ElementaryRedshiftIndicatorClass;
typedef struct _ElementaryRedshiftIndicatorPrivate ElementaryRedshiftIndicatorPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define ELEMENTARY_REDSHIFT_SERVICES_TYPE_SETTINGS (elementary_redshift_services_settings_get_type ())
#define ELEMENTARY_REDSHIFT_SERVICES_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ELEMENTARY_REDSHIFT_SERVICES_TYPE_SETTINGS, ElementaryRedshiftServicesSettings))
#define ELEMENTARY_REDSHIFT_SERVICES_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ELEMENTARY_REDSHIFT_SERVICES_TYPE_SETTINGS, ElementaryRedshiftServicesSettingsClass))
#define ELEMENTARY_REDSHIFT_SERVICES_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ELEMENTARY_REDSHIFT_SERVICES_TYPE_SETTINGS))
#define ELEMENTARY_REDSHIFT_SERVICES_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ELEMENTARY_REDSHIFT_SERVICES_TYPE_SETTINGS))
#define ELEMENTARY_REDSHIFT_SERVICES_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ELEMENTARY_REDSHIFT_SERVICES_TYPE_SETTINGS, ElementaryRedshiftServicesSettingsClass))

typedef struct _ElementaryRedshiftServicesSettings ElementaryRedshiftServicesSettings;
typedef struct _ElementaryRedshiftServicesSettingsClass ElementaryRedshiftServicesSettingsClass;

#define ELEMENTARY_REDSHIFT_WIDGETS_TYPE_INFORMATION_GRID (elementary_redshift_widgets_information_grid_get_type ())
#define ELEMENTARY_REDSHIFT_WIDGETS_INFORMATION_GRID(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ELEMENTARY_REDSHIFT_WIDGETS_TYPE_INFORMATION_GRID, ElementaryRedshiftWidgetsInformationGrid))
#define ELEMENTARY_REDSHIFT_WIDGETS_INFORMATION_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ELEMENTARY_REDSHIFT_WIDGETS_TYPE_INFORMATION_GRID, ElementaryRedshiftWidgetsInformationGridClass))
#define ELEMENTARY_REDSHIFT_WIDGETS_IS_INFORMATION_GRID(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ELEMENTARY_REDSHIFT_WIDGETS_TYPE_INFORMATION_GRID))
#define ELEMENTARY_REDSHIFT_WIDGETS_IS_INFORMATION_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ELEMENTARY_REDSHIFT_WIDGETS_TYPE_INFORMATION_GRID))
#define ELEMENTARY_REDSHIFT_WIDGETS_INFORMATION_GRID_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ELEMENTARY_REDSHIFT_WIDGETS_TYPE_INFORMATION_GRID, ElementaryRedshiftWidgetsInformationGridClass))

typedef struct _ElementaryRedshiftWidgetsInformationGrid ElementaryRedshiftWidgetsInformationGrid;
typedef struct _ElementaryRedshiftWidgetsInformationGridClass ElementaryRedshiftWidgetsInformationGridClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define __g_list_free__g_free0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_free0_ (var), NULL)))

struct _ElementaryRedshiftIndicator {
	WingpanelIndicator parent_instance;
	ElementaryRedshiftIndicatorPrivate * priv;
};

struct _ElementaryRedshiftIndicatorClass {
	WingpanelIndicatorClass parent_class;
};

struct _ElementaryRedshiftIndicatorPrivate {
	WingpanelWidgetsOverlayIcon* display_widget;
	GtkGrid* main_grid;
	WingpanelWidgetsSwitch* active_toggle;
	GtkRevealer* info_revealer;
};


static gpointer elementary_redshift_indicator_parent_class = NULL;
extern ElementaryRedshiftServicesSettings* elementary_redshift_indicator_settings;
ElementaryRedshiftServicesSettings* elementary_redshift_indicator_settings = NULL;

GType elementary_redshift_indicator_get_type (void) G_GNUC_CONST;
#define ELEMENTARY_REDSHIFT_INDICATOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), ELEMENTARY_REDSHIFT_TYPE_INDICATOR, ElementaryRedshiftIndicatorPrivate))
enum  {
	ELEMENTARY_REDSHIFT_INDICATOR_DUMMY_PROPERTY
};
GType elementary_redshift_services_settings_get_type (void) G_GNUC_CONST;
ElementaryRedshiftIndicator* elementary_redshift_indicator_new (void);
ElementaryRedshiftIndicator* elementary_redshift_indicator_construct (GType object_type);
#define BUILD_INDICATOR_NAME "elementary-redshift"
#define BUILD_INDICATOR_TITLE "@INDICATORTITLE"
#define BUILD_INDICATOR_DESCRIPTION "@INDICATORDESCRIPTION"
ElementaryRedshiftServicesSettings* elementary_redshift_services_settings_new (void);
ElementaryRedshiftServicesSettings* elementary_redshift_services_settings_construct (GType object_type);
gboolean elementary_redshift_services_settings_get_indicator (ElementaryRedshiftServicesSettings* self);
static GtkWidget* elementary_redshift_indicator_real_get_display_widget (WingpanelIndicator* base);
static GtkWidget* elementary_redshift_indicator_real_get_widget (WingpanelIndicator* base);
static void elementary_redshift_indicator_create_grid (ElementaryRedshiftIndicator* self);
static void elementary_redshift_indicator_real_opened (WingpanelIndicator* base);
static void elementary_redshift_indicator_real_closed (WingpanelIndicator* base);
ElementaryRedshiftWidgetsInformationGrid* elementary_redshift_widgets_information_grid_new (void);
ElementaryRedshiftWidgetsInformationGrid* elementary_redshift_widgets_information_grid_construct (GType object_type);
GType elementary_redshift_widgets_information_grid_get_type (void) G_GNUC_CONST;
static void __lambda6_ (ElementaryRedshiftIndicator* self);
static void _g_free0_ (gpointer var);
static void _g_list_free__g_free0_ (GList* self);
static void ___lambda6__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void __lambda7_ (ElementaryRedshiftIndicator* self);
gboolean elementary_redshift_services_settings_get_active (ElementaryRedshiftServicesSettings* self);
static void ___lambda7__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void __lambda8_ (ElementaryRedshiftIndicator* self);
static void ___lambda8__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void __lambda9_ (ElementaryRedshiftIndicator* self);
void elementary_redshift_services_settings_set_active (ElementaryRedshiftServicesSettings* self, gboolean value);
static void ___lambda9__wingpanel_widgets_switch_switched (WingpanelWidgetsSwitch* _sender, gpointer self);
static void elementary_redshift_indicator_finalize (GObject* obj);
WingpanelIndicator* get_indicator (GModule* module, WingpanelIndicatorManagerServerType server_type);


ElementaryRedshiftIndicator* elementary_redshift_indicator_construct (GType object_type) {
	ElementaryRedshiftIndicator * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	ElementaryRedshiftServicesSettings* _tmp2_ = NULL;
	ElementaryRedshiftServicesSettings* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_ = FALSE;
#line 38 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = _ (BUILD_INDICATOR_TITLE);
#line 38 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp1_ = _ (BUILD_INDICATOR_DESCRIPTION);
#line 38 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self = (ElementaryRedshiftIndicator*) g_object_new (object_type, "code-name", BUILD_INDICATOR_NAME, "display-name", _tmp0_, "description", _tmp1_, NULL);
#line 42 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp2_ = elementary_redshift_services_settings_new ();
#line 42 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (elementary_redshift_indicator_settings);
#line 42 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	elementary_redshift_indicator_settings = _tmp2_;
#line 46 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp3_ = elementary_redshift_indicator_settings;
#line 46 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp4_ = elementary_redshift_services_settings_get_indicator (_tmp3_);
#line 46 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp5_ = _tmp4_;
#line 46 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	wingpanel_indicator_set_visible ((WingpanelIndicator*) self, _tmp5_);
#line 36 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	return self;
#line 161 "Indicator.c"
}


ElementaryRedshiftIndicator* elementary_redshift_indicator_new (void) {
#line 36 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	return elementary_redshift_indicator_construct (ELEMENTARY_REDSHIFT_TYPE_INDICATOR);
#line 168 "Indicator.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 58 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	return self ? g_object_ref (self) : NULL;
#line 175 "Indicator.c"
}


static GtkWidget* elementary_redshift_indicator_real_get_display_widget (WingpanelIndicator* base) {
	ElementaryRedshiftIndicator * self;
	GtkWidget* result = NULL;
	WingpanelWidgetsOverlayIcon* _tmp0_ = NULL;
	WingpanelWidgetsOverlayIcon* _tmp2_ = NULL;
	GtkWidget* _tmp3_ = NULL;
#line 50 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self = (ElementaryRedshiftIndicator*) base;
#line 52 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = self->priv->display_widget;
#line 52 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	if (_tmp0_ == NULL) {
#line 191 "Indicator.c"
		WingpanelWidgetsOverlayIcon* _tmp1_ = NULL;
#line 54 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		_tmp1_ = wingpanel_widgets_overlay_icon_new ("weather-clear-night-symbolic");
#line 54 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		g_object_ref_sink (_tmp1_);
#line 54 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		_g_object_unref0 (self->priv->display_widget);
#line 54 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		self->priv->display_widget = _tmp1_;
#line 201 "Indicator.c"
	}
#line 58 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp2_ = self->priv->display_widget;
#line 58 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp3_ = _g_object_ref0 ((GtkWidget*) _tmp2_);
#line 58 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	result = _tmp3_;
#line 58 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	return result;
#line 211 "Indicator.c"
}


static GtkWidget* elementary_redshift_indicator_real_get_widget (WingpanelIndicator* base) {
	ElementaryRedshiftIndicator * self;
	GtkWidget* result = NULL;
	GtkGrid* _tmp0_ = NULL;
	GtkGrid* _tmp1_ = NULL;
	GtkWidget* _tmp2_ = NULL;
#line 62 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self = (ElementaryRedshiftIndicator*) base;
#line 64 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = self->priv->main_grid;
#line 64 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	if (_tmp0_ == NULL) {
#line 66 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		elementary_redshift_indicator_create_grid (self);
#line 229 "Indicator.c"
	}
#line 70 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp1_ = self->priv->main_grid;
#line 70 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp2_ = _g_object_ref0 ((GtkWidget*) _tmp1_);
#line 70 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	result = _tmp2_;
#line 70 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	return result;
#line 239 "Indicator.c"
}


static void elementary_redshift_indicator_real_opened (WingpanelIndicator* base) {
	ElementaryRedshiftIndicator * self;
#line 74 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self = (ElementaryRedshiftIndicator*) base;
#line 247 "Indicator.c"
}


static void elementary_redshift_indicator_real_closed (WingpanelIndicator* base) {
	ElementaryRedshiftIndicator * self;
#line 79 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self = (ElementaryRedshiftIndicator*) base;
#line 255 "Indicator.c"
}


static void _g_free0_ (gpointer var) {
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	var = (g_free (var), NULL);
#line 262 "Indicator.c"
}


static void _g_list_free__g_free0_ (GList* self) {
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_list_foreach (self, (GFunc) _g_free0_, NULL);
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_list_free (self);
#line 271 "Indicator.c"
}


static void __lambda6_ (ElementaryRedshiftIndicator* self) {
	GList* list = NULL;
	gchar* _tmp0_ = NULL;
	GError * _inner_error_ = NULL;
#line 95 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	list = NULL;
#line 96 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = g_strdup ("settings://redshift");
#line 96 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	list = g_list_append (list, _tmp0_);
#line 285 "Indicator.c"
	{
		GAppInfo* appinfo = NULL;
		GAppInfo* _tmp1_ = NULL;
#line 98 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		_tmp1_ = g_app_info_get_default_for_uri_scheme ("settings");
#line 98 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		appinfo = _tmp1_;
#line 99 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		g_app_info_launch_uris (appinfo, list, NULL, &_inner_error_);
#line 99 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 99 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
			_g_object_unref0 (appinfo);
#line 299 "Indicator.c"
			goto __catch0_g_error;
		}
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		_g_object_unref0 (appinfo);
#line 304 "Indicator.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		e = _inner_error_;
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		_inner_error_ = NULL;
#line 101 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		_tmp2_ = e;
#line 101 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		_tmp3_ = _tmp2_->message;
#line 101 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		g_warning ("Indicator.vala:101: %s\n", _tmp3_);
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		_g_error_free0 (e);
#line 324 "Indicator.c"
	}
	__finally0:
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		__g_list_free__g_free0_0 (list);
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		g_clear_error (&_inner_error_);
#line 97 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		return;
#line 337 "Indicator.c"
	}
#line 103 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_signal_emit_by_name ((WingpanelIndicator*) self, "close");
#line 94 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	__g_list_free__g_free0_0 (list);
#line 343 "Indicator.c"
}


static void ___lambda6__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 94 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	__lambda6_ ((ElementaryRedshiftIndicator*) self);
#line 350 "Indicator.c"
}


static void __lambda7_ (ElementaryRedshiftIndicator* self) {
	WingpanelWidgetsSwitch* _tmp0_ = NULL;
	ElementaryRedshiftServicesSettings* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	gboolean _tmp3_ = FALSE;
#line 112 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = self->priv->active_toggle;
#line 112 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp1_ = elementary_redshift_indicator_settings;
#line 112 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp2_ = elementary_redshift_services_settings_get_active (_tmp1_);
#line 112 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp3_ = _tmp2_;
#line 112 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	wingpanel_widgets_switch_set_active (_tmp0_, _tmp3_);
#line 369 "Indicator.c"
}


static void ___lambda7__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 111 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	__lambda7_ ((ElementaryRedshiftIndicator*) self);
#line 376 "Indicator.c"
}


static void __lambda8_ (ElementaryRedshiftIndicator* self) {
	ElementaryRedshiftServicesSettings* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
#line 117 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = elementary_redshift_indicator_settings;
#line 117 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp1_ = elementary_redshift_services_settings_get_indicator (_tmp0_);
#line 117 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp2_ = _tmp1_;
#line 117 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	wingpanel_indicator_set_visible ((WingpanelIndicator*) self, _tmp2_);
#line 392 "Indicator.c"
}


static void ___lambda8__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 116 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	__lambda8_ ((ElementaryRedshiftIndicator*) self);
#line 399 "Indicator.c"
}


static void __lambda9_ (ElementaryRedshiftIndicator* self) {
	GtkRevealer* _tmp0_ = NULL;
	WingpanelWidgetsSwitch* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	ElementaryRedshiftServicesSettings* _tmp3_ = NULL;
	WingpanelWidgetsSwitch* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
#line 122 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = self->priv->info_revealer;
#line 122 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp1_ = self->priv->active_toggle;
#line 122 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp2_ = wingpanel_widgets_switch_get_active (_tmp1_);
#line 122 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_revealer_set_reveal_child (_tmp0_, _tmp2_);
#line 123 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp3_ = elementary_redshift_indicator_settings;
#line 123 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp4_ = self->priv->active_toggle;
#line 123 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp5_ = wingpanel_widgets_switch_get_active (_tmp4_);
#line 123 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	elementary_redshift_services_settings_set_active (_tmp3_, _tmp5_);
#line 426 "Indicator.c"
}


static void ___lambda9__wingpanel_widgets_switch_switched (WingpanelWidgetsSwitch* _sender, gpointer self) {
#line 120 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	__lambda9_ ((ElementaryRedshiftIndicator*) self);
#line 433 "Indicator.c"
}


static void elementary_redshift_indicator_create_grid (ElementaryRedshiftIndicator* self) {
	GtkGrid* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	WingpanelWidgetsSwitch* _tmp2_ = NULL;
	WingpanelWidgetsSwitch* _tmp3_ = NULL;
	GtkStyleContext* _tmp4_ = NULL;
	GtkRevealer* _tmp5_ = NULL;
	GtkRevealer* _tmp6_ = NULL;
	ElementaryRedshiftWidgetsInformationGrid* _tmp7_ = NULL;
	ElementaryRedshiftWidgetsInformationGrid* _tmp8_ = NULL;
	GtkRevealer* _tmp9_ = NULL;
	WingpanelWidgetsButton* show_settings_button = NULL;
	const gchar* _tmp10_ = NULL;
	WingpanelWidgetsButton* _tmp11_ = NULL;
	GtkGrid* _tmp12_ = NULL;
	WingpanelWidgetsSwitch* _tmp13_ = NULL;
	GtkGrid* _tmp14_ = NULL;
	GtkRevealer* _tmp15_ = NULL;
	GtkGrid* _tmp16_ = NULL;
	WingpanelWidgetsSeparator* _tmp17_ = NULL;
	WingpanelWidgetsSeparator* _tmp18_ = NULL;
	GtkGrid* _tmp19_ = NULL;
	ElementaryRedshiftServicesSettings* _tmp20_ = NULL;
	ElementaryRedshiftServicesSettings* _tmp21_ = NULL;
	WingpanelWidgetsSwitch* _tmp22_ = NULL;
	WingpanelWidgetsSwitch* _tmp23_ = NULL;
	ElementaryRedshiftServicesSettings* _tmp24_ = NULL;
	gboolean _tmp25_ = FALSE;
	gboolean _tmp26_ = FALSE;
	GtkRevealer* _tmp27_ = NULL;
	WingpanelWidgetsSwitch* _tmp28_ = NULL;
	gboolean _tmp29_ = FALSE;
#line 83 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_return_if_fail (self != NULL);
#line 84 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
#line 84 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_object_ref_sink (_tmp0_);
#line 84 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (self->priv->main_grid);
#line 84 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self->priv->main_grid = _tmp0_;
#line 86 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp1_ = _ ("Redshift");
#line 86 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp2_ = wingpanel_widgets_switch_new (_tmp1_, FALSE);
#line 86 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_object_ref_sink (_tmp2_);
#line 86 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (self->priv->active_toggle);
#line 86 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self->priv->active_toggle = _tmp2_;
#line 87 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp3_ = self->priv->active_toggle;
#line 87 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp4_ = gtk_widget_get_style_context ((GtkWidget*) _tmp3_);
#line 87 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_style_context_add_class (_tmp4_, "h4");
#line 89 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp5_ = (GtkRevealer*) gtk_revealer_new ();
#line 89 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_object_ref_sink (_tmp5_);
#line 89 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (self->priv->info_revealer);
#line 89 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self->priv->info_revealer = _tmp5_;
#line 90 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp6_ = self->priv->info_revealer;
#line 90 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp7_ = elementary_redshift_widgets_information_grid_new ();
#line 90 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_object_ref_sink (_tmp7_);
#line 90 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp8_ = _tmp7_;
#line 90 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_container_add ((GtkContainer*) _tmp6_, (GtkWidget*) _tmp8_);
#line 90 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (_tmp8_);
#line 91 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp9_ = self->priv->info_revealer;
#line 91 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_revealer_set_reveal_child (_tmp9_, TRUE);
#line 93 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp10_ = _ ("Redshift Settings…");
#line 93 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp11_ = wingpanel_widgets_button_new (_tmp10_, NULL);
#line 93 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_object_ref_sink (_tmp11_);
#line 93 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	show_settings_button = _tmp11_;
#line 94 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_signal_connect_object ((GtkButton*) show_settings_button, "clicked", (GCallback) ___lambda6__gtk_button_clicked, self, 0);
#line 106 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp12_ = self->priv->main_grid;
#line 106 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp13_ = self->priv->active_toggle;
#line 106 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_grid_attach (_tmp12_, (GtkWidget*) _tmp13_, 0, 0, 1, 1);
#line 107 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp14_ = self->priv->main_grid;
#line 107 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp15_ = self->priv->info_revealer;
#line 107 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_grid_attach (_tmp14_, (GtkWidget*) _tmp15_, 0, 1, 1, 1);
#line 108 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp16_ = self->priv->main_grid;
#line 108 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp17_ = wingpanel_widgets_separator_new ();
#line 108 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_object_ref_sink (_tmp17_);
#line 108 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp18_ = _tmp17_;
#line 108 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_grid_attach (_tmp16_, (GtkWidget*) _tmp18_, 0, 2, 1, 1);
#line 108 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (_tmp18_);
#line 109 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp19_ = self->priv->main_grid;
#line 109 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_grid_attach (_tmp19_, (GtkWidget*) show_settings_button, 0, 3, 1, 1);
#line 111 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp20_ = elementary_redshift_indicator_settings;
#line 111 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_signal_connect_object ((GObject*) _tmp20_, "notify::active", (GCallback) ___lambda7__g_object_notify, self, 0);
#line 116 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp21_ = elementary_redshift_indicator_settings;
#line 116 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_signal_connect_object ((GObject*) _tmp21_, "notify::indicator", (GCallback) ___lambda8__g_object_notify, self, 0);
#line 120 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp22_ = self->priv->active_toggle;
#line 120 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_signal_connect_object (_tmp22_, "switched", (GCallback) ___lambda9__wingpanel_widgets_switch_switched, self, 0);
#line 127 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp23_ = self->priv->active_toggle;
#line 127 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp24_ = elementary_redshift_indicator_settings;
#line 127 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp25_ = elementary_redshift_services_settings_get_active (_tmp24_);
#line 127 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp26_ = _tmp25_;
#line 127 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	wingpanel_widgets_switch_set_active (_tmp23_, _tmp26_);
#line 129 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp27_ = self->priv->info_revealer;
#line 129 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp28_ = self->priv->active_toggle;
#line 129 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp29_ = wingpanel_widgets_switch_get_active (_tmp28_);
#line 129 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	gtk_revealer_set_reveal_child (_tmp27_, _tmp29_);
#line 83 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (show_settings_button);
#line 589 "Indicator.c"
}


static void elementary_redshift_indicator_class_init (ElementaryRedshiftIndicatorClass * klass) {
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	elementary_redshift_indicator_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_type_class_add_private (klass, sizeof (ElementaryRedshiftIndicatorPrivate));
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	((WingpanelIndicatorClass *) klass)->get_display_widget = (GtkWidget* (*)(WingpanelIndicator*)) elementary_redshift_indicator_real_get_display_widget;
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	((WingpanelIndicatorClass *) klass)->get_widget = (GtkWidget* (*)(WingpanelIndicator*)) elementary_redshift_indicator_real_get_widget;
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	((WingpanelIndicatorClass *) klass)->opened = (void (*)(WingpanelIndicator*)) elementary_redshift_indicator_real_opened;
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	((WingpanelIndicatorClass *) klass)->closed = (void (*)(WingpanelIndicator*)) elementary_redshift_indicator_real_closed;
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	G_OBJECT_CLASS (klass)->finalize = elementary_redshift_indicator_finalize;
#line 608 "Indicator.c"
}


static void elementary_redshift_indicator_instance_init (ElementaryRedshiftIndicator * self) {
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self->priv = ELEMENTARY_REDSHIFT_INDICATOR_GET_PRIVATE (self);
#line 25 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self->priv->display_widget = NULL;
#line 28 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self->priv->main_grid = NULL;
#line 619 "Indicator.c"
}


static void elementary_redshift_indicator_finalize (GObject* obj) {
	ElementaryRedshiftIndicator * self;
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ELEMENTARY_REDSHIFT_TYPE_INDICATOR, ElementaryRedshiftIndicator);
#line 25 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (self->priv->display_widget);
#line 28 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (self->priv->main_grid);
#line 29 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (self->priv->active_toggle);
#line 30 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_g_object_unref0 (self->priv->info_revealer);
#line 23 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	G_OBJECT_CLASS (elementary_redshift_indicator_parent_class)->finalize (obj);
#line 637 "Indicator.c"
}


GType elementary_redshift_indicator_get_type (void) {
	static volatile gsize elementary_redshift_indicator_type_id__volatile = 0;
	if (g_once_init_enter (&elementary_redshift_indicator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ElementaryRedshiftIndicatorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) elementary_redshift_indicator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ElementaryRedshiftIndicator), 0, (GInstanceInitFunc) elementary_redshift_indicator_instance_init, NULL };
		GType elementary_redshift_indicator_type_id;
		elementary_redshift_indicator_type_id = g_type_register_static (WINGPANEL_TYPE_INDICATOR, "ElementaryRedshiftIndicator", &g_define_type_info, 0);
		g_once_init_leave (&elementary_redshift_indicator_type_id__volatile, elementary_redshift_indicator_type_id);
	}
	return elementary_redshift_indicator_type_id__volatile;
}


WingpanelIndicator* get_indicator (GModule* module, WingpanelIndicatorManagerServerType server_type) {
	WingpanelIndicator* result = NULL;
	WingpanelIndicatorManagerServerType _tmp0_ = 0;
	ElementaryRedshiftIndicator* indicator = NULL;
	ElementaryRedshiftIndicator* _tmp1_ = NULL;
#line 138 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_return_val_if_fail (module != NULL, NULL);
#line 140 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	g_debug ("Indicator.vala:140: Activating Redshift Indicator");
#line 143 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp0_ = server_type;
#line 143 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	if (_tmp0_ != WINGPANEL_INDICATOR_MANAGER_SERVER_TYPE_SESSION) {
#line 145 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		result = NULL;
#line 145 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
		return result;
#line 670 "Indicator.c"
	}
#line 149 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	_tmp1_ = elementary_redshift_indicator_new ();
#line 149 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	indicator = _tmp1_;
#line 152 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	result = (WingpanelIndicator*) indicator;
#line 152 "/home/samthomas/Development/elementary-redshift/src/Indicator.vala"
	return result;
#line 680 "Indicator.c"
}



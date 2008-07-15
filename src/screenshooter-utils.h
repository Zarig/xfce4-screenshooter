/*  $Id$
 *
 *  Copyright © 2008 Jérôme Guelfucci <jerome.guelfucci@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
 
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>
#include <gdk/gdkx.h>
#include <glib/gstdio.h>

#include <libxfce4util/libxfce4util.h>

#include <fcntl.h>
#include <X11/Xatom.h>
#include <unistd.h>

typedef struct
{
  gint whole_screen;
  gint show_save_dialog;

  gint screenshot_delay;
  gchar *screenshot_dir;
}
ScreenshotData;

GdkPixbuf *take_screenshot (ScreenshotData * sd);
void save_screenshot (GdkPixbuf * screenshot, ScreenshotData * sd);
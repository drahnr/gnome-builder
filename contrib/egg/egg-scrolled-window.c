/* egg-scrolled-window.c
 *
 * Copyright (C) 2016 Christian Hergert <chergert@redhat.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define G_LOG_DOMAIN "egg-scrolled-window"

#include "egg-scrolled-window.h"

struct _EggScrolledWindow
{
  GtkScrolledWindow parent_instance;
};

G_DEFINE_TYPE (EggScrolledWindow, egg_scrolled_window, GTK_TYPE_SCROLLED_WINDOW)

static void
egg_scrolled_window_get_preferred_height_for_width (GtkWidget *widget,
                                                    gint       width,
                                                    gint      *min_height,
                                                    gint      *nat_height)
{
  EggScrolledWindow *self = (EggScrolledWindow *)widget;
  GtkWidget *child;

  g_assert (EGG_IS_SCROLLED_WINDOW (self));
  g_assert (min_height != NULL);
  g_assert (nat_height != NULL);

  GTK_WIDGET_CLASS (egg_scrolled_window_parent_class)->get_preferred_height_for_width (widget, width, min_height, nat_height);

  if (NULL != (child = gtk_bin_get_child (GTK_BIN (self))))
    {
      gint child_min_height;
      gint child_nat_height;
      gint max_content_height;

      max_content_height = gtk_scrolled_window_get_max_content_height (GTK_SCROLLED_WINDOW (self));

      gtk_widget_get_preferred_height_for_width (child,
                                                 width,
                                                 &child_min_height,
                                                 &child_nat_height);

      if (child_nat_height > *nat_height)
        *nat_height = MIN (max_content_height, child_nat_height);
    }
}

static void
egg_scrolled_window_class_init (EggScrolledWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  widget_class->get_preferred_height_for_width = egg_scrolled_window_get_preferred_height_for_width;
}

static void
egg_scrolled_window_init (EggScrolledWindow *self)
{
}

/* gstyle-revealer.h
 *
 * Copyright (C) 2016 Sebastien Lafargue <slafargue@gnome.org>
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

#ifndef GSTYLE_REVEALER_H
#define GSTYLE_REVEALER_H

#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GSTYLE_TYPE_REVEALER (gstyle_revealer_get_type())

G_DECLARE_FINAL_TYPE (GstyleRevealer, gstyle_revealer, GSTYLE, REVEALER, GtkBin)

GstyleRevealer   *gstyle_revealer_new                  (void);
void              gstyle_revealer_set_reveal_child     (GstyleRevealer *self,
                                                        gboolean        reveal);

G_END_DECLS

#endif /* GSTYLE_REVEALER_H */

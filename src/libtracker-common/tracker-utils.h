/*
 * Copyright (C) 2006, Jamie McCracken <jamiemcc@gnome.org>
 * Copyright (C) 2008, Nokia <ivan.frade@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#pragma once

#include <glib.h>
#include <gio/gio.h>

G_BEGIN_DECLS

#if !defined (__LIBTRACKER_COMMON_INSIDE__) && !defined (TRACKER_COMPILATION)
#error "only <libtracker-common/tracker-common.h> must be included directly."
#endif

gchar *  tracker_strhex                     (const guint8 *data,
                                             gsize         size,
                                             gchar         delimiter);
gchar *  tracker_utf8_truncate              (const gchar  *str,
                                             gsize         max_size);
gchar *  tracker_unescape_unichars          (const gchar  *str,
					     gssize        len);
gchar *  tracker_resolve_relative_uri       (const gchar  *base,
                                             const gchar  *rel_uri);
gboolean tracker_util_parse_dbus_uri        (const gchar  *uri,
                                             GBusType     *bus_type,
                                             gchar       **service,
                                             gchar       **path);
gchar * tracker_util_build_dbus_uri         (GBusType      bus_type,
                                             const gchar  *service,
                                             const gchar  *path);

G_END_DECLS

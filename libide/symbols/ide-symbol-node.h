/* ide-symbol-node.h
 *
 * Copyright (C) 2015 Christian Hergert <christian@hergert.me>
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

#ifndef IDE_SYMBOL_NODE_H
#define IDE_SYMBOL_NODE_H

#include "ide-object.h"

#include "symbols/ide-symbol.h"
#include "diagnostics/ide-source-location.h"

G_BEGIN_DECLS

#define IDE_TYPE_SYMBOL_NODE (ide_symbol_node_get_type())

G_DECLARE_DERIVABLE_TYPE (IdeSymbolNode, ide_symbol_node, IDE, SYMBOL_NODE, IdeObject)

struct _IdeSymbolNodeClass
{
  IdeObjectClass parent;

  IdeSourceLocation *(*get_location) (IdeSymbolNode *self);
};

IdeSymbolKind      ide_symbol_node_get_kind     (IdeSymbolNode *self);
IdeSymbolFlags     ide_symbol_node_get_flags    (IdeSymbolNode *self);
const gchar       *ide_symbol_node_get_name     (IdeSymbolNode *self);
IdeSourceLocation *ide_symbol_node_get_location (IdeSymbolNode *self);

G_END_DECLS

#endif /* IDE_SYMBOL_NODE_H */

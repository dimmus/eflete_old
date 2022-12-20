/*
 * Edje Theme Editor
 * Copyright (C) 2013-2016 Samsung Electronics.
 *
 * This file is part of Edje Theme Editor.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; If not, see www.gnu.org/licenses/lgpl.html.
 */

Eina_Bool
_editor_part_del(Evas_Object *edit_object, Change *change, Eina_Bool merge, Eina_Bool apply, Eina_Bool reset,
                 const char *part_name);

Eina_Bool
_editor_program_del(Evas_Object *edit_object, Change *change, Eina_Bool merge, Eina_Bool apply, Eina_Bool reset,
                    const char *program_name);

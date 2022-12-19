/**
 * Edje Theme Editor
 * Copyright (C) 2013-2014 Samsung Electronics.
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

#include "test_cursor.h"
#include "config.h"

/**
 * @addtogroup cursor_test
 * @{
 * @addtogroup cursor_type_set
 * @{
 * Cursor
 * <TABLE>
 * @}
 */

/**
 * @addtogroup cursor_type_set
 * @{
 * <tr>
 * <td>cursor_type_set</td>
 * <td>cursor_type_set_test_p</td>
 * <td>
 * @precondition
 * @step 1 initialize elementary library
 * @step 2 create a new Evas_Object.
 *
 * @procedure
 * @step 1 call cursor_type_set
 * </td>
 * <td>(Evas_Object *)obj, CURSOR_FLUER</td>
 * <td>EINA_TRUE</td>
 * </tr>
 * @}
 */
EFLETE_TEST(cursor_type_set_test_p)
{
   Evas_Object *obj;

   elm_init(0,0);
   obj = elm_win_add(NULL, "test", ELM_WIN_BASIC);

   ck_assert_msg(cursor_type_set(obj, CURSOR_FLEUR),
                 "Can not set the cursor to given object");

   evas_object_del(obj);
   elm_shutdown();
}
END_TEST

/**
 * @addtogroup cursor_type_set
 * @{
 * </TABLE>
 * @}
 * @}
 */

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

#include "test_alloc.h"

/**
 * @addtogroup alloc_test
 * @{
 * @addtogroup mem_malloc
 * @{
 * Alloc
 * <TABLE>
 * @}
 */

/**
 * @addtogroup mem_malloc
 * @{
 * <tr>
 * <td>mem_malloc</td>
 * <td>mem_malloc_test_p</td>
 * <td>
 * @precondition
 * @step 1 nothing
 *
 * @procedure
 * @step 1 call mem_malloc for 1024 ints
 * @step 2 check returned pointer
 * @step 3 check for segfault by setting 1023th int into 42.
 * </td>
 * <td>sizeof(int)*1024</td>
 * <td>All checks passed</td>
 * </tr>
 * @}
 */
EFLETE_TEST (mem_malloc_test_p)
{
   int *mm = mem_malloc(sizeof(int)*1024);
   ck_assert_msg(mm != NULL,
                 "failure: cannot return pointer to the memory block allocated");
   mm[1023] = 42;
   free(mm);
}
END_TEST

/**
 * @addtogroup mem_malloc
 * @{
 * </TABLE>
 * @}
 * @}
 */

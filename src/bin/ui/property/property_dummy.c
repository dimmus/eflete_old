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

#include "property.h"
#include "property_private.h"

typedef struct {
   Property_Attribute item1;
   Property_Attribute item2;
   Property_Attribute item2_1;
   Property_Attribute item2_2;
   Property_Attribute item3;
   Property_Attribute item3_1;
   Property_Attribute item3_2;
   Property_Attribute item4;
   Property_Attribute item5;
   Property_Attribute item6;
   Property_Attribute item7;
   Property_Attribute item8;
   Property_Attribute item9;
   Property_Attribute item10;
   Property_Attribute item11;
   Property_Attribute item_controls;
   Property_Attribute item_controls2;
   Property_Attribute items[20];
} Property_Dummy_Data;

static Property_Dummy_Data dummy_data;

static Eina_List *
_item2_subitems_get(Property_Attribute *pa __UNUSED__)
{
   Eina_List *items = NULL;
   items = eina_list_append(items, &dummy_data.item2_1);
   items = eina_list_append(items, &dummy_data.item2_2);
   return items;
}

static Eina_List *
_item_controls_subitems_get(Property_Attribute *pa __UNUSED__)
{
   Eina_List *items = NULL;
   items = eina_list_append(items, &dummy_data.item_controls2);
   items = eina_list_append(items, &dummy_data.item4);
   items = eina_list_append(items, &dummy_data.item5);
   items = eina_list_append(items, &dummy_data.item6);
   items = eina_list_append(items, &dummy_data.item7);
   items = eina_list_append(items, &dummy_data.item8);
   items = eina_list_append(items, &dummy_data.item9);
   items = eina_list_append(items, &dummy_data.item10);
   return items;
}

static Eina_List *
_item_controls2_subitems_get(Property_Attribute *pa __UNUSED__)
{
   Eina_List *items = NULL;
   int i;
   items = eina_list_append(items, &dummy_data.item11);
   for (i = 0; i<20; i++)
      items = eina_list_append(items, &dummy_data.items[i]);
   return items;
}

static Eina_List *
_item3_subitems_get(Property_Attribute *pa __UNUSED__)
{
   Eina_List *items = NULL;
   items = eina_list_append(items, &dummy_data.item3_1);
   items = eina_list_append(items, &dummy_data.item3_2);
   return items;
}

static void
_start_cb(Property_Attribute *pa, Property_Action *action)
{
   DBG("start of %s->%s", pa->name, action->name);
}

static void
_stop_cb(Property_Attribute *pa, Property_Action *action)
{
   DBG("stop of %s->%s", pa->name, action->name);
}

static void
_change_cb(Property_Attribute *pa, Property_Action *action)
{
   DBG("change of %s->%s", pa->name, action->name);
}

static Eina_Bool
_update_cb(Property_Attribute *pa, Property_Action *action)
{
   DBG("update of %s->%s", pa->name, action->name);
   return true;
}

static void
_init_cb(Property_Attribute *pa, Property_Action *action)
{
   DBG("init of %s->%s", pa->name, action->name);
   elm_entry_single_line_set(action->control, false);
   evas_object_size_hint_min_set(action->control, 0, 400);
}

static void
_combo_change_cb(Property_Attribute *pa, Property_Action *action)
{
   Combobox_Item *cb_item = NULL;
   DBG("change of %s->%s", pa->name, action->name);
   cb_item = evas_object_data_get(action->control, "CURRENT_DATA");
   if (!cb_item) return;
   elm_object_text_set(action->control, cb_item->data);
   DBG("selected_item is %s", cb_item->data);
}
static void
_combo_init_cb(Property_Attribute *pa, Property_Action *action)
{
   Combobox_Item *combobox_item;
   Elm_Genlist_Item_Class *itc;

   DBG("init of %s->%s", pa->name, action->name);
   itc = evas_object_data_get(action->control, "COMMON_ITC");

   combobox_item = mem_malloc(sizeof(Combobox_Item));
   combobox_item->index = 0;
   combobox_item->data = eina_stringshare_add("CItem1");
   elm_genlist_item_append(action->control, itc,
                           combobox_item, NULL,
                           ELM_GENLIST_ITEM_NONE, NULL, NULL);
   combobox_item = mem_malloc(sizeof(Combobox_Item));
   combobox_item->index = 1;
   combobox_item->data = eina_stringshare_add("CItem2");
   elm_genlist_item_append(action->control, itc,
                           combobox_item, NULL,
                           ELM_GENLIST_ITEM_NONE, NULL, NULL);
   combobox_item = mem_malloc(sizeof(Combobox_Item));
   combobox_item->index = 2;
   combobox_item->data = eina_stringshare_add("CItem3");
   elm_genlist_item_append(action->control, itc,
                           combobox_item, NULL,
                           ELM_GENLIST_ITEM_NONE, NULL, NULL);
   elm_object_text_set(action->control, "CItem1");
}

static void
_color_init_cb(Property_Attribute *pa, Property_Action *action)
{
   DBG("init of %s->%s", pa->name, action->name);
   property_color_control_color_set(action->control, 0, 255, 0, 55);
}

static void
_label_init_cb(Property_Attribute *pa, Property_Action *action)
{
   DBG("init of %s->%s", pa->name, action->name);
   elm_object_text_set(action->control, _("default 0.0"));
}

static void
_del_cb(Property_Attribute *pa)
{
   DBG("del of %s", pa->name);
   eina_stringshare_del(pa->name);
   free(pa);
}

static Eina_List *
_dynamic_subitems_get(Property_Attribute *pa __UNUSED__)
{
   Property_Attribute *new_pa;
   Eina_List *items = NULL;
   int i, num;
   /* num = rand()%200; */
   num = 0;
   for (i = 0; i < num; i++)
     {
        new_pa = mem_calloc(1, sizeof(Property_Attribute));
        new_pa->name = eina_stringshare_printf("dynamic item #%d", i + 1);
        new_pa->del_cb = _del_cb;
        new_pa->action1.control_type = PROPERTY_CONTROL_SPINNER;
        new_pa->action2.control_type = PROPERTY_CONTROL_SPINNER;
        items = eina_list_append(items, new_pa);
     }
   return items;
}

void
property_dummy_init()
{
   dummy_data.item1.name = eina_stringshare_add(_("Item 1"));
   dummy_data.item1.icon_name = eina_stringshare_add(_("elm/image/icon/start-point"));

   dummy_data.item2.name = eina_stringshare_add(_("Item 2"));
   dummy_data.item2.expand_cb = _item2_subitems_get;
   dummy_data.item2.icon_name = eina_stringshare_add(_("elm/image/icon/end-point"));

   dummy_data.item2_1.name = eina_stringshare_add(_("Item 2_1"));
   dummy_data.item2_1.icon_name = eina_stringshare_add(_("elm/image/icon/start-point"));

   dummy_data.item2_2.name = eina_stringshare_add(_("Item 2_2"));
   dummy_data.item2_2.icon_name = eina_stringshare_add(_("elm/image/icon/end-point"));

   dummy_data.item3.name = eina_stringshare_add(_("Item 3"));
   dummy_data.item3.expand_cb = _item3_subitems_get;
   dummy_data.item3.expandable = true;
   dummy_data.item3.expanded = true;

   dummy_data.item3_1.name = eina_stringshare_add(_("Item 3_1 with dynamic subitems"));
   dummy_data.item3_1.expandable = true;
   dummy_data.item3_1.expand_cb = _dynamic_subitems_get;

   dummy_data.item3_2.name = eina_stringshare_add(_("Item 3_2"));
   dummy_data.item3_2.expandable = true;
   dummy_data.item3_2.expand_cb = _item_controls_subitems_get;

   dummy_data.item4.name = eina_stringshare_add(_("Item 4"));
   dummy_data.item4.action1.name = eina_stringshare_add(_("entry"));
   dummy_data.item4.action1.control_type = PROPERTY_CONTROL_ENTRY;
   dummy_data.item4.action1.init_cb = _init_cb;
   dummy_data.item4.action1.start_cb = _start_cb;
   dummy_data.item4.action1.stop_cb = _stop_cb;
   dummy_data.item4.action1.change_cb = _change_cb;
   dummy_data.item4.action1.update_cb = _update_cb;

   dummy_data.item5.name = eina_stringshare_add(_("Item 5"));
   dummy_data.item5.action1.name = eina_stringshare_add(_("comb"));
   dummy_data.item5.action1.control_type = PROPERTY_CONTROL_COMBOBOX;
   dummy_data.item5.action1.init_cb = _combo_init_cb;
   dummy_data.item5.action1.change_cb = _combo_change_cb;
   dummy_data.item5.action1.start_cb = _start_cb;
   dummy_data.item5.action1.stop_cb = _stop_cb;

   dummy_data.item6.name = eina_stringshare_add(_("Item 6"));
   dummy_data.item6.action1.name = eina_stringshare_add(_("min"));
   dummy_data.item6.action1.control_type = PROPERTY_CONTROL_SPINNER;
   dummy_data.item6.action1.units = eina_stringshare_add(_("px"));
   dummy_data.item6.action2.name = eina_stringshare_add(_("max"));
   dummy_data.item6.action2.control_type = PROPERTY_CONTROL_SPINNER;
   dummy_data.item6.action2.units = eina_stringshare_add(_("px"));

   dummy_data.item7.name = eina_stringshare_add(_("Item 7"));
   dummy_data.item7.icon_name = eina_stringshare_add(_("elm/image/icon/end-point"));
   dummy_data.item7.action1.name = eina_stringshare_add(_("min"));
   dummy_data.item7.action1.control_type = PROPERTY_CONTROL_SPINNER;
   dummy_data.item7.action1.units = eina_stringshare_add(_("px"));

   dummy_data.item8.name = eina_stringshare_add(_("Item 8"));
   dummy_data.item8.action1.name = eina_stringshare_add(_("min"));
   dummy_data.item8.action1.control_type = PROPERTY_CONTROL_CHECK;
   dummy_data.item8.action1.units = eina_stringshare_add(_("px"));
   dummy_data.item8.action2.name = eina_stringshare_add(_("max"));
   dummy_data.item8.action2.control_type = PROPERTY_CONTROL_SPINNER;
   dummy_data.item8.action2.units = eina_stringshare_add(_("px"));

   dummy_data.item9.name = eina_stringshare_add(_("Item 9"));
   dummy_data.item9.action1.control_type = PROPERTY_CONTROL_COLOR;
   dummy_data.item9.action1.init_cb = _color_init_cb;
   dummy_data.item9.action1.start_cb = _start_cb;
   dummy_data.item9.action1.stop_cb = _stop_cb;
   dummy_data.item9.action1.change_cb = _change_cb;

   dummy_data.item10.name = eina_stringshare_add(_("Item 10"));
   dummy_data.item10.action1.control_type = PROPERTY_CONTROL_COLORSEL;
   dummy_data.item10.action1.start_cb = _start_cb;
   dummy_data.item10.action1.stop_cb = _stop_cb;
   dummy_data.item10.action1.change_cb = _change_cb;

   dummy_data.item11.name = eina_stringshare_add(_("State"));
   dummy_data.item11.action1.control_type = PROPERTY_CONTROL_LABEL;
   dummy_data.item11.action1.init_cb = _label_init_cb;

   dummy_data.item_controls.name = eina_stringshare_add(_("Item 2"));
   dummy_data.item_controls.expand_cb = _dynamic_subitems_get;
   dummy_data.item_controls.icon_name = eina_stringshare_add(_("elm/image/icon/end-point"));

   dummy_data.item_controls2.name = eina_stringshare_add(_("Item 2"));
   dummy_data.item_controls2.expand_cb = _item_controls2_subitems_get;
   dummy_data.item_controls2.expandable = true;

   int i = 0;
   for (i = 0; i < 20; i ++)
     {
        if ((i/2)%2)
          {
             if (i%2 == 0)
               {
                  dummy_data.items[i].name = eina_stringshare_add(_("Item"));
                  dummy_data.items[i].action1.name = eina_stringshare_add(_("x"));
               }
             else
               dummy_data.items[i].action1.name = eina_stringshare_add(_("y"));
             dummy_data.items[i].action1.control_type = PROPERTY_CONTROL_COMBOBOX;
             dummy_data.items[i].action1.init_cb = _combo_init_cb;
          }
        else
          {
             dummy_data.items[i].name = eina_stringshare_add(_("Item"));
             dummy_data.items[i].action1.control_type = PROPERTY_CONTROL_SPINNER;
             dummy_data.items[i].action1.name = eina_stringshare_add(_("min"));
             dummy_data.items[i].action1.units = eina_stringshare_add(_("p1"));
             dummy_data.items[i].action2.control_type = PROPERTY_CONTROL_SPINNER;
             dummy_data.items[i].action2.name = eina_stringshare_add(_("max"));
             dummy_data.items[i].action2.units = eina_stringshare_add(_("p2"));
          }
     }
}

Eina_List *
property_dummy_items_get()
{
   Eina_List *items = NULL;
   items = eina_list_append(items, &dummy_data.item1);
   items = eina_list_append(items, &dummy_data.item2);
   items = eina_list_append(items, &dummy_data.item3);
   items = eina_list_append(items, &dummy_data.item_controls);
   items = eina_list_append(items, &dummy_data.item4);
   return items;
}

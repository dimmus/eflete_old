
Eina_Bool _ewe_ruler_horizontal_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Eina_Bool horizontal);


static Eina_Error
__eolian_ewe_ruler_horizontal_set_reflect(Eo *obj, Eina_Value val)
{
   Eina_Error r = 0;   Eina_Bool cval;
   if (!eina_value_bool_convert(&val, &cval))
      {
         r = EINA_ERROR_VALUE_FAILED;
         goto end;
      }
   ewe_ruler_horizontal_set(obj, cval);
 end:
   eina_value_flush(&val);
   return r;
}

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_horizontal_set, Eina_Bool, 0, EFL_FUNC_CALL(horizontal), Eina_Bool horizontal);

Eina_Bool _ewe_ruler_horizontal_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd);


static Eina_Value
__eolian_ewe_ruler_horizontal_get_reflect(const Eo *obj)
{
   Eina_Bool val = ewe_ruler_horizontal_get(obj);
   return eina_value_bool_init(val);
}

EAPI EAPI_WEAK EFL_FUNC_BODY_CONST(ewe_ruler_horizontal_get, Eina_Bool, 0);

Eina_Bool _ewe_ruler_step_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, unsigned int step);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_step_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, step), Ewe_Ruler_Scale *scale, unsigned int step);

unsigned int _ewe_ruler_step_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_step_get, unsigned int, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_value_step_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, double step);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_value_step_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, step), Ewe_Ruler_Scale *scale, double step);

double _ewe_ruler_value_step_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_value_step_get, double, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_zero_offset_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, int offset);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_zero_offset_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, offset), Ewe_Ruler_Scale *scale, int offset);

int _ewe_ruler_zero_offset_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_zero_offset_get, int, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_format_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, const char *format);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_format_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, format), Ewe_Ruler_Scale *scale, const char *format);

const char *_ewe_ruler_format_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_format_get, const char *, NULL, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_ewe_style_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, const char *style);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_ewe_style_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, style), Ewe_Ruler_Scale *scale, const char *style);

const char *_ewe_ruler_ewe_style_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_ewe_style_get, const char *, NULL, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_scale_visible_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, Eina_Bool visible);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_scale_visible_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, visible), Ewe_Ruler_Scale *scale, Eina_Bool visible);

Eina_Bool _ewe_ruler_scale_visible_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_scale_visible_get, Eina_Bool, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_scale_middle_mark_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, Eina_Bool middle_mark);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_scale_middle_mark_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, middle_mark), Ewe_Ruler_Scale *scale, Eina_Bool middle_mark);

Eina_Bool _ewe_ruler_scale_middle_mark_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_scale_middle_mark_get, Eina_Bool, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_marker_relative_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale, double rel_position);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_marker_relative_set, Eina_Bool, 0, EFL_FUNC_CALL(marker, scale, rel_position), Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale, double rel_position);

double _ewe_ruler_marker_relative_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_marker_relative_get, double, 0, EFL_FUNC_CALL(marker, scale), Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_marker_absolute_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, int position);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_marker_absolute_set, Eina_Bool, 0, EFL_FUNC_CALL(marker, position), Ewe_Ruler_Marker *marker, int position);

int _ewe_ruler_marker_absolute_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_marker_absolute_get, int, 0, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

Eina_Bool _ewe_ruler_marker_visible_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, Eina_Bool visible);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_marker_visible_set, Eina_Bool, 0, EFL_FUNC_CALL(marker, visible), Ewe_Ruler_Marker *marker, Eina_Bool visible);

Eina_Bool _ewe_ruler_marker_visible_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_marker_visible_get, Eina_Bool, 0, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

Eina_Bool _ewe_ruler_marker_style_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, const char *style);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_marker_style_set, Eina_Bool, 0, EFL_FUNC_CALL(marker, style), Ewe_Ruler_Marker *marker, const char *style);

const char *_ewe_ruler_marker_style_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_marker_style_get, const char *, NULL, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

void _ewe_ruler_marker_size_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, int size);

EAPI EAPI_WEAK EFL_VOID_FUNC_BODYV(ewe_ruler_marker_size_set, EFL_FUNC_CALL(marker, size), Ewe_Ruler_Marker *marker, int size);

int _ewe_ruler_marker_size_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_marker_size_get, int, 0, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

void _ewe_ruler_marker_text_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, const char *text);

EAPI EAPI_WEAK EFL_VOID_FUNC_BODYV(ewe_ruler_marker_text_set, EFL_FUNC_CALL(marker, text), Ewe_Ruler_Marker *marker, const char *text);

const char *_ewe_ruler_marker_text_get(const Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EAPI EAPI_WEAK EFL_FUNC_BODYV_CONST(ewe_ruler_marker_text_get, const char *, NULL, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

void _ewe_ruler_marker_tooltip_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, const char *text);

EAPI EAPI_WEAK EFL_VOID_FUNC_BODYV(ewe_ruler_marker_tooltip_set, EFL_FUNC_CALL(marker, text), Ewe_Ruler_Marker *marker, const char *text);

Ewe_Ruler_Scale *_ewe_ruler_scale_add(Eo *obj, Ewe_Ruler_Smart_Data *pd, const char *style);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_scale_add, Ewe_Ruler_Scale *, NULL, EFL_FUNC_CALL(style), const char *style);

Eina_Bool _ewe_ruler_scale_del(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_scale_del, Eina_Bool, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Ewe_Ruler_Marker *_ewe_ruler_marker_add(Eo *obj, Ewe_Ruler_Smart_Data *pd, const char *style);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_marker_add, Ewe_Ruler_Marker *, NULL, EFL_FUNC_CALL(style), const char *style);

Eina_Bool _ewe_ruler_marker_del(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EAPI EAPI_WEAK EFL_FUNC_BODYV(ewe_ruler_marker_del, Eina_Bool, 0, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

Efl_Object *_ewe_ruler_efl_object_constructor(Eo *obj, Ewe_Ruler_Smart_Data *pd);


void _ewe_ruler_efl_gfx_entity_size_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Eina_Size2D size);


void _ewe_ruler_efl_gfx_entity_position_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Eina_Position2D pos);


void _ewe_ruler_efl_gfx_entity_visible_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Eina_Bool v);


void _ewe_ruler_efl_canvas_group_group_calculate(Eo *obj, Ewe_Ruler_Smart_Data *pd);


Eina_Error _ewe_ruler_efl_ui_widget_theme_apply(Eo *obj, Ewe_Ruler_Smart_Data *pd);


static Eina_Bool
_ewe_ruler_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL;

   const Efl_Object_Property_Reflection_Ops *ropsp = NULL;

#ifndef EWE_RULER_EXTRA_OPS
#define EWE_RULER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ewe_ruler_horizontal_set, _ewe_ruler_horizontal_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_horizontal_get, _ewe_ruler_horizontal_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_step_set, _ewe_ruler_step_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_step_get, _ewe_ruler_step_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_value_step_set, _ewe_ruler_value_step_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_value_step_get, _ewe_ruler_value_step_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_zero_offset_set, _ewe_ruler_zero_offset_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_zero_offset_get, _ewe_ruler_zero_offset_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_format_set, _ewe_ruler_format_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_format_get, _ewe_ruler_format_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_ewe_style_set, _ewe_ruler_ewe_style_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_ewe_style_get, _ewe_ruler_ewe_style_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_scale_visible_set, _ewe_ruler_scale_visible_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_scale_visible_get, _ewe_ruler_scale_visible_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_scale_middle_mark_set, _ewe_ruler_scale_middle_mark_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_scale_middle_mark_get, _ewe_ruler_scale_middle_mark_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_relative_set, _ewe_ruler_marker_relative_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_relative_get, _ewe_ruler_marker_relative_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_absolute_set, _ewe_ruler_marker_absolute_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_absolute_get, _ewe_ruler_marker_absolute_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_visible_set, _ewe_ruler_marker_visible_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_visible_get, _ewe_ruler_marker_visible_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_style_set, _ewe_ruler_marker_style_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_style_get, _ewe_ruler_marker_style_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_size_set, _ewe_ruler_marker_size_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_size_get, _ewe_ruler_marker_size_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_text_set, _ewe_ruler_marker_text_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_text_get, _ewe_ruler_marker_text_get),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_tooltip_set, _ewe_ruler_marker_tooltip_set),
      EFL_OBJECT_OP_FUNC(ewe_ruler_scale_add, _ewe_ruler_scale_add),
      EFL_OBJECT_OP_FUNC(ewe_ruler_scale_del, _ewe_ruler_scale_del),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_add, _ewe_ruler_marker_add),
      EFL_OBJECT_OP_FUNC(ewe_ruler_marker_del, _ewe_ruler_marker_del),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ewe_ruler_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_entity_size_set, _ewe_ruler_efl_gfx_entity_size_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_entity_position_set, _ewe_ruler_efl_gfx_entity_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_entity_visible_set, _ewe_ruler_efl_gfx_entity_visible_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _ewe_ruler_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(efl_ui_widget_theme_apply, _ewe_ruler_efl_ui_widget_theme_apply),
      EWE_RULER_EXTRA_OPS
   );
   opsp = &ops;

   static const Efl_Object_Property_Reflection refl_table[] = {
      {"horizontal", __eolian_ewe_ruler_horizontal_set_reflect, __eolian_ewe_ruler_horizontal_get_reflect},
   };
   static const Efl_Object_Property_Reflection_Ops rops = {
      refl_table, EINA_C_ARRAY_LENGTH(refl_table)
   };
   ropsp = &rops;

   return efl_class_functions_set(klass, opsp, ropsp);
}

static const Efl_Class_Description _ewe_ruler_class_desc = {
   EO_VERSION,
   "Ewe.Ruler",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ewe_Ruler_Smart_Data),
   _ewe_ruler_class_initializer,
   _ewe_ruler_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(ewe_ruler_class_get, &_ewe_ruler_class_desc, EFL_UI_WIDGET_CLASS, NULL);

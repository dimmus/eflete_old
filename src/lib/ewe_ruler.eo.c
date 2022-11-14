
Eina_Bool _ewe_ruler_horizontal_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Eina_Bool horizontal);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_horizontal_set, Eina_Bool, 0, EFL_FUNC_CALL(horizontal), Eina_Bool horizontal);

Eina_Bool _ewe_ruler_horizontal_get(Eo *obj, Ewe_Ruler_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ewe_obj_ruler_horizontal_get, Eina_Bool, 0);

Eina_Bool _ewe_ruler_step_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, unsigned int step);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_step_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, step), Ewe_Ruler_Scale *scale, unsigned int step);

unsigned int _ewe_ruler_step_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_step_get, unsigned int, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_value_step_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, double step);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_value_step_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, step), Ewe_Ruler_Scale *scale, double step);

double _ewe_ruler_value_step_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_value_step_get, double, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_zero_offset_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, int offset);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_zero_offset_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, offset), Ewe_Ruler_Scale *scale, int offset);

int _ewe_ruler_zero_offset_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_zero_offset_get, int, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_format_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, const char *format);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_format_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, format), Ewe_Ruler_Scale *scale, const char *format);

const char *_ewe_ruler_format_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_format_get, const char *, NULL, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_style_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, const char *style);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_style_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, style), Ewe_Ruler_Scale *scale, const char *style);

const char *_ewe_ruler_style_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_style_get, const char *, NULL, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_scale_visible_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, Eina_Bool visible);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_scale_visible_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, visible), Ewe_Ruler_Scale *scale, Eina_Bool visible);

Eina_Bool _ewe_ruler_scale_visible_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_scale_visible_get, Eina_Bool, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_scale_middle_mark_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale, Eina_Bool middle_mark);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_scale_middle_mark_set, Eina_Bool, 0, EFL_FUNC_CALL(scale, middle_mark), Ewe_Ruler_Scale *scale, Eina_Bool middle_mark);

Eina_Bool _ewe_ruler_scale_middle_mark_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_scale_middle_mark_get, Eina_Bool, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_marker_relative_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale, double rel_position);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_marker_relative_set, Eina_Bool, 0, EFL_FUNC_CALL(marker, scale, rel_position), Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale, double rel_position);

double _ewe_ruler_marker_relative_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_marker_relative_get, double, 0, EFL_FUNC_CALL(marker, scale), Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale);

Eina_Bool _ewe_ruler_marker_absolute_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, int position);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_marker_absolute_set, Eina_Bool, 0, EFL_FUNC_CALL(marker, position), Ewe_Ruler_Marker *marker, int position);

int _ewe_ruler_marker_absolute_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_marker_absolute_get, int, 0, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

Eina_Bool _ewe_ruler_marker_visible_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, Eina_Bool visible);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_marker_visible_set, Eina_Bool, 0, EFL_FUNC_CALL(marker, visible), Ewe_Ruler_Marker *marker, Eina_Bool visible);

Eina_Bool _ewe_ruler_marker_visible_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_marker_visible_get, Eina_Bool, 0, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

Eina_Bool _ewe_ruler_marker_style_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, const char *style);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_marker_style_set, Eina_Bool, 0, EFL_FUNC_CALL(marker, style), Ewe_Ruler_Marker *marker, const char *style);

const char *_ewe_ruler_marker_style_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_marker_style_get, const char *, NULL, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

void _ewe_ruler_marker_size_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, int size);

EOAPI EFL_VOID_FUNC_BODYV(ewe_obj_ruler_marker_size_set, EFL_FUNC_CALL(marker, size), Ewe_Ruler_Marker *marker, int size);

int _ewe_ruler_marker_size_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_marker_size_get, int, 0, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

void _ewe_ruler_marker_text_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, const char *text);

EOAPI EFL_VOID_FUNC_BODYV(ewe_obj_ruler_marker_text_set, EFL_FUNC_CALL(marker, text), Ewe_Ruler_Marker *marker, const char *text);

const char *_ewe_ruler_marker_text_get(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EOAPI EFL_FUNC_BODYV_CONST(ewe_obj_ruler_marker_text_get, const char *, NULL, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

void _ewe_ruler_marker_tooltip_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker, const char *text);

EOAPI EFL_VOID_FUNC_BODYV(ewe_obj_ruler_marker_tooltip_set, EFL_FUNC_CALL(marker, text), Ewe_Ruler_Marker *marker, const char *text);

Ewe_Ruler_Scale *_ewe_ruler_scale_add(Eo *obj, Ewe_Ruler_Smart_Data *pd, const char *style);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_scale_add, Ewe_Ruler_Scale *, NULL, EFL_FUNC_CALL(style), const char *style);

Eina_Bool _ewe_ruler_scale_del(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Scale *scale);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_scale_del, Eina_Bool, 0, EFL_FUNC_CALL(scale), Ewe_Ruler_Scale *scale);

Ewe_Ruler_Marker *_ewe_ruler_marker_add(Eo *obj, Ewe_Ruler_Smart_Data *pd, const char *style);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_marker_add, Ewe_Ruler_Marker *, NULL, EFL_FUNC_CALL(style), const char *style);

Eina_Bool _ewe_ruler_marker_del(Eo *obj, Ewe_Ruler_Smart_Data *pd, Ewe_Ruler_Marker *marker);

EOAPI EFL_FUNC_BODYV(ewe_obj_ruler_marker_del, Eina_Bool, 0, EFL_FUNC_CALL(marker), Ewe_Ruler_Marker *marker);

Efl_Object *_ewe_ruler_efl_object_constructor(Eo *obj, Ewe_Ruler_Smart_Data *pd);


void _ewe_ruler_efl_gfx_size_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, int w, int h);


void _ewe_ruler_efl_gfx_position_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, int x, int y);


void _ewe_ruler_efl_gfx_visible_set(Eo *obj, Ewe_Ruler_Smart_Data *pd, Eina_Bool v);


void _ewe_ruler_efl_canvas_group_group_calculate(Eo *obj, Ewe_Ruler_Smart_Data *pd);


Elm_Theme_Apply _ewe_ruler_elm_widget_theme_apply(Eo *obj, Ewe_Ruler_Smart_Data *pd);


static Eina_Bool
_ewe_ruler_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EWE_RULER_EXTRA_OPS
#define EWE_RULER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_horizontal_set, _ewe_ruler_horizontal_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_horizontal_get, _ewe_ruler_horizontal_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_step_set, _ewe_ruler_step_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_step_get, _ewe_ruler_step_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_value_step_set, _ewe_ruler_value_step_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_value_step_get, _ewe_ruler_value_step_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_zero_offset_set, _ewe_ruler_zero_offset_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_zero_offset_get, _ewe_ruler_zero_offset_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_format_set, _ewe_ruler_format_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_format_get, _ewe_ruler_format_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_style_set, _ewe_ruler_style_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_style_get, _ewe_ruler_style_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_scale_visible_set, _ewe_ruler_scale_visible_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_scale_visible_get, _ewe_ruler_scale_visible_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_scale_middle_mark_set, _ewe_ruler_scale_middle_mark_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_scale_middle_mark_get, _ewe_ruler_scale_middle_mark_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_relative_set, _ewe_ruler_marker_relative_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_relative_get, _ewe_ruler_marker_relative_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_absolute_set, _ewe_ruler_marker_absolute_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_absolute_get, _ewe_ruler_marker_absolute_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_visible_set, _ewe_ruler_marker_visible_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_visible_get, _ewe_ruler_marker_visible_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_style_set, _ewe_ruler_marker_style_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_style_get, _ewe_ruler_marker_style_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_size_set, _ewe_ruler_marker_size_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_size_get, _ewe_ruler_marker_size_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_text_set, _ewe_ruler_marker_text_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_text_get, _ewe_ruler_marker_text_get),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_tooltip_set, _ewe_ruler_marker_tooltip_set),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_scale_add, _ewe_ruler_scale_add),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_scale_del, _ewe_ruler_scale_del),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_add, _ewe_ruler_marker_add),
      EFL_OBJECT_OP_FUNC(ewe_obj_ruler_marker_del, _ewe_ruler_marker_del),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ewe_ruler_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _ewe_ruler_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _ewe_ruler_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _ewe_ruler_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _ewe_ruler_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _ewe_ruler_elm_widget_theme_apply),
      EWE_RULER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EWE_RULER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EWE_RULER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
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

EFL_DEFINE_CLASS(ewe_ruler_class_get, &_ewe_ruler_class_desc, ELM_WIDGET_CLASS, NULL);

EAPI Eina_Bool
ewe_ruler_horizontal_set(Ewe_Ruler *obj, Eina_Bool horizontal)
{
   return ewe_obj_ruler_horizontal_set(obj, horizontal);
}

EAPI Eina_Bool
ewe_ruler_horizontal_get(const Ewe_Ruler *obj)
{
   return ewe_obj_ruler_horizontal_get(obj);
}

EAPI Eina_Bool
ewe_ruler_step_set(Ewe_Ruler *obj, Ewe_Ruler_Scale *scale, unsigned int step)
{
   return ewe_obj_ruler_step_set(obj, scale, step);
}

EAPI unsigned int
ewe_ruler_step_get(const Ewe_Ruler *obj, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_step_get(obj, scale);
}

EAPI Eina_Bool
ewe_ruler_value_step_set(Ewe_Ruler *obj, Ewe_Ruler_Scale *scale, double step)
{
   return ewe_obj_ruler_value_step_set(obj, scale, step);
}

EAPI double
ewe_ruler_value_step_get(const Ewe_Ruler *obj, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_value_step_get(obj, scale);
}

EAPI Eina_Bool
ewe_ruler_zero_offset_set(Ewe_Ruler *obj, Ewe_Ruler_Scale *scale, int offset)
{
   return ewe_obj_ruler_zero_offset_set(obj, scale, offset);
}

EAPI int
ewe_ruler_zero_offset_get(const Ewe_Ruler *obj, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_zero_offset_get(obj, scale);
}

EAPI Eina_Bool
ewe_ruler_format_set(Ewe_Ruler *obj, Ewe_Ruler_Scale *scale, const char *format)
{
   return ewe_obj_ruler_format_set(obj, scale, format);
}

EAPI const char *
ewe_ruler_format_get(const Ewe_Ruler *obj, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_format_get(obj, scale);
}

EAPI Eina_Bool
ewe_ruler_style_set(Ewe_Ruler *obj, Ewe_Ruler_Scale *scale, const char *style)
{
   return ewe_obj_ruler_style_set(obj, scale, style);
}

EAPI const char *
ewe_ruler_style_get(const Ewe_Ruler *obj, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_style_get(obj, scale);
}

EAPI Eina_Bool
ewe_ruler_scale_visible_set(Ewe_Ruler *obj, Ewe_Ruler_Scale *scale, Eina_Bool visible)
{
   return ewe_obj_ruler_scale_visible_set(obj, scale, visible);
}

EAPI Eina_Bool
ewe_ruler_scale_visible_get(const Ewe_Ruler *obj, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_scale_visible_get(obj, scale);
}

EAPI Eina_Bool
ewe_ruler_scale_middle_mark_set(Ewe_Ruler *obj, Ewe_Ruler_Scale *scale, Eina_Bool middle_mark)
{
   return ewe_obj_ruler_scale_middle_mark_set(obj, scale, middle_mark);
}

EAPI Eina_Bool
ewe_ruler_scale_middle_mark_get(const Ewe_Ruler *obj, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_scale_middle_mark_get(obj, scale);
}

EAPI Eina_Bool
ewe_ruler_marker_relative_set(Ewe_Ruler *obj, Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale, double rel_position)
{
   return ewe_obj_ruler_marker_relative_set(obj, marker, scale, rel_position);
}

EAPI double
ewe_ruler_marker_relative_get(const Ewe_Ruler *obj, Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_marker_relative_get(obj, marker, scale);
}

EAPI Eina_Bool
ewe_ruler_marker_absolute_set(Ewe_Ruler *obj, Ewe_Ruler_Marker *marker, int position)
{
   return ewe_obj_ruler_marker_absolute_set(obj, marker, position);
}

EAPI int
ewe_ruler_marker_absolute_get(const Ewe_Ruler *obj, Ewe_Ruler_Marker *marker)
{
   return ewe_obj_ruler_marker_absolute_get(obj, marker);
}

EAPI Eina_Bool
ewe_ruler_marker_visible_set(Ewe_Ruler *obj, Ewe_Ruler_Marker *marker, Eina_Bool visible)
{
   return ewe_obj_ruler_marker_visible_set(obj, marker, visible);
}

EAPI Eina_Bool
ewe_ruler_marker_visible_get(const Ewe_Ruler *obj, Ewe_Ruler_Marker *marker)
{
   return ewe_obj_ruler_marker_visible_get(obj, marker);
}

EAPI Eina_Bool
ewe_ruler_marker_style_set(Ewe_Ruler *obj, Ewe_Ruler_Marker *marker, const char *style)
{
   return ewe_obj_ruler_marker_style_set(obj, marker, style);
}

EAPI const char *
ewe_ruler_marker_style_get(const Ewe_Ruler *obj, Ewe_Ruler_Marker *marker)
{
   return ewe_obj_ruler_marker_style_get(obj, marker);
}

EAPI void
ewe_ruler_marker_size_set(Ewe_Ruler *obj, Ewe_Ruler_Marker *marker, int size)
{
   ewe_obj_ruler_marker_size_set(obj, marker, size);
}

EAPI int
ewe_ruler_marker_size_get(const Ewe_Ruler *obj, Ewe_Ruler_Marker *marker)
{
   return ewe_obj_ruler_marker_size_get(obj, marker);
}

EAPI void
ewe_ruler_marker_text_set(Ewe_Ruler *obj, Ewe_Ruler_Marker *marker, const char *text)
{
   ewe_obj_ruler_marker_text_set(obj, marker, text);
}

EAPI const char *
ewe_ruler_marker_text_get(const Ewe_Ruler *obj, Ewe_Ruler_Marker *marker)
{
   return ewe_obj_ruler_marker_text_get(obj, marker);
}

EAPI void
ewe_ruler_marker_tooltip_set(Ewe_Ruler *obj, Ewe_Ruler_Marker *marker, const char *text)
{
   ewe_obj_ruler_marker_tooltip_set(obj, marker, text);
}

EAPI Ewe_Ruler_Scale *
ewe_ruler_scale_add(Ewe_Ruler *obj, const char *style)
{
   return ewe_obj_ruler_scale_add(obj, style);
}

EAPI Eina_Bool
ewe_ruler_scale_del(Ewe_Ruler *obj, Ewe_Ruler_Scale *scale)
{
   return ewe_obj_ruler_scale_del(obj, scale);
}

EAPI Ewe_Ruler_Marker *
ewe_ruler_marker_add(Ewe_Ruler *obj, const char *style)
{
   return ewe_obj_ruler_marker_add(obj, style);
}

EAPI Eina_Bool
ewe_ruler_marker_del(Ewe_Ruler *obj, Ewe_Ruler_Marker *marker)
{
   return ewe_obj_ruler_marker_del(obj, marker);
}

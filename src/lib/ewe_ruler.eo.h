#ifndef _EWE_RULER_EO_H_
#define _EWE_RULER_EO_H_

#ifndef _EWE_RULER_EO_CLASS_TYPE
#define _EWE_RULER_EO_CLASS_TYPE

typedef Eo Ewe_Ruler;

#endif

#ifndef _EWE_RULER_EO_TYPES
#define _EWE_RULER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This file is part of Elementary Widgets Extension
 *
 * @ingroup Ewe_Ruler
 */
#define EWE_RULER_CLASS ewe_ruler_class_get()

EAPI EAPI_WEAK const Efl_Class *ewe_ruler_class_get(void) EINA_CONST;

/**
 * @brief Ruler orientation
 *
 * Change the ruler's orientation to horizontal or vertical.
 *
 * @param[in] obj The object.
 * @param[in] horizontal
 *
 * @return EINA_TRUE if orientation was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 * @brief Ruler orientation
 *
 * Get the ruler orientation
 * @param[in] obj The object.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_horizontal_get(const Eo *obj);

/**
 * @brief Step between marks in given scale of the ruler
 *
 * Set step between marks of the ruler. Min step is 10.
 *
 * @param[in] obj The object.
 * @param[in] scale
 * @param[in] step
 *
 * @return EINA_TRUE if step was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_step_set(Eo *obj, Ewe_Ruler_Scale *scale, unsigned int step);

/**
 * @brief Step between marks in given scale of the ruler
 *
 * Get step between marks of the ruler.
 *
 * @param[in] obj The object.
 * @param[in] scale
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK unsigned int ewe_ruler_step_get(const Eo *obj, Ewe_Ruler_Scale *scale);

/**
 * @brief Step between marks values in given scale of the ruler
 *
 * Set step between marks values of the scale
 *
 * @param[in] obj The object.
 * @param[in] scale
 * @param[in] step
 *
 * @return EINA_TRUE if step was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_value_step_set(Eo *obj, Ewe_Ruler_Scale *scale, double step);

/**
 * @brief Step between marks values in given scale of the ruler
 *
 * Get step between marks values of the ruler.
 *
 * @param[in] obj The object.
 * @param[in] scale
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK double ewe_ruler_value_step_get(const Eo *obj, Ewe_Ruler_Scale *scale);

/**
 * @brief "Zero pointer" mark position of given scale in pixels relative to
 * start  parent's layout
 *
 * Change the ruler's "zero pointer" mark position
 *
 * @param[in] obj The object.
 * @param[in] scale
 * @param[in] offset
 *
 * @return EINA_TRUE if offset was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_zero_offset_set(Eo *obj, Ewe_Ruler_Scale *scale, int offset);

/**
 * @brief "Zero pointer" mark position of given scale in pixels relative to
 * start  parent's layout
 *
 * Get "zero pointer" mark position
 *
 * @param[in] obj The object.
 * @param[in] scale
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK int ewe_ruler_zero_offset_get(const Eo *obj, Ewe_Ruler_Scale *scale);

/**
 * @brief Format string for given scale of the ruler
 *
 * Set format string for given scale
 *
 * @param[in] obj The object.
 * @param[in] scale
 * @param[in] format
 *
 * @return EINA_TRUE if format was setted or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_format_set(Eo *obj, Ewe_Ruler_Scale *scale, const char *format);

/**
 * @brief Format string for given scale of the ruler
 *
 * Get format string of given scale.
 *
 * @param[in] obj The object.
 * @param[in] scale
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK const char *ewe_ruler_format_get(const Eo *obj, Ewe_Ruler_Scale *scale);

/**
 * @brief Style for given scale of the ruler            CONFLICT with
 * elementary 'style' property. So set as 'ewe_style'
 *
 * Set style for given scale
 *
 * @param[in] obj The object.
 * @param[in] scale
 * @param[in] style
 *
 * @return EINA_TRUE if style was setted or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_ewe_style_set(Eo *obj, Ewe_Ruler_Scale *scale, const char *style);

/**
 * @brief Style for given scale of the ruler            CONFLICT with
 * elementary 'style' property. So set as 'ewe_style'
 *
 * Get style of given scale.
 *
 * @param[in] obj The object.
 * @param[in] scale
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK const char *ewe_ruler_ewe_style_get(const Eo *obj, Ewe_Ruler_Scale *scale);

/**
 * @brief Visibility of given scale of the ruler
 *
 * Change the scale's visibility
 *
 * @param[in] obj The object.
 * @param[in] scale
 * @param[in] visible
 *
 * @return EINA_TRUE if offset was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_scale_visible_set(Eo *obj, Ewe_Ruler_Scale *scale, Eina_Bool visible);

/**
 * @brief Visibility of given scale of the ruler
 *
 * Get visibility of given scale
 *
 * @param[in] obj The object.
 * @param[in] scale
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_scale_visible_get(const Eo *obj, Ewe_Ruler_Scale *scale);

/**
 * @brief Visibility of middle mark in given scale of the ruler
 *
 * Change the scale middle mark visibility
 *
 * @param[in] obj The object.
 * @param[in] scale
 * @param[in] middle_mark
 *
 * @return EINA_TRUE if middle_mark was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_scale_middle_mark_set(Eo *obj, Ewe_Ruler_Scale *scale, Eina_Bool middle_mark);

/**
 * @brief Visibility of middle mark in given scale of the ruler
 *
 * Get visibility of middle mark in given scale
 *
 * @param[in] obj The object.
 * @param[in] scale
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_scale_middle_mark_get(const Eo *obj, Ewe_Ruler_Scale *scale);

/**
 * @brief Marker position relative to given scale of the ruler
 *
 * Set marker to folow specified value on given scale
 *
 * @param[in] obj The object.
 * @param[in] marker
 * @param[in] scale
 * @param[in] rel_position
 *
 * @return EINA_TRUE if position was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_marker_relative_set(Eo *obj, Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale, double rel_position);

/**
 * @brief Marker position relative to given scale of the ruler
 *
 * Get marker position relative to given scale
 *
 * @param[in] obj The object.
 * @param[in] marker
 * @param[in] scale
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK double ewe_ruler_marker_relative_get(const Eo *obj, Ewe_Ruler_Marker *marker, Ewe_Ruler_Scale *scale);

/**
 * @brief Marker position
 *
 * Set marker absolute posiiton
 *
 * @param[in] obj The object.
 * @param[in] marker
 * @param[in] position
 *
 * @return EINA_TRUE if position was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_marker_absolute_set(Eo *obj, Ewe_Ruler_Marker *marker, int position);

/**
 * @brief Marker position
 *
 * Get marker position
 *
 * @param[in] obj The object.
 * @param[in] marker
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK int ewe_ruler_marker_absolute_get(const Eo *obj, Ewe_Ruler_Marker *marker);

/**
 * @brief Visibility of given marker
 *
 * Change the marker's visibility
 *
 * @param[in] obj The object.
 * @param[in] marker
 * @param[in] visible
 *
 * @return EINA_TRUE if visibility was set or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_marker_visible_set(Eo *obj, Ewe_Ruler_Marker *marker, Eina_Bool visible);

/**
 * @brief Visibility of given marker
 *
 * Get visibility of given marker
 *
 * @param[in] obj The object.
 * @param[in] marker
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_marker_visible_get(const Eo *obj, Ewe_Ruler_Marker *marker);

/**
 * @brief Style of given marker
 *
 * Set style for given marker
 *
 * @param[in] obj The object.
 * @param[in] marker
 * @param[in] style
 *
 * @return EINA_TRUE if style was setted or EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_marker_style_set(Eo *obj, Ewe_Ruler_Marker *marker, const char *style);

/**
 * @brief Style of given marker
 *
 * Get style of given marker
 *
 * @param[in] obj The object.
 * @param[in] marker
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK const char *ewe_ruler_marker_style_get(const Eo *obj, Ewe_Ruler_Marker *marker);

/**
 * @brief Size of given marker
 *
 * Set new size for given marker
 *
 * @param[in] obj The object.
 * @param[in] marker
 * @param[in] size
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK void ewe_ruler_marker_size_set(Eo *obj, Ewe_Ruler_Marker *marker, int size);

/**
 * @brief Size of given marker
 *
 * Get size of given marker
 *
 * @param[in] obj The object.
 * @param[in] marker
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK int ewe_ruler_marker_size_get(const Eo *obj, Ewe_Ruler_Marker *marker);

/**
 * @brief Text of given marker
 *
 * Set text to given marker
 *
 * @param[in] obj The object.
 * @param[in] marker
 * @param[in] text
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK void ewe_ruler_marker_text_set(Eo *obj, Ewe_Ruler_Marker *marker, const char *text);

/**
 * @brief Text of given marker
 *
 * Get text of given marker
 *
 * @param[in] obj The object.
 * @param[in] marker
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK const char *ewe_ruler_marker_text_get(const Eo *obj, Ewe_Ruler_Marker *marker);

/**
 * @brief A tooltip for given marker
 *
 * Set text to given marker
 *
 * @param[in] obj The object.
 * @param[in] marker
 * @param[in] text
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK void ewe_ruler_marker_tooltip_set(Eo *obj, Ewe_Ruler_Marker *marker, const char *text);

/**
 * @brief Add new scale to ruler.
 *
 * @param[in] obj The object.
 * @param[in] style
 *
 * @return Scale object or NULL on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Ewe_Ruler_Scale *ewe_ruler_scale_add(Eo *obj, const char *style);

/**
 * @brief Delete given scale from ruler.
 *
 * @param[in] obj The object.
 * @param[in] scale
 *
 * @return EINA_TRUE on success, EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_scale_del(Eo *obj, Ewe_Ruler_Scale *scale);

/**
 * @brief Add new marker to ruler.
 *
 * @param[in] obj The object.
 * @param[in] style
 *
 * @return Marker object or NULL on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Ewe_Ruler_Marker *ewe_ruler_marker_add(Eo *obj, const char *style);

/**
 * @brief Delete given marker from ruler.
 *
 * @param[in] obj The object.
 * @param[in] marker
 *
 * @return EINA_TRUE on success, EINA_FALSE on failure.
 *
 * @ingroup Ewe_Ruler
 */
EAPI EAPI_WEAK Eina_Bool ewe_ruler_marker_del(Eo *obj, Ewe_Ruler_Marker *marker);
#endif /* EFL_BETA_API_SUPPORT */

#endif

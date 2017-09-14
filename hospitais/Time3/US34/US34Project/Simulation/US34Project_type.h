#ifndef US34PROJECT_TYPES_CONVERSION
#define US34PROJECT_TYPES_CONVERSION

#include "SmuTypes.h"

/****************************************************************
 ** array_bool_10000 
 ****************************************************************/
extern int array_bool_10000_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_bool_10000_string(const char *str, char **endptr);
extern int string_to_array_bool_10000(const char *str, void *pValue, char **endptr);
extern int is_array_bool_10000_double_conversion_allowed();
extern int array_bool_10000_to_double(const void *pValue, double *nValue);
extern int is_array_bool_10000_long_conversion_allowed();
extern int array_bool_10000_to_long(const void *pValue, long *nValue);
extern void compare_array_bool_10000(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_bool_10000_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_array_bool_10000_default_value(void *pValue);
extern int init_array_bool_10000(void *pValue);
extern int release_array_bool_10000(void *pValue);
extern int copy_array_bool_10000(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_array_bool_10000_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_double_conversion_allowed();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int is_kcg_bool_long_conversion_allowed();
extern int kcg_bool_to_long(const void *pValue, long *nValue);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_bool_default_value(void *pValue);
extern int init_kcg_bool(void *pValue);
extern int release_kcg_bool(void *pValue);
extern int copy_kcg_bool(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_double_conversion_allowed();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int is_kcg_char_long_conversion_allowed();
extern int kcg_char_to_long(const void *pValue, long *nValue);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_char_default_value(void *pValue);
extern int init_kcg_char(void *pValue);
extern int release_kcg_char(void *pValue);
extern int copy_kcg_char(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_float32 
 ****************************************************************/
extern int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float32_string(const char *str, char **endptr);
extern int string_to_kcg_float32(const char *str, void *pValue, char **endptr);
extern int is_kcg_float32_double_conversion_allowed();
extern int kcg_float32_to_double(const void *pValue, double *nValue);
extern int is_kcg_float32_long_conversion_allowed();
extern int kcg_float32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_float32_default_value(void *pValue);
extern int init_kcg_float32(void *pValue);
extern int release_kcg_float32(void *pValue);
extern int copy_kcg_float32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float32_Utils;

/****************************************************************
 ** kcg_float64 
 ****************************************************************/
extern int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float64_string(const char *str, char **endptr);
extern int string_to_kcg_float64(const char *str, void *pValue, char **endptr);
extern int is_kcg_float64_double_conversion_allowed();
extern int kcg_float64_to_double(const void *pValue, double *nValue);
extern int is_kcg_float64_long_conversion_allowed();
extern int kcg_float64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_float64_default_value(void *pValue);
extern int init_kcg_float64(void *pValue);
extern int release_kcg_float64(void *pValue);
extern int copy_kcg_float64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float64_Utils;

/****************************************************************
 ** kcg_int16 
 ****************************************************************/
extern int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int16_string(const char *str, char **endptr);
extern int string_to_kcg_int16(const char *str, void *pValue, char **endptr);
extern int is_kcg_int16_double_conversion_allowed();
extern int kcg_int16_to_double(const void *pValue, double *nValue);
extern int is_kcg_int16_long_conversion_allowed();
extern int kcg_int16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_int16_default_value(void *pValue);
extern int init_kcg_int16(void *pValue);
extern int release_kcg_int16(void *pValue);
extern int copy_kcg_int16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int16_Utils;

/****************************************************************
 ** kcg_int32 
 ****************************************************************/
extern int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int32_string(const char *str, char **endptr);
extern int string_to_kcg_int32(const char *str, void *pValue, char **endptr);
extern int is_kcg_int32_double_conversion_allowed();
extern int kcg_int32_to_double(const void *pValue, double *nValue);
extern int is_kcg_int32_long_conversion_allowed();
extern int kcg_int32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_int32_default_value(void *pValue);
extern int init_kcg_int32(void *pValue);
extern int release_kcg_int32(void *pValue);
extern int copy_kcg_int32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int32_Utils;

/****************************************************************
 ** kcg_int64 
 ****************************************************************/
extern int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int64_string(const char *str, char **endptr);
extern int string_to_kcg_int64(const char *str, void *pValue, char **endptr);
extern int is_kcg_int64_double_conversion_allowed();
extern int kcg_int64_to_double(const void *pValue, double *nValue);
extern int is_kcg_int64_long_conversion_allowed();
extern int kcg_int64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_int64_default_value(void *pValue);
extern int init_kcg_int64(void *pValue);
extern int release_kcg_int64(void *pValue);
extern int copy_kcg_int64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int64_Utils;

/****************************************************************
 ** kcg_int8 
 ****************************************************************/
extern int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int8_string(const char *str, char **endptr);
extern int string_to_kcg_int8(const char *str, void *pValue, char **endptr);
extern int is_kcg_int8_double_conversion_allowed();
extern int kcg_int8_to_double(const void *pValue, double *nValue);
extern int is_kcg_int8_long_conversion_allowed();
extern int kcg_int8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_int8_default_value(void *pValue);
extern int init_kcg_int8(void *pValue);
extern int release_kcg_int8(void *pValue);
extern int copy_kcg_int8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int8_Utils;

/****************************************************************
 ** kcg_size 
 ****************************************************************/
extern int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_size_string(const char *str, char **endptr);
extern int string_to_kcg_size(const char *str, void *pValue, char **endptr);
extern int is_kcg_size_double_conversion_allowed();
extern int kcg_size_to_double(const void *pValue, double *nValue);
extern int is_kcg_size_long_conversion_allowed();
extern int kcg_size_to_long(const void *pValue, long *nValue);
extern void compare_kcg_size(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_size_default_value(void *pValue);
extern int init_kcg_size(void *pValue);
extern int release_kcg_size(void *pValue);
extern int copy_kcg_size(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_size_Utils;

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/
extern int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint16_string(const char *str, char **endptr);
extern int string_to_kcg_uint16(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint16_double_conversion_allowed();
extern int kcg_uint16_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint16_long_conversion_allowed();
extern int kcg_uint16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_uint16_default_value(void *pValue);
extern int init_kcg_uint16(void *pValue);
extern int release_kcg_uint16(void *pValue);
extern int copy_kcg_uint16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint16_Utils;

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/
extern int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint32_string(const char *str, char **endptr);
extern int string_to_kcg_uint32(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint32_double_conversion_allowed();
extern int kcg_uint32_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint32_long_conversion_allowed();
extern int kcg_uint32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_uint32_default_value(void *pValue);
extern int init_kcg_uint32(void *pValue);
extern int release_kcg_uint32(void *pValue);
extern int copy_kcg_uint32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint32_Utils;

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/
extern int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint64_string(const char *str, char **endptr);
extern int string_to_kcg_uint64(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint64_double_conversion_allowed();
extern int kcg_uint64_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint64_long_conversion_allowed();
extern int kcg_uint64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_uint64_default_value(void *pValue);
extern int init_kcg_uint64(void *pValue);
extern int release_kcg_uint64(void *pValue);
extern int copy_kcg_uint64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint64_Utils;

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/
extern int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint8_string(const char *str, char **endptr);
extern int string_to_kcg_uint8(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint8_double_conversion_allowed();
extern int kcg_uint8_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint8_long_conversion_allowed();
extern int kcg_uint8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_uint8_default_value(void *pValue);
extern int init_kcg_uint8(void *pValue);
extern int release_kcg_uint8(void *pValue);
extern int copy_kcg_uint8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint8_Utils;

/****************************************************************
 ** struct_259 
 ****************************************************************/
extern int struct_259_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_struct_259_string(const char *str, char **endptr);
extern int string_to_struct_259(const char *str, void *pValue, char **endptr);
extern int is_struct_259_double_conversion_allowed();
extern int struct_259_to_double(const void *pValue, double *nValue);
extern int is_struct_259_long_conversion_allowed();
extern int struct_259_to_long(const void *pValue, long *nValue);
extern void compare_struct_259(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_struct_259_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_struct_259_default_value(void *pValue);
extern int init_struct_259(void *pValue);
extern int release_struct_259(void *pValue);
extern int copy_struct_259(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_struct_259_Utils;


#endif /*US34PROJECT_TYPES_CONVERSION */

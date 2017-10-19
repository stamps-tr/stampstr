/* comando_controle_mapping.c */

#include "comando_controle_type.h"
#include "comando_controle_interface.h"
#include "comando_controle_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_150);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 15);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */

const MappingIterator iter_array_150 = { "array", 150, 150, NULL };

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_150, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "array_char_150",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "Emit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Emit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "SignalToLED", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.SignalToLED, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "SignalFromButton", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalFromButton, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "Description", NULL, sizeof(array_char_150), (size_t)&inputs_ctx.Description, &_Type_array_char_150_Utils, NULL, NULL, &scope_2, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L31, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L28, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L27, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L32", NULL, sizeof(array_char_150), (size_t)&outputs_ctx._L32, &_Type_array_char_150_Utils, NULL, NULL, &scope_2, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L33, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L34, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L35, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L38, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L39, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 14 }
};
const MappingScope scope_1 = {
    "control/ control",
    scope_1_entries, 15
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "control", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;

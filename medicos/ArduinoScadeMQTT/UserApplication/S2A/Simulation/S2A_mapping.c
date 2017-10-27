/* S2A_mapping.c */

#include "S2A_type.h"
#include "S2A_interface.h"
#include "S2A_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_1, 15);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_1_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "ReqLayerActive", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ReqLayerActive, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "ReqLayerVisible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ReqLayerVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "EmitToDisplay", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EmitToDisplay, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Debug", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx.Debug, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "SignalPortButton", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalPortButton, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L22, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L30, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L27, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L31, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L36, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L35, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L34, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 14 }
};
const MappingScope scope_1 = {
    "S2A/ S2A",
    scope_1_entries, 15
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "S2A", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;

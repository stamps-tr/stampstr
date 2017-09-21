/* comando_controle_mapping.c */

#include "comando_controle_type.h"
#include "comando_controle_interface.h"
#include "comando_controle_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_5);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 6);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */

const MappingIterator iter_array_5 = { "array", 5, 5, NULL };

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "array_char_5",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Emit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Emit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Latitude", NULL, sizeof(array_char_5), (size_t)&outputs_ctx.Latitude, &_Type_array_char_5_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Longitude", NULL, sizeof(array_char_5), (size_t)&outputs_ctx.Longitude, &_Type_array_char_5_Utils, NULL, NULL, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_char_5), (size_t)&outputs_ctx._L3, &_Type_array_char_5_Utils, NULL, NULL, &scope_2, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_char_5), (size_t)&outputs_ctx._L2, &_Type_array_char_5_Utils, NULL, NULL, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_1 = {
    "Main/ Main",
    scope_1_entries, 6
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Main", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;

/* US34Project_mapping.c */

#include "US34Project_type.h"
#include "US34Project_interface.h"
#include "US34Project_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_1, 3);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_1_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "EmitToCDS", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EmitToCDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "SignalToLed", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx.SignalToLed, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "Toggle 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_1 = {
    "Operator1/ Operator1",
    scope_1_entries, 3
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Operator1", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;

/* batimento_mapping.c */

#include <stddef.h>

#include "SmuTypes.h"
#include "SmuMapping.h"
#include "batimento_type.h"
#include "batimento_mapping.h"

/* iterators */
extern const MappingIterator iter_array_5;
const MappingIterator iter_array_5 = { "array", 5, 5, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) extern const MappingEntry ident##_entries[nb]; extern const MappingScope ident
MAP_DECL(scope_3, 1);
MAP_DECL(scope_2, 3);
MAP_DECL(scope_1, 20);
MAP_DECL(scope_0, 1);

/* array_uint32_5 */
const MappingEntry scope_3_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_uint32), 0, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_3 = {
  "array_uint32_5",
  scope_3_entries, 1,
};

/* math::NumericToFloat32/ NumericToFloat32_math_uint32 */
const MappingEntry scope_2_entries[3] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float32), offsetof(outC_NumericToFloat32_math_uint32, Output1_uint32), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_uint32), offsetof(outC_NumericToFloat32_math_uint32, _L1_uint32), &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float32), offsetof(outC_NumericToFloat32_math_uint32, _L2_uint32), &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_2 = {
  "math::NumericToFloat32/ NumericToFloat32_math_uint32",
  scope_2_entries, 3,
};

/* batimento/ batimento */
const MappingEntry scope_1_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Emit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Emit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L18, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L20", NULL, sizeof(array_uint32_5), (size_t)&outputs_ctx._L20, &_Type_array_uint32_5_Utils, NULL, NULL, &scope_3, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L21, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L22, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L23, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L24, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L25, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L28, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L29, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L30, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L31, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L32, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_OUTPUT, "atual", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx.atual, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_INSTANCE, "math::NumericToFloat32 1", NULL, sizeof(outC_NumericToFloat32_math_uint32), (size_t)&outputs_ctx.Context_NumericToFloat32_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 15 */ { MAP_OUTPUT, "p1", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx.p1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_OUTPUT, "p2", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx.p2, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_OUTPUT, "p3", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx.p3, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_OUTPUT, "p4", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx.p4, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_OUTPUT, "p5", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx.p5, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 18}
};
const MappingScope scope_1 = {
  "batimento/ batimento",
  scope_1_entries, 20,
};

/*  */
const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "batimento", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;


/* socket_test_mapping.c */

#include <stddef.h>

#include "SmuTypes.h"
#include "SmuMapping.h"
#include "socket_test_type.h"
#include "socket_test_mapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) extern const MappingEntry ident##_entries[nb]; extern const MappingScope ident
MAP_DECL(scope_1, 23);
MAP_DECL(scope_0, 1);

/* test/ test */
const MappingEntry scope_1_entries[23] = {
  /* 0 */ { MAP_OUTPUT, "Emit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Emit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 1 */ { MAP_INPUT, "SignalButtonExcellent", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalButtonExcellent, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 2 */ { MAP_INPUT, "SignalButtonFair", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalButtonFair, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 3 */ { MAP_INPUT, "SignalButtonGood", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalButtonGood, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 4 */ { MAP_INPUT, "SignalButtonPoor", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalButtonPoor, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 5 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L101, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L102", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L102, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 7 */ { MAP_LOCAL, "_L103", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L103, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L105", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L105, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 9 */ { MAP_LOCAL, "_L106", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L106, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L83, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L86, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 13 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L87, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L88, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 15 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L89, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L91, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 17 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L92, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 18 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L93, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 19 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L94, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L95, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 21 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L96, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 22 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L98, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12}
};
const MappingScope scope_1 = {
  "test/ test",
  scope_1_entries, 23,
};

/*  */
const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "test", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;


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
MAP_DECL(scope_1, 24);
MAP_DECL(scope_0, 1);

/* test/ test */
const MappingEntry scope_1_entries[24] = {
  /* 0 */ { MAP_OUTPUT, "Emit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Emit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 1 */ { MAP_INPUT, "SignalButtonExcellent", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalButtonExcellent, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 2 */ { MAP_INPUT, "SignalButtonFair", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalButtonFair, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 3 */ { MAP_INPUT, "SignalButtonGood", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalButtonGood, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 4 */ { MAP_INPUT, "SignalButtonPoor", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalButtonPoor, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 5 */ { MAP_LOCAL, "_L123", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L123, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L126", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L126, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L136, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L137", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L137, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L138", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L138, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L139, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L140, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L141", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L141, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L142", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L142, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L143, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L144, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 17 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L83, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 18 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L86, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L87, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 20 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L88, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 21 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L93, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 22 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L94, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 23 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L96, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
const MappingScope scope_1 = {
  "test/ test",
  scope_1_entries, 24,
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


/* socket_test_mapping.c */

#include <stddef.h>

#include "SmuTypes.h"
#include "SmuMapping.h"
#include "socket_test_type.h"
#include "socket_test_mapping.h"

/* iterators */
extern const MappingIterator iter_array_10;
extern const MappingIterator iter_array_150;
const MappingIterator iter_array_10 = { "array", 10, 10, NULL};
const MappingIterator iter_array_150 = { "array", 150, 150, NULL};

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) extern const MappingEntry ident##_entries[nb]; extern const MappingScope ident
MAP_DECL(scope_7, 1);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_1, 18);
MAP_DECL(scope_0, 1);

/* array_char_10 */
const MappingEntry scope_7_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_7 = {
  "array_char_10",
  scope_7_entries, 1,
};

/* array_char_150 */
const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_150, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_6 = {
  "array_char_150",
  scope_6_entries, 1,
};

/* test/ test */
const MappingEntry scope_1_entries[18] = {
  /* 0 */ { MAP_INPUT, "DescriptionFromDisplay", NULL, sizeof(array_char_150), (size_t)&inputs_ctx.DescriptionFromDisplay, &_Type_array_char_150_Utils, NULL, NULL, &scope_6, 1, 13},
  /* 1 */ { MAP_OUTPUT, "Emit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Emit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_INPUT, "Latitude", NULL, sizeof(array_char_10), (size_t)&inputs_ctx.Latitude, &_Type_array_char_10_Utils, NULL, NULL, &scope_7, 1, 15},
  /* 3 */ { MAP_INPUT, "Longitude", NULL, sizeof(array_char_10), (size_t)&inputs_ctx.Longitude, &_Type_array_char_10_Utils, NULL, NULL, &scope_7, 1, 16},
  /* 4 */ { MAP_INPUT, "Notification", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Notification, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 5 */ { MAP_INPUT, "SignalFromButton", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalFromButton, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 6 */ { MAP_OUTPUT, "SignalToLED", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.SignalToLED, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 8 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L44, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L46, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L47, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L48, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L76, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L77, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L78", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L78, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 15 */ { MAP_LOCAL, "_L81", NULL, sizeof(array_char_150), (size_t)&outputs_ctx._L81, &_Type_array_char_150_Utils, NULL, NULL, &scope_6, 1, 8},
  /* 16 */ { MAP_LOCAL, "_L82", NULL, sizeof(array_char_10), (size_t)&outputs_ctx._L82, &_Type_array_char_10_Utils, NULL, NULL, &scope_7, 1, 9},
  /* 17 */ { MAP_LOCAL, "_L83", NULL, sizeof(array_char_10), (size_t)&outputs_ctx._L83, &_Type_array_char_10_Utils, NULL, NULL, &scope_7, 1, 10}
};
const MappingScope scope_1 = {
  "test/ test",
  scope_1_entries, 18,
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


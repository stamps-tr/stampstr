/* ErlunControl_mapping.c */

#include "ErlunControl_type.h"
#include "ErlunControl_interface.h"
#include "ErlunControl_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_4);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_4, 101);
DECL_SCOPE(scope_3, 5);
DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 86);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */

const MappingIterator iter_array_4 = { "array", 4, 4, NULL };

const MappingEntry scope_4_entries[101] = {
    /* 0 */ { MAP_OUTPUT, "Output", NULL, sizeof(T_String), (size_t)&outputs_ctx.Output_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L154", NULL, sizeof(T_String), (size_t)&outputs_ctx._L154_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L152", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L152_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L151", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L151_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L149", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L149_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L145", NULL, sizeof(T_String), (size_t)&outputs_ctx._L145_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L144_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L143_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L142", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L142_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L141", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L141_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L140_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L135", NULL, sizeof(T_String), (size_t)&outputs_ctx._L135_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L134_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L133_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L132_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L131_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L130_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L126", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L126_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L125", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L125_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L124_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L123", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L123_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L121", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L121_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L117", NULL, sizeof(T_String), (size_t)&outputs_ctx._L117_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L116", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L116_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L113", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L113_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L112", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L112_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L106", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L106_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L105", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L105_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L104_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L103", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L103_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L102", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L102_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L99", NULL, sizeof(T_String), (size_t)&outputs_ctx._L99_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L97", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L97_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L96_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L95_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L94_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L89", NULL, sizeof(T_String), (size_t)&outputs_ctx._L89_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L88_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L87_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L85", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L85_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L84", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L84_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L79_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L78", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L78_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L77_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L76_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L75_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L74", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L74_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L71", NULL, sizeof(T_String), (size_t)&outputs_ctx._L71_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L70_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L69_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L68_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L67_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L66_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L63_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L62_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L61_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L60_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L59_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L55", NULL, sizeof(T_String), (size_t)&outputs_ctx._L55_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L54_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L53_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L52_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L51_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L46", NULL, sizeof(T_String), (size_t)&outputs_ctx._L46_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L45_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L44_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L43_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L42_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L41_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L36", NULL, sizeof(T_String), (size_t)&outputs_ctx._L36_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L35_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 70 },
    /* 71 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L34_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 71 },
    /* 72 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L33_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 72 },
    /* 73 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L32_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 73 },
    /* 74 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L31_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 74 },
    /* 75 */ { MAP_LOCAL, "_L27", NULL, sizeof(T_String), (size_t)&outputs_ctx._L27_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 75 },
    /* 76 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L26_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 76 },
    /* 77 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L24_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 77 },
    /* 78 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L23_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 78 },
    /* 79 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L17_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 79 },
    /* 80 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L16_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 80 },
    /* 81 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L15_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 81 },
    /* 82 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14_SpeedStr_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 82 },
    /* 83 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L13_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 83 },
    /* 84 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L12_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 84 },
    /* 85 */ { MAP_LOCAL, "_L9", NULL, sizeof(T_String), (size_t)&outputs_ctx._L9_SpeedStr_1, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 85 },
    /* 86 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L8_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 86 },
    /* 87 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L7_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 87 },
    /* 88 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L6_SpeedStr_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 88 },
    /* 89 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L5_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 89 },
    /* 90 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L4_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 90 },
    /* 91 */ { MAP_LOCAL, "_L155", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L155_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 91 },
    /* 92 */ { MAP_LOCAL, "_L156", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L156_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 92 },
    /* 93 */ { MAP_LOCAL, "_L157", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L157_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 93 },
    /* 94 */ { MAP_LOCAL, "_L158", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L158_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 94 },
    /* 95 */ { MAP_LOCAL, "_L159", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L159_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 95 },
    /* 96 */ { MAP_LOCAL, "_L160", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L160_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 96 },
    /* 97 */ { MAP_LOCAL, "_L161", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L161_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 97 },
    /* 98 */ { MAP_LOCAL, "_L162", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L162_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 98 },
    /* 99 */ { MAP_LOCAL, "_L163", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L163_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 99 },
    /* 100 */ { MAP_LOCAL, "_L164", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L164_SpeedStr_1, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 100 }
};
const MappingScope scope_4 = {
    "ErlunControl/ ErlunControl/SpeedStr 1",
    scope_4_entries, 101
};

const MappingEntry scope_3_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Output1_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Switch_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_3 = {
    "ErlunControl/ ErlunControl/Switch 1",
    scope_3_entries, 5
};

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "T_String",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[86] = {
    /* 0 */ { MAP_OUTPUT, "Turn_BtnTextString", NULL, sizeof(T_String), (size_t)&outputs_ctx.Turn_BtnTextString, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "StringSize", NULL, sizeof(T_uChar), (size_t)&outputs_ctx.StringSize, &_Type_T_uChar_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Emit2CDS", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Emit2CDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Layer1Active", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Layer1Active, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "Layer1Visible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Layer1Visible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "TurnTextColorIndex", NULL, sizeof(T_uShort), (size_t)&outputs_ctx.TurnTextColorIndex, &_Type_T_uShort_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "EmitVisible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EmitVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "Send_TextString", NULL, sizeof(T_String), (size_t)&outputs_ctx.Send_TextString, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 7 },
    /* 8 */ { MAP_INPUT, "Turn_Btn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Turn_Btn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_INPUT, "Up_Btn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Up_Btn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INPUT, "Down_Btn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Down_Btn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INPUT, "Left_Btn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Left_Btn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_INPUT, "Right_Btn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Right_Btn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_INPUT, "Speed_Btn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Speed_Btn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_INPUT, "Speed_BtnValue", NULL, sizeof(kcg_float32), (size_t)&inputs_ctx.Speed_BtnValue, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "Var_Turn_Btn", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Var_Turn_Btn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "Var_Send", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Var_Send, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "Var_mqtt", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Var_mqtt, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_String), (size_t)&outputs_ctx._L3, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L4", NULL, sizeof(T_String), (size_t)&outputs_ctx._L4, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_String), (size_t)&outputs_ctx._L5, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_uChar), (size_t)&outputs_ctx._L6, &_Type_T_uChar_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(T_uShort), (size_t)&outputs_ctx._L13, &_Type_T_uShort_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L11", NULL, sizeof(T_uShort), (size_t)&outputs_ctx._L11, &_Type_T_uShort_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L10", NULL, sizeof(T_uShort), (size_t)&outputs_ctx._L10, &_Type_T_uShort_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_String), (size_t)&outputs_ctx._L19, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L27", NULL, sizeof(T_String), (size_t)&outputs_ctx._L27, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L30", NULL, sizeof(T_String), (size_t)&outputs_ctx._L30, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_String), (size_t)&outputs_ctx._L31, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L32", NULL, sizeof(T_String), (size_t)&outputs_ctx._L32, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L42", NULL, sizeof(T_String), (size_t)&outputs_ctx._L42, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L91, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L99, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L100, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L108, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L112", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L112, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L117", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L117, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L116", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L116, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L114", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L114, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L113", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L113, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L118", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L118, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L119", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L119, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L120", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L120, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L130, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L129, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L128", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L128, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L127", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L127, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L124, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L123", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L123, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L122", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L122, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L121", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L121, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L131, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L132, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L146", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L146, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L143, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L139, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L136, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L149", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L149, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L150", NULL, sizeof(T_String), (size_t)&outputs_ctx._L150, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L152", NULL, sizeof(T_String), (size_t)&outputs_ctx._L152, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L297", NULL, sizeof(T_String), (size_t)&outputs_ctx._L297, &_Type_T_String_Utils, NULL, NULL, &scope_2, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L299", NULL, sizeof(kcg_float32), (size_t)&outputs_ctx._L299, &_Type_kcg_float32_Utils, NULL, NULL, NULL, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L300", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L300, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L301", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L301, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L302", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L302, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 70 },
    /* 71 */ { MAP_LOCAL, "_L312", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L312, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 71 },
    /* 72 */ { MAP_LOCAL, "_L311", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L311, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 72 },
    /* 73 */ { MAP_LOCAL, "_L310", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L310, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 73 },
    /* 74 */ { MAP_LOCAL, "_L309", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L309, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 74 },
    /* 75 */ { MAP_LOCAL, "_L314", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L314, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75 },
    /* 76 */ { MAP_LOCAL, "_L322", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L322, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76 },
    /* 77 */ { MAP_LOCAL, "_L321", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L321, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 77 },
    /* 78 */ { MAP_LOCAL, "_L320", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L320, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78 },
    /* 79 */ { MAP_LOCAL, "_L319", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L319, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 79 },
    /* 80 */ { MAP_LOCAL, "_L317", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L317, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 80 },
    /* 81 */ { MAP_LOCAL, "_L316", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L316, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 81 },
    /* 82 */ { MAP_LOCAL, "_L315", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L315, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 82 },
    /* 83 */ { MAP_LOCAL, "_L323", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L323, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 83 },
    /* 84 */ { MAP_EXPANDED, "Switch 1", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 84 },
    /* 85 */ { MAP_EXPANDED, "SpeedStr 1", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 85 }
};
const MappingScope scope_1 = {
    "ErlunControl/ ErlunControl",
    scope_1_entries, 86
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "ErlunControl", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;

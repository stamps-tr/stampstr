/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation/config.txt
** Generation date: 2017-09-19T15:23:33
*************************************************************$ */
#ifndef _ErlunControl_H_
#define _ErlunControl_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* Turn_Btn/ */ Turn_Btn;
  kcg_bool /* Up_Btn/ */ Up_Btn;
  kcg_bool /* Down_Btn/ */ Down_Btn;
  kcg_bool /* Left_Btn/ */ Left_Btn;
  kcg_bool /* Right_Btn/ */ Right_Btn;
  kcg_bool /* Speed_Btn/ */ Speed_Btn;
  kcg_float32 /* Speed_BtnValue/ */ Speed_BtnValue;
} inC_ErlunControl;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_String /* Turn_BtnTextString/ */ Turn_BtnTextString;
  T_uChar /* StringSize/ */ StringSize;
  kcg_bool /* Emit2CDS/ */ Emit2CDS;
  kcg_bool /* Layer1Active/ */ Layer1Active;
  kcg_bool /* Layer1Visible/ */ Layer1Visible;
  T_uShort /* TurnTextColorIndex/ */ TurnTextColorIndex;
  kcg_bool /* EmitVisible/ */ EmitVisible;
  T_String /* Send_TextString/ */ Send_TextString;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* @1/_L3/ */ _L3_Switch_1;
  kcg_int32 /* Var_Send/ */ Var_Send;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L99/ */ _L99;
  kcg_int32 /* _L117/ */ _L117;
  kcg_int32 /* _L130/ */ _L130;
  kcg_int32 /* _L128/ */ _L128;
  kcg_int32 /* _L139/ */ _L139;
  kcg_int32 /* _L312/ */ _L312;
  kcg_int32 /* _L317/ */ _L317;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/Output1/ */ Output1_Switch_1;
  kcg_bool /* @1/Input1/ */ Input1_Switch_1;
  kcg_bool /* @1/_L1/ */ _L1_Switch_1;
  kcg_bool /* @1/_L2/ */ _L2_Switch_1;
  kcg_bool /* @1/_L4/ */ _L4_Switch_1;
  T_String /* @2/Output/ */ Output_SpeedStr_1;
  kcg_float32 /* @2/Input/ */ Input_SpeedStr_1;
  kcg_float32 /* @2/_L164/ */ _L164_SpeedStr_1;
  kcg_float32 /* @2/_L163/ */ _L163_SpeedStr_1;
  kcg_float32 /* @2/_L162/ */ _L162_SpeedStr_1;
  kcg_float32 /* @2/_L161/ */ _L161_SpeedStr_1;
  kcg_float32 /* @2/_L160/ */ _L160_SpeedStr_1;
  kcg_float32 /* @2/_L159/ */ _L159_SpeedStr_1;
  kcg_float32 /* @2/_L158/ */ _L158_SpeedStr_1;
  kcg_float32 /* @2/_L157/ */ _L157_SpeedStr_1;
  kcg_float32 /* @2/_L156/ */ _L156_SpeedStr_1;
  kcg_float32 /* @2/_L155/ */ _L155_SpeedStr_1;
  kcg_float32 /* @2/_L4/ */ _L4_SpeedStr_1;
  kcg_float32 /* @2/_L5/ */ _L5_SpeedStr_1;
  kcg_int32 /* @2/_L6/ */ _L6_SpeedStr_1;
  kcg_int32 /* @2/_L7/ */ _L7_SpeedStr_1;
  kcg_float32 /* @2/_L8/ */ _L8_SpeedStr_1;
  T_String /* @2/_L9/ */ _L9_SpeedStr_1;
  kcg_int32 /* @2/_L12/ */ _L12_SpeedStr_1;
  kcg_int32 /* @2/_L13/ */ _L13_SpeedStr_1;
  kcg_bool /* @2/_L14/ */ _L14_SpeedStr_1;
  kcg_int32 /* @2/_L15/ */ _L15_SpeedStr_1;
  kcg_int32 /* @2/_L16/ */ _L16_SpeedStr_1;
  kcg_bool /* @2/_L17/ */ _L17_SpeedStr_1;
  kcg_int32 /* @2/_L23/ */ _L23_SpeedStr_1;
  kcg_int32 /* @2/_L24/ */ _L24_SpeedStr_1;
  kcg_int32 /* @2/_L26/ */ _L26_SpeedStr_1;
  T_String /* @2/_L27/ */ _L27_SpeedStr_1;
  kcg_int32 /* @2/_L31/ */ _L31_SpeedStr_1;
  kcg_float32 /* @2/_L32/ */ _L32_SpeedStr_1;
  kcg_bool /* @2/_L33/ */ _L33_SpeedStr_1;
  kcg_float32 /* @2/_L34/ */ _L34_SpeedStr_1;
  kcg_int32 /* @2/_L35/ */ _L35_SpeedStr_1;
  T_String /* @2/_L36/ */ _L36_SpeedStr_1;
  kcg_int32 /* @2/_L41/ */ _L41_SpeedStr_1;
  kcg_int32 /* @2/_L42/ */ _L42_SpeedStr_1;
  kcg_bool /* @2/_L43/ */ _L43_SpeedStr_1;
  kcg_bool /* @2/_L44/ */ _L44_SpeedStr_1;
  kcg_float32 /* @2/_L45/ */ _L45_SpeedStr_1;
  T_String /* @2/_L46/ */ _L46_SpeedStr_1;
  kcg_int32 /* @2/_L51/ */ _L51_SpeedStr_1;
  kcg_int32 /* @2/_L52/ */ _L52_SpeedStr_1;
  kcg_int32 /* @2/_L53/ */ _L53_SpeedStr_1;
  kcg_bool /* @2/_L54/ */ _L54_SpeedStr_1;
  T_String /* @2/_L55/ */ _L55_SpeedStr_1;
  kcg_int32 /* @2/_L59/ */ _L59_SpeedStr_1;
  kcg_float32 /* @2/_L60/ */ _L60_SpeedStr_1;
  kcg_bool /* @2/_L61/ */ _L61_SpeedStr_1;
  kcg_float32 /* @2/_L62/ */ _L62_SpeedStr_1;
  kcg_float32 /* @2/_L63/ */ _L63_SpeedStr_1;
  kcg_bool /* @2/_L66/ */ _L66_SpeedStr_1;
  kcg_bool /* @2/_L67/ */ _L67_SpeedStr_1;
  kcg_float32 /* @2/_L68/ */ _L68_SpeedStr_1;
  kcg_float32 /* @2/_L69/ */ _L69_SpeedStr_1;
  kcg_bool /* @2/_L70/ */ _L70_SpeedStr_1;
  T_String /* @2/_L71/ */ _L71_SpeedStr_1;
  kcg_bool /* @2/_L74/ */ _L74_SpeedStr_1;
  kcg_bool /* @2/_L75/ */ _L75_SpeedStr_1;
  kcg_bool /* @2/_L76/ */ _L76_SpeedStr_1;
  kcg_int32 /* @2/_L77/ */ _L77_SpeedStr_1;
  kcg_float32 /* @2/_L78/ */ _L78_SpeedStr_1;
  kcg_bool /* @2/_L79/ */ _L79_SpeedStr_1;
  kcg_int32 /* @2/_L84/ */ _L84_SpeedStr_1;
  kcg_int32 /* @2/_L85/ */ _L85_SpeedStr_1;
  kcg_float32 /* @2/_L87/ */ _L87_SpeedStr_1;
  kcg_bool /* @2/_L88/ */ _L88_SpeedStr_1;
  T_String /* @2/_L89/ */ _L89_SpeedStr_1;
  kcg_float32 /* @2/_L94/ */ _L94_SpeedStr_1;
  kcg_bool /* @2/_L95/ */ _L95_SpeedStr_1;
  kcg_float32 /* @2/_L96/ */ _L96_SpeedStr_1;
  kcg_bool /* @2/_L97/ */ _L97_SpeedStr_1;
  T_String /* @2/_L99/ */ _L99_SpeedStr_1;
  kcg_int32 /* @2/_L102/ */ _L102_SpeedStr_1;
  kcg_bool /* @2/_L103/ */ _L103_SpeedStr_1;
  kcg_bool /* @2/_L104/ */ _L104_SpeedStr_1;
  kcg_int32 /* @2/_L105/ */ _L105_SpeedStr_1;
  kcg_int32 /* @2/_L106/ */ _L106_SpeedStr_1;
  kcg_bool /* @2/_L112/ */ _L112_SpeedStr_1;
  kcg_bool /* @2/_L113/ */ _L113_SpeedStr_1;
  kcg_bool /* @2/_L116/ */ _L116_SpeedStr_1;
  T_String /* @2/_L117/ */ _L117_SpeedStr_1;
  kcg_bool /* @2/_L121/ */ _L121_SpeedStr_1;
  kcg_float32 /* @2/_L123/ */ _L123_SpeedStr_1;
  kcg_bool /* @2/_L124/ */ _L124_SpeedStr_1;
  kcg_int32 /* @2/_L125/ */ _L125_SpeedStr_1;
  kcg_int32 /* @2/_L126/ */ _L126_SpeedStr_1;
  kcg_float32 /* @2/_L130/ */ _L130_SpeedStr_1;
  kcg_float32 /* @2/_L131/ */ _L131_SpeedStr_1;
  kcg_int32 /* @2/_L132/ */ _L132_SpeedStr_1;
  kcg_bool /* @2/_L133/ */ _L133_SpeedStr_1;
  kcg_int32 /* @2/_L134/ */ _L134_SpeedStr_1;
  T_String /* @2/_L135/ */ _L135_SpeedStr_1;
  kcg_int32 /* @2/_L140/ */ _L140_SpeedStr_1;
  kcg_bool /* @2/_L141/ */ _L141_SpeedStr_1;
  kcg_int32 /* @2/_L142/ */ _L142_SpeedStr_1;
  kcg_bool /* @2/_L143/ */ _L143_SpeedStr_1;
  kcg_int32 /* @2/_L144/ */ _L144_SpeedStr_1;
  T_String /* @2/_L145/ */ _L145_SpeedStr_1;
  kcg_int32 /* @2/_L149/ */ _L149_SpeedStr_1;
  kcg_float32 /* @2/_L151/ */ _L151_SpeedStr_1;
  kcg_bool /* @2/_L152/ */ _L152_SpeedStr_1;
  T_String /* @2/_L154/ */ _L154_SpeedStr_1;
  kcg_bool /* Var_Turn_Btn/ */ Var_Turn_Btn;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  T_String /* _L3/ */ _L3;
  T_String /* _L4/ */ _L4;
  T_String /* _L5/ */ _L5;
  T_uChar /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  T_uShort /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  T_uShort /* _L11/ */ _L11;
  T_uShort /* _L10/ */ _L10;
  T_String /* _L19/ */ _L19;
  T_String /* _L27/ */ _L27;
  T_String /* _L30/ */ _L30;
  T_String /* _L31/ */ _L31;
  T_String /* _L32/ */ _L32;
  T_String /* _L42/ */ _L42;
  kcg_bool /* _L91/ */ _L91;
  kcg_int32 /* _L100/ */ _L100;
  kcg_int32 /* _L108/ */ _L108;
  kcg_int32 /* _L112/ */ _L112;
  kcg_int32 /* _L116/ */ _L116;
  kcg_int32 /* _L114/ */ _L114;
  kcg_int32 /* _L113/ */ _L113;
  kcg_bool /* _L118/ */ _L118;
  kcg_int32 /* _L119/ */ _L119;
  kcg_int32 /* _L120/ */ _L120;
  kcg_int32 /* _L129/ */ _L129;
  kcg_int32 /* _L127/ */ _L127;
  kcg_int32 /* _L124/ */ _L124;
  kcg_int32 /* _L123/ */ _L123;
  kcg_int32 /* _L122/ */ _L122;
  kcg_int32 /* _L121/ */ _L121;
  kcg_bool /* _L131/ */ _L131;
  kcg_bool /* _L132/ */ _L132;
  kcg_int32 /* _L146/ */ _L146;
  kcg_int32 /* _L143/ */ _L143;
  kcg_int32 /* _L136/ */ _L136;
  kcg_bool /* _L149/ */ _L149;
  T_String /* _L150/ */ _L150;
  T_String /* _L152/ */ _L152;
  T_String /* _L297/ */ _L297;
  kcg_float32 /* _L299/ */ _L299;
  kcg_bool /* _L300/ */ _L300;
  kcg_bool /* _L301/ */ _L301;
  kcg_bool /* _L302/ */ _L302;
  kcg_int32 /* _L311/ */ _L311;
  kcg_int32 /* _L310/ */ _L310;
  kcg_int32 /* _L309/ */ _L309;
  kcg_bool /* _L314/ */ _L314;
  kcg_bool /* _L322/ */ _L322;
  kcg_bool /* _L321/ */ _L321;
  kcg_bool /* _L320/ */ _L320;
  kcg_int32 /* _L319/ */ _L319;
  kcg_int32 /* _L316/ */ _L316;
  kcg_int32 /* _L315/ */ _L315;
} outC_ErlunControl;

/* ===========  node initialization and cycle functions  =========== */
/* ErlunControl/ */
extern void ErlunControl(inC_ErlunControl *inC, outC_ErlunControl *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ErlunControl_reset(outC_ErlunControl *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ErlunControl_init(outC_ErlunControl *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ErlunControl/
  @1: (Switch#1)
  @2: (SpeedStr#1)
*/

#endif /* _ErlunControl_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ErlunControl.h
** Generation date: 2017-09-19T15:23:33
*************************************************************$ */


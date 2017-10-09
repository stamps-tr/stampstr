/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/KCG/config.txt
** Generation date: 2017-10-05T10:57:26
*************************************************************$ */
#ifndef _ErlunControl_H_
#define _ErlunControl_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* @1/Input1/, @1/_L1/, Turn_Btn/, _L1/, _L300/, _L321/ */ Turn_Btn;
  kcg_bool /* Up_Btn/, _L91/ */ Up_Btn;
  kcg_bool /* Down_Btn/, _L118/ */ Down_Btn;
  kcg_bool /* Left_Btn/, _L131/ */ Left_Btn;
  kcg_bool /* Right_Btn/, _L132/ */ Right_Btn;
  kcg_bool /* Speed_Btn/, _L149/ */ Speed_Btn;
  kcg_float32 /* @2/Input/,
     @2/_L155/,
     @2/_L156/,
     @2/_L157/,
     @2/_L158/,
     @2/_L159/,
     @2/_L160/,
     @2/_L161/,
     @2/_L162/,
     @2/_L163/,
     @2/_L164/,
     Speed_BtnValue/,
     _L299/ */ Speed_BtnValue;
} inC_ErlunControl;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_String /* Turn_BtnTextString/, _L5/ */ Turn_BtnTextString;
  T_uChar /* StringSize/ */ StringSize;
  kcg_bool /* Emit2CDS/, _L9/ */ Emit2CDS;
  kcg_bool /* Layer1Active/ */ Layer1Active;
  kcg_bool /* Layer1Visible/, _L8/ */ Layer1Visible;
  T_uShort /* TurnTextColorIndex/, _L13/ */ TurnTextColorIndex;
  kcg_bool /* @1/Output1/,
     @1/_L2/,
     EmitVisible/,
     Var_Turn_Btn/,
     _L12/,
     _L2/,
     _L301/,
     _L320/ */ EmitVisible;
  T_String /* Send_TextString/, _L27/ */ Send_TextString;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* @1/_L3/ */ _L3_Switch_1;
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
** Generation date: 2017-10-05T10:57:26
*************************************************************$ */


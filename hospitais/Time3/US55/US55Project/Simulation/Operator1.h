/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US55/US55Project/Simulation/config.txt
** Generation date: 2017-09-17T23:21:50
*************************************************************$ */
#ifndef _Operator1_H_
#define _Operator1_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EmitToCDS/ */ EmitToCDS;
  kcg_uint8 /* SignalToLed/ */ SignalToLed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  struct_259 /* _L11= */ fby_1;
  kcg_bool init;
  kcg_bool /* @1/_L4/ */ _L4_Toggle_1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/Output/ */ Output_Toggle_1;
  kcg_bool /* @1/Input/ */ Input_Toggle_1;
  kcg_bool /* @1/_L3/ */ _L3_Toggle_1;
  kcg_bool /* @1/_L2/ */ _L2_Toggle_1;
  kcg_bool /* @1/_L1/ */ _L1_Toggle_1;
  kcg_bool /* _L5/ */ _L5;
  kcg_uint8 /* _L4/ */ _L4;
  kcg_uint8 /* _L3/ */ _L3;
  kcg_uint8 /* _L2/ */ _L2;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_Operator1;

/* ===========  node initialization and cycle functions  =========== */
/* Operator1/ */
extern void Operator1(outC_Operator1 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Operator1_reset(outC_Operator1 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Operator1_init(outC_Operator1 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Operator1/
  @1: (Toggle#1)
*/

#endif /* _Operator1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator1.h
** Generation date: 2017-09-17T23:21:50
*************************************************************$ */


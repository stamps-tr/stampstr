/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US55/US55Project/KCG/config.txt
** Generation date: 2017-09-17T22:16:55
*************************************************************$ */
#ifndef _Operator1_H_
#define _Operator1_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EmitToCDS/, _L6/ */ EmitToCDS;
  kcg_uint8 /* SignalToLed/, _L4/ */ SignalToLed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  struct_275 /* _L11= */ fby_1;
  kcg_bool init;
  kcg_bool /* @1/_L4/ */ _L4_Toggle_1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2017-09-17T22:16:55
*************************************************************$ */


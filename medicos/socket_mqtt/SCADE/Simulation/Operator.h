/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Pedro/Documents/ITA/CE-235/socket_mqtt/Simulation/config.txt
** Generation date: 2017-09-16T15:45:17
*************************************************************$ */
#ifndef _Operator_H_
#define _Operator_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* @1/_/v3/ */ v3_times_1_int32;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_1_int32;
  kcg_bool /* @1/_/c/ */ c_times_1_int32;
  kcg_int32 /* @1/_/n/ */ n_times_1_int32;
  kcg_int32 /* @1/_/v4/ */ v4_times_1_int32;
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
} outC_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* Operator/ */
extern void Operator(outC_Operator *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Operator_reset(outC_Operator *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Operator_init(outC_Operator *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Operator/
  @1: (times#1)
*/

#endif /* _Operator_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator.h
** Generation date: 2017-09-16T15:45:17
*************************************************************$ */


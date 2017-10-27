/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/victo/stampstr/medicos/socket_mqtt/SCADE/Simulation/config.txt
** Generation date: 2017-10-09T13:04:46
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
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
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



#endif /* _Operator_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator.h
** Generation date: 2017-10-09T13:04:46
*************************************************************$ */


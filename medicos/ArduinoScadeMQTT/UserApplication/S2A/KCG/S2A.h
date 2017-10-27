/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/KCG/config.txt
** Generation date: 2017-10-27T20:25:39
*************************************************************$ */
#ifndef _S2A_H_
#define _S2A_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* SignalPortButton/, _L31/ */ SignalPortButton;
} inC_S2A;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ReqLayerActive/ */ ReqLayerActive;
  kcg_bool /* ReqLayerVisible/, _L7/ */ ReqLayerVisible;
  kcg_bool /* EmitToDisplay/ */ EmitToDisplay;
  kcg_float32 /* Debug/, _L22/ */ Debug;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L27/ */ _L27;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_S2A;

/* ===========  node initialization and cycle functions  =========== */
/* S2A/ */
extern void S2A(inC_S2A *inC, outC_S2A *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void S2A_reset(outC_S2A *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void S2A_init(outC_S2A *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _S2A_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** S2A.h
** Generation date: 2017-10-27T20:25:39
*************************************************************$ */


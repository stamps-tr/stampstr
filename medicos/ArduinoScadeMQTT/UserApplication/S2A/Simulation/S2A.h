/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/Simulation/config.txt
** Generation date: 2017-10-27T20:33:47
*************************************************************$ */
#ifndef _S2A_H_
#define _S2A_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct { kcg_bool /* SignalPortButton/ */ SignalPortButton; } inC_S2A;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ReqLayerActive/ */ ReqLayerActive;
  kcg_bool /* ReqLayerVisible/ */ ReqLayerVisible;
  kcg_bool /* EmitToDisplay/ */ EmitToDisplay;
  kcg_float32 /* Debug/ */ Debug;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L27/ */ _L27;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L7/ */ _L7;
  kcg_float32 /* _L22/ */ _L22;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L31/ */ _L31;
  kcg_uint8 /* _L36/ */ _L36;
  kcg_uint8 /* _L35/ */ _L35;
  kcg_uint8 /* _L34/ */ _L34;
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
** Generation date: 2017-10-27T20:33:47
*************************************************************$ */


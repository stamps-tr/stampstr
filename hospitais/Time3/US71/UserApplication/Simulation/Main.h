/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/config.txt
** Generation date: 2017-09-20T22:06:06
*************************************************************$ */
#ifndef _Main_H_
#define _Main_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Emit/ */ Emit;
  array_char_5 /* Latitude/ */ Latitude;
  array_char_5 /* Longitude/ */ Longitude;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_char_5 /* _L3/ */ _L3;
  array_char_5 /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
} outC_Main;

/* ===========  node initialization and cycle functions  =========== */
/* Main/ */
extern void Main(outC_Main *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Main_reset(outC_Main *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Main_init(outC_Main *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Main_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.h
** Generation date: 2017-09-20T22:06:06
*************************************************************$ */


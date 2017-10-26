/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/KCG/config.txt
** Generation date: 2017-10-19T20:12:46
*************************************************************$ */
#ifndef _control_H_
#define _control_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* SignalFromButton/, _L28/ */ SignalFromButton;
  array_char_150 /* Description/, _L32/ */ Description;
} inC_control;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Emit/, _L1/ */ Emit;
  kcg_uint8 /* SignalToLED/, _L35/ */ SignalToLED;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_control;

/* ===========  node initialization and cycle functions  =========== */
/* control/ */
extern void control(inC_control *inC, outC_control *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void control_reset(outC_control *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void control_init(outC_control *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _control_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** control.h
** Generation date: 2017-10-19T20:12:46
*************************************************************$ */


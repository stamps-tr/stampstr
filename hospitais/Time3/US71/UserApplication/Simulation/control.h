/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/config.txt
** Generation date: 2017-10-18T23:50:48
*************************************************************$ */
#ifndef _control_H_
#define _control_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* SignalFromButton/ */ SignalFromButton;
  array_char_150 /* Description/ */ Description;
} inC_control;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Emit/ */ Emit;
  kcg_uint8 /* SignalToLED/ */ SignalToLED;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  array_char_150 /* _L32/ */ _L32;
  kcg_float32 /* _L33/ */ _L33;
  kcg_float32 /* _L34/ */ _L34;
  kcg_uint8 /* _L35/ */ _L35;
  kcg_uint8 /* _L38/ */ _L38;
  kcg_uint8 /* _L39/ */ _L39;
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
** Generation date: 2017-10-18T23:50:48
*************************************************************$ */


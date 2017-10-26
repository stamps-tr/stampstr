/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/KCG/config.txt
** Generation date: 2017-10-19T20:12:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "control.h"

/* control/ */
void control(inC_control *inC, outC_control *outC)
{
  outC->Emit = kcg_true;
  /* _L35= */
  if (inC->SignalFromButton) {
    outC->SignalToLED = GREEN;
  }
  else {
    outC->SignalToLED = RED;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void control_init(outC_control *outC)
{
  outC->Emit = kcg_true;
  outC->SignalToLED = kcg_lit_uint8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void control_reset(outC_control *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** control.c
** Generation date: 2017-10-19T20:12:46
*************************************************************$ */


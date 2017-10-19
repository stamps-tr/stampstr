/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/config.txt
** Generation date: 2017-10-19T00:58:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "control.h"

/* control/ */
void control(inC_control *inC, outC_control *outC)
{
  outC->_L39 = RED;
  outC->_L38 = GREEN;
  outC->_L28 = inC->SignalFromButton;
  /* _L35= */
  if (outC->_L28) {
    outC->_L35 = outC->_L38;
  }
  else {
    outC->_L35 = outC->_L39;
  }
  outC->_L34 = LONGITUDE;
  outC->_L33 = LATITUDE;
  kcg_copy_array_char_150(&outC->_L32, &inC->Description);
  outC->SignalToLED = outC->_L35;
  outC->_L29 = kcg_false;
  outC->_L27 = kcg_true;
  /* _L31= */
  if (outC->_L28) {
    outC->_L31 = outC->_L27;
  }
  else {
    outC->_L31 = outC->_L29;
  }
  /* _=(PublishMQTT#1)/ */
  PublishMQTT(&outC->_L32, outC->_L33, outC->_L34, outC->_L31);
  outC->_L1 = kcg_true;
  outC->Emit = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void control_init(outC_control *outC)
{
  kcg_size idx;

  outC->_L39 = kcg_lit_uint8(0);
  outC->_L38 = kcg_lit_uint8(0);
  outC->_L35 = kcg_lit_uint8(0);
  outC->_L34 = kcg_lit_float32(0.0);
  outC->_L33 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 150; idx++) {
    outC->_L32[idx] = ' ';
  }
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L1 = kcg_true;
  outC->SignalToLED = kcg_lit_uint8(0);
  outC->Emit = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void control_reset(outC_control *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** control.c
** Generation date: 2017-10-19T00:58:37
*************************************************************$ */


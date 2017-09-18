/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US55/US55Project/KCG/config.txt
** Generation date: 2017-09-17T22:16:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator1.h"

/* Operator1/ */
void Operator1(outC_Operator1 *outC)
{
  kcg_size idx;

  outC->EmitToCDS = kcg_true;
  /* _L11= */
  if (outC->init) {
    outC->init = kcg_false;
    /* _L11= */
    for (idx = 0; idx < 10000; idx++) {
      outC->fby_1.items[idx] = kcg_true;
    }
    outC->fby_1.idx = 0;
  }
  /* @1/_L4= */
  if (outC->fby_1.items[outC->fby_1.idx]) {
    outC->_L4_Toggle_1 = !outC->_L4_Toggle_1;
  }
  outC->fby_1.items[outC->fby_1.idx] = kcg_false;
  outC->fby_1.idx = (outC->fby_1.idx + 1) % 10000;
  /* _L4= */
  if (outC->_L4_Toggle_1) {
    outC->SignalToLed = GREEN;
  }
  else {
    outC->SignalToLed = RED;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Operator1_init(outC_Operator1 *outC)
{
  kcg_size idx;

  outC->_L4_Toggle_1 = kcg_false;
  outC->EmitToCDS = kcg_true;
  outC->init = kcg_true;
  outC->fby_1.idx = 0;
  for (idx = 0; idx < 10000; idx++) {
    outC->fby_1.items[idx] = kcg_true;
  }
  outC->SignalToLed = kcg_lit_uint8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Operator1_reset(outC_Operator1 *outC)
{
  outC->_L4_Toggle_1 = kcg_false;
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Operator1/
  @1: (Toggle#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator1.c
** Generation date: 2017-09-17T22:16:55
*************************************************************$ */


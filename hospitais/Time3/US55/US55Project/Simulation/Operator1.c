/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US55/US55Project/Simulation/config.txt
** Generation date: 2017-09-17T23:21:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator1.h"

/* Operator1/ */
void Operator1(outC_Operator1 *outC)
{
  kcg_size idx;
  kcg_bool tmp;

  /* @1/_L3= */
  if (outC->init) {
    outC->_L3_Toggle_1 = kcg_false;
  }
  else {
    outC->_L3_Toggle_1 = outC->_L4_Toggle_1;
  }
  outC->_L2_Toggle_1 = !outC->_L3_Toggle_1;
  tmp = kcg_true;
  /* _L11= */
  if (outC->init) {
    /* _L11= */
    for (idx = 0; idx < 10000; idx++) {
      outC->fby_1.items[idx] = tmp;
    }
    outC->fby_1.idx = 0;
  }
  outC->_L11 = outC->fby_1.items[outC->fby_1.idx];
  outC->Input_Toggle_1 = outC->_L11;
  outC->_L1_Toggle_1 = outC->Input_Toggle_1;
  /* @1/_L4= */
  if (outC->_L1_Toggle_1) {
    outC->_L4_Toggle_1 = outC->_L2_Toggle_1;
  }
  else {
    outC->_L4_Toggle_1 = outC->_L3_Toggle_1;
  }
  outC->Output_Toggle_1 = outC->_L4_Toggle_1;
  outC->_L10 = kcg_false;
  outC->fby_1.items[outC->fby_1.idx] = outC->_L10;
  outC->fby_1.idx = (outC->fby_1.idx + 1) % 10000;
  outC->_L6 = kcg_true;
  outC->EmitToCDS = outC->_L6;
  outC->_L3 = RED;
  outC->_L2 = GREEN;
  outC->_L5 = outC->Output_Toggle_1;
  /* _L4= */
  if (outC->_L5) {
    outC->_L4 = outC->_L2;
  }
  else {
    outC->_L4 = outC->_L3;
  }
  outC->SignalToLed = outC->_L4;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Operator1_init(outC_Operator1 *outC)
{
  kcg_size idx;

  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L2 = kcg_lit_uint8(0);
  outC->_L3 = kcg_lit_uint8(0);
  outC->_L4 = kcg_lit_uint8(0);
  outC->_L5 = kcg_true;
  outC->_L1_Toggle_1 = kcg_true;
  outC->_L2_Toggle_1 = kcg_true;
  outC->_L3_Toggle_1 = kcg_true;
  outC->Input_Toggle_1 = kcg_true;
  outC->Output_Toggle_1 = kcg_true;
  outC->_L4_Toggle_1 = kcg_true;
  outC->init = kcg_true;
  outC->fby_1.idx = 0;
  for (idx = 0; idx < 10000; idx++) {
    outC->fby_1.items[idx] = kcg_true;
  }
  outC->SignalToLed = kcg_lit_uint8(0);
  outC->EmitToCDS = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Operator1_reset(outC_Operator1 *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Operator1/
  @1: (Toggle#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator1.c
** Generation date: 2017-09-17T23:21:50
*************************************************************$ */


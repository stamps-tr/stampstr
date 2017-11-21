/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/Simulation/config.txt
** Generation date: 2017-11-19T23:17:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "test.h"

#ifndef KCG_USER_DEFINED_INIT
void test_init(outC_test *outC)
{
  outC->_L106 = 0;
  outC->_L105 = 0;
  outC->_L102 = 0;
  outC->_L103 = 0;
  outC->_L101 = 0;
  outC->_L98 = 0;
  outC->_L96 = kcg_true;
  outC->_L94 = 0;
  outC->_L95 = 0;
  outC->_L93 = 0;
  outC->_L92 = 0;
  outC->_L91 = 0;
  outC->_L89 = 0;
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L4 = kcg_true;
  outC->Emit = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void test_reset(outC_test *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* test */
void test(inC_test *inC, outC_test *outC)
{
  outC->_L4 = kcg_true;
  outC->Emit = outC->_L4;
  outC->_L83 = inC->SignalButtonPoor;
  outC->_L86 = inC->SignalButtonFair;
  outC->_L87 = inC->SignalButtonGood;
  outC->_L88 = inC->SignalButtonExcellent;
  outC->_L98 = 1;
  outC->_L101 = 0;
  /* 3 */ if (outC->_L83) {
    outC->_L89 = outC->_L98;
  }
  else {
    outC->_L89 = outC->_L101;
  }
  outC->_L105 = 1;
  outC->_L106 = 0;
  /* 5 */ if (outC->_L86) {
    outC->_L91 = outC->_L105;
  }
  else {
    outC->_L91 = outC->_L106;
  }
  outC->_L102 = 1;
  outC->_L103 = 0;
  /* 6 */ if (outC->_L87) {
    outC->_L92 = outC->_L102;
  }
  else {
    outC->_L92 = outC->_L103;
  }
  outC->_L94 = 1;
  outC->_L95 = 0;
  /* 7 */ if (outC->_L88) {
    outC->_L93 = outC->_L94;
  }
  else {
    outC->_L93 = outC->_L95;
  }
  outC->_L96 = outC->_L83 | outC->_L86 | outC->_L87 | outC->_L88;
  /* 2 */
  PublishMQTT(outC->_L89, outC->_L91, outC->_L92, outC->_L93, outC->_L96);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** test.c
** Generation date: 2017-11-19T23:17:27
*************************************************************$ */


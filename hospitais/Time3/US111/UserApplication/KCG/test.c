/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/KCG/config.txt
** Generation date: 2017-11-16T00:41:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "test.h"

#ifndef KCG_USER_DEFINED_INIT
void test_init(outC_test *outC)
{
  outC->_L96 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L89 = kcg_true;
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
  outC->_L94 = kcg_true;
  outC->_L95 = kcg_false;
  /* 3 */ if (outC->_L83) {
    outC->_L89 = outC->_L94;
  }
  else {
    outC->_L89 = outC->_L95;
  }
  /* 5 */ if (outC->_L86) {
    outC->_L91 = outC->_L94;
  }
  else {
    outC->_L91 = outC->_L95;
  }
  /* 6 */ if (outC->_L87) {
    outC->_L92 = outC->_L94;
  }
  else {
    outC->_L92 = outC->_L95;
  }
  /* 7 */ if (outC->_L88) {
    outC->_L93 = outC->_L94;
  }
  else {
    outC->_L93 = outC->_L95;
  }
  outC->_L96 = outC->_L89 | outC->_L91 | outC->_L92 | outC->_L93;
  /* 2 */
  PublishMQTT(outC->_L89, outC->_L91, outC->_L92, outC->_L93, outC->_L96);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** test.c
** Generation date: 2017-11-16T00:41:55
*************************************************************$ */


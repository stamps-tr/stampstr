/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/Simulation/config.txt
** Generation date: 2017-11-21T21:46:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "test.h"

#ifndef KCG_USER_DEFINED_INIT
void test_init(outC_test *outC)
{
  outC->_L142 = 0;
  outC->_L143 = 0;
  outC->_L144 = 0;
  outC->_L139 = 0;
  outC->_L140 = 0;
  outC->_L141 = 0;
  outC->_L136 = 0;
  outC->_L137 = 0;
  outC->_L138 = 0;
  outC->_L126 = 0;
  outC->_L123 = 0;
  outC->_L96 = kcg_true;
  outC->_L94 = 0;
  outC->_L93 = 0;
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
  outC->_L94 = 4;
  outC->_L126 = 0;
  /* 7 */ if (outC->_L88) {
    outC->_L93 = outC->_L94;
  }
  else {
    outC->_L93 = outC->_L126;
  }
  outC->_L142 = 1;
  outC->_L144 = 0;
  /* 15 */ if (outC->_L83) {
    outC->_L143 = outC->_L142;
  }
  else {
    outC->_L143 = outC->_L144;
  }
  outC->_L140 = 2;
  outC->_L141 = 0;
  /* 14 */ if (outC->_L86) {
    outC->_L139 = outC->_L140;
  }
  else {
    outC->_L139 = outC->_L141;
  }
  outC->_L136 = 3;
  outC->_L138 = 0;
  /* 13 */ if (outC->_L87) {
    outC->_L137 = outC->_L136;
  }
  else {
    outC->_L137 = outC->_L138;
  }
  outC->_L123 = outC->_L143 + outC->_L139 + outC->_L137 + outC->_L93;
  outC->_L96 = outC->_L83 | outC->_L86 | outC->_L87 | outC->_L88;
  /* 2 */ PublishMQTT(outC->_L123, outC->_L96);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** test.c
** Generation date: 2017-11-21T21:46:53
*************************************************************$ */


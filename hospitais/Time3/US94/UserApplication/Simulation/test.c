/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Users/Julhio/Desktop/US94/UserApplication/Simulation/config.txt
** Generation date: 2017-10-26T20:14:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "test.h"

#ifndef KCG_USER_DEFINED_INIT
void test_init(outC_test *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  for (i = 0; i < 10; i++) {
    outC->_L83[i] = ' ';
  }
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L82[i1] = ' ';
  }
  for (i2 = 0; i2 < 150; i2++) {
    outC->_L81[i2] = ' ';
  }
  outC->_L78 = 0;
  outC->_L77 = 0;
  outC->_L76 = 0;
  outC->_L44 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L4 = kcg_true;
  outC->SignalToLED = 0;
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
  outC->_L47 = inC->SignalFromButton;
  outC->_L46 = kcg_true;
  outC->_L48 = kcg_false;
  /* 5 */ if (outC->_L47) {
    outC->_L44 = outC->_L46;
  }
  else {
    outC->_L44 = outC->_L48;
  }
  kcg_copy_array_char_150(&outC->_L81, &inC->DescriptionFromDisplay);
  kcg_copy_array_char_10(&outC->_L82, &inC->Latitude);
  kcg_copy_array_char_10(&outC->_L83, &inC->Longitude);
  /* 1 */ PublishMQTT(outC->_L44, &outC->_L81, &outC->_L82, &outC->_L83);
  outC->_L78 = GREEN;
  outC->_L77 = RED;
  /* 7 */ if (outC->_L47) {
    outC->_L76 = outC->_L78;
  }
  else {
    outC->_L76 = outC->_L77;
  }
  outC->SignalToLED = outC->_L76;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** test.c
** Generation date: 2017-10-26T20:14:50
*************************************************************$ */


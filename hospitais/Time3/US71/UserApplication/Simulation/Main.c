/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/config.txt
** Generation date: 2017-09-20T22:06:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Main.h"

/* Main/ */
void Main(outC_Main *outC)
{
  kcg_copy_array_char_5(&outC->_L2, (array_char_5 *) &LONGITUDE);
  kcg_copy_array_char_5(&outC->Longitude, &outC->_L2);
  kcg_copy_array_char_5(&outC->_L3, (array_char_5 *) &LATITUDE);
  outC->_L1 = kcg_true;
  outC->Emit = outC->_L1;
  kcg_copy_array_char_5(&outC->Latitude, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void Main_init(outC_Main *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L1 = kcg_true;
  for (idx = 0; idx < 5; idx++) {
    outC->_L2[idx] = ' ';
  }
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L3[idx1] = ' ';
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->Longitude[idx2] = ' ';
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->Latitude[idx3] = ' ';
  }
  outC->Emit = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Main_reset(outC_Main *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.c
** Generation date: 2017-09-20T22:06:06
*************************************************************$ */


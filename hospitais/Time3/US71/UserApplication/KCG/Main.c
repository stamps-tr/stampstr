/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/KCG/config.txt
** Generation date: 2017-09-20T22:04:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Main.h"

/* Main/ */
void Main(outC_Main *outC)
{
  outC->Emit = kcg_true;
  kcg_copy_array_char_5(&outC->Latitude, (array_char_5 *) &LATITUDE);
  kcg_copy_array_char_5(&outC->Longitude, (array_char_5 *) &LONGITUDE);
}

#ifndef KCG_USER_DEFINED_INIT
void Main_init(outC_Main *outC)
{
  kcg_size idx;

  outC->Emit = kcg_true;
  for (idx = 0; idx < 5; idx++) {
    outC->Longitude[idx] = ' ';
    outC->Latitude[idx] = ' ';
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Main_reset(outC_Main *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.c
** Generation date: 2017-09-20T22:04:19
*************************************************************$ */


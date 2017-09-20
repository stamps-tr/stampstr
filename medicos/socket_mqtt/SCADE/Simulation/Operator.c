/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Pedro/Documents/ITA/CE-235/socket_mqtt/Simulation/config.txt
** Generation date: 2017-09-16T15:45:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator.h"

/* Operator/ */
void Operator(outC_Operator *outC)
{
  outC->_L5 = kcg_lit_int32(10);
  outC->n_times_1_int32 = outC->_L5;
  /* @1/_/v4= */
  if (outC->init) {
    outC->v4_times_1_int32 = outC->n_times_1_int32;
  }
  else {
    outC->v4_times_1_int32 = outC->v3_times_1_int32;
  }
  outC->_L4 = kcg_true;
  outC->c_times_1_int32 = outC->_L4;
  /* @1/_/v3= */
  if (outC->v4_times_1_int32 < kcg_lit_int32(0)) {
    outC->v3_times_1_int32 = outC->v4_times_1_int32;
  }
  else /* @1/_/v3= */
  if (outC->c_times_1_int32) {
    outC->v3_times_1_int32 = outC->v4_times_1_int32 - kcg_lit_int32(1);
  }
  else {
    outC->v3_times_1_int32 = outC->v4_times_1_int32;
  }
  outC->o_times_1_int32 = outC->c_times_1_int32 & (outC->v3_times_1_int32 ==
      kcg_lit_int32(0));
  outC->_L3 = outC->o_times_1_int32;
  outC->_L1 = /* _L1=(PublishMQTT#1)/ */ PublishMQTT(outC->_L3);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Operator_init(outC_Operator *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->v4_times_1_int32 = kcg_lit_int32(0);
  outC->n_times_1_int32 = kcg_lit_int32(0);
  outC->c_times_1_int32 = kcg_true;
  outC->o_times_1_int32 = kcg_true;
  outC->v3_times_1_int32 = kcg_lit_int32(0);
  outC->init = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Operator_reset(outC_Operator *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Operator/
  @1: (times#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator.c
** Generation date: 2017-09-16T15:45:17
*************************************************************$ */


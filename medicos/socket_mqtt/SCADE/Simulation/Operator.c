/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/victo/stampstr/medicos/socket_mqtt/SCADE/Simulation/config.txt
** Generation date: 2017-10-09T13:04:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator.h"

/* Operator/ */
void Operator(outC_Operator *outC)
{
  outC->_L4 = kcg_true;
  outC->_L1 = /* _L1=(PublishMQTT#1)/ */ PublishMQTT(outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Operator_init(outC_Operator *outC)
{
  outC->_L4 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Operator_reset(outC_Operator *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator.c
** Generation date: 2017-10-09T13:04:46
*************************************************************$ */


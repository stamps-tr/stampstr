/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/KCG/config.txt
** Generation date: 2017-10-27T20:25:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "S2A.h"

/* S2A/ */
void S2A(inC_S2A *inC, outC_S2A *outC)
{
  kcg_uint8 tmp;

  /* _L27= */
  if (inC->SignalPortButton) {
    outC->EmitToDisplay = !outC->_L27;
  }
  else {
    outC->EmitToDisplay = outC->_L27;
  }
  /* _L34= */
  if (outC->EmitToDisplay) {
    tmp = OPEN;
  }
  else {
    tmp = CLOSED;
  }
  outC->Debug = /* _L22=(Comm#2)/ */ Comm(tmp);
  outC->ReqLayerVisible = outC->_L12;
  outC->ReqLayerActive = outC->_L12;
  outC->_L12 = kcg_false;
  outC->_L27 = outC->EmitToDisplay;
}

#ifndef KCG_USER_DEFINED_INIT
void S2A_init(outC_S2A *outC)
{
  outC->_L27 = kcg_false;
  outC->_L12 = kcg_true;
  outC->ReqLayerActive = kcg_true;
  outC->ReqLayerVisible = kcg_true;
  outC->EmitToDisplay = kcg_true;
  outC->Debug = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void S2A_reset(outC_S2A *outC)
{
  outC->_L27 = kcg_false;
  outC->_L12 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** S2A.c
** Generation date: 2017-10-27T20:25:39
*************************************************************$ */


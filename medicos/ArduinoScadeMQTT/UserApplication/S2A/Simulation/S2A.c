/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/Simulation/config.txt
** Generation date: 2017-10-27T20:33:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "S2A.h"

/* S2A/ */
void S2A(inC_S2A *inC, outC_S2A *outC)
{
  outC->_L36 = CLOSED;
  outC->_L35 = OPEN;
  /* _L29= */
  if (outC->init) {
    outC->_L29 = kcg_false;
  }
  else {
    outC->_L29 = outC->_L27;
  }
  outC->_L30 = !outC->_L29;
  outC->_L31 = inC->SignalPortButton;
  /* _L27= */
  if (outC->_L31) {
    outC->_L27 = outC->_L30;
  }
  else {
    outC->_L27 = outC->_L29;
  }
  /* _L34= */
  if (outC->_L27) {
    outC->_L34 = outC->_L35;
  }
  else {
    outC->_L34 = outC->_L36;
  }
  outC->_L22 = /* _L22=(Comm#2)/ */ Comm(outC->_L34);
  outC->Debug = outC->_L22;
  outC->EmitToDisplay = outC->_L27;
  /* _L7= */
  if (outC->init) {
    outC->_L7 = kcg_true;
  }
  else {
    outC->_L7 = outC->_L12;
  }
  outC->_L12 = kcg_false;
  outC->ReqLayerVisible = outC->_L7;
  outC->ReqLayerActive = outC->_L7;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void S2A_init(outC_S2A *outC)
{
  outC->_L34 = kcg_lit_uint8(0);
  outC->_L35 = kcg_lit_uint8(0);
  outC->_L36 = kcg_lit_uint8(0);
  outC->_L31 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L22 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L12 = kcg_true;
  outC->init = kcg_true;
  outC->Debug = kcg_lit_float32(0.0);
  outC->EmitToDisplay = kcg_true;
  outC->ReqLayerVisible = kcg_true;
  outC->ReqLayerActive = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void S2A_reset(outC_S2A *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** S2A.c
** Generation date: 2017-10-27T20:33:47
*************************************************************$ */


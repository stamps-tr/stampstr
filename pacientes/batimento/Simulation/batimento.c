/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/victo/SCADE/batimento/Simulation/config.txt
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "batimento.h"

/* batimento/ */
void batimento(outC_batimento *outC)
{
  outC->_L32 = GRAPH_CONSTANT_ADD;
  outC->_L31 = GRAPH_CONSTANT_DIVIDE;
  /* _L20=(read#2)/ */ read(&outC->_L20);
  if ((0 <= 4) & (4 < 5)) {
    outC->_L25 = outC->_L20[4];
  }
  else {
    outC->_L25 = kcg_lit_uint32(0);
  }
  /* _L28=(math::NumericToFloat32#1)/ */
  NumericToFloat32_math_uint32(outC->_L25, &outC->Context_NumericToFloat32_1);
  outC->_L28 = outC->Context_NumericToFloat32_1.Output1_uint32;
  outC->_L30 = outC->_L28 / outC->_L31;
  outC->_L29 = outC->_L30 + outC->_L32;
  outC->atual = outC->_L29;
  if ((0 <= 0) & (0 < 5)) {
    outC->_L24 = outC->_L20[0];
  }
  else {
    outC->_L24 = kcg_lit_uint32(0);
  }
  if ((0 <= 1) & (1 < 5)) {
    outC->_L23 = outC->_L20[1];
  }
  else {
    outC->_L23 = kcg_lit_uint32(0);
  }
  if ((0 <= 3) & (3 < 5)) {
    outC->_L22 = outC->_L20[3];
  }
  else {
    outC->_L22 = kcg_lit_uint32(0);
  }
  if ((0 <= 2) & (2 < 5)) {
    outC->_L21 = outC->_L20[2];
  }
  else {
    outC->_L21 = kcg_lit_uint32(0);
  }
  outC->_L18 = TRUE;
  outC->p5 = outC->_L25;
  outC->p4 = outC->_L22;
  outC->p3 = outC->_L21;
  outC->p2 = outC->_L23;
  outC->p1 = outC->_L24;
  outC->Emit = outC->_L18;
}

#ifndef KCG_USER_DEFINED_INIT
void batimento_init(outC_batimento *outC)
{
  kcg_size idx;

  outC->_L32 = kcg_lit_float32(0.0);
  outC->_L31 = kcg_lit_float32(0.0);
  outC->_L30 = kcg_lit_float32(0.0);
  outC->_L29 = kcg_lit_float32(0.0);
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L25 = kcg_lit_uint32(0);
  outC->_L21 = kcg_lit_uint32(0);
  outC->_L22 = kcg_lit_uint32(0);
  outC->_L23 = kcg_lit_uint32(0);
  outC->_L24 = kcg_lit_uint32(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L20[idx] = kcg_lit_uint32(0);
  }
  outC->_L18 = kcg_true;
  outC->atual = kcg_lit_float32(0.0);
  outC->p5 = kcg_lit_uint32(0);
  outC->p4 = kcg_lit_uint32(0);
  outC->p3 = kcg_lit_uint32(0);
  outC->p2 = kcg_lit_uint32(0);
  outC->p1 = kcg_lit_uint32(0);
  outC->Emit = kcg_true;
  /* _L28=(math::NumericToFloat32#1)/ */
  NumericToFloat32_init_math_uint32(&outC->Context_NumericToFloat32_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void batimento_reset(outC_batimento *outC)
{
  /* _L28=(math::NumericToFloat32#1)/ */
  NumericToFloat32_reset_math_uint32(&outC->Context_NumericToFloat32_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** batimento.c
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */


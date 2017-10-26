/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/victo/SCADE/batimento/Simulation/config.txt
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NumericToFloat32_math_uint32.h"

/* math::NumericToFloat32/ */
void NumericToFloat32_math_uint32(
  /* Input1/ */
  kcg_uint32 Input1_uint32,
  outC_NumericToFloat32_math_uint32 *outC)
{
  outC->_L1_uint32 = Input1_uint32;
  outC->_L2_uint32 = /* _L2= */(kcg_float32) outC->_L1_uint32;
  outC->Output1_uint32 = outC->_L2_uint32;
}

#ifndef KCG_USER_DEFINED_INIT
void NumericToFloat32_init_math_uint32(outC_NumericToFloat32_math_uint32 *outC)
{
  outC->_L2_uint32 = kcg_lit_float32(0.0);
  outC->_L1_uint32 = kcg_lit_uint32(0);
  outC->Output1_uint32 = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NumericToFloat32_reset_math_uint32(outC_NumericToFloat32_math_uint32 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** NumericToFloat32_math_uint32.c
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */


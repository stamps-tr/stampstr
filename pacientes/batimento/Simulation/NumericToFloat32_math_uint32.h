/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/victo/SCADE/batimento/Simulation/config.txt
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */
#ifndef _NumericToFloat32_math_uint32_H_
#define _NumericToFloat32_math_uint32_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* Output1/ */ Output1_uint32;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_uint32 /* _L1/ */ _L1_uint32;
  kcg_float32 /* _L2/ */ _L2_uint32;
} outC_NumericToFloat32_math_uint32;

/* ===========  node initialization and cycle functions  =========== */
/* math::NumericToFloat32/ */
extern void NumericToFloat32_math_uint32(
  /* Input1/ */
  kcg_uint32 Input1_uint32,
  outC_NumericToFloat32_math_uint32 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NumericToFloat32_reset_math_uint32(
  outC_NumericToFloat32_math_uint32 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NumericToFloat32_init_math_uint32(
  outC_NumericToFloat32_math_uint32 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NumericToFloat32_math_uint32_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** NumericToFloat32_math_uint32.h
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */


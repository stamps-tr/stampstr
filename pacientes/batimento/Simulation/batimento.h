/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/victo/SCADE/batimento/Simulation/config.txt
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */
#ifndef _batimento_H_
#define _batimento_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "NumericToFloat32_math_uint32.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Emit/ */ Emit;
  kcg_uint32 /* p1/ */ p1;
  kcg_uint32 /* p2/ */ p2;
  kcg_uint32 /* p3/ */ p3;
  kcg_uint32 /* p4/ */ p4;
  kcg_uint32 /* p5/ */ p5;
  kcg_float32 /* atual/ */ atual;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NumericToFloat32_math_uint32 /* _L28=(math::NumericToFloat32#1)/ */ Context_NumericToFloat32_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L18/ */ _L18;
  array_uint32_5 /* _L20/ */ _L20;
  kcg_uint32 /* _L24/ */ _L24;
  kcg_uint32 /* _L23/ */ _L23;
  kcg_uint32 /* _L22/ */ _L22;
  kcg_uint32 /* _L21/ */ _L21;
  kcg_uint32 /* _L25/ */ _L25;
  kcg_float32 /* _L28/ */ _L28;
  kcg_float32 /* _L29/ */ _L29;
  kcg_float32 /* _L30/ */ _L30;
  kcg_float32 /* _L31/ */ _L31;
  kcg_float32 /* _L32/ */ _L32;
} outC_batimento;

/* ===========  node initialization and cycle functions  =========== */
/* batimento/ */
extern void batimento(outC_batimento *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void batimento_reset(outC_batimento *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void batimento_init(outC_batimento *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _batimento_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** batimento.h
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */


/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/victo/SCADE/batimento/Simulation/config.txt
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_uint32_5
kcg_bool kcg_comp_array_uint32_5(array_uint32_5 *kcg_c1, array_uint32_5 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_uint32_5 */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** kcg_types.c
** Generation date: 2017-10-26T20:32:19
*************************************************************$ */


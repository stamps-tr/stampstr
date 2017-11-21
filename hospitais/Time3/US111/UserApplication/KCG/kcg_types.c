/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/KCG/config.txt
** Generation date: 2017-11-16T00:41:55
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_LutIndex_lut
kcg_bool kcg_comp_LutIndex_lut(LutIndex_lut *kcg_c1, LutIndex_lut *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->f == kcg_c2->f);
  kcg_equ = kcg_equ & (kcg_c1->k == kcg_c2->k);
  return kcg_equ;
}
#endif /* kcg_use_LutIndex_lut */

/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.c
** Generation date: 2017-11-16T00:41:55
*************************************************************$ */


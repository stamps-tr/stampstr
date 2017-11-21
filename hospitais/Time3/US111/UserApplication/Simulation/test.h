/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/Simulation/config.txt
** Generation date: 2017-11-19T23:17:27
*************************************************************$ */
#ifndef _test_H_
#define _test_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* test::SignalButtonPoor */ SignalButtonPoor;
  kcg_bool /* test::SignalButtonFair */ SignalButtonFair;
  kcg_bool /* test::SignalButtonGood */ SignalButtonGood;
  kcg_bool /* test::SignalButtonExcellent */ SignalButtonExcellent;
} inC_test;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* test::Emit */ Emit;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* test::_L4 */ _L4;
  kcg_bool /* test::_L83 */ _L83;
  kcg_bool /* test::_L86 */ _L86;
  kcg_bool /* test::_L87 */ _L87;
  kcg_bool /* test::_L88 */ _L88;
  kcg_int /* test::_L89 */ _L89;
  kcg_int /* test::_L91 */ _L91;
  kcg_int /* test::_L92 */ _L92;
  kcg_int /* test::_L93 */ _L93;
  kcg_int /* test::_L95 */ _L95;
  kcg_int /* test::_L94 */ _L94;
  kcg_bool /* test::_L96 */ _L96;
  kcg_int /* test::_L98 */ _L98;
  kcg_int /* test::_L101 */ _L101;
  kcg_int /* test::_L103 */ _L103;
  kcg_int /* test::_L102 */ _L102;
  kcg_int /* test::_L105 */ _L105;
  kcg_int /* test::_L106 */ _L106;
} outC_test;

/* ===========  node initialization and cycle functions  =========== */
/* test */
extern void test(inC_test *inC, outC_test *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void test_reset(outC_test *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void test_init(outC_test *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _test_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** test.h
** Generation date: 2017-11-19T23:17:27
*************************************************************$ */


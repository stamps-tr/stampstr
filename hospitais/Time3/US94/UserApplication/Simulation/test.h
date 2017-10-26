/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Users/Julhio/Desktop/US94/UserApplication/Simulation/config.txt
** Generation date: 2017-10-26T20:14:50
*************************************************************$ */
#ifndef _test_H_
#define _test_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  array_char_150 /* test::DescriptionFromDisplay */ DescriptionFromDisplay;
  kcg_bool /* test::SignalFromButton */ SignalFromButton;
  array_char_10 /* test::Latitude */ Latitude;
  array_char_10 /* test::Longitude */ Longitude;
  kcg_bool /* test::Notification */ Notification;
} inC_test;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* test::Emit */ Emit;
  kcg_int /* test::SignalToLED */ SignalToLED;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* test::_L4 */ _L4;
  kcg_bool /* test::_L48 */ _L48;
  kcg_bool /* test::_L47 */ _L47;
  kcg_bool /* test::_L46 */ _L46;
  kcg_bool /* test::_L44 */ _L44;
  kcg_int /* test::_L76 */ _L76;
  kcg_int /* test::_L77 */ _L77;
  kcg_int /* test::_L78 */ _L78;
  array_char_150 /* test::_L81 */ _L81;
  array_char_10 /* test::_L82 */ _L82;
  array_char_10 /* test::_L83 */ _L83;
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
** Generation date: 2017-10-26T20:14:50
*************************************************************$ */


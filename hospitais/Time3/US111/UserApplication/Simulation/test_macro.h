#ifndef _TEST_MACRO_H_
#define _TEST_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file test_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "test.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_test inputs_ctx;
    outC_test outputs_ctx;
} WU_test;
#define WU_CTX_TYPE_test WU_test
#define WU_CTX_TYPE_test_SIZE sizeof(WU_test)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_test() 

#define DECLARE_EXT_SENSORS_test(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_test_SignalButtonPoor(context) context.inputs_ctx.SignalButtonPoor  /* test/SignalButtonPoor */
#define VAR_test_SignalButtonPoor VARC_test_SignalButtonPoor(CTX_test)

#define VARC_test_SignalButtonFair(context) context.inputs_ctx.SignalButtonFair  /* test/SignalButtonFair */
#define VAR_test_SignalButtonFair VARC_test_SignalButtonFair(CTX_test)

#define VARC_test_SignalButtonGood(context) context.inputs_ctx.SignalButtonGood  /* test/SignalButtonGood */
#define VAR_test_SignalButtonGood VARC_test_SignalButtonGood(CTX_test)

#define VARC_test_SignalButtonExcellent(context) context.inputs_ctx.SignalButtonExcellent  /* test/SignalButtonExcellent */
#define VAR_test_SignalButtonExcellent VARC_test_SignalButtonExcellent(CTX_test)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_test_Emit(context) context.outputs_ctx.Emit  /* test/Emit */
#define VAR_test_Emit VARC_test_Emit(CTX_test)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_SignalButtonPoor kcg_bool
#define CPY_SignalButtonPoor(DST, SRC) DST = SRC
#define T_SignalButtonFair kcg_bool
#define CPY_SignalButtonFair(DST, SRC) DST = SRC
#define T_SignalButtonGood kcg_bool
#define CPY_SignalButtonGood(DST, SRC) DST = SRC
#define T_SignalButtonExcellent kcg_bool
#define CPY_SignalButtonExcellent(DST, SRC) DST = SRC
#define T_Emit kcg_bool
#define CPY_Emit(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_test(context)  WU_test context;

#define DECLARE_CTXT_test() DECLAREC_CTXT_test(CTX_test)

#define DECLAREC_EXT_CTXT_test(MODE , context) MODE WU_test context;

#define DECLARE_EXT_CTXT_test(MODE) DECLAREC_EXT_CTXT_test(MODE , CTX_test)

#define INITC_test(context)     #ifndef KCG_USER_DEFINED_INIT\
        test_init(&context.outputs_ctx);\
    #else\
        #ifndef KCG_NO_EXTERN_CALL_TO_RESET\
            test_reset(&context.outputs_ctx);\
        #endif\
    #endif
#define INIT_test() INITC_test(CTX_test)

#define PERFORMC_test(context)     test( \
        &context.inputs_ctx /* input context */,\
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_test() PERFORMC_test(CTX_test)

/*$************** SCADE Macro wrapper *********************
** End of file test_macro.h
***********************************************************$*/

#endif /* _TEST_MACRO_H_ */

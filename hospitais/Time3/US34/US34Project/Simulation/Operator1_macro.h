#ifndef _OPERATOR1_MACRO_H_
#define _OPERATOR1_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file Operator1_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "Operator1.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    outC_Operator1 outputs_ctx;
} WU_Operator1;
#define WU_CTX_TYPE_Operator1 WU_Operator1
#define WU_CTX_TYPE_Operator1_SIZE sizeof(WU_Operator1)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_Operator1() 

#define DECLARE_EXT_SENSORS_Operator1(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_Operator1_EmitToCDS(context) context.outputs_ctx.EmitToCDS  /* Operator1/EmitToCDS */
#define VAR_Operator1_EmitToCDS VARC_Operator1_EmitToCDS(CTX_Operator1)

#define VARC_Operator1_SignalToLed(context) context.outputs_ctx.SignalToLed  /* Operator1/SignalToLed */
#define VAR_Operator1_SignalToLed VARC_Operator1_SignalToLed(CTX_Operator1)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_EmitToCDS kcg_bool
#define CPY_EmitToCDS(DST, SRC) DST = SRC
#define T_SignalToLed kcg_uint8
#define CPY_SignalToLed(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_Operator1(context)  WU_Operator1 context;

#define DECLARE_CTXT_Operator1() DECLAREC_CTXT_Operator1(CTX_Operator1)

#define DECLAREC_EXT_CTXT_Operator1(MODE , context) MODE WU_Operator1 context;

#define DECLARE_EXT_CTXT_Operator1(MODE) DECLAREC_EXT_CTXT_Operator1(MODE , CTX_Operator1)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_Operator1(context) Operator1_init(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_Operator1(context) Operator1_reset(&context.outputs_ctx);
    #else
        #define INITC_Operator1(context) 
    #endif
#endif

#define INIT_Operator1() INITC_Operator1(CTX_Operator1)

#define PERFORMC_Operator1(context)     Operator1( \
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_Operator1() PERFORMC_Operator1(CTX_Operator1)

/*$************** SCADE Macro wrapper *********************
** End of file Operator1_macro.h
***********************************************************$*/

#endif /* _OPERATOR1_MACRO_H_ */

#ifndef _CONTROL_MACRO_H_
#define _CONTROL_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file control_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "control.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_control inputs_ctx;
    outC_control outputs_ctx;
} WU_control;
#define WU_CTX_TYPE_control WU_control
#define WU_CTX_TYPE_control_SIZE sizeof(WU_control)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_control() 

#define DECLARE_EXT_SENSORS_control(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_control_SignalFromButton(context) context.inputs_ctx.SignalFromButton  /* control/SignalFromButton */
#define VAR_control_SignalFromButton VARC_control_SignalFromButton(CTX_control)

#define VARC_control_Description(context) context.inputs_ctx.Description  /* control/Description */
#define VAR_control_Description VARC_control_Description(CTX_control)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_control_Emit(context) context.outputs_ctx.Emit  /* control/Emit */
#define VAR_control_Emit VARC_control_Emit(CTX_control)

#define VARC_control_SignalToLED(context) context.outputs_ctx.SignalToLED  /* control/SignalToLED */
#define VAR_control_SignalToLED VARC_control_SignalToLED(CTX_control)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_SignalFromButton kcg_bool
#define CPY_SignalFromButton(DST, SRC) DST = SRC
#define T_Description array_char_150
#define CPY_Description(DST, SRC) kcg_copy_array_char_150(DST, SRC)
#define T_Emit kcg_bool
#define CPY_Emit(DST, SRC) DST = SRC
#define T_SignalToLED kcg_uint8
#define CPY_SignalToLED(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_control(context)  WU_control context;

#define DECLARE_CTXT_control() DECLAREC_CTXT_control(CTX_control)

#define DECLAREC_EXT_CTXT_control(MODE , context) MODE WU_control context;

#define DECLARE_EXT_CTXT_control(MODE) DECLAREC_EXT_CTXT_control(MODE , CTX_control)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_control(context) control_init(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_control(context) control_reset(&context.outputs_ctx);
    #else
        #define INITC_control(context) 
    #endif
#endif

#define INIT_control() INITC_control(CTX_control)

#define PERFORMC_control(context)     control( \
        &context.inputs_ctx /* input context */,\
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_control() PERFORMC_control(CTX_control)

/*$************** SCADE Macro wrapper *********************
** End of file control_macro.h
***********************************************************$*/

#endif /* _CONTROL_MACRO_H_ */

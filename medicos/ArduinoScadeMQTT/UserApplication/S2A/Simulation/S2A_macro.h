#ifndef _S2A_MACRO_H_
#define _S2A_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file S2A_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "S2A.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_S2A inputs_ctx;
    outC_S2A outputs_ctx;
} WU_S2A;
#define WU_CTX_TYPE_S2A WU_S2A
#define WU_CTX_TYPE_S2A_SIZE sizeof(WU_S2A)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_S2A() 

#define DECLARE_EXT_SENSORS_S2A(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_S2A_SignalPortButton(context) context.inputs_ctx.SignalPortButton  /* S2A/SignalPortButton */
#define VAR_S2A_SignalPortButton VARC_S2A_SignalPortButton(CTX_S2A)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_S2A_ReqLayerActive(context) context.outputs_ctx.ReqLayerActive  /* S2A/ReqLayerActive */
#define VAR_S2A_ReqLayerActive VARC_S2A_ReqLayerActive(CTX_S2A)

#define VARC_S2A_ReqLayerVisible(context) context.outputs_ctx.ReqLayerVisible  /* S2A/ReqLayerVisible */
#define VAR_S2A_ReqLayerVisible VARC_S2A_ReqLayerVisible(CTX_S2A)

#define VARC_S2A_EmitToDisplay(context) context.outputs_ctx.EmitToDisplay  /* S2A/EmitToDisplay */
#define VAR_S2A_EmitToDisplay VARC_S2A_EmitToDisplay(CTX_S2A)

#define VARC_S2A_Debug(context) context.outputs_ctx.Debug  /* S2A/Debug */
#define VAR_S2A_Debug VARC_S2A_Debug(CTX_S2A)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_SignalPortButton kcg_bool
#define CPY_SignalPortButton(DST, SRC) DST = SRC
#define T_ReqLayerActive kcg_bool
#define CPY_ReqLayerActive(DST, SRC) DST = SRC
#define T_ReqLayerVisible kcg_bool
#define CPY_ReqLayerVisible(DST, SRC) DST = SRC
#define T_EmitToDisplay kcg_bool
#define CPY_EmitToDisplay(DST, SRC) DST = SRC
#define T_Debug kcg_float32
#define CPY_Debug(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_S2A(context)  WU_S2A context;

#define DECLARE_CTXT_S2A() DECLAREC_CTXT_S2A(CTX_S2A)

#define DECLAREC_EXT_CTXT_S2A(MODE , context) MODE WU_S2A context;

#define DECLARE_EXT_CTXT_S2A(MODE) DECLAREC_EXT_CTXT_S2A(MODE , CTX_S2A)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_S2A(context) S2A_init(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_S2A(context) S2A_reset(&context.outputs_ctx);
    #else
        #define INITC_S2A(context) 
    #endif
#endif

#define INIT_S2A() INITC_S2A(CTX_S2A)

#define PERFORMC_S2A(context)     S2A( \
        &context.inputs_ctx /* input context */,\
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_S2A() PERFORMC_S2A(CTX_S2A)

/*$************** SCADE Macro wrapper *********************
** End of file S2A_macro.h
***********************************************************$*/

#endif /* _S2A_MACRO_H_ */

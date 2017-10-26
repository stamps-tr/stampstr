#ifndef _BATIMENTO_MACRO_H_
#define _BATIMENTO_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file batimento_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "batimento.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    outC_batimento outputs_ctx;
} WU_batimento;
#define WU_CTX_TYPE_batimento WU_batimento
#define WU_CTX_TYPE_batimento_SIZE sizeof(WU_batimento)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_batimento() 

#define DECLARE_EXT_SENSORS_batimento(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_batimento_Emit(context) context.outputs_ctx.Emit  /* batimento/Emit */
#define VAR_batimento_Emit VARC_batimento_Emit(CTX_batimento)

#define VARC_batimento_p1(context) context.outputs_ctx.p1  /* batimento/p1 */
#define VAR_batimento_p1 VARC_batimento_p1(CTX_batimento)

#define VARC_batimento_p2(context) context.outputs_ctx.p2  /* batimento/p2 */
#define VAR_batimento_p2 VARC_batimento_p2(CTX_batimento)

#define VARC_batimento_p3(context) context.outputs_ctx.p3  /* batimento/p3 */
#define VAR_batimento_p3 VARC_batimento_p3(CTX_batimento)

#define VARC_batimento_p4(context) context.outputs_ctx.p4  /* batimento/p4 */
#define VAR_batimento_p4 VARC_batimento_p4(CTX_batimento)

#define VARC_batimento_p5(context) context.outputs_ctx.p5  /* batimento/p5 */
#define VAR_batimento_p5 VARC_batimento_p5(CTX_batimento)

#define VARC_batimento_atual(context) context.outputs_ctx.atual  /* batimento/atual */
#define VAR_batimento_atual VARC_batimento_atual(CTX_batimento)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_Emit kcg_bool
#define CPY_Emit(DST, SRC) DST = SRC
#define T_p1 kcg_uint32
#define CPY_p1(DST, SRC) DST = SRC
#define T_p2 kcg_uint32
#define CPY_p2(DST, SRC) DST = SRC
#define T_p3 kcg_uint32
#define CPY_p3(DST, SRC) DST = SRC
#define T_p4 kcg_uint32
#define CPY_p4(DST, SRC) DST = SRC
#define T_p5 kcg_uint32
#define CPY_p5(DST, SRC) DST = SRC
#define T_atual kcg_float32
#define CPY_atual(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_batimento(context)  WU_batimento context;

#define DECLARE_CTXT_batimento() DECLAREC_CTXT_batimento(CTX_batimento)

#define DECLAREC_EXT_CTXT_batimento(MODE , context) MODE WU_batimento context;

#define DECLARE_EXT_CTXT_batimento(MODE) DECLAREC_EXT_CTXT_batimento(MODE , CTX_batimento)

#define INITC_batimento(context)     #ifndef KCG_USER_DEFINED_INIT\
        batimento_init(&context.outputs_ctx);\
    #else\
        #ifndef KCG_NO_EXTERN_CALL_TO_RESET\
            batimento_reset(&context.outputs_ctx);\
        #endif\
    #endif
#define INIT_batimento() INITC_batimento(CTX_batimento)

#define PERFORMC_batimento(context)     batimento( \
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_batimento() PERFORMC_batimento(CTX_batimento)

/*$************** SCADE Macro wrapper *********************
** End of file batimento_macro.h
***********************************************************$*/

#endif /* _BATIMENTO_MACRO_H_ */

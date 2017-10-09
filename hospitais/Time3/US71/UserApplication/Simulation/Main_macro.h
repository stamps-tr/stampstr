#ifndef _MAIN_MACRO_H_
#define _MAIN_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file Main_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "Main.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    outC_Main outputs_ctx;
} WU_Main;
#define WU_CTX_TYPE_Main WU_Main
#define WU_CTX_TYPE_Main_SIZE sizeof(WU_Main)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_Main() 

#define DECLARE_EXT_SENSORS_Main(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_Main_Emit(context) context.outputs_ctx.Emit  /* Main/Emit */
#define VAR_Main_Emit VARC_Main_Emit(CTX_Main)

#define VARC_Main_Latitude(context) context.outputs_ctx.Latitude  /* Main/Latitude */
#define VAR_Main_Latitude VARC_Main_Latitude(CTX_Main)

#define VARC_Main_Longitude(context) context.outputs_ctx.Longitude  /* Main/Longitude */
#define VAR_Main_Longitude VARC_Main_Longitude(CTX_Main)


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
#define T_Latitude array_char_5
#define CPY_Latitude(DST, SRC) kcg_copy_array_char_5(DST, SRC)
#define T_Longitude array_char_5
#define CPY_Longitude(DST, SRC) kcg_copy_array_char_5(DST, SRC)


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_Main(context)  WU_Main context;

#define DECLARE_CTXT_Main() DECLAREC_CTXT_Main(CTX_Main)

#define DECLAREC_EXT_CTXT_Main(MODE , context) MODE WU_Main context;

#define DECLARE_EXT_CTXT_Main(MODE) DECLAREC_EXT_CTXT_Main(MODE , CTX_Main)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_Main(context) Main_init(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_Main(context) Main_reset(&context.outputs_ctx);
    #else
        #define INITC_Main(context) 
    #endif
#endif

#define INIT_Main() INITC_Main(CTX_Main)

#define PERFORMC_Main(context)     Main( \
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_Main() PERFORMC_Main(CTX_Main)

/*$************** SCADE Macro wrapper *********************
** End of file Main_macro.h
***********************************************************$*/

#endif /* _MAIN_MACRO_H_ */

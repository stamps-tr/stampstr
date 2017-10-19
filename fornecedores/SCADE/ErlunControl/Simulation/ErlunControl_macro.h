#ifndef _ERLUNCONTROL_MACRO_H_
#define _ERLUNCONTROL_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file ErlunControl_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "ErlunControl.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_ErlunControl inputs_ctx;
    outC_ErlunControl outputs_ctx;
} WU_ErlunControl;
#define WU_CTX_TYPE_ErlunControl WU_ErlunControl
#define WU_CTX_TYPE_ErlunControl_SIZE sizeof(WU_ErlunControl)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_ErlunControl() 

#define DECLARE_EXT_SENSORS_ErlunControl(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_ErlunControl_Turn_Btn(context) context.inputs_ctx.Turn_Btn  /* ErlunControl/Turn_Btn */
#define VAR_ErlunControl_Turn_Btn VARC_ErlunControl_Turn_Btn(CTX_ErlunControl)

#define VARC_ErlunControl_Up_Btn(context) context.inputs_ctx.Up_Btn  /* ErlunControl/Up_Btn */
#define VAR_ErlunControl_Up_Btn VARC_ErlunControl_Up_Btn(CTX_ErlunControl)

#define VARC_ErlunControl_Down_Btn(context) context.inputs_ctx.Down_Btn  /* ErlunControl/Down_Btn */
#define VAR_ErlunControl_Down_Btn VARC_ErlunControl_Down_Btn(CTX_ErlunControl)

#define VARC_ErlunControl_Left_Btn(context) context.inputs_ctx.Left_Btn  /* ErlunControl/Left_Btn */
#define VAR_ErlunControl_Left_Btn VARC_ErlunControl_Left_Btn(CTX_ErlunControl)

#define VARC_ErlunControl_Right_Btn(context) context.inputs_ctx.Right_Btn  /* ErlunControl/Right_Btn */
#define VAR_ErlunControl_Right_Btn VARC_ErlunControl_Right_Btn(CTX_ErlunControl)

#define VARC_ErlunControl_Speed_Btn(context) context.inputs_ctx.Speed_Btn  /* ErlunControl/Speed_Btn */
#define VAR_ErlunControl_Speed_Btn VARC_ErlunControl_Speed_Btn(CTX_ErlunControl)

#define VARC_ErlunControl_Speed_BtnValue(context) context.inputs_ctx.Speed_BtnValue  /* ErlunControl/Speed_BtnValue */
#define VAR_ErlunControl_Speed_BtnValue VARC_ErlunControl_Speed_BtnValue(CTX_ErlunControl)

#define VARC_ErlunControl_Photo_Btn(context) context.inputs_ctx.Photo_Btn  /* ErlunControl/Photo_Btn */
#define VAR_ErlunControl_Photo_Btn VARC_ErlunControl_Photo_Btn(CTX_ErlunControl)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_ErlunControl_Turn_BtnTextString(context) context.outputs_ctx.Turn_BtnTextString  /* ErlunControl/Turn_BtnTextString */
#define VAR_ErlunControl_Turn_BtnTextString VARC_ErlunControl_Turn_BtnTextString(CTX_ErlunControl)

#define VARC_ErlunControl_StringSize(context) context.outputs_ctx.StringSize  /* ErlunControl/StringSize */
#define VAR_ErlunControl_StringSize VARC_ErlunControl_StringSize(CTX_ErlunControl)

#define VARC_ErlunControl_Emit2CDS(context) context.outputs_ctx.Emit2CDS  /* ErlunControl/Emit2CDS */
#define VAR_ErlunControl_Emit2CDS VARC_ErlunControl_Emit2CDS(CTX_ErlunControl)

#define VARC_ErlunControl_Layer1Active(context) context.outputs_ctx.Layer1Active  /* ErlunControl/Layer1Active */
#define VAR_ErlunControl_Layer1Active VARC_ErlunControl_Layer1Active(CTX_ErlunControl)

#define VARC_ErlunControl_Layer1Visible(context) context.outputs_ctx.Layer1Visible  /* ErlunControl/Layer1Visible */
#define VAR_ErlunControl_Layer1Visible VARC_ErlunControl_Layer1Visible(CTX_ErlunControl)

#define VARC_ErlunControl_TurnTextColorIndex(context) context.outputs_ctx.TurnTextColorIndex  /* ErlunControl/TurnTextColorIndex */
#define VAR_ErlunControl_TurnTextColorIndex VARC_ErlunControl_TurnTextColorIndex(CTX_ErlunControl)

#define VARC_ErlunControl_EmitVisible(context) context.outputs_ctx.EmitVisible  /* ErlunControl/EmitVisible */
#define VAR_ErlunControl_EmitVisible VARC_ErlunControl_EmitVisible(CTX_ErlunControl)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_Turn_Btn kcg_bool
#define CPY_Turn_Btn(DST, SRC) DST = SRC
#define T_Up_Btn kcg_bool
#define CPY_Up_Btn(DST, SRC) DST = SRC
#define T_Down_Btn kcg_bool
#define CPY_Down_Btn(DST, SRC) DST = SRC
#define T_Left_Btn kcg_bool
#define CPY_Left_Btn(DST, SRC) DST = SRC
#define T_Right_Btn kcg_bool
#define CPY_Right_Btn(DST, SRC) DST = SRC
#define T_Speed_Btn kcg_bool
#define CPY_Speed_Btn(DST, SRC) DST = SRC
#define T_Speed_BtnValue kcg_float32
#define CPY_Speed_BtnValue(DST, SRC) DST = SRC
#define T_Photo_Btn kcg_bool
#define CPY_Photo_Btn(DST, SRC) DST = SRC
#define T_Turn_BtnTextString T_String
#define CPY_Turn_BtnTextString(DST, SRC) kcg_copy_T_String(DST, SRC)
#define T_StringSize T_uChar
#define CPY_StringSize(DST, SRC) DST = SRC
#define T_Emit2CDS kcg_bool
#define CPY_Emit2CDS(DST, SRC) DST = SRC
#define T_Layer1Active kcg_bool
#define CPY_Layer1Active(DST, SRC) DST = SRC
#define T_Layer1Visible kcg_bool
#define CPY_Layer1Visible(DST, SRC) DST = SRC
#define T_TurnTextColorIndex T_uShort
#define CPY_TurnTextColorIndex(DST, SRC) DST = SRC
#define T_EmitVisible kcg_bool
#define CPY_EmitVisible(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_ErlunControl(context)  WU_ErlunControl context;

#define DECLARE_CTXT_ErlunControl() DECLAREC_CTXT_ErlunControl(CTX_ErlunControl)

#define DECLAREC_EXT_CTXT_ErlunControl(MODE , context) MODE WU_ErlunControl context;

#define DECLARE_EXT_CTXT_ErlunControl(MODE) DECLAREC_EXT_CTXT_ErlunControl(MODE , CTX_ErlunControl)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_ErlunControl(context) ErlunControl_init(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_ErlunControl(context) ErlunControl_reset(&context.outputs_ctx);
    #else
        #define INITC_ErlunControl(context) 
    #endif
#endif

#define INIT_ErlunControl() INITC_ErlunControl(CTX_ErlunControl)

#define PERFORMC_ErlunControl(context)     ErlunControl( \
        &context.inputs_ctx /* input context */,\
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_ErlunControl() PERFORMC_ErlunControl(CTX_ErlunControl)

/*$************** SCADE Macro wrapper *********************
** End of file ErlunControl_macro.h
***********************************************************$*/

#endif /* _ERLUNCONTROL_MACRO_H_ */

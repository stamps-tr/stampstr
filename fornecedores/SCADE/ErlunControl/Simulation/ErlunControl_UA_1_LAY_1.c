/*********************************************************
 **
 ** File  ErlunControl_UA_1_LAY_1.c
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version 18.0 (build i12)
 ** 
 ** Date of generation: 2017-10-10T14:20:54
 ** Command line: C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/uaadaptor.exe -sdy C:\Users\Paiva\SCADE\STAMPS-TR\ErlunControl\ErlunControl.sdy -n C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\config\a661_description\a661.xml -outdir C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation -k C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation/kcg_trace.xml -o ErlunControl_UA_1 -i ErlunControl_interface.h -encoding ASCII C:\Users\Paiva\SCADE\STAMPS-TR\cds\CDS.sgfx
 *********************************************************/
#include "kcg_sensors.h"
#include "ErlunControl_UA_1.h"
#include "ErlunControl_UA_1_constants.h"
#include "ErlunControl_UA_1_private.h"

/* Perform UA Request for layer 1 */
A661_INTERNAL uaa_size a661_com_A661_CMD_UA_REQUEST_layer_1(buffer_el msg[], 
  outC_ErlunControl* scade_ctx,  extern_out_ctx_t * extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->Layer1Visible ||
  scade_ctx->Layer1Active){
    
    if (scade_ctx->Layer1Visible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_VISIBLE, 0);
    }
    if (scade_ctx->Layer1Active){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_ACTIVE, 0);
    }
  }
  return offset ;
}

/* Pack messages for layer 1 */
 uaa_size a661_com_layer_1(buffer_el msg[], 
  outC_ErlunControl* scade_ctx,  extern_out_ctx_t* extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->Emit2CDS ||
  scade_ctx->Layer1Active ||
  scade_ctx->Layer1Visible){
    LAYER("a661_layer#1");
    offset = 8;
    a661_msg_cmd_header(msg, 1, ErlunControl_UA_1_DEFAULT_CONTEXT_NUMBER);
    if (scade_ctx->Emit2CDS){
      WIDGET("Up_PicturePushButton#2");
      offset = offset + a661_com_csp_widget_PicturePushButton(msg + offset, 2,
        scade_ctx->Emit2CDS, scade_ctx->EmitVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Down_PicturePushButton#3");
      offset = offset + a661_com_csp_widget_PicturePushButton(msg + offset, 3,
        scade_ctx->Emit2CDS, scade_ctx->EmitVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Left_PicturePushButton#4");
      offset = offset + a661_com_csp_widget_PicturePushButton(msg + offset, 4,
        scade_ctx->Emit2CDS, scade_ctx->EmitVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Right_PicturePushButton#5");
      offset = offset + a661_com_csp_widget_PicturePushButton(msg + offset, 5,
        scade_ctx->Emit2CDS, scade_ctx->EmitVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Turn_Label#7");
      offset = offset + a661_com_csp_widget_Label(msg + offset, 7,
        scade_ctx->Emit2CDS, scade_ctx->TurnTextColorIndex, scade_ctx->Emit2CDS,
        4, scade_ctx->Turn_BtnTextString, scade_ctx->StringSize, 0, 0);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Speed_Label#8");
      offset = offset + a661_com_csp_widget_Label(msg + offset, 8, 0, 0, 0, 0,
        0, 0, scade_ctx->Emit2CDS, scade_ctx->EmitVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Slider#9");
      offset = offset + a661_com_csp_widget_Slider(msg + offset, 9,
        scade_ctx->Emit2CDS, scade_ctx->EmitVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Send_Label#10");
      offset = offset + a661_com_csp_widget_Label(msg + offset, 10, 0, 0, 0, 0,
        0, 0, scade_ctx->Emit2CDS, scade_ctx->EmitVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Send_LabelResult#11");
      offset = offset + a661_com_csp_widget_Label(msg + offset, 11, 0, 0,
        scade_ctx->Emit2CDS, 4, scade_ctx->Send_TextString,
        scade_ctx->StringSize, scade_ctx->Emit2CDS, scade_ctx->EmitVisible);
    }
    if (scade_ctx->Layer1Active ||
    scade_ctx->Layer1Visible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_layer_1(msg + offset,
        scade_ctx, extern_ctx);
    }
    WRITE_ULONG(msg + offset, A661_END_BLOCK);
    offset = offset + 4;
    WRITE_ULONG(msg + 4, offset);
  }
  return offset ;
}

/*********************************************************
 ** End of file
 ** End of generation: 2017-10-10T14:20:54
 *********************************************************/


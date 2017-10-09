/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/KCG/config.txt
** Generation date: 2017-10-05T10:57:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ErlunControl.h"

/* ErlunControl/ */
void ErlunControl(inC_ErlunControl *inC, outC_ErlunControl *outC)
{
  kcg_int32 tmp;
  kcg_int32 tmp1;
  kcg_int32 tmp2;
  kcg_int32 tmp3;
  kcg_int32 tmp4;
  kcg_int32 tmp5;
  kcg_int32 tmp6;
  kcg_int32 tmp7;
  kcg_int32 tmp8;
  /* @2/_L145/, @2/_L154/ */
  T_String _L154_SpeedStr_1;
  /* Var_mqtt/, _L323/ */
  kcg_int32 Var_mqtt;
  /* @1/_L4/, _L314/ */
  kcg_bool _L314;

  outC->Emit2CDS = kcg_true;
  _L154_SpeedStr_1[0] = '0';
  _L154_SpeedStr_1[1] = '.';
  _L154_SpeedStr_1[2] = '0';
  _L154_SpeedStr_1[3] = ' ';
  outC->EmitVisible = outC->_L3_Switch_1;
  /* _L13=, _L5= */
  if (outC->_L3_Switch_1) {
    kcg_copy_T_String(&outC->Turn_BtnTextString, (T_String *) &TURN_BTN_OFF);
    outC->TurnTextColorIndex = RED;
  }
  else {
    kcg_copy_T_String(&outC->Turn_BtnTextString, (T_String *) &TURN_BTN_ON);
    outC->TurnTextColorIndex = GREEN;
  }
  _L314 = !outC->_L3_Switch_1;
  /* _L27= */
  switch (outC->_L99 + outC->_L117 + outC->_L130 + outC->_L128 + outC->_L312 +
    outC->_L317 + outC->_L139) {
    case kcg_lit_int32(1) :
      kcg_copy_T_String(&outC->Send_TextString, (T_String *) &SEND_BTN_UP);
      break;
    case kcg_lit_int32(2) :
      kcg_copy_T_String(&outC->Send_TextString, (T_String *) &SEND_BTN_DOWN);
      break;
    case kcg_lit_int32(3) :
      kcg_copy_T_String(&outC->Send_TextString, (T_String *) &SEND_BTN_LEFT);
      break;
    case kcg_lit_int32(4) :
      kcg_copy_T_String(&outC->Send_TextString, (T_String *) &SEND_BTN_RIGHT);
      break;
    case kcg_lit_int32(5) :
      kcg_copy_T_String(&outC->Send_TextString, (T_String *) &SEND_BTN_ON);
      break;
    case kcg_lit_int32(6) :
      kcg_copy_T_String(&outC->Send_TextString, (T_String *) &SEND_BTN_OFF);
      break;
    case kcg_lit_int32(7) :
      /* @2/_L84= */
      if (inC->Speed_BtnValue < kcg_lit_float32(1.0)) {
        Var_mqtt = kcg_lit_int32(1);
      }
      else {
        Var_mqtt = kcg_lit_int32(0);
      }
      /* @2/_L31= */
      if ((kcg_lit_float32(1.0) <= inC->Speed_BtnValue) & (inC->Speed_BtnValue <
          kcg_lit_float32(2.0))) {
        tmp = kcg_lit_int32(2);
      }
      else {
        tmp = kcg_lit_int32(0);
      }
      /* @2/_L13= */
      if ((kcg_lit_float32(2.0) <= inC->Speed_BtnValue) & (inC->Speed_BtnValue <
          kcg_lit_float32(3.0))) {
        tmp1 = kcg_lit_int32(3);
      }
      else {
        tmp1 = kcg_lit_int32(0);
      }
      /* @2/_L42= */
      if ((kcg_lit_float32(3.0) <= inC->Speed_BtnValue) & (inC->Speed_BtnValue <
          kcg_lit_float32(4.0))) {
        tmp2 = kcg_lit_int32(4);
      }
      else {
        tmp2 = kcg_lit_int32(0);
      }
      /* @2/_L6= */
      if ((kcg_lit_float32(4.0) <= inC->Speed_BtnValue) & (inC->Speed_BtnValue <
          kcg_lit_float32(5.0))) {
        tmp3 = kcg_lit_int32(5);
      }
      else {
        tmp3 = kcg_lit_int32(0);
      }
      /* @2/_L132= */
      if ((kcg_lit_float32(5.0) <= inC->Speed_BtnValue) & (inC->Speed_BtnValue <
          kcg_lit_float32(6.0))) {
        tmp4 = kcg_lit_int32(6);
      }
      else {
        tmp4 = kcg_lit_int32(0);
      }
      /* @2/_L7= */
      if ((kcg_lit_float32(6.0) <= inC->Speed_BtnValue) & (inC->Speed_BtnValue <
          kcg_lit_float32(7.0))) {
        tmp5 = kcg_lit_int32(7);
      }
      else {
        tmp5 = kcg_lit_int32(0);
      }
      /* @2/_L125= */
      if ((kcg_lit_float32(7.0) <= inC->Speed_BtnValue) & (inC->Speed_BtnValue <
          kcg_lit_float32(8.0))) {
        tmp6 = kcg_lit_int32(8);
      }
      else {
        tmp6 = kcg_lit_int32(0);
      }
      /* @2/_L144= */
      if ((kcg_lit_float32(8.0) <= inC->Speed_BtnValue) & (inC->Speed_BtnValue <
          kcg_lit_float32(9.0))) {
        tmp7 = kcg_lit_int32(9);
      }
      else {
        tmp7 = kcg_lit_int32(0);
      }
      /* @2/_L126= */
      if ((kcg_lit_float32(9.0) <= inC->Speed_BtnValue) &
        (inC->Speed_BtnValue <= kcg_lit_float32(10.0))) {
        tmp8 = kcg_lit_int32(10);
      }
      else {
        tmp8 = kcg_lit_int32(0);
      }
      /* @2/_L36= */
      switch (Var_mqtt + tmp + tmp1 + tmp2 + tmp3 + tmp4 + tmp5 + tmp6 + tmp7 +
        tmp8) {
        case kcg_lit_int32(1) :
          kcg_copy_T_String(&outC->Send_TextString, &_L154_SpeedStr_1);
          break;
        case kcg_lit_int32(2) :
          outC->Send_TextString[0] = '1';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        case kcg_lit_int32(3) :
          outC->Send_TextString[0] = '2';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        case kcg_lit_int32(4) :
          outC->Send_TextString[0] = '3';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        case kcg_lit_int32(5) :
          outC->Send_TextString[0] = '4';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        case kcg_lit_int32(6) :
          outC->Send_TextString[0] = '5';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        case kcg_lit_int32(7) :
          outC->Send_TextString[0] = '6';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        case kcg_lit_int32(8) :
          outC->Send_TextString[0] = '7';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        case kcg_lit_int32(9) :
          outC->Send_TextString[0] = '8';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        case kcg_lit_int32(10) :
          outC->Send_TextString[0] = '9';
          outC->Send_TextString[1] = '.';
          outC->Send_TextString[2] = '0';
          outC->Send_TextString[3] = ' ';
          break;
        default :
          kcg_copy_T_String(&outC->Send_TextString, &_L154_SpeedStr_1);
          break;
      }
      break;
    default :
      outC->Send_TextString[0] = ' ';
      outC->Send_TextString[1] = ' ';
      outC->Send_TextString[2] = ' ';
      outC->Send_TextString[3] = ' ';
      break;
  }
  /* _L317= */
  if (inC->Turn_Btn & outC->_L3_Switch_1) {
    outC->_L317 = kcg_lit_int32(6);
  }
  else {
    outC->_L317 = kcg_lit_int32(0);
  }
  /* @1/_L3= */
  if (inC->Turn_Btn) {
    outC->_L3_Switch_1 = _L314;
  }
  Var_mqtt = /* _L323=(msg#2)/ */ msg(&outC->Send_TextString);
  /* _L312= */
  if (inC->Turn_Btn & _L314) {
    outC->_L312 = kcg_lit_int32(5);
  }
  else {
    outC->_L312 = kcg_lit_int32(0);
  }
  /* _L139= */
  if (inC->Speed_Btn) {
    outC->_L139 = kcg_lit_int32(7);
  }
  else {
    outC->_L139 = kcg_lit_int32(0);
  }
  /* _L130= */
  if (inC->Left_Btn) {
    outC->_L130 = kcg_lit_int32(3);
  }
  else {
    outC->_L130 = kcg_lit_int32(0);
  }
  /* _L128= */
  if (inC->Right_Btn) {
    outC->_L128 = kcg_lit_int32(4);
  }
  else {
    outC->_L128 = kcg_lit_int32(0);
  }
  /* _L117= */
  if (inC->Down_Btn) {
    outC->_L117 = kcg_lit_int32(2);
  }
  else {
    outC->_L117 = kcg_lit_int32(0);
  }
  /* _L99= */
  if (inC->Up_Btn) {
    outC->_L99 = kcg_lit_int32(1);
  }
  else {
    outC->_L99 = kcg_lit_int32(0);
  }
  outC->Layer1Visible = outC->_L7;
  outC->Layer1Active = outC->_L7;
  outC->_L7 = kcg_false;
  outC->StringSize = STR_SIZE;
}

#ifndef KCG_USER_DEFINED_INIT
void ErlunControl_init(outC_ErlunControl *outC)
{
  kcg_size idx;

  outC->_L3_Switch_1 = kcg_false;
  outC->_L7 = kcg_true;
  outC->Emit2CDS = kcg_true;
  outC->Layer1Active = kcg_true;
  outC->Layer1Visible = kcg_true;
  outC->EmitVisible = kcg_true;
  outC->TurnTextColorIndex = kcg_lit_uint8(0);
  outC->StringSize = kcg_lit_uint16(0);
  for (idx = 0; idx < 4; idx++) {
    outC->Send_TextString[idx] = ' ';
    outC->Turn_BtnTextString[idx] = ' ';
  }
  outC->_L139 = kcg_lit_int32(0);
  outC->_L317 = kcg_lit_int32(0);
  outC->_L312 = kcg_lit_int32(0);
  outC->_L128 = kcg_lit_int32(0);
  outC->_L130 = kcg_lit_int32(0);
  outC->_L117 = kcg_lit_int32(0);
  outC->_L99 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ErlunControl_reset(outC_ErlunControl *outC)
{
  outC->_L3_Switch_1 = kcg_false;
  outC->_L7 = kcg_true;
  outC->_L139 = kcg_lit_int32(0);
  outC->_L317 = kcg_lit_int32(0);
  outC->_L312 = kcg_lit_int32(0);
  outC->_L128 = kcg_lit_int32(0);
  outC->_L130 = kcg_lit_int32(0);
  outC->_L117 = kcg_lit_int32(0);
  outC->_L99 = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: ErlunControl/
  @2: (SpeedStr#1)
  @1: (Switch#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ErlunControl.c
** Generation date: 2017-10-05T10:57:26
*************************************************************$ */


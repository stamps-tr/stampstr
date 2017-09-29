/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation/config.txt
** Generation date: 2017-09-19T15:23:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ErlunControl.h"

/* ErlunControl/ */
void ErlunControl(inC_ErlunControl *inC, outC_ErlunControl *outC)
{
  /* Var_Send/ */
  kcg_int32 last_Var_Send;

  /* @1/_L2= */
  if (outC->init) {
    outC->_L2_Switch_1 = kcg_false;
  }
  else {
    outC->_L2_Switch_1 = outC->_L3_Switch_1;
  }
  outC->_L4_Switch_1 = !outC->_L2_Switch_1;
  outC->_L1 = inC->Turn_Btn;
  outC->Input1_Switch_1 = outC->_L1;
  outC->_L1_Switch_1 = outC->Input1_Switch_1;
  /* @1/_L3= */
  if (outC->_L1_Switch_1) {
    outC->_L3_Switch_1 = outC->_L4_Switch_1;
  }
  else {
    outC->_L3_Switch_1 = outC->_L2_Switch_1;
  }
  outC->Output1_Switch_1 = outC->_L2_Switch_1;
  outC->_L299 = inC->Speed_BtnValue;
  outC->Input_SpeedStr_1 = outC->_L299;
  outC->_L164_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L163_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L162_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L161_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L160_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L159_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L158_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L157_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L156_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L155_SpeedStr_1 = outC->Input_SpeedStr_1;
  outC->_L145_SpeedStr_1[0] = '0';
  outC->_L145_SpeedStr_1[1] = '.';
  outC->_L145_SpeedStr_1[2] = '0';
  outC->_L145_SpeedStr_1[3] = ' ';
  outC->_L99_SpeedStr_1[0] = '1';
  outC->_L99_SpeedStr_1[1] = '.';
  outC->_L99_SpeedStr_1[2] = '0';
  outC->_L99_SpeedStr_1[3] = ' ';
  outC->_L9_SpeedStr_1[0] = '2';
  outC->_L9_SpeedStr_1[1] = '.';
  outC->_L9_SpeedStr_1[2] = '0';
  outC->_L9_SpeedStr_1[3] = ' ';
  outC->_L55_SpeedStr_1[0] = '3';
  outC->_L55_SpeedStr_1[1] = '.';
  outC->_L55_SpeedStr_1[2] = '0';
  outC->_L55_SpeedStr_1[3] = ' ';
  outC->_L27_SpeedStr_1[0] = '4';
  outC->_L27_SpeedStr_1[1] = '.';
  outC->_L27_SpeedStr_1[2] = '0';
  outC->_L27_SpeedStr_1[3] = ' ';
  outC->_L71_SpeedStr_1[0] = '5';
  outC->_L71_SpeedStr_1[1] = '.';
  outC->_L71_SpeedStr_1[2] = '0';
  outC->_L71_SpeedStr_1[3] = ' ';
  outC->_L135_SpeedStr_1[0] = '6';
  outC->_L135_SpeedStr_1[1] = '.';
  outC->_L135_SpeedStr_1[2] = '0';
  outC->_L135_SpeedStr_1[3] = ' ';
  outC->_L117_SpeedStr_1[0] = '7';
  outC->_L117_SpeedStr_1[1] = '.';
  outC->_L117_SpeedStr_1[2] = '0';
  outC->_L117_SpeedStr_1[3] = ' ';
  outC->_L89_SpeedStr_1[0] = '8';
  outC->_L89_SpeedStr_1[1] = '.';
  outC->_L89_SpeedStr_1[2] = '0';
  outC->_L89_SpeedStr_1[3] = ' ';
  outC->_L46_SpeedStr_1[0] = '9';
  outC->_L46_SpeedStr_1[1] = '.';
  outC->_L46_SpeedStr_1[2] = '0';
  outC->_L46_SpeedStr_1[3] = ' ';
  outC->_L154_SpeedStr_1[0] = '0';
  outC->_L154_SpeedStr_1[1] = '.';
  outC->_L154_SpeedStr_1[2] = '0';
  outC->_L154_SpeedStr_1[3] = ' ';
  outC->_L134_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L106_SpeedStr_1 = kcg_lit_int32(10);
  outC->_L45_SpeedStr_1 = kcg_lit_float32(10.0);
  outC->_L79_SpeedStr_1 = outC->_L164_SpeedStr_1 <= outC->_L45_SpeedStr_1;
  outC->_L63_SpeedStr_1 = kcg_lit_float32(9.0);
  outC->_L88_SpeedStr_1 = outC->_L63_SpeedStr_1 <= outC->_L164_SpeedStr_1;
  outC->_L17_SpeedStr_1 = outC->_L88_SpeedStr_1 & outC->_L79_SpeedStr_1;
  /* @2/_L126= */
  if (outC->_L17_SpeedStr_1) {
    outC->_L126_SpeedStr_1 = outC->_L106_SpeedStr_1;
  }
  else {
    outC->_L126_SpeedStr_1 = outC->_L134_SpeedStr_1;
  }
  outC->_L35_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L26_SpeedStr_1 = kcg_lit_int32(9);
  outC->_L78_SpeedStr_1 = kcg_lit_float32(9.0);
  outC->_L70_SpeedStr_1 = outC->_L163_SpeedStr_1 < outC->_L78_SpeedStr_1;
  outC->_L8_SpeedStr_1 = kcg_lit_float32(8.0);
  outC->_L54_SpeedStr_1 = outC->_L8_SpeedStr_1 <= outC->_L163_SpeedStr_1;
  outC->_L116_SpeedStr_1 = outC->_L54_SpeedStr_1 & outC->_L70_SpeedStr_1;
  /* @2/_L144= */
  if (outC->_L116_SpeedStr_1) {
    outC->_L144_SpeedStr_1 = outC->_L26_SpeedStr_1;
  }
  else {
    outC->_L144_SpeedStr_1 = outC->_L35_SpeedStr_1;
  }
  outC->_L16_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L105_SpeedStr_1 = kcg_lit_int32(8);
  outC->_L62_SpeedStr_1 = kcg_lit_float32(8.0);
  outC->_L152_SpeedStr_1 = outC->_L162_SpeedStr_1 < outC->_L62_SpeedStr_1;
  outC->_L87_SpeedStr_1 = kcg_lit_float32(7.0);
  outC->_L133_SpeedStr_1 = outC->_L87_SpeedStr_1 <= outC->_L162_SpeedStr_1;
  outC->_L44_SpeedStr_1 = outC->_L133_SpeedStr_1 & outC->_L152_SpeedStr_1;
  /* @2/_L125= */
  if (outC->_L44_SpeedStr_1) {
    outC->_L125_SpeedStr_1 = outC->_L105_SpeedStr_1;
  }
  else {
    outC->_L125_SpeedStr_1 = outC->_L16_SpeedStr_1;
  }
  outC->_L53_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L77_SpeedStr_1 = kcg_lit_int32(7);
  outC->_L34_SpeedStr_1 = kcg_lit_float32(7.0);
  outC->_L143_SpeedStr_1 = outC->_L161_SpeedStr_1 < outC->_L34_SpeedStr_1;
  outC->_L69_SpeedStr_1 = kcg_lit_float32(6.0);
  outC->_L97_SpeedStr_1 = outC->_L69_SpeedStr_1 <= outC->_L161_SpeedStr_1;
  outC->_L124_SpeedStr_1 = outC->_L97_SpeedStr_1 & outC->_L143_SpeedStr_1;
  /* @2/_L7= */
  if (outC->_L124_SpeedStr_1) {
    outC->_L7_SpeedStr_1 = outC->_L77_SpeedStr_1;
  }
  else {
    outC->_L7_SpeedStr_1 = outC->_L53_SpeedStr_1;
  }
  outC->_L24_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L15_SpeedStr_1 = kcg_lit_int32(6);
  outC->_L68_SpeedStr_1 = kcg_lit_float32(6.0);
  outC->_L61_SpeedStr_1 = outC->_L160_SpeedStr_1 < outC->_L68_SpeedStr_1;
  outC->_L151_SpeedStr_1 = kcg_lit_float32(5.0);
  outC->_L43_SpeedStr_1 = outC->_L151_SpeedStr_1 <= outC->_L160_SpeedStr_1;
  outC->_L104_SpeedStr_1 = outC->_L43_SpeedStr_1 & outC->_L61_SpeedStr_1;
  /* @2/_L132= */
  if (outC->_L104_SpeedStr_1) {
    outC->_L132_SpeedStr_1 = outC->_L15_SpeedStr_1;
  }
  else {
    outC->_L132_SpeedStr_1 = outC->_L24_SpeedStr_1;
  }
  outC->_L52_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L142_SpeedStr_1 = kcg_lit_int32(5);
  outC->_L96_SpeedStr_1 = kcg_lit_float32(5.0);
  outC->_L33_SpeedStr_1 = outC->_L159_SpeedStr_1 < outC->_L96_SpeedStr_1;
  outC->_L123_SpeedStr_1 = kcg_lit_float32(4.0);
  outC->_L14_SpeedStr_1 = outC->_L123_SpeedStr_1 <= outC->_L159_SpeedStr_1;
  outC->_L76_SpeedStr_1 = outC->_L14_SpeedStr_1 & outC->_L33_SpeedStr_1;
  /* @2/_L6= */
  if (outC->_L76_SpeedStr_1) {
    outC->_L6_SpeedStr_1 = outC->_L142_SpeedStr_1;
  }
  else {
    outC->_L6_SpeedStr_1 = outC->_L52_SpeedStr_1;
  }
  outC->_L85_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L23_SpeedStr_1 = kcg_lit_int32(4);
  outC->_L131_SpeedStr_1 = kcg_lit_float32(4.0);
  outC->_L67_SpeedStr_1 = outC->_L158_SpeedStr_1 < outC->_L131_SpeedStr_1;
  outC->_L60_SpeedStr_1 = kcg_lit_float32(3.0);
  outC->_L103_SpeedStr_1 = outC->_L60_SpeedStr_1 <= outC->_L158_SpeedStr_1;
  outC->_L113_SpeedStr_1 = outC->_L103_SpeedStr_1 & outC->_L67_SpeedStr_1;
  /* @2/_L42= */
  if (outC->_L113_SpeedStr_1) {
    outC->_L42_SpeedStr_1 = outC->_L23_SpeedStr_1;
  }
  else {
    outC->_L42_SpeedStr_1 = outC->_L85_SpeedStr_1;
  }
  outC->_L59_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L51_SpeedStr_1 = kcg_lit_int32(3);
  outC->_L5_SpeedStr_1 = kcg_lit_float32(3.0);
  outC->_L95_SpeedStr_1 = outC->_L157_SpeedStr_1 < outC->_L5_SpeedStr_1;
  outC->_L32_SpeedStr_1 = kcg_lit_float32(2.0);
  outC->_L75_SpeedStr_1 = outC->_L32_SpeedStr_1 <= outC->_L157_SpeedStr_1;
  outC->_L141_SpeedStr_1 = outC->_L75_SpeedStr_1 & outC->_L95_SpeedStr_1;
  /* @2/_L13= */
  if (outC->_L141_SpeedStr_1) {
    outC->_L13_SpeedStr_1 = outC->_L51_SpeedStr_1;
  }
  else {
    outC->_L13_SpeedStr_1 = outC->_L59_SpeedStr_1;
  }
  outC->_L12_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L140_SpeedStr_1 = kcg_lit_int32(2);
  outC->_L4_SpeedStr_1 = kcg_lit_float32(2.0);
  outC->_L121_SpeedStr_1 = outC->_L156_SpeedStr_1 < outC->_L4_SpeedStr_1;
  outC->_L94_SpeedStr_1 = kcg_lit_float32(1.0);
  outC->_L74_SpeedStr_1 = outC->_L94_SpeedStr_1 <= outC->_L156_SpeedStr_1;
  outC->_L112_SpeedStr_1 = outC->_L74_SpeedStr_1 & outC->_L121_SpeedStr_1;
  /* @2/_L31= */
  if (outC->_L112_SpeedStr_1) {
    outC->_L31_SpeedStr_1 = outC->_L140_SpeedStr_1;
  }
  else {
    outC->_L31_SpeedStr_1 = outC->_L12_SpeedStr_1;
  }
  outC->_L149_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L41_SpeedStr_1 = kcg_lit_int32(1);
  outC->_L130_SpeedStr_1 = kcg_lit_float32(1.0);
  outC->_L66_SpeedStr_1 = outC->_L155_SpeedStr_1 < outC->_L130_SpeedStr_1;
  /* @2/_L84= */
  if (outC->_L66_SpeedStr_1) {
    outC->_L84_SpeedStr_1 = outC->_L41_SpeedStr_1;
  }
  else {
    outC->_L84_SpeedStr_1 = outC->_L149_SpeedStr_1;
  }
  outC->_L102_SpeedStr_1 = outC->_L84_SpeedStr_1 + outC->_L31_SpeedStr_1 +
    outC->_L13_SpeedStr_1 + outC->_L42_SpeedStr_1 + outC->_L6_SpeedStr_1 +
    outC->_L132_SpeedStr_1 + outC->_L7_SpeedStr_1 + outC->_L125_SpeedStr_1 +
    outC->_L144_SpeedStr_1 + outC->_L126_SpeedStr_1;
  /* @2/_L36= */
  switch (outC->_L102_SpeedStr_1) {
    case kcg_lit_int32(1) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L145_SpeedStr_1);
      break;
    case kcg_lit_int32(2) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L99_SpeedStr_1);
      break;
    case kcg_lit_int32(3) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L9_SpeedStr_1);
      break;
    case kcg_lit_int32(4) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L55_SpeedStr_1);
      break;
    case kcg_lit_int32(5) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L27_SpeedStr_1);
      break;
    case kcg_lit_int32(6) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L71_SpeedStr_1);
      break;
    case kcg_lit_int32(7) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L135_SpeedStr_1);
      break;
    case kcg_lit_int32(8) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L117_SpeedStr_1);
      break;
    case kcg_lit_int32(9) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L89_SpeedStr_1);
      break;
    case kcg_lit_int32(10) :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L46_SpeedStr_1);
      break;
    default :
      kcg_copy_T_String(&outC->_L36_SpeedStr_1, &outC->_L154_SpeedStr_1);
      break;
  }
  kcg_copy_T_String(&outC->Output_SpeedStr_1, &outC->_L36_SpeedStr_1);
  last_Var_Send = outC->Var_Send;
  outC->_L2 = outC->Output1_Switch_1;
  outC->Var_Turn_Btn = outC->_L2;
  outC->_L320 = outC->Var_Turn_Btn;
  outC->_L321 = inC->Turn_Btn;
  outC->_L322 = outC->_L321 & outC->_L320;
  outC->_L319 = kcg_lit_int32(6);
  /* _L315= */
  if (outC->init) {
    outC->_L315 = kcg_lit_int32(0);
  }
  else {
    outC->_L315 = outC->_L317;
  }
  outC->_L316 = kcg_lit_int32(0);
  /* _L317= */
  if (outC->_L322) {
    outC->_L317 = outC->_L319;
  }
  else {
    outC->_L317 = outC->_L316;
  }
  outC->_L301 = outC->Var_Turn_Btn;
  outC->_L314 = !outC->_L301;
  /* _L310= */
  if (outC->init) {
    outC->_L310 = kcg_lit_int32(0);
  }
  else {
    outC->_L310 = outC->_L312;
  }
  outC->_L311 = kcg_lit_int32(0);
  outC->_L309 = kcg_lit_int32(5);
  outC->_L300 = inC->Turn_Btn;
  outC->_L302 = outC->_L300 & outC->_L314;
  /* _L312= */
  if (outC->_L302) {
    outC->_L312 = outC->_L309;
  }
  else {
    outC->_L312 = outC->_L311;
  }
  kcg_copy_T_String(&outC->_L297, &outC->Output_SpeedStr_1);
  kcg_copy_T_String(&outC->_L152, (T_String *) &SEND_BTN_OFF);
  kcg_copy_T_String(&outC->_L150, (T_String *) &SEND_BTN_ON);
  outC->_L149 = inC->Speed_Btn;
  outC->_L146 = kcg_lit_int32(7);
  /* _L143= */
  if (outC->init) {
    outC->_L143 = kcg_lit_int32(0);
  }
  else {
    outC->_L143 = outC->_L139;
  }
  outC->_L136 = kcg_lit_int32(0);
  /* _L139= */
  if (outC->_L149) {
    outC->_L139 = outC->_L146;
  }
  else {
    outC->_L139 = outC->_L136;
  }
  outC->_L132 = inC->Right_Btn;
  outC->_L131 = inC->Left_Btn;
  /* _L129= */
  if (outC->init) {
    outC->_L129 = kcg_lit_int32(0);
  }
  else {
    outC->_L129 = outC->_L130;
  }
  outC->_L122 = kcg_lit_int32(0);
  outC->_L123 = kcg_lit_int32(3);
  /* _L130= */
  if (outC->_L131) {
    outC->_L130 = outC->_L123;
  }
  else {
    outC->_L130 = outC->_L122;
  }
  /* _L124= */
  if (outC->init) {
    outC->_L124 = kcg_lit_int32(0);
  }
  else {
    outC->_L124 = outC->_L128;
  }
  outC->_L121 = kcg_lit_int32(0);
  outC->_L127 = kcg_lit_int32(4);
  /* _L128= */
  if (outC->_L132) {
    outC->_L128 = outC->_L127;
  }
  else {
    outC->_L128 = outC->_L121;
  }
  /* _L114= */
  if (outC->init) {
    outC->_L114 = kcg_lit_int32(0);
  }
  else {
    outC->_L114 = outC->_L117;
  }
  /* _L108= */
  if (outC->init) {
    outC->_L108 = kcg_lit_int32(0);
  }
  else {
    outC->_L108 = outC->_L99;
  }
  outC->_L119 = outC->_L108 + outC->_L114 + outC->_L129 + outC->_L124 +
    outC->_L310 + outC->_L315 + outC->_L143;
  outC->Var_Send = outC->_L119;
  outC->_L120 = outC->Var_Send;
  outC->_L118 = inC->Down_Btn;
  outC->_L116 = kcg_lit_int32(0);
  outC->_L113 = kcg_lit_int32(2);
  /* _L117= */
  if (outC->_L118) {
    outC->_L117 = outC->_L113;
  }
  else {
    outC->_L117 = outC->_L116;
  }
  outC->_L112 = kcg_lit_int32(1);
  outC->_L100 = kcg_lit_int32(0);
  outC->_L91 = inC->Up_Btn;
  /* _L99= */
  if (outC->_L91) {
    outC->_L99 = outC->_L112;
  }
  else {
    outC->_L99 = outC->_L100;
  }
  outC->_L42[0] = ' ';
  outC->_L42[1] = ' ';
  outC->_L42[2] = ' ';
  outC->_L42[3] = ' ';
  kcg_copy_T_String(&outC->_L32, (T_String *) &SEND_BTN_RIGHT);
  kcg_copy_T_String(&outC->_L31, (T_String *) &SEND_BTN_LEFT);
  kcg_copy_T_String(&outC->_L30, (T_String *) &SEND_BTN_DOWN);
  kcg_copy_T_String(&outC->_L19, (T_String *) &SEND_BTN_UP);
  /* _L27= */
  switch (outC->_L120) {
    case kcg_lit_int32(1) :
      kcg_copy_T_String(&outC->_L27, &outC->_L19);
      break;
    case kcg_lit_int32(2) :
      kcg_copy_T_String(&outC->_L27, &outC->_L30);
      break;
    case kcg_lit_int32(3) :
      kcg_copy_T_String(&outC->_L27, &outC->_L31);
      break;
    case kcg_lit_int32(4) :
      kcg_copy_T_String(&outC->_L27, &outC->_L32);
      break;
    case kcg_lit_int32(5) :
      kcg_copy_T_String(&outC->_L27, &outC->_L150);
      break;
    case kcg_lit_int32(6) :
      kcg_copy_T_String(&outC->_L27, &outC->_L152);
      break;
    case kcg_lit_int32(7) :
      kcg_copy_T_String(&outC->_L27, &outC->_L297);
      break;
    default :
      kcg_copy_T_String(&outC->_L27, &outC->_L42);
      break;
  }
  kcg_copy_T_String(&outC->Send_TextString, &outC->_L27);
  outC->_L12 = outC->Var_Turn_Btn;
  outC->EmitVisible = outC->_L12;
  outC->_L10 = GREEN;
  outC->_L11 = RED;
  /* _L13= */
  if (outC->_L12) {
    outC->_L13 = outC->_L11;
  }
  else {
    outC->_L13 = outC->_L10;
  }
  outC->TurnTextColorIndex = outC->_L13;
  outC->_L9 = kcg_true;
  outC->Emit2CDS = outC->_L9;
  /* _L8= */
  if (outC->init) {
    outC->_L8 = kcg_true;
  }
  else {
    outC->_L8 = outC->_L7;
  }
  outC->Layer1Visible = outC->_L8;
  outC->Layer1Active = outC->_L8;
  outC->_L7 = kcg_false;
  outC->_L6 = STR_SIZE;
  outC->StringSize = outC->_L6;
  kcg_copy_T_String(&outC->_L4, (T_String *) &TURN_BTN_ON);
  kcg_copy_T_String(&outC->_L3, (T_String *) &TURN_BTN_OFF);
  /* _L5= */
  if (outC->_L2) {
    kcg_copy_T_String(&outC->_L5, &outC->_L3);
  }
  else {
    kcg_copy_T_String(&outC->_L5, &outC->_L4);
  }
  kcg_copy_T_String(&outC->Turn_BtnTextString, &outC->_L5);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ErlunControl_init(outC_ErlunControl *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;

  outC->_L315 = kcg_lit_int32(0);
  outC->_L316 = kcg_lit_int32(0);
  outC->_L319 = kcg_lit_int32(0);
  outC->_L320 = kcg_true;
  outC->_L321 = kcg_true;
  outC->_L322 = kcg_true;
  outC->_L314 = kcg_true;
  outC->_L309 = kcg_lit_int32(0);
  outC->_L310 = kcg_lit_int32(0);
  outC->_L311 = kcg_lit_int32(0);
  outC->_L302 = kcg_true;
  outC->_L301 = kcg_true;
  outC->_L300 = kcg_true;
  outC->_L299 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L297[idx] = ' ';
  }
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L152[idx1] = ' ';
  }
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L150[idx2] = ' ';
  }
  outC->_L149 = kcg_true;
  outC->_L136 = kcg_lit_int32(0);
  outC->_L143 = kcg_lit_int32(0);
  outC->_L146 = kcg_lit_int32(0);
  outC->_L132 = kcg_true;
  outC->_L131 = kcg_true;
  outC->_L121 = kcg_lit_int32(0);
  outC->_L122 = kcg_lit_int32(0);
  outC->_L123 = kcg_lit_int32(0);
  outC->_L124 = kcg_lit_int32(0);
  outC->_L127 = kcg_lit_int32(0);
  outC->_L129 = kcg_lit_int32(0);
  outC->_L120 = kcg_lit_int32(0);
  outC->_L119 = kcg_lit_int32(0);
  outC->_L118 = kcg_true;
  outC->_L113 = kcg_lit_int32(0);
  outC->_L114 = kcg_lit_int32(0);
  outC->_L116 = kcg_lit_int32(0);
  outC->_L112 = kcg_lit_int32(0);
  outC->_L108 = kcg_lit_int32(0);
  outC->_L100 = kcg_lit_int32(0);
  outC->_L91 = kcg_true;
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L42[idx3] = ' ';
  }
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L32[idx4] = ' ';
  }
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L31[idx5] = ' ';
  }
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L30[idx6] = ' ';
  }
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L27[idx7] = ' ';
  }
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->_L19[idx8] = ' ';
  }
  outC->_L10 = kcg_lit_uint8(0);
  outC->_L11 = kcg_lit_uint8(0);
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_lit_uint8(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_lit_uint16(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L5[idx9] = ' ';
  }
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->_L4[idx10] = ' ';
  }
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->_L3[idx11] = ' ';
  }
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->Var_Turn_Btn = kcg_true;
  for (idx12 = 0; idx12 < 4; idx12++) {
    outC->_L154_SpeedStr_1[idx12] = ' ';
  }
  outC->_L152_SpeedStr_1 = kcg_true;
  outC->_L151_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L149_SpeedStr_1 = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L145_SpeedStr_1[idx13] = ' ';
  }
  outC->_L144_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L143_SpeedStr_1 = kcg_true;
  outC->_L142_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L141_SpeedStr_1 = kcg_true;
  outC->_L140_SpeedStr_1 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 4; idx14++) {
    outC->_L135_SpeedStr_1[idx14] = ' ';
  }
  outC->_L134_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L133_SpeedStr_1 = kcg_true;
  outC->_L132_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L131_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L130_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L126_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L125_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L124_SpeedStr_1 = kcg_true;
  outC->_L123_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L121_SpeedStr_1 = kcg_true;
  for (idx15 = 0; idx15 < 4; idx15++) {
    outC->_L117_SpeedStr_1[idx15] = ' ';
  }
  outC->_L116_SpeedStr_1 = kcg_true;
  outC->_L113_SpeedStr_1 = kcg_true;
  outC->_L112_SpeedStr_1 = kcg_true;
  outC->_L106_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L105_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L104_SpeedStr_1 = kcg_true;
  outC->_L103_SpeedStr_1 = kcg_true;
  outC->_L102_SpeedStr_1 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 4; idx16++) {
    outC->_L99_SpeedStr_1[idx16] = ' ';
  }
  outC->_L97_SpeedStr_1 = kcg_true;
  outC->_L96_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L95_SpeedStr_1 = kcg_true;
  outC->_L94_SpeedStr_1 = kcg_lit_float32(0.0);
  for (idx17 = 0; idx17 < 4; idx17++) {
    outC->_L89_SpeedStr_1[idx17] = ' ';
  }
  outC->_L88_SpeedStr_1 = kcg_true;
  outC->_L87_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L85_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L84_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L79_SpeedStr_1 = kcg_true;
  outC->_L78_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L77_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L76_SpeedStr_1 = kcg_true;
  outC->_L75_SpeedStr_1 = kcg_true;
  outC->_L74_SpeedStr_1 = kcg_true;
  for (idx18 = 0; idx18 < 4; idx18++) {
    outC->_L71_SpeedStr_1[idx18] = ' ';
  }
  outC->_L70_SpeedStr_1 = kcg_true;
  outC->_L69_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L68_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L67_SpeedStr_1 = kcg_true;
  outC->_L66_SpeedStr_1 = kcg_true;
  outC->_L63_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L62_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L61_SpeedStr_1 = kcg_true;
  outC->_L60_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L59_SpeedStr_1 = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 4; idx19++) {
    outC->_L55_SpeedStr_1[idx19] = ' ';
  }
  outC->_L54_SpeedStr_1 = kcg_true;
  outC->_L53_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L52_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L51_SpeedStr_1 = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 4; idx20++) {
    outC->_L46_SpeedStr_1[idx20] = ' ';
  }
  outC->_L45_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L44_SpeedStr_1 = kcg_true;
  outC->_L43_SpeedStr_1 = kcg_true;
  outC->_L42_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L41_SpeedStr_1 = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 4; idx21++) {
    outC->_L36_SpeedStr_1[idx21] = ' ';
  }
  outC->_L35_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L34_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L33_SpeedStr_1 = kcg_true;
  outC->_L32_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L31_SpeedStr_1 = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L27_SpeedStr_1[idx22] = ' ';
  }
  outC->_L26_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L24_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L23_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L17_SpeedStr_1 = kcg_true;
  outC->_L16_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L15_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L14_SpeedStr_1 = kcg_true;
  outC->_L13_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L12_SpeedStr_1 = kcg_lit_int32(0);
  for (idx23 = 0; idx23 < 4; idx23++) {
    outC->_L9_SpeedStr_1[idx23] = ' ';
  }
  outC->_L8_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L7_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L6_SpeedStr_1 = kcg_lit_int32(0);
  outC->_L5_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L4_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L155_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L156_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L157_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L158_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L159_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L160_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L161_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L162_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L163_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->_L164_SpeedStr_1 = kcg_lit_float32(0.0);
  outC->Input_SpeedStr_1 = kcg_lit_float32(0.0);
  for (idx24 = 0; idx24 < 4; idx24++) {
    outC->Output_SpeedStr_1[idx24] = ' ';
  }
  outC->_L4_Switch_1 = kcg_true;
  outC->_L2_Switch_1 = kcg_true;
  outC->_L1_Switch_1 = kcg_true;
  outC->Input1_Switch_1 = kcg_true;
  outC->Output1_Switch_1 = kcg_true;
  outC->_L317 = kcg_lit_int32(0);
  outC->_L312 = kcg_lit_int32(0);
  outC->_L139 = kcg_lit_int32(0);
  outC->_L128 = kcg_lit_int32(0);
  outC->_L130 = kcg_lit_int32(0);
  outC->_L117 = kcg_lit_int32(0);
  outC->_L99 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L3_Switch_1 = kcg_true;
  outC->init = kcg_true;
  for (idx25 = 0; idx25 < 4; idx25++) {
    outC->Send_TextString[idx25] = ' ';
  }
  outC->EmitVisible = kcg_true;
  outC->TurnTextColorIndex = kcg_lit_uint8(0);
  outC->Layer1Visible = kcg_true;
  outC->Layer1Active = kcg_true;
  outC->Emit2CDS = kcg_true;
  outC->StringSize = kcg_lit_uint16(0);
  for (idx26 = 0; idx26 < 4; idx26++) {
    outC->Turn_BtnTextString[idx26] = ' ';
  }
  outC->Var_Send = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ErlunControl_reset(outC_ErlunControl *outC)
{
  outC->init = kcg_true;
  outC->Var_Send = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: ErlunControl/
  @1: (Switch#1)
  @2: (SpeedStr#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ErlunControl.c
** Generation date: 2017-09-19T15:23:33
*************************************************************$ */


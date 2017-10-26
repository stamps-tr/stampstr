-- $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
-- ** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/config.txt
-- ** Generation date: 2017-10-20T01:58:21
-- *************************************************************$
with Kcg_Config;

--# inherit Kcg_Config;
package Kcg_Types
is

  type Array_Char is array (Kcg_Config.Kcg_Size range <>) of Kcg_Config.Kcg_Char;

  subtype Range_0_149 is Kcg_Config.Kcg_Size range 0 .. 149;

  subtype Char_Range_0_149 is Array_Char (Range_0_149);

end Kcg_Types;

-- $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
-- ** kcg_types.ads
-- ** Generation date: 2017-10-20T01:58:21
-- *************************************************************$


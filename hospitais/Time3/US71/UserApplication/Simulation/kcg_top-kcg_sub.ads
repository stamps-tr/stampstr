-- $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
-- ** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/config.txt
-- ** Generation date: 2017-10-20T01:58:21
-- *************************************************************$
with Kcg_Types;
with Kcg_Config;

--# inherit Kcg_Types, Kcg_Config, Kcg_Top.Kcg_Imported;
package Kcg_Top.Kcg_Sub
is

  -- LONGITUDE/
  LONGITUDE : constant Kcg_Config.Kcg_Float32 := 9.123;

  -- LATITUDE/
  LATITUDE : constant Kcg_Config.Kcg_Float32 := 5.123;

  type Context_control is
    record
    -- ---------------------------  outputs  ---------------------------
    -- Emit/
    Emit : Boolean;
    -- SignalToLED/
    SignalToLED : Kcg_Config.Kcg_Uint8;
    -- -----------------------  no local probes  -----------------------
    -- ----------------- no clocks of observable data ------------------
    -- -----------------------  no local memory  -----------------------
    -- ---------------------  debug variables  -------------------------
    -- _L1/
    L1 : Boolean;
    -- _L31/
    L31 : Boolean;
    -- _L29/
    L29 : Boolean;
    -- _L28/
    L28 : Boolean;
    -- _L27/
    L27 : Boolean;
    -- _L32/
    L32 : Kcg_Types.Char_Range_0_149;
    -- _L33/
    L33 : Kcg_Config.Kcg_Float32;
    -- _L34/
    L34 : Kcg_Config.Kcg_Float32;
    -- _L35/
    L35 : Kcg_Config.Kcg_Uint8;
    -- _L38/
    L38 : Kcg_Config.Kcg_Uint8;
    -- _L39/
    L39 : Kcg_Config.Kcg_Uint8;
    -- ------------------  no assertion variables  ---------------------
    -- -------------------- no sub nodes' contexts  --------------------
    end record;

  procedure control_Init(
    Ctx : out Context_control);


  -- control/
  procedure control(
    -- SignalFromButton/
    SignalFromButton : in Boolean;
    -- Description/
    Description : in Kcg_Types.Char_Range_0_149;
    Ctx : out Context_control);




  -- RED/
  RED : constant Kcg_Config.Kcg_Uint8 := 21;

  -- GREEN/
  GREEN : constant Kcg_Config.Kcg_Uint8 := 51;

end Kcg_Top.Kcg_Sub;

-- $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
-- ** kcg_top-kcg_sub.ads
-- ** Generation date: 2017-10-20T01:58:21
-- *************************************************************$


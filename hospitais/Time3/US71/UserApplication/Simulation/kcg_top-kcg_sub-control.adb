-- $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
-- ** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/config.txt
-- ** Generation date: 2017-10-20T01:58:21
-- *************************************************************$
separate (Kcg_Top.Kcg_Sub)

-- control/
procedure control(
  -- SignalFromButton/
  SignalFromButton : in Boolean;
  -- Description/
  Description : in Kcg_Types.Char_Range_0_149;
  Ctx : out Context_control)
is

begin
  Ctx.L39 := RED;
  Ctx.L38 := GREEN;
  Ctx.L28 := SignalFromButton;
  if(Ctx.L28) then
    Ctx.L35 := Ctx.L38;
  else
    Ctx.L35 := Ctx.L39;
  end if;
  Ctx.L34 := LONGITUDE;
  Ctx.L33 := LATITUDE;
  Ctx.L32 := Description;
  Ctx.SignalToLED := Ctx.L35;
  Ctx.L29 := False;
  Ctx.L27 := True;
  if(Ctx.L28) then
    Ctx.L31 := Ctx.L27;
  else
    Ctx.L31 := Ctx.L29;
  end if;
  -- _=(PublishMQTT#1)/
  Kcg_Imported.PublishMQTT(
    Description  =>  Ctx.L32,
    Latitude  =>  Ctx.L33,
    Longitude  =>  Ctx.L34,
    Send  =>  Ctx.L31);
  Ctx.L1 := True;
  Ctx.Emit := Ctx.L1;
end control;


-- $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
-- ** kcg_top-kcg_sub-control.adb
-- ** Generation date: 2017-10-20T01:58:21
-- *************************************************************$


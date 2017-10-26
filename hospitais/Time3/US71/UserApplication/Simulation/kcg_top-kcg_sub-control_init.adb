-- $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
-- ** Command: kcg66.exe -config C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/config.txt
-- ** Generation date: 2017-10-20T01:58:21
-- *************************************************************$
separate (Kcg_Top.Kcg_Sub)

procedure control_Init(
  Ctx : out Context_control)
is

begin
  Ctx.L39 := 0;
  Ctx.L38 := 0;
  Ctx.L35 := 0;
  Ctx.L34 := 0.0;
  Ctx.L33 := 0.0;
  for idx in Kcg_Types.Range_0_149 loop
    Ctx.L32(idx) := Kcg_Config.Kcg_Char'(' ');
  end loop;
  Ctx.L27 := True;
  Ctx.L28 := True;
  Ctx.L29 := True;
  Ctx.L31 := True;
  Ctx.L1 := True;
  Ctx.SignalToLED := 0;
  Ctx.Emit := True;
end control_Init;


-- $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
-- ** kcg_top-kcg_sub-control_init.adb
-- ** Generation date: 2017-10-20T01:58:21
-- *************************************************************$


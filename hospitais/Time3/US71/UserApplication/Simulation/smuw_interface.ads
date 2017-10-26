with Interfaces, Interfaces.C, Interfaces.C.Strings;
with Ada;
with Ada.Unchecked_Conversion;
with Ada.Strings.Unbounded;
with System;

with Smu_VTable;

with Smu_Proxy;

with Kcg_Types;
with Kcg_Top.Kcg_Sub;

package Smuw_Interface
is
    -- Root inputs
    SignalFromButton: Boolean;
    SignalFromButton_Restore: Boolean;
    SignalFromButton_Execute: Boolean;
    Description: Kcg_Types.Char_Range_0_149;
    Description_Restore: Kcg_Types.Char_Range_0_149;
    Description_Execute: Kcg_Types.Char_Range_0_149;

    -- Root outputs
    Ctx: Kcg_Top.Kcg_Sub.Context_control;
    Ctx_Restore: Kcg_Top.Kcg_Sub.Context_control;

    -- Sensors

    Exception_Msg: Ada.Strings.Unbounded.Unbounded_String;

    -- DLL exports
    function Ssm_Init return Interfaces.C.Int;
    pragma Export(C, Ssm_Init, "SsmInit");

    function Ssm_Reset return Interfaces.C.Int;
    pragma Export(C, Ssm_Reset, "SsmReset");

    function Ssm_Step return  Interfaces.C.Int;
    pragma Export(C, Ssm_Step, "SsmStep");

    function Ssm_Stop return  Interfaces.C.Int;
    pragma Export(C, Ssm_Stop, "SsmStop");

    VTable: access Smu_VTable.Sim_CustomInit_VTable;
    function Ssm_Get_Default_Real_Format return Interfaces.C.Strings.chars_ptr;
    pragma Export(C, Ssm_Get_Default_Real_Format, "SsmGetDefaultRealFormat");

    function Ssm_Custom_Init return Interfaces.C.Int;
    pragma Export(C, Ssm_Custom_Init, "SsmCustomInit");

    function To_Int is new Ada.Unchecked_Conversion(Source => Smu_Proxy.Sim_Rt_Version, Target => Interfaces.C.int);
    Ssm_Rt_Version: Interfaces.C.int := To_Int(Smu_Proxy.Srtv62);
    pragma Export(C, Ssm_Rt_Version, "nSsmRtVersion");

    function Ssm_Get_Dump_Size return Interfaces.C.Int;
    pragma Export(C, Ssm_Get_Dump_Size, "SsmGetDumpSize");

    procedure  Ssm_Gather_Dump_Data(Data_Addr: System.Address);
    pragma Export(C, Ssm_Gather_Dump_Data, "SsmGatherDumpData");

    procedure  Ssm_Restore_Dump_Data(Data_Addr: System.Address);
    pragma Export(C, Ssm_Restore_Dump_Data, "SsmRestoreDumpData");

    function Ssm_Get_CheckSum return Interfaces.C.Strings.chars_ptr;
    pragma Export(C, Ssm_Get_CheckSum, "SsmGetCheckSum");

    function Ssm_Get_Smu_Types_CheckSum return Interfaces.C.Strings.chars_ptr;
    pragma Export(C, Ssm_Get_Smu_Types_CheckSum, "SsmGetSmuTypesCheckSum");

    function Ssm_Get_Exception_Msg return Interfaces.C.Strings.chars_ptr;
    pragma Export(C, Ssm_Get_Exception_Msg, "SsmGetExceptionMsg");

    function Ssm_Save_Snapshot(File_Path: Interfaces.C.Strings.chars_ptr; Cycle: Interfaces.C.size_t) return Interfaces.C.int;
    pragma Export(C, Ssm_Save_Snapshot, "SsmSaveSnapshot");

    function Ssm_Load_Snapshot(File_Path: Interfaces.C.Strings.chars_ptr; Cycle: access Interfaces.C.size_t) return Interfaces.C.int;
    pragma Export(C, Ssm_Load_Snapshot, "SsmLoadSnapshot");

end Smuw_Interface;

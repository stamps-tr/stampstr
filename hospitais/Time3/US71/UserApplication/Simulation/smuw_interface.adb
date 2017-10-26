with Interfaces, Interfaces.C, Interfaces.C.Strings;
with Ada;
with Ada.Unchecked_Conversion;
with Ada.Exceptions;
with System;

with Smu_Proxy, Smu_VTable;

with Kcg_Types;
with Kcg_Top.Kcg_Sub;

package body Smuw_Interface
is
    procedure Restore_Interface is
    begin
        SignalFromButton := SignalFromButton_Restore;
        Description := Description_Restore;
        Ctx := Ctx_Restore;
        null;
    end Restore_Interface;

    procedure Execute_Interface is
    begin
        Smu_Proxy.Simulator.Acquire_Value_Mutex_Func(Smu_Proxy.Simulator);
        SignalFromButton_Execute := SignalFromButton;
        Description_Execute := Description;
        Smu_Proxy.Simulator.Release_Value_Mutex_Func(Smu_Proxy.Simulator);
        null;
    end Execute_Interface;

    function Ssm_Init return Interfaces.C.Int is
    begin
        Restore_Interface;
        -- Call to init function
        Kcg_Top.Kcg_Sub.control_Init (
            Ctx => Ctx
        );
        return 1;
    end Ssm_Init;

    function Ssm_Reset return Interfaces.C.Int is
    begin
        Restore_Interface;
        return 0;
    end Ssm_Reset;

    function Ssm_Custom_Init return Interfaces.C.Int is
        Ret: Interfaces.C.Int := 0;
        use Smu_vTable;
    begin
        if VTable /= NULL and then VTable.Custom_Init_Func /= NULL then
            -- VTable function provided => call it 
            Ret := VTable.Custom_Init_Func (Out_Ctx_Addr => Ctx'Address);
        else
            -- VTable misssing => error
            Ret := 0;
        end if;
        return Ret;
    end Ssm_Custom_Init;

    function Ssm_Step return Interfaces.C.Int is
    begin
        Exception_Msg := Ada.Strings.Unbounded.Null_Unbounded_String;
        Execute_Interface;
        -- Call to cycle function
        Kcg_Top.Kcg_Sub.control (
            SignalFromButton => SignalFromButton_Execute,
            Description => Description_Execute,
            Ctx => Ctx);
        return 1;
        exception
            when An_Exception : others => 
              Ada.Strings.Unbounded.Append(Exception_Msg, Ada.Exceptions.Exception_Name(An_Exception));
              Ada.Strings.Unbounded.Append(Exception_Msg, ": ");
              Ada.Strings.Unbounded.Append(Exception_Msg, Ada.Exceptions.Exception_Message(An_Exception));
              return 0;
    end Ssm_Step;

    function Ssm_Stop return Interfaces.C.Int is
    begin
        return 1;
    end Ssm_Stop;

    function Ssm_Get_Default_Real_Format return Interfaces.C.Strings.chars_ptr is
    begin
        -- from .etp:
        return Interfaces.C.Strings.New_String("%.5g");
    end Ssm_Get_Default_Real_Format;

    type Dump_Ctx is record
        SignalFromButton: Boolean;
        Description: Kcg_Types.Char_Range_0_149;
        Ctx: Kcg_Top.Kcg_Sub.Context_control;
    end record;

    Dump_Size: Integer :=  Dump_Ctx'Size / Interfaces.C.unsigned_char'Size;
    type Byte_Array is array (Integer range <>) of Interfaces.C.unsigned_char;
    subtype Dump_Data is Byte_Array (1..Dump_Size);

    function Ssm_Get_Dump_Size return Interfaces.C.Int is
    begin
        return Interfaces.C.int(Dump_Size);
    end Ssm_Get_Dump_Size;

    function To_Dump_Data is new Ada.Unchecked_Conversion (Source => Dump_Ctx, Target => Dump_Data);
    function From_Dump_Data is new Ada.Unchecked_Conversion (Source => Dump_Data, Target => Dump_Ctx);

    procedure Ssm_Gather_Dump_Data(Data_Addr: System.Address) is
        Smu_Dump_Data: Dump_Data; for Smu_Dump_Data'Address use Data_Addr;
        Smu_Dump_Ctx: Dump_Ctx;
    begin
        Smu_Dump_Ctx.SignalFromButton := SignalFromButton;
        Smu_Dump_Ctx.Description := Description;
        Smu_Dump_Ctx.Ctx := Ctx;
        Smu_Dump_Data := To_Dump_Data(Smu_Dump_Ctx);
    end Ssm_Gather_Dump_Data;

    procedure Ssm_Restore_Dump_Data(Data_Addr: System.Address) is
        Smu_Dump_Data:Dump_Data; for Smu_Dump_Data'Address use Data_Addr;
        Smu_Dump_Ctx: Dump_Ctx;
    begin
        Smu_Dump_Ctx := From_Dump_Data(Smu_Dump_Data);
        SignalFromButton := Smu_Dump_Ctx.SignalFromButton;
        Description := Smu_Dump_Ctx.Description;
        Ctx := Smu_Dump_Ctx.Ctx;
    end Ssm_Restore_Dump_Data;

    function Ssm_Get_CheckSum return Interfaces.C.Strings.chars_ptr is
    begin
        return Interfaces.C.Strings.New_String("d9d5cadcc7be6746e7fa682e47e631a0");
    end Ssm_Get_CheckSum;

    function Ssm_Get_Smu_Types_CheckSum return Interfaces.C.Strings.chars_ptr is
    begin
        return Interfaces.C.Strings.New_String("70167ab69f4117fa3043a69f71c5aa42");
    end Ssm_Get_Smu_Types_CheckSum;

    function Ssm_Get_Exception_Msg return Interfaces.C.Strings.chars_ptr is
    begin
        return Interfaces.C.Strings.New_String(Ada.Strings.Unbounded.To_String(Exception_Msg));
    end Ssm_Get_Exception_Msg;

    function Ssm_Save_Snapshot(File_Path: Interfaces.C.Strings.chars_ptr; Cycle: Interfaces.C.size_t) return Interfaces.C.int is
    begin
        return 0;
    end Ssm_Save_Snapshot;

    function Ssm_Load_Snapshot(File_Path: Interfaces.C.Strings.chars_ptr; Cycle: access Interfaces.C.size_t) return Interfaces.C.int is
    begin
        return 0;
    end Ssm_Load_Snapshot;

end Smuw_Interface;

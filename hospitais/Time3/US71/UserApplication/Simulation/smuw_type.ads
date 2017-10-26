with System;
with Interfaces, Interfaces.C, Interfaces.C.Strings;
with Smu_Types, Smu_VTable;
with Smu_Predef_Conv;

with Kcg_Config;
with Kcg_Types;
with Kcg_Top.Kcg_Sub;

use type Kcg_Config.Kcg_Char;
use type Kcg_Config.Kcg_Int8;
use type Kcg_Config.Kcg_Int16;
use type Kcg_Config.Kcg_Int32;
use type Kcg_Config.Kcg_Int64;
use type Kcg_Config.Kcg_UInt8;
use type Kcg_Config.Kcg_UInt16;
use type Kcg_Config.Kcg_UInt32;
use type Kcg_Config.Kcg_UInt64;
use type Kcg_Config.Kcg_Float32;
use type Kcg_Config.Kcg_Float64;

package Smuw_Type
is
    package Smuw_Boolean is
        --****************************************************************
        --    Boolean
        --****************************************************************
        VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
        Object: Boolean;
        function To_String(Value_Addr: System.Address; Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, To_String);
        function Check_String(C_Str: Interfaces.C.Strings.chars_ptr; End_Ptr: access System.Address) return Interfaces.C.int; pragma Convention (C, Check_String);
        function String_To(C_Str: Interfaces.C.Strings.chars_ptr; Value_Addr: System.Address; End_Ptr: access System.Address) return Interfaces.C.int; pragma Convention (C, String_To);
        function Is_Double_Conversion_Allowed return Interfaces.C.int; pragma Convention (C, Is_Double_Conversion_Allowed);
        function To_Double(Value_Addr: System.Address; Ret_Value: access Interfaces.C.double) return Interfaces.C.int; pragma Convention (C, To_Double);
        function Is_Long_Conversion_Allowed return Interfaces.C.int; pragma Convention (C, Is_Long_Conversion_Allowed);
        function To_Long(Value_Addr: System.Address; Ret_Value: access Interfaces.C.int) return Interfaces.C.int; pragma Convention (C, To_Long);
        procedure Compare(Result: access Interfaces.C.unsigned; Value1_Addr: System.Address; Value2_Addr: System.Address; Tol: access Smu_Types.Sim_Tolerance; Path: Interfaces.C.Strings.chars_ptr; Str_List_Append_Func: Smu_Types.PFN_STR_LIST_APPEND; Err_Paths_Addr: System.Address); pragma Convention (C, Compare);
        function Get_Signature(Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Get_Signature);
        function Set_Default_Value(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Set_Default_Value);
        function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
        function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
        function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
        Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
            (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
            To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
            Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Boolean.Object'Size));
    end Smuw_Boolean;
    package Smuw_Kcg_Config is
        package Kcg_Char is
            --****************************************************************
            --    Kcg_Config.Kcg_Char
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Char;
            function To_String(Value_Addr: System.Address; Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, To_String);
            function Check_String(C_Str: Interfaces.C.Strings.chars_ptr; End_Ptr: access System.Address) return Interfaces.C.int; pragma Convention (C, Check_String);
            function String_To(C_Str: Interfaces.C.Strings.chars_ptr; Value_Addr: System.Address; End_Ptr: access System.Address) return Interfaces.C.int; pragma Convention (C, String_To);
            function Is_Double_Conversion_Allowed return Interfaces.C.int; pragma Convention (C, Is_Double_Conversion_Allowed);
            function To_Double(Value_Addr: System.Address; Ret_Value: access Interfaces.C.double) return Interfaces.C.int; pragma Convention (C, To_Double);
            function Is_Long_Conversion_Allowed return Interfaces.C.int; pragma Convention (C, Is_Long_Conversion_Allowed);
            function To_Long(Value_Addr: System.Address; Ret_Value: access Interfaces.C.int) return Interfaces.C.int; pragma Convention (C, To_Long);
            procedure Compare(Result: access Interfaces.C.unsigned; Value1_Addr: System.Address; Value2_Addr: System.Address; Tol: access Smu_Types.Sim_Tolerance; Path: Interfaces.C.Strings.chars_ptr; Str_List_Append_Func: Smu_Types.PFN_STR_LIST_APPEND; Err_Paths_Addr: System.Address); pragma Convention (C, Compare);
            function Get_Signature(Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Get_Signature);
            function Set_Default_Value(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Set_Default_Value);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Char.Object'Size));
        end Kcg_Char;
        package Kcg_Float32 is
            --****************************************************************
            --    Kcg_Config.Kcg_Float32
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Float32;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Float_To_String(Kcg_Config.Kcg_Float32, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Float_string(Kcg_Config.Kcg_Float32, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Float(Kcg_Config.Kcg_Float32, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Float_To_Double(Kcg_Config.Kcg_Float32, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Float_To_Long(Kcg_Config.Kcg_Float32, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Float(Kcg_Config.Kcg_Float32, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("F32");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Float_Default_Value(Kcg_Config.Kcg_Float32);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Float32.Object'Size));
        end Kcg_Float32;
        package Kcg_Float64 is
            --****************************************************************
            --    Kcg_Config.Kcg_Float64
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Float64;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Float_To_String(Kcg_Config.Kcg_Float64, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Float_string(Kcg_Config.Kcg_Float64, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Float(Kcg_Config.Kcg_Float64, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Float_To_Double(Kcg_Config.Kcg_Float64, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Float_To_Long(Kcg_Config.Kcg_Float64, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Float(Kcg_Config.Kcg_Float64, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("F64");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Float_Default_Value(Kcg_Config.Kcg_Float64);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Float64.Object'Size));
        end Kcg_Float64;
        package Kcg_Int16 is
            --****************************************************************
            --    Kcg_Config.Kcg_Int16
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Int16;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Int16, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Int_string(Kcg_Config.Kcg_Int16, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Int(Kcg_Config.Kcg_Int16, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Int_To_Double(Kcg_Config.Kcg_Int16, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Int_To_Long(Kcg_Config.Kcg_Int16, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Int(Kcg_Config.Kcg_Int16, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("I16");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Int_Default_Value(Kcg_Config.Kcg_Int16);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Int16.Object'Size));
        end Kcg_Int16;
        package Kcg_Int32 is
            --****************************************************************
            --    Kcg_Config.Kcg_Int32
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Int32;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Int32, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Int_string(Kcg_Config.Kcg_Int32, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Int(Kcg_Config.Kcg_Int32, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Int_To_Double(Kcg_Config.Kcg_Int32, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Int_To_Long(Kcg_Config.Kcg_Int32, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Int(Kcg_Config.Kcg_Int32, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("I32");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Int_Default_Value(Kcg_Config.Kcg_Int32);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Int32.Object'Size));
        end Kcg_Int32;
        package Kcg_Int64 is
            --****************************************************************
            --    Kcg_Config.Kcg_Int64
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Int64;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Int64, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Int_string(Kcg_Config.Kcg_Int64, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Int(Kcg_Config.Kcg_Int64, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Int_To_Double(Kcg_Config.Kcg_Int64, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Int_To_Long(Kcg_Config.Kcg_Int64, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Int(Kcg_Config.Kcg_Int64, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("I64");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Int_Default_Value(Kcg_Config.Kcg_Int64);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Int64.Object'Size));
        end Kcg_Int64;
        package Kcg_Int8 is
            --****************************************************************
            --    Kcg_Config.Kcg_Int8
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Int8;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Int8, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Int_string(Kcg_Config.Kcg_Int8, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Int(Kcg_Config.Kcg_Int8, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Int_To_Double(Kcg_Config.Kcg_Int8, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Int_To_Long(Kcg_Config.Kcg_Int8, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Int(Kcg_Config.Kcg_Int8, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("I8");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Int_Default_Value(Kcg_Config.Kcg_Int8);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Int8.Object'Size));
        end Kcg_Int8;
        package Kcg_Size is
            --****************************************************************
            --    Kcg_Config.Kcg_Size
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Size;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Size, VTable'Access);
            function Check_String(C_Str: Interfaces.C.Strings.chars_ptr; End_Ptr: access System.Address) return Interfaces.C.int; pragma Convention (C, Check_String);
            function String_To(C_Str: Interfaces.C.Strings.chars_ptr; Value_Addr: System.Address; End_Ptr: access System.Address) return Interfaces.C.int; pragma Convention (C, String_To);
            function Is_Double_Conversion_Allowed return Interfaces.C.int; pragma Convention (C, Is_Double_Conversion_Allowed);
            function To_Double(Value_Addr: System.Address; Ret_Value: access Interfaces.C.double) return Interfaces.C.int; pragma Convention (C, To_Double);
            function Is_Long_Conversion_Allowed return Interfaces.C.int; pragma Convention (C, Is_Long_Conversion_Allowed);
            function To_Long(Value_Addr: System.Address; Ret_Value: access Interfaces.C.int) return Interfaces.C.int; pragma Convention (C, To_Long);
            procedure Compare(Result: access Interfaces.C.unsigned; Value1_Addr: System.Address; Value2_Addr: System.Address; Tol: access Smu_Types.Sim_Tolerance; Path: Interfaces.C.Strings.chars_ptr; Str_List_Append_Func: Smu_Types.PFN_STR_LIST_APPEND; Err_Paths_Addr: System.Address); pragma Convention (C, Compare);
            function Get_Signature(Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Get_Signature);
            function Set_Default_Value(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Set_Default_Value);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Size.Object'Size));
        end Kcg_Size;
        package Kcg_Uint16 is
            --****************************************************************
            --    Kcg_Config.Kcg_Uint16
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Uint16;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Uint16, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Uint_string(Kcg_Config.Kcg_Uint16, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Uint(Kcg_Config.Kcg_Uint16, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Uint_To_Double(Kcg_Config.Kcg_Uint16, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Uint_To_Long(Kcg_Config.Kcg_Uint16, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Int(Kcg_Config.Kcg_Uint16, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("UI16");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Int_Default_Value(Kcg_Config.Kcg_Uint16);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Uint16.Object'Size));
        end Kcg_Uint16;
        package Kcg_Uint32 is
            --****************************************************************
            --    Kcg_Config.Kcg_Uint32
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Uint32;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Uint32, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Uint_string(Kcg_Config.Kcg_Uint32, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Uint(Kcg_Config.Kcg_Uint32, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Uint_To_Double(Kcg_Config.Kcg_Uint32, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Uint_To_Long(Kcg_Config.Kcg_Uint32, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Int(Kcg_Config.Kcg_Uint32, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("UI32");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Int_Default_Value(Kcg_Config.Kcg_Uint32);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Uint32.Object'Size));
        end Kcg_Uint32;
        package Kcg_Uint64 is
            --****************************************************************
            --    Kcg_Config.Kcg_Uint64
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Uint64;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Uint64, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Uint_string(Kcg_Config.Kcg_Uint64, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Uint(Kcg_Config.Kcg_Uint64, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Uint_To_Double(Kcg_Config.Kcg_Uint64, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Uint_To_Long(Kcg_Config.Kcg_Uint64, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Int(Kcg_Config.Kcg_Uint64, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("UI64");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Int_Default_Value(Kcg_Config.Kcg_Uint64);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Uint64.Object'Size));
        end Kcg_Uint64;
        package Kcg_Uint8 is
            --****************************************************************
            --    Kcg_Config.Kcg_Uint8
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Config.Kcg_Uint8;
            function To_String is new Smu_Predef_Conv.Predef_Kcg_Int_To_String(Kcg_Config.Kcg_Uint8, VTable'Access);
            function Check_String is new Smu_Predef_Conv.Predef_check_Kcg_Uint_string(Kcg_Config.Kcg_Uint8, VTable'Access);
            function String_To is new Smu_Predef_Conv.Predef_String_To_Kcg_Uint(Kcg_Config.Kcg_Uint8, VTable'Access);
            function Is_Double_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Double_Conversion_Allowed(VTable'Access);
            function To_Double is new Smu_Predef_Conv.Predef_Kcg_Uint_To_Double(Kcg_Config.Kcg_Uint8, VTable'Access);
            function Is_Long_Conversion_Allowed is new Smu_Predef_Conv.Predef_Is_Long_Conversion_Allowed(VTable'Access);
            function To_Long is new Smu_Predef_Conv.Predef_Kcg_Uint_To_Long(Kcg_Config.Kcg_Uint8, VTable'Access);
            procedure Compare is new Smu_Predef_Conv.Predef_Compare_Kcg_Int(Kcg_Config.Kcg_Uint8, VTable'Access);
            function Get_Signature is new Smu_Predef_Conv.Predef_Get_Signature("UI8");
            function Set_Default_Value is new Smu_Predef_Conv.Predef_Set_Kcg_Int_Default_Value(Kcg_Config.Kcg_Uint8);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Uint8.Object'Size));
        end Kcg_Uint8;
    end Smuw_Kcg_Config;
    package Smuw_Kcg_Top is
        package Kcg_Sub is
            package Context_control is
                --****************************************************************
                --    Kcg_Top.Kcg_Sub.Context_control
                --****************************************************************
                Object: Kcg_Top.Kcg_Sub.Context_control;
                function Fields return Smu_Types.Array_Sim_Field_Utils;
                Fields_Data: Smu_Types.Array_Sim_Field_Utils(0..12);
                Fields_Access: access Smu_Types.Sim_Field_Utils := Fields_Data(Fields_Data'First)'Access;
            end Context_control;
        end Kcg_Sub;
    end Smuw_Kcg_Top;
    package Smuw_Kcg_Types is
        package Char_Range_0_149 is
            --****************************************************************
            --    Kcg_Types.Char_Range_0_149
            --****************************************************************
            VTable: aliased Smu_VTable.Sim_Type_VTable_Access;
            Object: Kcg_Types.Char_Range_0_149;
            function To_String(Value_Addr: System.Address; Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, To_String);
            function Check_String(C_Str: Interfaces.C.Strings.chars_ptr; End_Ptr: access System.Address) return Interfaces.C.int; pragma Convention (C, Check_String);
            function String_To(C_Str: Interfaces.C.Strings.chars_ptr; Value_Addr: System.Address; End_Ptr: access System.Address) return Interfaces.C.int; pragma Convention (C, String_To);
            function Is_Double_Conversion_Allowed return Interfaces.C.int; pragma Convention (C, Is_Double_Conversion_Allowed);
            function To_Double(Value_Addr: System.Address; Ret_Value: access Interfaces.C.double) return Interfaces.C.int; pragma Convention (C, To_Double);
            function Is_Long_Conversion_Allowed return Interfaces.C.int; pragma Convention (C, Is_Long_Conversion_Allowed);
            function To_Long(Value_Addr: System.Address; Ret_Value: access Interfaces.C.int) return Interfaces.C.int; pragma Convention (C, To_Long);
            procedure Compare(Result: access Interfaces.C.unsigned; Value1_Addr: System.Address; Value2_Addr: System.Address; Tol: access Smu_Types.Sim_Tolerance; Path: Interfaces.C.Strings.chars_ptr; Str_List_Append_Func: Smu_Types.PFN_STR_LIST_APPEND; Err_Paths_Addr: System.Address); pragma Convention (C, Compare);
            function Get_Signature(Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Get_Signature);
            function Set_Default_Value(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Set_Default_Value);
            function Init(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Init);
            function Release(Value_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Release);
            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int; pragma Convention (C, Copy);
            Type_Utils: aliased Smu_Types.Sim_Type_Utils := 
                (To_String'Access, Check_String'Access, String_To'Access, Is_Double_Conversion_Allowed'Access, 
                To_Double'Access, Is_Long_Conversion_Allowed'Access, To_Long'Access, Compare'Access,
                Get_Signature'Access, Set_Default_Value'Access, Init'Access, Release'Access, Copy'Access, Smu_Types.To_Bytes(Smuw_Kcg_Types.Char_Range_0_149.Object'Size));
        end Char_Range_0_149;
    end Smuw_Kcg_Types;

end Smuw_Type;

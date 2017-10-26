with Kcg_Config; use Kcg_Config;
with Smu_Predef_Conv; use Smu_Predef_Conv;
with Interfaces, Interfaces.C, Interfaces.C.Strings;
use type Interfaces.C.unsigned;
use type Interfaces.C.int;
with Ada.Strings; use Ada.Strings;
with Ada.Strings.Fixed; use Ada.Strings.Fixed;

package body Smuw_Type
is
    package body Smuw_Boolean is

        --****************************************************************
        --    Boolean
        --****************************************************************
        function To_String(Value_Addr: System.Address; Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int is
            Value: Boolean; for Value'Address use Value_Addr;
        begin
            if Smu_VTable.Type_To_String(Value_Addr, VTable, Str_Append_Func, Str_Addr) = 0 then
                return Predef_Boolean_To_String(Value, Str_Append_Func, Str_Addr);
            end if;
            return 1;
        exception
            when others => return 0;
        end To_String;

        function Check_String(C_Str: Interfaces.C.Strings.chars_ptr; End_Ptr: access System.Address) return Interfaces.C.int is
           Temp : Boolean;
        begin
           return String_To(C_Str, Temp'Address, End_Ptr);
        end Check_String;

        function String_To(C_Str: Interfaces.C.Strings.chars_ptr; Value_Addr: System.Address; End_Ptr: access System.Address) return Interfaces.C.int is
            Value: aliased Boolean; for Value'Address use Value_Addr;
            Ret: Interfaces.C.int := 1;
        begin
            if Smu_VTable.String_To_Type(C_Str, VTable, Value_Addr, End_Ptr) = 0 then
                return Predef_String_To_Boolean(C_Str, Value'Access, End_Ptr);
            end if;
            return Ret;
        exception
            when others => return 0;
        end String_To;

        function Is_Double_Conversion_Allowed return Interfaces.C.int is
            Ret : Interfaces.C.int := 0;
        begin
            Ret := Smu_VTable.Is_Double_Conversion_Allowed(VTable);
            if Ret = -1 then
                Ret := 1;
            end if;
            return Ret;
        end Is_Double_Conversion_Allowed;

        function To_Double(Value_Addr: System.Address; Ret_Value: access Interfaces.C.double) return Interfaces.C.int is
           Value: Boolean; for Value'Address use Value_Addr;
        begin
            if Smu_VTable.To_Double(Value_Addr, VTable, Ret_Value) = 0 then
                if Value then
                    Ret_Value.all := 1.0;
                else
                    Ret_Value.all := 0.0;
                end if; 
            end if;
            return 1;
        exception
            when others => return 0;
        end To_Double;

        function Is_Long_Conversion_Allowed return Interfaces.C.int is
            Ret : Interfaces.C.int := 0;
        begin
            Ret := Smu_VTable.Is_Long_Conversion_Allowed(VTable);
            if Ret = -1 then
                Ret := 1;
            end if;
            return Ret;
        end Is_Long_Conversion_Allowed;

        function To_Long(Value_Addr: System.Address; Ret_Value: access Interfaces.C.int) return Interfaces.C.int is
           Value: Boolean; for Value'Address use Value_Addr;
        begin
            if Smu_VTable.To_Long(Value_Addr, VTable, Ret_Value) = 0 then
                if Value then
                    Ret_Value.all := 1;
                else
                    Ret_Value.all := 0;
                end if; 
            end if;
                return 1;
            exception
                when others => return 0;
        end To_Long;

        procedure Compare(Result: access Interfaces.C.unsigned; Value1_Addr: System.Address; Value2_Addr: System.Address; Tol: access Smu_Types.Sim_Tolerance; Path: Interfaces.C.Strings.chars_ptr; Str_List_Append_Func: Smu_Types.PFN_STR_LIST_APPEND; Err_Paths_Addr: System.Address) is
            Value1 : aliased Boolean; for Value1'Address use Value1_Addr;
            Value2 : aliased Boolean; for Value2'Address use Value2_Addr;
            Unit_Result: aliased Interfaces.C.unsigned;
        begin
           if Smu_VTable.Type_Compare(Unit_Result'Access, VTable, Value1_Addr, Value2_Addr, Tol) = 0 then
                Unit_Result := Predef_Compare_Boolean(Value1, Value2);
           end if;
           Result.all := Result.all or Unit_Result;
           Smu_VTable.type_Compare_message(Unit_Result, Path, Str_List_Append_Func, Err_Paths_Addr);
        end Compare;

        Sgn: constant Interfaces.C.Strings.chars_ptr := Interfaces.C.Strings.New_String("B");
        function Get_Signature(Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int is
        begin
            return Str_Append_Func(Sgn, Str_Addr);
        exception
            when others => return 0;
        end Get_Signature;

        function Set_Default_Value(Value_Addr: System.Address) return Interfaces.C.int is
            Value: Boolean := false; for Value'Address use Value_Addr;
        begin
            return 1;
        exception
            when others => return 0;
        end Set_Default_Value;

        function Init(Value_Addr: System.Address) return Interfaces.C.int is
            Value: Boolean; for Value'Address use Value_Addr;
        begin

            return 1;
        exception
            when others => return 0;
        end Init;

        function Release(Value_Addr: System.Address) return Interfaces.C.int is
            Value: Boolean; for Value'Address use Value_Addr;
        begin
            return 1;
        exception
            when others => return 0;
        end Release;

        function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
            To: Boolean; for To'Address use To_Addr;
            From: Boolean; for From'Address use From_Addr;
        begin
            To := From;
            return 1;
        exception
            when others => return 0;
        end Copy;

    end Smuw_Boolean;

    package body Smuw_Kcg_Config is

        package body Kcg_Char is

            --****************************************************************
            --    Kcg_Config.Kcg_Char
            --****************************************************************
            function To_String(Value_Addr: System.Address; Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Char; for Value'Address use Value_Addr;
            begin
                if Smu_VTable.Type_To_String(Value_Addr, VTable, Str_Append_Func, Str_Addr) = 0 then
                    return Predef_Kcg_Char_To_String(Value, Str_Append_Func, Str_Addr);
                end if;
                return 1;
            exception
                when others => return 0;
            end To_String;

            function Check_String(C_Str: Interfaces.C.Strings.chars_ptr; End_Ptr: access System.Address) return Interfaces.C.int is
               Temp : Kcg_Config.Kcg_Char;
            begin
               return String_To(C_Str, Temp'Address, End_Ptr);
            end Check_String;

            function String_To(C_Str: Interfaces.C.Strings.chars_ptr; Value_Addr: System.Address; End_Ptr: access System.Address) return Interfaces.C.int is
                Value: aliased Kcg_Config.Kcg_Char; for Value'Address use Value_Addr;
                Ret: Interfaces.C.int := 1;
            begin
                if Smu_VTable.String_To_Type(C_Str, VTable, Value_Addr, End_Ptr) = 0 then
                    return Predef_String_To_Kcg_Char(C_Str, Value'Access, End_Ptr);
                end if;
                return Ret;
            exception
                when others => return 0;
            end String_To;

            function Is_Double_Conversion_Allowed return Interfaces.C.int is
                Ret : Interfaces.C.int := 0;
            begin
                Ret := Smu_VTable.Is_Double_Conversion_Allowed(VTable);
                if Ret = -1 then
                    Ret := 1;
                end if;
                return Ret;
            end Is_Double_Conversion_Allowed;

            function To_Double(Value_Addr: System.Address; Ret_Value: access Interfaces.C.double) return Interfaces.C.int is
               Value: Kcg_Config.Kcg_Char; for Value'Address use Value_Addr;
            begin
                if Smu_VTable.To_Double(Value_Addr, VTable, Ret_Value) = 0 then
                    Ret_Value.all := Interfaces.C.double(Kcg_Config.Kcg_Char'Pos(Value));
                end if;
                return 1;
            exception
                when others => return 0;
            end To_Double;

            function Is_Long_Conversion_Allowed return Interfaces.C.int is
                Ret : Interfaces.C.int := 0;
            begin
                Ret := Smu_VTable.Is_Long_Conversion_Allowed(VTable);
                if Ret = -1 then
                    Ret := 1;
                end if;
                return Ret;
            end Is_Long_Conversion_Allowed;

            function To_Long(Value_Addr: System.Address; Ret_Value: access Interfaces.C.int) return Interfaces.C.int is
               Value: Kcg_Config.Kcg_Char; for Value'Address use Value_Addr;
            begin
                if Smu_VTable.To_Long(Value_Addr, VTable, Ret_Value) = 0 then
                    Ret_Value.all := Interfaces.C.int(Kcg_Config.Kcg_Char'Pos(Value));
                end if;
                    return 1;
                exception
                    when others => return 0;
            end To_Long;

            procedure Compare(Result: access Interfaces.C.unsigned; Value1_Addr: System.Address; Value2_Addr: System.Address; Tol: access Smu_Types.Sim_Tolerance; Path: Interfaces.C.Strings.chars_ptr; Str_List_Append_Func: Smu_Types.PFN_STR_LIST_APPEND; Err_Paths_Addr: System.Address) is
                Value1 : aliased Kcg_Config.Kcg_Char; for Value1'Address use Value1_Addr;
                Value2 : aliased Kcg_Config.Kcg_Char; for Value2'Address use Value2_Addr;
                Unit_Result: aliased Interfaces.C.unsigned;
            begin
               if Smu_VTable.Type_Compare(Unit_Result'Access, VTable, Value1_Addr, Value2_Addr, Tol) = 0 then
                    Unit_Result := Predef_Compare_Kcg_Char(Value1, Value2);
               end if;
               Result.all := Result.all or Unit_Result;
               Smu_VTable.type_Compare_message(Unit_Result, Path, Str_List_Append_Func, Err_Paths_Addr);
            end Compare;

            Sgn: constant Interfaces.C.Strings.chars_ptr := Interfaces.C.Strings.New_String("C");
            function Get_Signature(Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int is
            begin
                return Str_Append_Func(Sgn, Str_Addr);
            exception
                when others => return 0;
            end Get_Signature;

            function Set_Default_Value(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Char := Kcg_Config.Kcg_Char'First; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Set_Default_Value;

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Char; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Char; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Char; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Char; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Char;
        package body Kcg_Float32 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Float32; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Float32; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Float32; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Float32; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Float32;
        package body Kcg_Float64 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Float64; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Float64; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Float64; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Float64; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Float64;
        package body Kcg_Int16 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Int16; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Int16; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Int16; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Int16; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Int16;
        package body Kcg_Int32 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Int32; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Int32; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Int32; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Int32; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Int32;
        package body Kcg_Int64 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Int64; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Int64; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Int64; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Int64; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Int64;
        package body Kcg_Int8 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Int8; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Int8; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Int8; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Int8; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Int8;
        package body Kcg_Size is

            --****************************************************************
            --    Kcg_Config.Kcg_Size
            --****************************************************************
            function Check_String(C_Str: Interfaces.C.Strings.chars_ptr; End_Ptr: access System.Address) return Interfaces.C.int is
               Temp : Kcg_Config.Kcg_Size;
            begin
               return String_To(C_Str, Temp'Address, End_Ptr);
            end Check_String;

            function String_To(C_Str: Interfaces.C.Strings.chars_ptr; Value_Addr: System.Address; End_Ptr: access System.Address) return Interfaces.C.int is
                Value: aliased Kcg_Config.Kcg_Size; for Value'Address use Value_Addr;
                Ret: Interfaces.C.int := 1;
            begin
                if Smu_VTable.String_To_Type(C_Str, VTable, Value_Addr, End_Ptr) = 0 then
                    return Predef_String_To_Kcg_Size(C_Str, Value'Access, End_Ptr);
                end if;
                return Ret;
            exception
                when others => return 0;
            end String_To;

            function Is_Double_Conversion_Allowed return Interfaces.C.int is
                Ret : Interfaces.C.int := 0;
            begin
                Ret := Smu_VTable.Is_Double_Conversion_Allowed(VTable);
                if Ret = -1 then
                    Ret := 1;
                end if;
                return Ret;
            end Is_Double_Conversion_Allowed;

            function To_Double(Value_Addr: System.Address; Ret_Value: access Interfaces.C.double) return Interfaces.C.int is
               Value: Kcg_Config.Kcg_Size; for Value'Address use Value_Addr;
            begin
                if Smu_VTable.To_Double(Value_Addr, VTable, Ret_Value) = 0 then
                    Ret_Value.all := Interfaces.C.double(Value);
                end if;
                return 1;
            exception
                when others => return 0;
            end To_Double;

            function Is_Long_Conversion_Allowed return Interfaces.C.int is
                Ret : Interfaces.C.int := 0;
            begin
                Ret := Smu_VTable.Is_Long_Conversion_Allowed(VTable);
                if Ret = -1 then
                    Ret := 1;
                end if;
                return Ret;
            end Is_Long_Conversion_Allowed;

            function To_Long(Value_Addr: System.Address; Ret_Value: access Interfaces.C.int) return Interfaces.C.int is
               Value: Kcg_Config.Kcg_Size; for Value'Address use Value_Addr;
            begin
                if Smu_VTable.To_Long(Value_Addr, VTable, Ret_Value) = 0 then
                    Ret_Value.all := Interfaces.C.int(Value);
                end if;
                    return 1;
                exception
                    when others => return 0;
            end To_Long;

            procedure Compare(Result: access Interfaces.C.unsigned; Value1_Addr: System.Address; Value2_Addr: System.Address; Tol: access Smu_Types.Sim_Tolerance; Path: Interfaces.C.Strings.chars_ptr; Str_List_Append_Func: Smu_Types.PFN_STR_LIST_APPEND; Err_Paths_Addr: System.Address) is
                Value1 : aliased Kcg_Config.Kcg_Size; for Value1'Address use Value1_Addr;
                Value2 : aliased Kcg_Config.Kcg_Size; for Value2'Address use Value2_Addr;
                Unit_Result: aliased Interfaces.C.unsigned;
            begin
               if Smu_VTable.Type_Compare(Unit_Result'Access, VTable, Value1_Addr, Value2_Addr, Tol) = 0 then
                    Unit_Result := Predef_Compare_Kcg_Size(Value1, Value2);
               end if;
               Result.all := Result.all or Unit_Result;
               Smu_VTable.type_Compare_message(Unit_Result, Path, Str_List_Append_Func, Err_Paths_Addr);
            end Compare;

            Sgn: constant Interfaces.C.Strings.chars_ptr := Interfaces.C.Strings.New_String("S");
            function Get_Signature(Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int is
            begin
                return Str_Append_Func(Sgn, Str_Addr);
            exception
                when others => return 0;
            end Get_Signature;

            function Set_Default_Value(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Size := 0; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Set_Default_Value;

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Size; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Size; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Size; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Size; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Size;
        package body Kcg_Uint16 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Uint16; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Uint16; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Uint16; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Uint16; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Uint16;
        package body Kcg_Uint32 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Uint32; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Uint32; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Uint32; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Uint32; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Uint32;
        package body Kcg_Uint64 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Uint64; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Uint64; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Uint64; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Uint64; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Uint64;
        package body Kcg_Uint8 is

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Uint8; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Config.Kcg_Uint8; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Config.Kcg_Uint8; for To'Address use To_Addr;
                From: Kcg_Config.Kcg_Uint8; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Kcg_Uint8;
    end Smuw_Kcg_Config;
    package body Smuw_Kcg_Top is

        package body Kcg_Sub is

            package body Context_control is

                Fields_Intialized: Boolean := False;
                function Fields return Smu_Types.Array_Sim_Field_Utils is 
                begin
                    if Fields_Intialized = False then
                        Fields_Data := (
                            (Interfaces.C.Strings.New_String("Emit"), Object.Emit'Position, Smuw_Boolean.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("SignalToLED"), Object.SignalToLED'Position, Smuw_Kcg_Config.Kcg_Uint8.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L1"), Object.L1'Position, Smuw_Boolean.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L31"), Object.L31'Position, Smuw_Boolean.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L29"), Object.L29'Position, Smuw_Boolean.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L28"), Object.L28'Position, Smuw_Boolean.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L27"), Object.L27'Position, Smuw_Boolean.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L32"), Object.L32'Position, Smuw_Kcg_Types.Char_Range_0_149.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L33"), Object.L33'Position, Smuw_Kcg_Config.Kcg_Float32.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L34"), Object.L34'Position, Smuw_Kcg_Config.Kcg_Float32.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L35"), Object.L35'Position, Smuw_Kcg_Config.Kcg_Uint8.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L38"), Object.L38'Position, Smuw_Kcg_Config.Kcg_Uint8.Type_Utils'Access), 
                            (Interfaces.C.Strings.New_String("L39"), Object.L39'Position, Smuw_Kcg_Config.Kcg_Uint8.Type_Utils'Access)
                        );
                        Fields_Intialized := True;
                    end if;
                    return Fields_Data;
                end Fields;
            end Context_control;
        end Kcg_Sub;
    end Smuw_Kcg_Top;
    package body Smuw_Kcg_Types is

        package body Char_Range_0_149 is

            --****************************************************************
            --    Kcg_Types.Char_Range_0_149
            --****************************************************************
            function To_String(Value_Addr: System.Address; Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Types.Char_Range_0_149; for Value'Address use Value_Addr;
            begin
                if Smu_VTable.Type_To_String(Value_Addr, VTable, Str_Append_Func, Str_Addr) = 0 then
                    if Smu_Types.Converter.Display_Strings /= 0 then
                        return Smu_Types.Converter.Char_Array_To_String_Func(Value_Addr, Smuw_Kcg_Config.Kcg_Char.To_String'Access, Value'Length, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Char.Object'Size), Str_Append_Func, Str_Addr, Smu_Types.Converter.Strings_Padding, Smu_Types.Converter.Strings_Padding_Char);
                    else
                        return Smu_Types.Converter.Array_To_String_Func(Value_Addr, Smuw_Kcg_Config.Kcg_Char.To_String'Access, Value'Length, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Char.Object'Size), Str_Append_Func, Str_Addr);
                    end if;
                end if;
                return 1;
            exception
                when others => return 0;
            end To_String;

            function Check_String(C_Str: Interfaces.C.Strings.chars_ptr; End_Ptr: access System.Address) return Interfaces.C.int is
               Temp : Kcg_Types.Char_Range_0_149;
            begin
               return String_To(C_Str, Temp'Address, End_Ptr);
            end Check_String;

            function String_To(C_Str: Interfaces.C.Strings.chars_ptr; Value_Addr: System.Address; End_Ptr: access System.Address) return Interfaces.C.int is
                Value: aliased Kcg_Types.Char_Range_0_149; for Value'Address use Value_Addr;
                Ret: Interfaces.C.int := 1;
            begin
                if Smu_VTable.String_To_Type(C_Str, VTable, Value_Addr, End_Ptr) = 0 then
                    declare
                        strStr: String := Interfaces.C.Strings.Value(C_Str);
                    begin
                        if strStr'Length >= 1 and then strStr(strStr'First) = '"' then 
                            return Smu_Types.Converter.String_To_Char_Array_Func(C_Str, Value_Addr, Smuw_Kcg_Config.Kcg_Char.Type_Utils'Access, Kcg_Types.Char_Range_0_149'Length, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Char.Object'Size), End_Ptr, Smu_Types.Converter.Strings_Padding, Smu_Types.Converter.Strings_Padding_Char);
                        else
                            return Smu_Types.Converter.String_To_Array_Func(C_Str, Value_Addr, Smuw_Kcg_Config.Kcg_Char.Type_Utils'Access, Kcg_Types.Char_Range_0_149'Length, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Char.Object'Size), End_Ptr);
                        end if;
                    end;
                end if;
                return Ret;
            exception
                when others => return 0;
            end String_To;

            function Is_Double_Conversion_Allowed return Interfaces.C.int is
                Ret : Interfaces.C.int := 0;
            begin
                Ret := Smu_VTable.Is_Double_Conversion_Allowed(VTable);
                if Ret = -1 then
                    Ret := 0;
                end if;
                return Ret;
            end Is_Double_Conversion_Allowed;

            function To_Double(Value_Addr: System.Address; Ret_Value: access Interfaces.C.double) return Interfaces.C.int is
               Value: Kcg_Types.Char_Range_0_149; for Value'Address use Value_Addr;
            begin
                if Smu_VTable.To_Double(Value_Addr, VTable, Ret_Value) = 0 then
                    return 0;
                end if;
                return 1;
            exception
                when others => return 0;
            end To_Double;

            function Is_Long_Conversion_Allowed return Interfaces.C.int is
                Ret : Interfaces.C.int := 0;
            begin
                Ret := Smu_VTable.Is_Long_Conversion_Allowed(VTable);
                if Ret = -1 then
                    Ret := 0;
                end if;
                return Ret;
            end Is_Long_Conversion_Allowed;

            function To_Long(Value_Addr: System.Address; Ret_Value: access Interfaces.C.int) return Interfaces.C.int is
               Value: Kcg_Types.Char_Range_0_149; for Value'Address use Value_Addr;
            begin
                if Smu_VTable.To_Long(Value_Addr, VTable, Ret_Value) = 0 then
                    return 0;
                end if;
                    return 1;
                exception
                    when others => return 0;
            end To_Long;

            procedure Compare(Result: access Interfaces.C.unsigned; Value1_Addr: System.Address; Value2_Addr: System.Address; Tol: access Smu_Types.Sim_Tolerance; Path: Interfaces.C.Strings.chars_ptr; Str_List_Append_Func: Smu_Types.PFN_STR_LIST_APPEND; Err_Paths_Addr: System.Address) is
                Value1 : aliased Kcg_Types.Char_Range_0_149; for Value1'Address use Value1_Addr;
                Value2 : aliased Kcg_Types.Char_Range_0_149; for Value2'Address use Value2_Addr;
                Unit_Result: aliased Interfaces.C.unsigned;
            begin
                if Smu_VTable.Type_Compare(Unit_Result'Access, VTable, Value1_Addr, Value2_Addr, Tol) /= 0 then
                    Result.all := Result.all or Unit_Result;
                    Smu_VTable.type_Compare_message(Unit_Result, Path, Str_List_Append_Func, Err_Paths_Addr);
                else
                    Smu_Types.Converter.Array_Comparison_Func(Result, Value1_Addr, Value2_Addr, Smuw_Kcg_Config.Kcg_Char.Compare'Access, Kcg_Types.Char_Range_0_149'Length, Smu_Types.To_Bytes(Smuw_Kcg_Config.Kcg_Char.Object'Size), Tol, Path, Str_List_Append_Func, Err_Paths_Addr);
                end if;
            end Compare;


            function Get_Signature(Str_Append_Func: Smu_Types.PFN_STR_APPEND; Str_Addr: System.Address) return Interfaces.C.int is
            begin
                return Smu_Types.Converter.Get_Array_Signature_Func(Smuw_Kcg_Config.Kcg_Char.Type_Utils.Get_Signature_Func, Kcg_Types.Char_Range_0_149'Length, Str_Append_Func, Str_Addr);
            exception
                when others => return 0;
            end Get_Signature;

            function Set_Default_Value(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Types.Char_Range_0_149; for Value'Address use Value_Addr;
            begin
                declare
                    Cell_Def: aliased Kcg_Config.Kcg_Char;
                begin
                    if Smuw_Kcg_Config.Kcg_Char.Set_Default_Value(Cell_Def'Address) = 0 then
                        return 0;
                    end if;
                    for i in Value'Range loop
                        Value(i) := Cell_Def;
                    end loop;
                end;
                return 1;
            exception
                when others => return 0;
            end Set_Default_Value;

            function Init(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Types.Char_Range_0_149; for Value'Address use Value_Addr;
            begin

                return 1;
            exception
                when others => return 0;
            end Init;

            function Release(Value_Addr: System.Address) return Interfaces.C.int is
                Value: Kcg_Types.Char_Range_0_149; for Value'Address use Value_Addr;
            begin
                return 1;
            exception
                when others => return 0;
            end Release;

            function Copy(To_Addr: System.Address ; From_Addr: System.Address) return Interfaces.C.int is
                To: Kcg_Types.Char_Range_0_149; for To'Address use To_Addr;
                From: Kcg_Types.Char_Range_0_149; for From'Address use From_Addr;
            begin
                To := From;
                return 1;
            exception
                when others => return 0;
            end Copy;

        end Char_Range_0_149;
    end Smuw_Kcg_Types;

end Smuw_Type;

-- smuw_mapping.adb

-- ada
with Ada.Unchecked_Conversion;
with Interfaces, Interfaces.C, Interfaces.C.Strings;
with System, System.Storage_Elements; use System.Storage_Elements;
-- kcg
with Kcg_Config, Kcg_Types;
-- wrapper
with Smu_Mapping, Smu_Types; use Smu_Mapping, Smu_Types;
with Smuw_Type, Smuw_Interface;
--with Smuw_Type.Kcg_Config, Smuw_Type.Kcg_Types;

package body Smuw_Mapping is

    ---------------------------------------------------------------------------
    -- helpers

    function to_size is new Ada.Unchecked_Conversion(Source => System.Address, Target => Interfaces.C.size_t);
    function to_size is new Ada.Unchecked_Conversion(Source => Storage_Offset, Target => Interfaces.C.size_t);

    ---------------------------------------------------------------------------
    -- forwards

    -- clock


    -- iterators 

    Iter_array_150: aliased Mapping_Iterator;

    -- tables

    -- Kcg_Types.Char_Range_0_149
    Scope_2_Entries: Mapping_Entry_Array(0..0);
    Scope_2: aliased Mapping_Scope;

    -- control/ control
    Scope_1_Entries: Mapping_Entry_Array(0..14);
    Scope_1: aliased Mapping_Scope;

    -- 
    Scope_0_Entries: Mapping_Entry_Array(0..0);
    Scope_0: aliased Mapping_Scope;

    ---------------------------------------------------------------------------
    -- definitions

    scope: access Mapping_Scope := null;

    function Scope_Init return access Mapping_Scope is
        use Smuw_Interface;
    begin
        if Scope = Null then
            Iter_array_150 := (Interfaces.C.Strings.New_String("array"), 150, 150, Null);

            -- Kcg_Types.Char_Range_0_149
            Scope_2_Entries := (0 =>
                (MAP_ARRAY, Interfaces.C.Strings.New_String(""), Iter_array_150'Access, To_Bytes(Smuw_Type.Smuw_Kcg_Config.Kcg_Char.Object'Size), 0, Smuw_Type.Smuw_Kcg_Config.Kcg_Char.Type_Utils'Access, Null, Null, Null, 1, 0)
            );
            scope_2 := (Interfaces.C.Strings.New_String("Kcg_Types.Char_Range_0_149"), Scope_2_Entries(Scope_2_Entries'First)'Access, 1);

            -- control/ control
            Scope_1_Entries := (
                (MAP_OUTPUT, Interfaces.C.Strings.New_String("Emit"), Null, To_Bytes(Smuw_Type.Smuw_Boolean.Object'Size), To_Size(Smuw_Interface.Ctx.Emit'Address), Smuw_Type.Smuw_Boolean.Type_Utils'Access, Null, Null, Null, 1, 0),
                (MAP_OUTPUT, Interfaces.C.Strings.New_String("SignalToLED"), Null, To_Bytes(Smuw_Type.Smuw_Kcg_Config.Kcg_Uint8.Object'Size), To_Size(Smuw_Interface.Ctx.SignalToLED'Address), Smuw_Type.Smuw_Kcg_Config.Kcg_Uint8.Type_Utils'Access, Null, Null, Null, 1, 1),
                (MAP_INPUT, Interfaces.C.Strings.New_String("SignalFromButton"), Null, To_Bytes(Smuw_Type.Smuw_Boolean.Object'Size), To_Size(Smuw_Interface.SignalFromButton'Address), Smuw_Type.Smuw_Boolean.Type_Utils'Access, Null, Null, Null, 1, 2),
                (MAP_INPUT, Interfaces.C.Strings.New_String("Description"), Null, To_Bytes(Smuw_Type.Smuw_Kcg_Types.Char_Range_0_149.Object'Size), To_Size(Smuw_Interface.Description'Address), Smuw_Type.Smuw_Kcg_Types.Char_Range_0_149.Type_Utils'Access, Null, Null, scope_2'Access, 1, 3),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L1"), Null, To_Bytes(Smuw_Type.Smuw_Boolean.Object'Size), To_Size(Smuw_Interface.Ctx.L1'Address), Smuw_Type.Smuw_Boolean.Type_Utils'Access, Null, Null, Null, 1, 4),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L31"), Null, To_Bytes(Smuw_Type.Smuw_Boolean.Object'Size), To_Size(Smuw_Interface.Ctx.L31'Address), Smuw_Type.Smuw_Boolean.Type_Utils'Access, Null, Null, Null, 1, 5),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L29"), Null, To_Bytes(Smuw_Type.Smuw_Boolean.Object'Size), To_Size(Smuw_Interface.Ctx.L29'Address), Smuw_Type.Smuw_Boolean.Type_Utils'Access, Null, Null, Null, 1, 6),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L28"), Null, To_Bytes(Smuw_Type.Smuw_Boolean.Object'Size), To_Size(Smuw_Interface.Ctx.L28'Address), Smuw_Type.Smuw_Boolean.Type_Utils'Access, Null, Null, Null, 1, 7),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L27"), Null, To_Bytes(Smuw_Type.Smuw_Boolean.Object'Size), To_Size(Smuw_Interface.Ctx.L27'Address), Smuw_Type.Smuw_Boolean.Type_Utils'Access, Null, Null, Null, 1, 8),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L32"), Null, To_Bytes(Smuw_Type.Smuw_Kcg_Types.Char_Range_0_149.Object'Size), To_Size(Smuw_Interface.Ctx.L32'Address), Smuw_Type.Smuw_Kcg_Types.Char_Range_0_149.Type_Utils'Access, Null, Null, scope_2'Access, 1, 9),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L33"), Null, To_Bytes(Smuw_Type.Smuw_Kcg_Config.Kcg_Float32.Object'Size), To_Size(Smuw_Interface.Ctx.L33'Address), Smuw_Type.Smuw_Kcg_Config.Kcg_Float32.Type_Utils'Access, Null, Null, Null, 1, 10),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L34"), Null, To_Bytes(Smuw_Type.Smuw_Kcg_Config.Kcg_Float32.Object'Size), To_Size(Smuw_Interface.Ctx.L34'Address), Smuw_Type.Smuw_Kcg_Config.Kcg_Float32.Type_Utils'Access, Null, Null, Null, 1, 11),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L35"), Null, To_Bytes(Smuw_Type.Smuw_Kcg_Config.Kcg_Uint8.Object'Size), To_Size(Smuw_Interface.Ctx.L35'Address), Smuw_Type.Smuw_Kcg_Config.Kcg_Uint8.Type_Utils'Access, Null, Null, Null, 1, 12),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L38"), Null, To_Bytes(Smuw_Type.Smuw_Kcg_Config.Kcg_Uint8.Object'Size), To_Size(Smuw_Interface.Ctx.L38'Address), Smuw_Type.Smuw_Kcg_Config.Kcg_Uint8.Type_Utils'Access, Null, Null, Null, 1, 13),
                (MAP_LOCAL, Interfaces.C.Strings.New_String("_L39"), Null, To_Bytes(Smuw_Type.Smuw_Kcg_Config.Kcg_Uint8.Object'Size), To_Size(Smuw_Interface.Ctx.L39'Address), Smuw_Type.Smuw_Kcg_Config.Kcg_Uint8.Type_Utils'Access, Null, Null, Null, 1, 14)
            );
            scope_1 := (Interfaces.C.Strings.New_String("control/ control"), Scope_1_Entries(Scope_1_Entries'First)'Access, 15);

            -- 
            Scope_0_Entries := (0 =>
                (MAP_ROOT, Interfaces.C.Strings.New_String("control"), Null, 0, 0, Null, Null, Null, scope_1'Access, 1, 0)
            );
            scope_0 := (Interfaces.C.Strings.New_String(""), Scope_0_Entries(Scope_0_Entries'First)'Access, 1);

            Scope := Scope_0'Access;
        end if;
        return Scope;
    end Scope_Init;

    -- clock


    ---------------------------------------------------------------------------
    -- exports

    function Ssm_Get_Mapping return access Mapping_Scope is
    begin
        return Scope_Init;
    end Ssm_Get_Mapping;

end Smuw_Mapping;

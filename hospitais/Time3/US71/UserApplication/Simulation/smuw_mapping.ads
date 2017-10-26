-- smuw_mapping.ads

with Smu_Mapping; use Smu_Mapping;

package Smuw_Mapping is

    function Ssm_Get_Mapping return access Mapping_Scope; pragma Export(C, Ssm_Get_Mapping, "SsmGetMapping");

end Smuw_Mapping;

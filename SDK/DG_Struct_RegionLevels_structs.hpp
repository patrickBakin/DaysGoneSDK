#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_RegionLevels.Struct_RegionLevels
// 0x0090
struct FStruct_RegionLevels
{
	struct FString                                     SectorNumber_33_5C54A18D4A627811C63844ABD7629027;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LandscapePath_24_6506D5344E23A0B4CE583EA5B752A1C1;        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EnvPath_25_E60FBAC74B1D2A451D1AB1B7F6435112;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PopPath_28_2BE9E5E94AD4EE0291FE788C7A5D3CAA;              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Static_PopPath_29_39DDB589442059CB14489BB5B088A82E;       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             AmbientPaths_30_AACB6B61473332DA73486780D8741E2C;         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             InteriorPaths_31_F19F339241A882043805D0BF29163E11;        // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Lod1Paths_32_7B7EE93E4DCED943EC8A4ABF39BADCB4;            // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Uncategorized_37_B8D8FE8F4B552998F04FC587920C7CB3;        // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

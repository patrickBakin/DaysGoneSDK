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

// UserDefinedStruct Struct_Veh_TireState_Skeletal.Struct_Veh_TireState_Skeletal
// 0x0040
struct FStruct_Veh_TireState_Skeletal
{
	class USkeletalMesh*                               SkeletalMeshAsset_12_98B5E87648C07D9B34DD74A06C1899F4;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_9_D86F5AF4465CD3F0DF5C96BC2012DEF6;             // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

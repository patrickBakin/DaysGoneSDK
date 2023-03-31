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

// UserDefinedStruct Struct_LGT_Flicker.Struct_LGT_Flicker
// 0x0024
struct FStruct_LGT_Flicker
{
	float                                              BaseLightIntensity_37_5DC28A7446594AF69EF341AE21886F24;   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_LGT_FlickerTypes>                 Type_32_33F1F3BA4D490149F742EE9DC972A67D;                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              FlickerIntensity_39_049E0101404954827F323891A045D0AB;     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlickerRateMultiplier_40_2A6FBB024C27C80B8FC5B7B6DBA18E41;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlickerOffset_41_9395901E4D98769D5200198646DE36A7;        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlickerMovementMultiplier_43_CA8DFFFB4109A66DEC2A5BBD712A6AD2;// 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LightOrigLocation_46_F29D2ABD48734BE822CB3F9A1ECDF969;    // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

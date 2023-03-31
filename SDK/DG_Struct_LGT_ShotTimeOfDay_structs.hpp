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

// UserDefinedStruct Struct_LGT_ShotTimeOfDay.Struct_LGT_ShotTimeOfDay
// 0x001C
struct FStruct_LGT_ShotTimeOfDay
{
	TArray<class ACameraActor*>                        CameraList_14_3748438144E14C686A2B61A1584C9657;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              pitchOffset_12_C5EDC4C84853219D7CFE83AEC071C8C3;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rollOffset_13_75FEFB80464F28C1285B0D87CB90DE59;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              yawOffset_17_4CE686354E2BCD9E2914F68978B9DDC1;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

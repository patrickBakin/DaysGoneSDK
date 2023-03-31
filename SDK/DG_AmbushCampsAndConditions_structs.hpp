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

// UserDefinedStruct AmbushCampsAndConditions.AmbushCampsAndConditions
// 0x0020
struct FAmbushCampsAndConditions
{
	TArray<class UJobClassInfo*>                       Camps_6_BD4EA0CF458C52F9BC15E9846B5D7919;                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    ConditionsNotCleared_13_627C95A84190E9A1C827398020E70E66; // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

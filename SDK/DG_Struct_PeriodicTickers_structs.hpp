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

// UserDefinedStruct Struct_PeriodicTickers.Struct_PeriodicTickers
// 0x0019
struct FStruct_PeriodicTickers
{
	struct FString                                     Label_7_BF53A2B2480C543DF031AE9BFEB81ECF;                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Period_2_35B83D344E613945A1FCDB9408EB7D92;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delta_4_9091E7CC45CCEA737FEC1B848BCEB0E1;                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Triggered_10_9FDD87694D2BF01190EAA89324D7F652;            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

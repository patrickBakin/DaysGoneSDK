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

// UserDefinedStruct Struct_Veh_TireState.Struct_Veh_TireState
// 0x0020
struct FStruct_Veh_TireState
{
	TArray<struct FStruct_Veh_TireState_Static>        StaticMesh_16_90BF7C954800230A51CFE5B92064227B;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_Veh_TireState_Skeletal>      SkeletalMesh_17_AB71408D4AA42DFA89D1A892E4EB1BC8;         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

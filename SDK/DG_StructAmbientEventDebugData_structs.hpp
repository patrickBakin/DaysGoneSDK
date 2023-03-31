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

// UserDefinedStruct StructAmbientEventDebugData.StructAmbientEventDebugData
// 0x001C
struct FStructAmbientEventDebugData
{
	class ABP_AmbientEventMarker_C*                    AmbientEventMarker_2_AAB434724AED4883D2FF5F928A430500;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Scores_12_FFED84F94148481AA8E779AAE1E65E9B;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FinalScore_8_A1CA6C7E41444B1FA67AA9A466292802;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

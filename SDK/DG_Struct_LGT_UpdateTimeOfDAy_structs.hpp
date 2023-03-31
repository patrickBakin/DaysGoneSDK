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

// UserDefinedStruct Struct_LGT_UpdateTimeOfDAy.Struct_LGT_UpdateTimeOfDAy
// 0x0008
struct FStruct_LGT_UpdateTimeOfDAy
{
	bool                                               OverrideTimeOfDay_3_3CF5ACD44DDBDDE37847A3B295A772B0;     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NewTimeOfDay_6_645390E243E0F6A98918ED831E328734;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

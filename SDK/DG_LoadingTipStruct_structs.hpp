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

// UserDefinedStruct LoadingTipStruct.LoadingTipStruct
// 0x0040
struct FLoadingTipStruct
{
	struct FText                                       Description_9_090CC2634F70A8100A4AFC9DABDDE6F5;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                Priority_7_A5DD8DE6434CAB980B4273B975B70822;              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UBendMissionData*                            MissionPrereq_22_3D66C46E4D9E201A65833EBABF4DAFDF;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               JobPrereq_20_CF19FD124CBAD6C21CB2A3A46A0DC52D;            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EGameDifficulty>>               DifficultyReq_26_A2FFE0C1473EEF5DF90A5F8F466434C4;        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// UserDefinedStruct DLCLoadingTipStruct.DLCLoadingTipStruct
// 0x0040
struct FDLCLoadingTipStruct
{
	struct FText                                       Description_9_090CC2634F70A8100A4AFC9DABDDE6F5;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                Priority_7_A5DD8DE6434CAB980B4273B975B70822;              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FGameplayTag>                        ChallengeTagReq_45_CF19FD124CBAD6C21CB2A3A46A0DC52D;      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EDLCChallengeType>>             ChallengeTypeReq_48_C9587E894B225C82938F659AB5BAC565;     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

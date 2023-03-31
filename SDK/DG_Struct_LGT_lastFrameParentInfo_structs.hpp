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

// UserDefinedStruct Struct_LGT_lastFrameParentInfo.Struct_LGT_lastFrameParentInfo
// 0x0020
struct FStruct_LGT_lastFrameParentInfo
{
	struct FVector                                     lastFrameBoneLocation_8_14A8C05A4931ECA099D102AAF0B1054B; // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       lastFrameBoneName_7_D9CE322E47BA5FC39B93C48471A35809;     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ParentActorRef_11_018343404D7986FC566525AD2C05A98D;       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

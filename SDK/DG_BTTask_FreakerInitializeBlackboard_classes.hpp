#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_FreakerInitializeBlackboard.BTTask_FreakerInitializeBlackboard_C
// 0x0140 (0x01E0 - 0x00A0)
class UBTTask_FreakerInitializeBlackboard_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABendFreakerController*                      Controller;                                               // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      Wander_Range;                                             // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Wander_Pct_Key;                                           // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      WasUnaware;                                               // 0x0100(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      SlowApproachKey;                                          // 0x0128(0x0028) (Edit, BlueprintVisible)
	bool                                               Slow_Approach;                                            // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      Acceptable_Radius_Key;                                    // 0x0158(0x0028) (Edit, BlueprintVisible)
	float                                              Acceptable_Radius;                                        // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      Approach_Radius_Key;                                      // 0x0188(0x0028) (Edit, BlueprintVisible)
	float                                              Approach_Radius;                                          // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      Confidence_Key;                                           // 0x01B8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FreakerInitializeBlackboard.BTTask_FreakerInitializeBlackboard_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTTask_FreakerInitializeBlackboard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

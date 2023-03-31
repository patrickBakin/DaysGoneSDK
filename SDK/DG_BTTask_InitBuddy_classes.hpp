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

// BlueprintGeneratedClass BTTask_InitBuddy.BTTask_InitBuddy_C
// 0x0111 (0x01B1 - 0x00A0)
class UBTTask_InitBuddy_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Slow_Approach_Key;                                        // 0x00A8(0x0028) (Edit, BlueprintVisible)
	bool                                               Slow_Approach;                                            // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      Approach_Radius_Key;                                      // 0x00D8(0x0028) (Edit, BlueprintVisible)
	float                                              Approach_Radius;                                          // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      Acceptable_Distance_Key;                                  // 0x0108(0x0028) (Edit, BlueprintVisible)
	float                                              Acceptable_Distance;                                      // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      Enter_Idle_Timer_Key;                                     // 0x0138(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Idle_Allowed_Key;                                         // 0x0160(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      EBuddyEnemyEngagementKey;                                 // 0x0188(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EBuddyEnemyEngagement>                 EBuddyEnemyEngagement;                                    // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_InitBuddy.BTTask_InitBuddy_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTTask_InitBuddy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

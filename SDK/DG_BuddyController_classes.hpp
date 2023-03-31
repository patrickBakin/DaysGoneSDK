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

// BlueprintGeneratedClass BuddyController.BuddyController_C
// 0x00D4 (0x1A74 - 0x19A0)
class ABuddyController_C : public ABendBuddyController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x19A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    AwareOfPlayer;                                            // 0x19A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BeginMove;                                                // 0x19B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    targetPawn;                                               // 0x19C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DestinationReached;                                       // 0x19D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              StopLeadDistance;                                         // 0x19E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RestartLeadDistance;                                      // 0x19EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMatchDistance;                                       // 0x19F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinLeadSpeed;                                             // 0x19F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeadSpeed;                                             // 0x19F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x19FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    BuddyInRange;                                             // 0x1A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              BikeMaxLeadDistance;                                      // 0x1A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BikeRestartLeadDist;                                      // 0x1A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Molotovs;                                             // 0x1A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1A19(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ThrowMolotov;                                             // 0x1A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               BikeCombat;                                               // 0x1A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1A31(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ContinueMove;                                             // 0x1A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CloseToArrival;                                           // 0x1A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               UseGun;                                                   // 0x1A58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1A59(0x0003) MISSED OFFSET
	float                                              followDistanceOuter;                                      // 0x1A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              followDistanceInner;                                      // 0x1A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedUpPercent;                                           // 0x1A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowDownPercent;                                          // 0x1A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BikeLead;                                                 // 0x1A6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1A6D(0x0003) MISSED OFFSET
	float                                              ShootThreshold;                                           // 0x1A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BuddyController.BuddyController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BroadcastingEventAwareOfPlayer();
	void ExecuteUbergraph_BuddyController(int EntryPoint);
	void CloseToArrival__DelegateSignature();
	void ContinueMove__DelegateSignature(const struct FVector& Next_Point, bool Slow_Approach, float Approach_Radius, float Acceptable_Radius, float Warning_Distance);
	void ThrowMolotov__DelegateSignature();
	void BuddyInRange__DelegateSignature();
	void DestinationReached__DelegateSignature(TEnumAsByte<EPathFollowingResult> Path_Result);
	void targetPawn__DelegateSignature(class AActor* Target);
	void BeginMove__DelegateSignature(const struct FVector& Move_Pos, bool Slow_Approach, float Approach_Radius, float Acceptable_Radius, float Warning_Distance);
	void AwareOfPlayer__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

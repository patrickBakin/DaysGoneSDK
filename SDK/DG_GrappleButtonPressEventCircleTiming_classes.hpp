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

// BlueprintGeneratedClass GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C
// 0x00A1 (0x0479 - 0x03D8)
class AGrappleButtonPressEventCircleTiming_C : public ABendButtonPressEvent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USlateInputInteractComponent*                SlateInputInteract;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonPressEventWidget_C*                   ButtonPressWidget;                                        // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SuccessfulInputsNeeded;                                   // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastPressTimer;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CompletionPercent;                                        // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScreenLocationOrOffset;                                   // 0x0404(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class AActor*                                      FollowingActor;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UActorComponent*                             FollowingComponent;                                       // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FollowSocket;                                             // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartOnPlay;                                              // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasAnActorFollower;                                       // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x042B(0x0001) MISSED OFFSET
	float                                              TimeSinceStart;                                           // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              MinGrappleTime;                                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can_Fail;                                                 // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	float                                              SuccessPressRate;                                         // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDecrementValue;                                    // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingPercent;                                          // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaSecondsCap;                                          // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecrementRate;                                            // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentInputValue;                                        // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GrappleTiers;                                             // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentGrappleTier;                                       // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_GrappleMeter3_C*                         GrappleMeter;                                             // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumWindows;                                               // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinKillWindowSize;                                        // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxKillWindowSize;                                        // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TimeDID;                                                  // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EventFinished;                                            // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	float                                              KickWindowTime;                                           // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                PrevButton;                                               // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C");
		return ptr;
	}


	void StartPosition();
	void UpdatePosition();
	void SetupNewGrappleButtonPressEvent(TEnumAsByte<EControllerInputButton> Button, float SuccessPressRate, float MinGrappleTime, bool Can_Fail_Grapple, const struct FVector2D& Screen_Location, class AActor* Follow_Actor, class UActorComponent* Follow_Component, const struct FName& Follow_Socket_In_Actor, bool Start_On_Play, int GrappleTiers, bool Debug, TEnumAsByte<EControllerInputButton> PrevButton);
	float GetCompletionPercent();
	void UpdateCompletion(float Delta_Seconds);
	void CheckForSuccess();
	void HandleInput();
	void StopAnimation();
	void ChangeButtonAlpha(float Alpha);
	void ChangeButtonColor(const struct FLinearColor& Color);
	void DestroySelf();
	void CreateUMG_Widget();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void NotifyButtonEventActivated();
	void NotifyButtonEventDeactivated();
	void SetButtonEventFail();
	void SetButtonEventSuccessful();
	void PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void StartButtonEvent();
	void TimeScaleInputEvent();
	void NotifyButtonEventReleased();
	void NotifyButtonEvent();
	void OnComplete_Event_1(TEnumAsByte<EUI_GrappleSuccessType> Result);
	void ExecuteUbergraph_GrappleButtonPressEventCircleTiming(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

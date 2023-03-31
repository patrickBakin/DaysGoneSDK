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

// BlueprintGeneratedClass BP_ButtonPressEvent.BP_ButtonPressEvent_C
// 0x0033 (0x0483 - 0x0450)
class ABP_ButtonPressEvent_C : public ABendButtonPressEventBlueprintSupport
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlateInputInteractComponent*                SlateInputInteract;                                       // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ButtonFadeTimeline_Opacity_71A0158A42660BBBD39144A0E69A88AC;// 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ButtonFadeTimeline__Direction_71A0158A42660BBBD39144A0E69A88AC;// 0x046C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ButtonFadeTimeline;                                       // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonPressEventWidget_C*                   ButtonPressWidget;                                        // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_ControllerInputs>                 ButtonToPress;                                            // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_Combat_Prompts>                   CombatPrompt;                                             // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableCheckForSuccess;                                   // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ButtonPressEvent.BP_ButtonPressEvent_C");
		return ptr;
	}


	void MakeActionPressEvent(const struct FName& ActionName, int SuccessfulInputsNeeded, float HoldTime, float LengthOfEventInSeconds, bool FailOnTimeExpire, float DecayRatePerSecond, const struct FVector2D& ScreenLocation, class AActor* FollowActor, class UActorComponent* FollowComponent, const struct FName& FollowSocketInActor, bool StartOnPlay, bool Debug, bool ConsumeInputs, bool TriggerOnButtonReleased, TEnumAsByte<Enum_Combat_Prompts> CombatPrompt, const struct FVector& SocketOffset, bool UseSocketOverride, bool DisableCheckForSuccess);
	void AutoCompleteButtonEvent(bool* AutoComplete);
	void EaseInOut(const struct FVector2D& NewIn_, const struct FVector2D& PrevIn, struct FVector2D* Out);
	void StartPosition();
	void CountHoldTime();
	void HandleButtonPress();
	void HandleButtonRelease();
	bool IsButtonEventComplete();
	void SafeGuardCheckDefaultActor();
	void StopAnimation();
	void CreateUMG_Widget();
	void SetPositionOfWidget();
	void ChangeButtonColor(const struct FLinearColor& Color);
	void DestroySelf();
	void CheckForSuccess();
	void SetUpNewButtonPressEvent(TEnumAsByte<EControllerInputButton> Button, int SuccessfulInputsNeeded, float HoldTime, float LengthOfEventInSeconds, bool FailOnTimeExpire, float DecayRatePerSecond, const struct FVector2D& ScreenLocation, class AActor* FollowActor, class UActorComponent* FollowComponent, const struct FName& FollowSocketInActor, bool StartOnPlay, bool Debug, bool ConsumeInputs, const struct FText& Text, bool TriggerOnButtonReleased, TEnumAsByte<Enum_Combat_Prompts> CombatPrompt, const struct FVector& SocketOffset, bool UseSocketOverride, bool DisableCheckForSuccess);
	void UserConstructionScript();
	void ButtonFadeTimeline__FinishedFunc();
	void ButtonFadeTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ButtonFade();
	void SetDebug();
	void PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void StopTimeline();
	void Multi_NewtHandling();
	void OnNewGrappler_Event_1(class ABendPawn* NewGrappler, int GrapplerCount);
	void StartButtonEvent();
	void SetButtonEventSuccessful();
	void SetButtonEventFail();
	void NotifyButtonEvent();
	void NotifyButtonEventReleased();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnDebuggingActive();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_ButtonPressEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

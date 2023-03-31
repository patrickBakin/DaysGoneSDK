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

// BlueprintGeneratedClass GrappleButtonPressEventHold.GrappleButtonPressEventHold_C
// 0x00B0 (0x0488 - 0x03D8)
class AGrappleButtonPressEventHold_C : public ABendButtonPressEvent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USlateInputInteractComponent*                SlateInputInteract;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ButtonFadeTimeline_Opacity_8571294F4E2F0C5A8825109A949B01D5;// 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ButtonFadeTimeline__Direction_8571294F4E2F0C5A8825109A949B01D5;// 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ButtonFadeTimeline;                                       // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUI_GrappleMeter3_C*                         ButtonPressWidget;                                        // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SuccessfulInputsNeeded;                                   // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastPressTimer;                                           // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CompletionPercent;                                        // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScreenLocationOrOffset;                                   // 0x0414(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	class AActor*                                      FollowingActor;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UActorComponent*                             FollowingComponent;                                       // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FollowSocket;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartOnPlay;                                              // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasAnActorFollower;                                       // 0x043A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x043B(0x0001) MISSED OFFSET
	float                                              TimeSinceStart;                                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              MinGrappleTime;                                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can_Fail;                                                 // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	float                                              SuccessPressRate;                                         // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDecrementValue;                                    // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingPercent;                                          // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaSecondsCap;                                          // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecrementRate;                                            // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentInputValue;                                        // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumGrapplers;                                             // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventPhase;                                               // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonDown;                                               // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	struct FVector2D                                   RangeForOK;                                               // 0x046C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RangeForGood;                                             // 0x0474(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                PrevButton;                                               // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	struct FVector2D                                   PrevPosition;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrappleButtonPressEventHold.GrappleButtonPressEventHold_C");
		return ptr;
	}


	void SetPositionOfWidget();
	void SetupNewGrappleButtonPressEvent(TEnumAsByte<EControllerInputButton> Button, float MinGrappleTime, bool Can_Fail_Grapple, class AActor* Follow_Actor, const struct FName& Follow_Socket_In_Actor, bool Start_On_Play, TEnumAsByte<EControllerInputButton> PrevButton);
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
	void ButtonFadeTimeline__FinishedFunc();
	void ButtonFadeTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void NotifyButtonEventActivated();
	void NotifyButtonEventDeactivated();
	void NotifyButtonEvent();
	void ButtonFade();
	void SetButtonEventFail();
	void SetButtonEventSuccessful();
	void PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void StartButtonEvent();
	void NotifyButtonEventReleased();
	void DebugDraw();
	void OnSuccess_Event_1();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_GrappleButtonPressEventHold(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

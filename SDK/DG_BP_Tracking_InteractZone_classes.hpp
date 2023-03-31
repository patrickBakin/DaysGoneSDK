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

// BlueprintGeneratedClass BP_Tracking_InteractZone.BP_Tracking_InteractZone_C
// 0x00C5 (0x074D - 0x0688)
class ABP_Tracking_InteractZone_C : public ABendTrackingManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0688(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        FootprintMark9;                                           // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FootprintMark8;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FootprintMark7;                                           // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Audio;                                                    // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FootprintMark6;                                           // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FootprintMark5;                                           // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FootprintMark4;                                           // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FootprintMark3;                                           // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FootprintMark2;                                           // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        FootprintMark1;                                           // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MiniMap;                                                  // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractComponentType_C*                    InteractComponentType;                                    // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UUI_InputInteract_C*>                 InputWidgetRefs;                                          // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AnyInRange;                                               // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0709(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    TrackingSectionCompleted;                                 // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TrackingClueInvestigated;                                 // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimerHandle                                TrackingTimer;                                            // 0x0730(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                MarkerTimer;                                              // 0x0734(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_TutorialPanel_C*                         TempTutorialWidget;                                       // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Started_Rumble;                                           // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	struct FTimerHandle                                DistanceCheckToUseVisualPlaySpace;                        // 0x0744(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               MakeRandomLocations;                                      // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ResetRandomLocations;                                     // 0x0749(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Tracking_Has_Started;                                     // 0x074A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugSphereOn;                                            // 0x074B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsabilityEase;                                            // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tracking_InteractZone.BP_Tracking_InteractZone_C");
		return ptr;
	}


	void IsPlayerPawnSpeaking(class ABendPlayerPawn** Player, bool* Result);
	void ScriptedResetAllTracking();
	void ScriptedRestartBreathing();
	void TestDistanceFromCurrestTrackingCluesToPlayer(bool* Within200U);
	void FinishedTheListOfLocations();
	void ScriptedCompleteTrackingSection(const struct FName& Section);
	void StopTracking();
	void HandleSaveGameResetting();
	void StartTracking(const struct FName& SectionID);
	void IsTrackingSectionCompleted(const struct FName& SectionName, bool* Completed);
	void UserConstructionScript();
	void InpActEvt_Interact_K2Node_InputActionEvent_234(const struct FKey& Key);
	void ReceiveBeginPlay();
	void BindAllOverlaps();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void InteractOnBegin();
	void InteractOnEnd();
	void OnFocusModeToggle(bool EnteredFocusMode);
	void OnFocusFadingFinished();
	void OnDied_Event_1(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void OnEndPlay_Event_1(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Pause_Start();
	void Pause_End();
	void VO_EnteredTrackingRange();
	void VO_LeftTrackingRange();
	void VO_InRangeOfClue();
	void VO_FocusModeOnWhenInRange();
	void TrackingSectionCompleted_Event_1(const struct FName& SectionID);
	void CheckForCurrentDistanceToPlay();
	void TurnOnTrackingHUD();
	void TurnOffTrackingHUD();
	void TrackingHUDUpdate(float* Percent);
	void CodeTrackingClueInvestigated_Event_1(const struct FName& Section, class AActor* ClueObject);
	void CodeTrackingSectionCompleted_Event_1(const struct FName& SectionID);
	void UpdateButtonProgress(int* Index, float* Percent);
	void SetTrackingState(int* Index, bool* Visible, bool* Advertising, bool* bLocked);
	void FinishAnimationOnUpdate();
	void CloseTheTutorialAndHideData();
	void ListWasFinished();
	void OnRockThrowPostToggled_Event_1(bool On);
	void OnCinematicStarted_MM_Event_1(const struct FName& CinematicLevel);
	void PrePause(bool IsPausing);
	void ExecuteUbergraph_BP_Tracking_InteractZone(int EntryPoint);
	void TrackingClueInvestigated__DelegateSignature(const struct FName& Section, class AActor* ClueObject);
	void TrackingSectionCompleted__DelegateSignature(const struct FName& SectionID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

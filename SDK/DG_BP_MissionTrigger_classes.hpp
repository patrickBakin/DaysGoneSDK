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

// BlueprintGeneratedClass BP_MissionTrigger.BP_MissionTrigger_C
// 0x0075 (0x04BD - 0x0448)
class ABP_MissionTrigger_C : public ABendGameMissionTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendWidgetComponent*                        MissionIcon;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSphereComponent*                        OverlapSphereToggleVOManager;                             // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       CustomBlackScreen;                                        // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CameraFollow;                                             // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_BFFA4F034A066B3D29DAA29E5454B041;   // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_BFFA4F034A066B3D29DAA29E5454B041;   // 0x0474(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultLookAtPosition_Sunrise;                            // 0x0480(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DefaultLookAtPosition_Sunset;                             // 0x048C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TimeRangeDaytime;                                         // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_ObjectiveCallout_C*                      InWorldIcon;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BufferTostartBlackScreenFade;                             // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PauseVOToken;                                             // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerThing;                                               // 0x04B0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasFullyInited;                                           // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IconShouldBeVisible;                                      // 0x04B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04B6(0x0002) MISSED OFFSET
	struct FTimerHandle                                Timerhandleforcheck;                                      // 0x04B8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AskIfStart;                                               // 0x04BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionTrigger.BP_MissionTrigger_C");
		return ptr;
	}


	bool DoAutoTracking(bool* Enter);
	void GetSizeForRegion(float* Size);
	bool ChangeMiniMapMarkerState(bool* IsRegion);
	bool MarkCloseToMissionTrigger(bool* IsClose);
	void CheckForValidEntry(bool* Valid);
	bool MarkMissionAsActiveTracked(bool* Tracked);
	void GetCurrentlyInScreenQue(bool* InQue, bool* CurrentDisplay);
	bool UpdateTriggersWorldDisplay();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnHourChanged_Event_2(int Hour);
	void ReceiveBeginPlay();
	void StartBindingTrack(bool ShouldStart);
	void TimerCheckForTrackedJob();
	void IOnSelected();
	void AsynchLoad(TAssetPtr<class UObject> ObjectAssetPtr);
	void OnCinematicStarted_MM_Event_1(const struct FName& CinematicLevel);
	void OnCinematicEnded_MM_Event_1(const struct FName& CinematicLevel);
	void OnFadingFinished_MM_Event_1(const struct FString& Message);
	void KeepBikeDead();
	void BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_75_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_145_BeginOverlapSig__DelegateSignature();
	void BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_150_EndOverlapSig__DelegateSignature();
	void ForceEnding();
	void PopupResponse(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton);
	void BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_40_BeginOverlapSig__DelegateSignature();
	void BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_45_EndOverlapSig__DelegateSignature();
	void BindEnterVehicle();
	void UnbindEventEnterVehicle();
	void OnRiderStartedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle);
	void OnRiderStartedExitingVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason);
	void SetCurrentSphereRadius();
	void OnNewMissionOrJobTracked(class UObject* JobOrMissionData);
	void OnFadedToBlack_MM_Event_1(const struct FString& Message);
	void checkforout();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_266_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void PopupResponse_Copy(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton);
	void ExecuteUbergraph_BP_MissionTrigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

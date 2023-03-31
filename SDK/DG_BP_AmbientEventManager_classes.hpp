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

// BlueprintGeneratedClass BP_AmbientEventManager.BP_AmbientEventManager_C
// 0x0150 (0x0728 - 0x05D8)
class ABP_AmbientEventManager_C : public ABendAmbientEventManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Delta_Seconds;                                            // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugVerboseMode;                                         // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x05E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05E6(0x0002) MISSED OFFSET
	class ABendPlayerController*                       PlayerController;                                         // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendAmbientEventMarker*                     AmbientEventToLoad;                                       // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_AmbientEventMarker_C*                    AmbientEventToUnload;                                     // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_AmbientEventMarker_C*                    DebugCurrentlyIndicatedEvent;                             // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              StareTimeToLoadEvent;                                     // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentlyDebuggingEvent;                                  // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MarkerIconsActive;                                        // 0x060D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x060E(0x0002) MISSED OFFSET
	float                                              MinimumEventRangeConsideration;                           // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumEventRangeConsideration;                           // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSqrdEventRangeConsideration;                           // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSqrdEventRangeConsideration;                           // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AvgVelocity;                                              // 0x0620(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TestAvgVel;                                               // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvgVelocityMagnitude;                                     // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	TArray<struct FVector>                             FacingSpeedRanges;                                        // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LastCalculatedSearchArc;                                  // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class UHUD_DebugAmbientEvents_C*                   HUD_DebugAmbientEvents;                                   // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UHUD_Debug_AE_Button_C*>              HUD_DebugScoreEventButtons;                               // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStructAmbientEventDebugData>        AmbientEventEvalDataDebug;                                // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugDisplayGrades;                                       // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class ABP_AmbientEventMarker_C*                    CurrentEventDebugLoaded;                                  // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpenScoreSheetOnNextEval;                                 // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0689(0x0007) MISSED OFFSET
	class UHUD_DebugRunningAmbientEventList_C*         HUD_DebugRunningAmbientEventList;                         // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDisplayRunningList;                                  // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0699(0x0007) MISSED OFFSET
	TArray<class ABendAmbientEventMarker*>             RunningAmbientEventList;                                  // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UHUD_Debug_AE_Button_C*>              HUD_DebugRunningEventButtons;                             // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                RunningListButtonBackgroudColor;                          // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendAmbientEventMarker*                     DebugMarkerToDrawTo;                                      // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_AmbientEventMarker_C*>            BP_ForcedAmbientEventQueue;                               // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     LastChoosePlayerLocation;                                 // 0x06E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	TArray<class ABendAmbientEventMarker*>             LocalAvailableEvents;                                     // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                BlockedDisplayTimerHandle;                                // 0x0708(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DebugResetTimesHUDEnabled;                                // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	class UHUD_DebugTimesAmbientEvent_C*               HUD_EventResetTimes;                                      // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UHUD_Debug_AE_TimeEntry_C*>           HUD_DebugTimeEntries;                                     // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientEventManager.BP_AmbientEventManager_C");
		return ptr;
	}


	void DebugUpdateResetTimeTable();
	void CreateEventResetTimeHUD();
	void ToggleEventResetTimesHUD();
	void AddEventToRunningList(class ABendAmbientEventMarker* AmbientEventMarker);
	void RemoveEventFromRunningList(class ABendAmbientEventMarker* AmbientEventMarker);
	void ToggleRunningEventListHUD();
	void CreateRunning_AE_List();
	void RefreshScoreDebugButtons();
	void DebugFillInGradeUI(const struct FStructAmbientEventDebugData& Data);
	void CreateScoreDebugButtons();
	void CleanDebugUI();
	void DebugHudButtonPressed(const struct FText& ButtonName);
	void Toggle_Debug_HUD();
	void SetupValues();
	void ToggleMarkerCollision();
	void CachePlayerController();
	void DebugTest();
	void CheckIfDebugUnloadSelectedEvent();
	void CheckIfDebugLoadSelectedEvent(bool* Loaded);
	void ToggleDebugMode();
	void ToggleMarkerIcons();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnEventLoaded(class ABendAmbientEventMarker** AmbientEventMarker);
	void OnEventUnloaded(class ABendAmbientEventMarker** AmbientEventMarker);
	void OnAmbientEventChosen_Event_1(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, bool AlwaysLoaded, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void OnAmbientEventLoaded_Event_1(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeToLoad, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void OnAmbientEventManagerBlocked_Event_1(TEnumAsByte<EAmbientEventManagerBlockMsg> BlockReason);
	void Remove_Block();
	void ExecuteUbergraph_BP_AmbientEventManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

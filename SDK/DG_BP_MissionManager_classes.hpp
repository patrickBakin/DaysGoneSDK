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

// BlueprintGeneratedClass BP_MissionManager.BP_MissionManager_C
// 0x00CA (0x0ACA - 0x0A00)
class ABP_MissionManager_C : public ABendGameMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       BlackScreenPost;                                          // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       FailurePostProcess;                                       // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadingTimeline_FadingValue_4D9177FC4E790DD0D8692285798AB37D;// 0x0A20(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadingTimeline__Direction_4D9177FC4E790DD0D8692285798AB37D;// 0x0A24(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A25(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadingTimeline;                                           // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostProcessFadeIn_blend_0E477BC94D6FF43684B70FAFCD4CC20D; // 0x0A30(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PostProcessFadeIn__Direction_0E477BC94D6FF43684B70FAFCD4CC20D;// 0x0A34(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A35(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PostProcessFadeIn;                                        // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAAA_TimeAndWeatherSettings_C*               ActiveTimeAndWeather;                                     // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMediaPlayerWidget_C*                        CinWidget;                                                // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_SkipButton_C*                            UI_SkipRef;                                               // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDebug_UXTesting_Screen_C*                   Debug_UXTestingWidget;                                    // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HardRefMissionTrigger;                                    // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptedInPlaySessionDifficultySwitch;                    // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	struct FPlayerSaveProfileMenuEntry                 ProfileEntryTmp;                                          // 0x0A70(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NeedsToResetWorldSettingsOnRespawn;                       // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockAutoSavesResettingFailsForPeriod;                    // 0x0AC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionManager.BP_MissionManager_C");
		return ptr;
	}


	void SetDLCItemsHidden(bool ShouldHide);
	bool GiveStorylineRewards();
	bool PullAndStoreAllMissionAndJobRewards();
	struct FText GetChapterNameFromEpisode(TEnumAsByte<EMissionCategories>* Act);
	void FindCinFromLevelNamEdEBUGhACK(const struct FName& Level, bool* NewParam);
	bool ChangeBlackScreenFadeSpeed(float* NewSpeed);
	void FailJobDoLoad();
	bool ReloadBecauseOfJobFailure(TEnumAsByte<EMissionFailureSubject>* Subject, TEnumAsByte<EMissionFailureType>* Reason, bool* DisplayFailReason);
	bool ChangeMissionTimeAndWeatherByID(struct FName* TimeAndWeatherID);
	struct FString ReturnFormattedListOfCinematics();
	bool FigureOutNextJobOrMissionToAutoTrack();
	class UObject* GetCurrentTrackedMissionOrJob();
	bool TrackAJobOrMission(class UObject** DataAsset, bool* OverrideCurrentTracked);
	bool IsCinematicSkippable();
	TArray<struct FName> GetAllAssociatedActiveMissionLevels();
	bool BlackScreenTickChecks();
	bool FadedIn();
	bool FadeFromBlackDone();
	bool FadeFromBlackStart();
	bool FadeInStarted();
	bool GoToFirstFrameOfBlackScreen();
	bool DebugCompleteAllObjectives(class UBendMissionData** MissionData);
	bool DebugSetupSkillsAndData(class UBendMissionData** MissionData);
	bool TemporaryEnableBlackScreenPost();
	bool CinematicHasEnded();
	bool DebugRequestCinematicMovieStart(class UMaterial** MovieMaterial, class UMediaPlayer** MovieFilea, class USoundCue** MovieSounda);
	bool RequestCinematicToStart(class AMatineeActor** TheMatinee, class AActor** SafeTeleportPoint);
	bool CheckIfPlayerCinematicPositionValid();
	bool ChangeCinematicFadingColor(TEnumAsByte<ECinematicFadingColors>* FadeType, bool* ChangeWhenFadingDone);
	bool CinematicUnloaded();
	bool DebugStartJobOrMissionFromExecutableString();
	bool StoreAllMissionTriggers();
	bool DebugLoadWorldDemo(struct FName* RowName, class UBendMissionData** OverrideMission, bool* DoTeleport, bool* UseOverridenData, bool* SettingCompletedInsteadOfUnlocked, TEnumAsByte<EMissionCategories>* OverrideCategory, TArray<class UJobClassInfo*>* OverrideJobData);
	bool BeginMission(TEnumAsByte<EMissionIDs>* MissionID);
	bool ChangeMissionTimeAndWeather(int* TimeAndWeatherIndex);
	bool GiveMissionRewards(class UBendMissionData** MissionData);
	bool ResetWorldSettingsToDefault();
	bool SetCustomWorldSettings();
	bool DebugLoadMissionNow(TEnumAsByte<EMissionIDs>* MissionID);
	bool DebugSetAllMissionPreReqsToComplete(class UBendMissionData** TheData, bool* IncludeSelf);
	void UserConstructionScript();
	void FadingTimeline__FinishedFunc();
	void FadingTimeline__UpdateFunc();
	void FadingTimeline__FadeFromBlackDone__EventFunc();
	void FadingTimeline__FadeFromBlackStart__EventFunc();
	void FadingTimeline__BlackScreenTicks__EventFunc();
	void FadingTimeline__FadedIn__EventFunc();
	void FadingTimeline__FadeInStart__EventFunc();
	void PostProcessFadeIn__FinishedFunc();
	void PostProcessFadeIn__UpdateFunc();
	void InpActEvt_TogglePauseMenu_options_K2Node_InputActionEvent_236(const struct FKey& Key);
	void StartFading();
	void StopFading();
	void HandleIntroCin(bool* EndOfCinematic);
	void HandleMidCin(bool* EndOfCinematic);
	void HandleEndingCin(bool* EndOfCinematic);
	void OnPlayerRespawned(class ABendPlayerController* PlayerController);
	void TeleportToCheckpoint(int* Checkpoint);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void OnMovieEndReached();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void HandlePlayerDeathAndRespawning();
	void FadeInPostProcessToCin();
	void StartChainedMissionOnDelay(TEnumAsByte<EMissionIDs>* MissionID);
	void LoadInLevelsAndPlayCinematic();
	void DebugEndMovieFile();
	void CheckUnlocksOnTime(int Hour);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void SkipCurrentCinematic();
	void RemoveCinematicSkipButton();
	void DisplayCinematicSkipButton();
	void ReceiveTick(float* DeltaSeconds);
	void BindOnHourChange();
	void OnCinematicStarted_MM_Event_1(const struct FName& CinematicLevel);
	void OnFadingFinished_MM_Event_1(const struct FString& Message);
	void StartRecordAllCinematics();
	void DebugSkipInvalidCinOnDelay();
	void JobManagerLoaded();
	void OnTrustModified_Event_1(class UBendEncampmentData* Encampment, float ModificationAmount, bool SetDirectly);
	void OnFadedToBlack_MM_Event_1(const struct FString& Message);
	void OnDiedOrDestroyed_Event_1(class ABendPawn* Pawn, bool bDied);
	void OnTrustTierChanged_EventForTrophies(class UBendEncampmentData* Encampment, TEnumAsByte<ETrustTier> PreviousTier, TEnumAsByte<ETrustTier> NewTier);
	void DebugUXTestingScreen(class UDataAsset** AssetRelated);
	void InputClosed_Event_1();
	void SpawnAllAvailableInFrameDebug();
	void OWVOUnlockMission();
	void ActivateCinematicMode_Code(bool* MarkCinematicActive, bool* AffectsHUD, TEnumAsByte<ECinematicHidingTypes>* HideActors);
	void UpdateFailureCounts(bool* Reset);
	void OnFadingFinished_MM_Event_0_Copy(const struct FString& Message);
	void PopupCallback_Event_1(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton);
	void CheckOptionalSkips();
	void OnFadingFinished_MM_Event_0_Copy_Copy(const struct FString& Message);
	void PopupCallback_Event_0_Copy(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton);
	void OnGameSaved_Event_1(TEnumAsByte<ESaveGameType> SaveGameType);
	void StartEndingDLCMission();
	void OnWaitForPostChallengeWidgets();
	void OnPostChallengeCompleteQuit_Event_1();
	void OnPostChallengeCompleteRetry_Event_1();
	void BindDLCMissionEvents();
	void UnBindDLCMissionEvents();
	void OnCharSkinApplied_Event_1();
	void ExecuteUbergraph_BP_MissionManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MissionManager.BP_MissionManager_C.SetDLCItemsHidden
struct ABP_MissionManager_C_SetDLCItemsHidden_Params
{
	bool                                               ShouldHide;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.GiveStorylineRewards
struct ABP_MissionManager_C_GiveStorylineRewards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.PullAndStoreAllMissionAndJobRewards
struct ABP_MissionManager_C_PullAndStoreAllMissionAndJobRewards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.GetChapterNameFromEpisode
struct ABP_MissionManager_C_GetChapterNameFromEpisode_Params
{
	TEnumAsByte<EMissionCategories>*                   Act;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MissionManager.BP_MissionManager_C.FindCinFromLevelNamEdEBUGhACK
struct ABP_MissionManager_C_FindCinFromLevelNamEdEBUGhACK_Params
{
	struct FName                                       Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.ChangeBlackScreenFadeSpeed
struct ABP_MissionManager_C_ChangeBlackScreenFadeSpeed_Params
{
	float*                                             NewSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.FailJobDoLoad
struct ABP_MissionManager_C_FailJobDoLoad_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.ReloadBecauseOfJobFailure
struct ABP_MissionManager_C_ReloadBecauseOfJobFailure_Params
{
	TEnumAsByte<EMissionFailureSubject>*               Subject;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionFailureType>*                  Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DisplayFailReason;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.ChangeMissionTimeAndWeatherByID
struct ABP_MissionManager_C_ChangeMissionTimeAndWeatherByID_Params
{
	struct FName*                                      TimeAndWeatherID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.ReturnFormattedListOfCinematics
struct ABP_MissionManager_C_ReturnFormattedListOfCinematics_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MissionManager.BP_MissionManager_C.FigureOutNextJobOrMissionToAutoTrack
struct ABP_MissionManager_C_FigureOutNextJobOrMissionToAutoTrack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.GetCurrentTrackedMissionOrJob
struct ABP_MissionManager_C_GetCurrentTrackedMissionOrJob_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.TrackAJobOrMission
struct ABP_MissionManager_C_TrackAJobOrMission_Params
{
	class UObject**                                    DataAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              OverrideCurrentTracked;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.IsCinematicSkippable
struct ABP_MissionManager_C_IsCinematicSkippable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.GetAllAssociatedActiveMissionLevels
struct ABP_MissionManager_C_GetAllAssociatedActiveMissionLevels_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MissionManager.BP_MissionManager_C.BlackScreenTickChecks
struct ABP_MissionManager_C_BlackScreenTickChecks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.FadedIn
struct ABP_MissionManager_C_FadedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.FadeFromBlackDone
struct ABP_MissionManager_C_FadeFromBlackDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.FadeFromBlackStart
struct ABP_MissionManager_C_FadeFromBlackStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.FadeInStarted
struct ABP_MissionManager_C_FadeInStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.GoToFirstFrameOfBlackScreen
struct ABP_MissionManager_C_GoToFirstFrameOfBlackScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.DebugCompleteAllObjectives
struct ABP_MissionManager_C_DebugCompleteAllObjectives_Params
{
	class UBendMissionData**                           MissionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.DebugSetupSkillsAndData
struct ABP_MissionManager_C_DebugSetupSkillsAndData_Params
{
	class UBendMissionData**                           MissionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.TemporaryEnableBlackScreenPost
struct ABP_MissionManager_C_TemporaryEnableBlackScreenPost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.CinematicHasEnded
struct ABP_MissionManager_C_CinematicHasEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.DebugRequestCinematicMovieStart
struct ABP_MissionManager_C_DebugRequestCinematicMovieStart_Params
{
	class UMaterial**                                  MovieMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMediaPlayer**                               MovieFilea;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue**                                  MovieSounda;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.RequestCinematicToStart
struct ABP_MissionManager_C_RequestCinematicToStart_Params
{
	class AMatineeActor**                              TheMatinee;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     SafeTeleportPoint;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.CheckIfPlayerCinematicPositionValid
struct ABP_MissionManager_C_CheckIfPlayerCinematicPositionValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.ChangeCinematicFadingColor
struct ABP_MissionManager_C_ChangeCinematicFadingColor_Params
{
	TEnumAsByte<ECinematicFadingColors>*               FadeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ChangeWhenFadingDone;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.CinematicUnloaded
struct ABP_MissionManager_C_CinematicUnloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.DebugStartJobOrMissionFromExecutableString
struct ABP_MissionManager_C_DebugStartJobOrMissionFromExecutableString_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.StoreAllMissionTriggers
struct ABP_MissionManager_C_StoreAllMissionTriggers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.DebugLoadWorldDemo
struct ABP_MissionManager_C_DebugLoadWorldDemo_Params
{
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendMissionData**                           OverrideMission;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UJobClassInfo*>                       OverrideJobData;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              DoTeleport;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseOverridenData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SettingCompletedInsteadOfUnlocked;                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionCategories>*                   OverrideCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.BeginMission
struct ABP_MissionManager_C_BeginMission_Params
{
	TEnumAsByte<EMissionIDs>*                          MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.ChangeMissionTimeAndWeather
struct ABP_MissionManager_C_ChangeMissionTimeAndWeather_Params
{
	int*                                               TimeAndWeatherIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.GiveMissionRewards
struct ABP_MissionManager_C_GiveMissionRewards_Params
{
	class UBendMissionData**                           MissionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.ResetWorldSettingsToDefault
struct ABP_MissionManager_C_ResetWorldSettingsToDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.SetCustomWorldSettings
struct ABP_MissionManager_C_SetCustomWorldSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.DebugLoadMissionNow
struct ABP_MissionManager_C_DebugLoadMissionNow_Params
{
	TEnumAsByte<EMissionIDs>*                          MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.DebugSetAllMissionPreReqsToComplete
struct ABP_MissionManager_C_DebugSetAllMissionPreReqsToComplete_Params
{
	class UBendMissionData**                           TheData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncludeSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.UserConstructionScript
struct ABP_MissionManager_C_UserConstructionScript_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FinishedFunc
struct ABP_MissionManager_C_FadingTimeline__FinishedFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__UpdateFunc
struct ABP_MissionManager_C_FadingTimeline__UpdateFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeFromBlackDone__EventFunc
struct ABP_MissionManager_C_FadingTimeline__FadeFromBlackDone__EventFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeFromBlackStart__EventFunc
struct ABP_MissionManager_C_FadingTimeline__FadeFromBlackStart__EventFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__BlackScreenTicks__EventFunc
struct ABP_MissionManager_C_FadingTimeline__BlackScreenTicks__EventFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadedIn__EventFunc
struct ABP_MissionManager_C_FadingTimeline__FadedIn__EventFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.FadingTimeline__FadeInStart__EventFunc
struct ABP_MissionManager_C_FadingTimeline__FadeInStart__EventFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.PostProcessFadeIn__FinishedFunc
struct ABP_MissionManager_C_PostProcessFadeIn__FinishedFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.PostProcessFadeIn__UpdateFunc
struct ABP_MissionManager_C_PostProcessFadeIn__UpdateFunc_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.InpActEvt_TogglePauseMenu_options_K2Node_InputActionEvent_236
struct ABP_MissionManager_C_InpActEvt_TogglePauseMenu_options_K2Node_InputActionEvent_236_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_MissionManager.BP_MissionManager_C.StartFading
struct ABP_MissionManager_C_StartFading_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.StopFading
struct ABP_MissionManager_C_StopFading_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.HandleIntroCin
struct ABP_MissionManager_C_HandleIntroCin_Params
{
	bool*                                              EndOfCinematic;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.HandleMidCin
struct ABP_MissionManager_C_HandleMidCin_Params
{
	bool*                                              EndOfCinematic;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.HandleEndingCin
struct ABP_MissionManager_C_HandleEndingCin_Params
{
	bool*                                              EndOfCinematic;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.OnPlayerRespawned
struct ABP_MissionManager_C_OnPlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.TeleportToCheckpoint
struct ABP_MissionManager_C_TeleportToCheckpoint_Params
{
	int*                                               Checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.ReceivePostSaveGameLoaded
struct ABP_MissionManager_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.OnMovieEndReached
struct ABP_MissionManager_C_OnMovieEndReached_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.ReceivePreSaveGameLoaded
struct ABP_MissionManager_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.HandlePlayerDeathAndRespawning
struct ABP_MissionManager_C_HandlePlayerDeathAndRespawning_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.FadeInPostProcessToCin
struct ABP_MissionManager_C_FadeInPostProcessToCin_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.StartChainedMissionOnDelay
struct ABP_MissionManager_C_StartChainedMissionOnDelay_Params
{
	TEnumAsByte<EMissionIDs>*                          MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.LoadInLevelsAndPlayCinematic
struct ABP_MissionManager_C_LoadInLevelsAndPlayCinematic_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.DebugEndMovieFile
struct ABP_MissionManager_C_DebugEndMovieFile_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.CheckUnlocksOnTime
struct ABP_MissionManager_C_CheckUnlocksOnTime_Params
{
	int                                                Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.ReceiveEndPlay
struct ABP_MissionManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.SkipCurrentCinematic
struct ABP_MissionManager_C_SkipCurrentCinematic_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.RemoveCinematicSkipButton
struct ABP_MissionManager_C_RemoveCinematicSkipButton_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.DisplayCinematicSkipButton
struct ABP_MissionManager_C_DisplayCinematicSkipButton_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.ReceiveTick
struct ABP_MissionManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.BindOnHourChange
struct ABP_MissionManager_C_BindOnHourChange_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.OnCinematicStarted_MM_Event_1
struct ABP_MissionManager_C_OnCinematicStarted_MM_Event_1_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_1
struct ABP_MissionManager_C_OnFadingFinished_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_MissionManager.BP_MissionManager_C.StartRecordAllCinematics
struct ABP_MissionManager_C_StartRecordAllCinematics_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.DebugSkipInvalidCinOnDelay
struct ABP_MissionManager_C_DebugSkipInvalidCinOnDelay_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.JobManagerLoaded
struct ABP_MissionManager_C_JobManagerLoaded_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.OnTrustModified_Event_1
struct ABP_MissionManager_C_OnTrustModified_Event_1_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ModificationAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetDirectly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.OnFadedToBlack_MM_Event_1
struct ABP_MissionManager_C_OnFadedToBlack_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_MissionManager.BP_MissionManager_C.OnDiedOrDestroyed_Event_1
struct ABP_MissionManager_C_OnDiedOrDestroyed_Event_1_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDied;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.OnTrustTierChanged_EventForTrophies
struct ABP_MissionManager_C_OnTrustTierChanged_EventForTrophies_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            PreviousTier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            NewTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.DebugUXTestingScreen
struct ABP_MissionManager_C_DebugUXTestingScreen_Params
{
	class UDataAsset**                                 AssetRelated;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.InputClosed_Event_1
struct ABP_MissionManager_C_InputClosed_Event_1_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.SpawnAllAvailableInFrameDebug
struct ABP_MissionManager_C_SpawnAllAvailableInFrameDebug_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.OWVOUnlockMission
struct ABP_MissionManager_C_OWVOUnlockMission_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.ActivateCinematicMode_Code
struct ABP_MissionManager_C_ActivateCinematicMode_Code_Params
{
	bool*                                              MarkCinematicActive;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AffectsHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECinematicHidingTypes>*                HideActors;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.UpdateFailureCounts
struct ABP_MissionManager_C_UpdateFailureCounts_Params
{
	bool*                                              Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_0_Copy
struct ABP_MissionManager_C_OnFadingFinished_MM_Event_0_Copy_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_MissionManager.BP_MissionManager_C.PopupCallback_Event_1
struct ABP_MissionManager_C_PopupCallback_Event_1_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.CheckOptionalSkips
struct ABP_MissionManager_C_CheckOptionalSkips_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.OnFadingFinished_MM_Event_0_Copy_Copy
struct ABP_MissionManager_C_OnFadingFinished_MM_Event_0_Copy_Copy_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_MissionManager.BP_MissionManager_C.PopupCallback_Event_0_Copy
struct ABP_MissionManager_C_PopupCallback_Event_0_Copy_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.OnGameSaved_Event_1
struct ABP_MissionManager_C_OnGameSaved_Event_1_Params
{
	TEnumAsByte<ESaveGameType>                         SaveGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionManager.BP_MissionManager_C.StartEndingDLCMission
struct ABP_MissionManager_C_StartEndingDLCMission_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.OnWaitForPostChallengeWidgets
struct ABP_MissionManager_C_OnWaitForPostChallengeWidgets_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.OnPostChallengeCompleteQuit_Event_1
struct ABP_MissionManager_C_OnPostChallengeCompleteQuit_Event_1_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.OnPostChallengeCompleteRetry_Event_1
struct ABP_MissionManager_C_OnPostChallengeCompleteRetry_Event_1_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.BindDLCMissionEvents
struct ABP_MissionManager_C_BindDLCMissionEvents_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.UnBindDLCMissionEvents
struct ABP_MissionManager_C_UnBindDLCMissionEvents_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.OnCharSkinApplied_Event_1
struct ABP_MissionManager_C_OnCharSkinApplied_Event_1_Params
{
};

// Function BP_MissionManager.BP_MissionManager_C.ExecuteUbergraph_BP_MissionManager
struct ABP_MissionManager_C_ExecuteUbergraph_BP_MissionManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

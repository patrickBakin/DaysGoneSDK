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

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.IsPlayerPawnSpeaking
struct ABP_Tracking_InteractZone_C_IsPlayerPawnSpeaking_Params
{
	class ABendPlayerPawn**                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedResetAllTracking
struct ABP_Tracking_InteractZone_C_ScriptedResetAllTracking_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedRestartBreathing
struct ABP_Tracking_InteractZone_C_ScriptedRestartBreathing_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TestDistanceFromCurrestTrackingCluesToPlayer
struct ABP_Tracking_InteractZone_C_TestDistanceFromCurrestTrackingCluesToPlayer_Params
{
	bool                                               Within200U;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.FinishedTheListOfLocations
struct ABP_Tracking_InteractZone_C_FinishedTheListOfLocations_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ScriptedCompleteTrackingSection
struct ABP_Tracking_InteractZone_C_ScriptedCompleteTrackingSection_Params
{
	struct FName                                       Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.StopTracking
struct ABP_Tracking_InteractZone_C_StopTracking_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.HandleSaveGameResetting
struct ABP_Tracking_InteractZone_C_HandleSaveGameResetting_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.StartTracking
struct ABP_Tracking_InteractZone_C_StartTracking_Params
{
	struct FName                                       SectionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.IsTrackingSectionCompleted
struct ABP_Tracking_InteractZone_C_IsTrackingSectionCompleted_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Completed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.UserConstructionScript
struct ABP_Tracking_InteractZone_C_UserConstructionScript_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InpActEvt_Interact_K2Node_InputActionEvent_234
struct ABP_Tracking_InteractZone_C_InpActEvt_Interact_K2Node_InputActionEvent_234_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceiveBeginPlay
struct ABP_Tracking_InteractZone_C_ReceiveBeginPlay_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.BindAllOverlaps
struct ABP_Tracking_InteractZone_C_BindAllOverlaps_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceivePostSaveGameLoaded
struct ABP_Tracking_InteractZone_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ReceivePreSaveGameLoaded
struct ABP_Tracking_InteractZone_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InteractOnBegin
struct ABP_Tracking_InteractZone_C_InteractOnBegin_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.InteractOnEnd
struct ABP_Tracking_InteractZone_C_InteractOnEnd_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnFocusModeToggle
struct ABP_Tracking_InteractZone_C_OnFocusModeToggle_Params
{
	bool                                               EnteredFocusMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnFocusFadingFinished
struct ABP_Tracking_InteractZone_C_OnFocusFadingFinished_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnDied_Event_1
struct ABP_Tracking_InteractZone_C_OnDied_Event_1_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnEndPlay_Event_1
struct ABP_Tracking_InteractZone_C_OnEndPlay_Event_1_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.Pause_Start
struct ABP_Tracking_InteractZone_C_Pause_Start_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.Pause_End
struct ABP_Tracking_InteractZone_C_Pause_End_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_EnteredTrackingRange
struct ABP_Tracking_InteractZone_C_VO_EnteredTrackingRange_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_LeftTrackingRange
struct ABP_Tracking_InteractZone_C_VO_LeftTrackingRange_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_InRangeOfClue
struct ABP_Tracking_InteractZone_C_VO_InRangeOfClue_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.VO_FocusModeOnWhenInRange
struct ABP_Tracking_InteractZone_C_VO_FocusModeOnWhenInRange_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingSectionCompleted_Event_1
struct ABP_Tracking_InteractZone_C_TrackingSectionCompleted_Event_1_Params
{
	struct FName                                       SectionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CheckForCurrentDistanceToPlay
struct ABP_Tracking_InteractZone_C_CheckForCurrentDistanceToPlay_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TurnOnTrackingHUD
struct ABP_Tracking_InteractZone_C_TurnOnTrackingHUD_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TurnOffTrackingHUD
struct ABP_Tracking_InteractZone_C_TurnOffTrackingHUD_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingHUDUpdate
struct ABP_Tracking_InteractZone_C_TrackingHUDUpdate_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CodeTrackingClueInvestigated_Event_1
struct ABP_Tracking_InteractZone_C_CodeTrackingClueInvestigated_Event_1_Params
{
	struct FName                                       Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ClueObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CodeTrackingSectionCompleted_Event_1
struct ABP_Tracking_InteractZone_C_CodeTrackingSectionCompleted_Event_1_Params
{
	struct FName                                       SectionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.UpdateButtonProgress
struct ABP_Tracking_InteractZone_C_UpdateButtonProgress_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.SetTrackingState
struct ABP_Tracking_InteractZone_C_SetTrackingState_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Advertising;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.FinishAnimationOnUpdate
struct ABP_Tracking_InteractZone_C_FinishAnimationOnUpdate_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.CloseTheTutorialAndHideData
struct ABP_Tracking_InteractZone_C_CloseTheTutorialAndHideData_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ListWasFinished
struct ABP_Tracking_InteractZone_C_ListWasFinished_Params
{
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnRockThrowPostToggled_Event_1
struct ABP_Tracking_InteractZone_C_OnRockThrowPostToggled_Event_1_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.OnCinematicStarted_MM_Event_1
struct ABP_Tracking_InteractZone_C_OnCinematicStarted_MM_Event_1_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.PrePause
struct ABP_Tracking_InteractZone_C_PrePause_Params
{
	bool                                               IsPausing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.ExecuteUbergraph_BP_Tracking_InteractZone
struct ABP_Tracking_InteractZone_C_ExecuteUbergraph_BP_Tracking_InteractZone_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingClueInvestigated__DelegateSignature
struct ABP_Tracking_InteractZone_C_TrackingClueInvestigated__DelegateSignature_Params
{
	struct FName                                       Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ClueObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tracking_InteractZone.BP_Tracking_InteractZone_C.TrackingSectionCompleted__DelegateSignature
struct ABP_Tracking_InteractZone_C_TrackingSectionCompleted__DelegateSignature_Params
{
	struct FName                                       SectionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

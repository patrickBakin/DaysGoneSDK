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

// Function BP_JobScriptBase.BP_JobScriptBase_C.AttemptToPlayLateVO
struct ABP_JobScriptBase_C_AttemptToPlayLateVO_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.SetupLateVO
struct ABP_JobScriptBase_C_SetupLateVO_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobInWorldMarkerVisibility
struct ABP_JobScriptBase_C_ChangeJobInWorldMarkerVisibility_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapIconIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.AddPathToObjective
struct ABP_JobScriptBase_C_AddPathToObjective_Params
{
	bool                                               FoundPath;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToLocked
struct ABP_JobScriptBase_C_UpdateObjectiveToLocked_Params
{
	struct FBendJobObjectives*                         Objective;                                                // (Parm)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForcedChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToComplete
struct ABP_JobScriptBase_C_UpdateObjectiveToComplete_Params
{
	struct FBendJobObjectives*                         Objective;                                                // (Parm)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForcedChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToFailed
struct ABP_JobScriptBase_C_UpdateObjectiveToFailed_Params
{
	struct FBendJobObjectives*                         Objective;                                                // (Parm)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForcedChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveToUnlocked
struct ABP_JobScriptBase_C_UpdateObjectiveToUnlocked_Params
{
	struct FBendJobObjectives*                         Objective;                                                // (Parm)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForcedChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.GetIsCurrentlyInScreenQue
struct ABP_JobScriptBase_C_GetIsCurrentlyInScreenQue_Params
{
	bool                                               InQue;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentDisplay;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.TryRemoveObjectiveFromScreen
struct ABP_JobScriptBase_C_TryRemoveObjectiveFromScreen_Params
{
	TEnumAsByte<EObjectiveStates>*                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ObjectiveIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.TryAddObjectiveToScreen
struct ABP_JobScriptBase_C_TryAddObjectiveToScreen_Params
{
	struct FText*                                      NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              sideObjective;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ObjectiveIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.SendGenericJobScriptMessage
struct ABP_JobScriptBase_C_SendGenericJobScriptMessage_Params
{
	struct FString*                                    Message;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.GoBackToJobObjectiveStage
struct ABP_JobScriptBase_C_GoBackToJobObjectiveStage_Params
{
	int*                                               TheStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.ForceObjectiveStates
struct ABP_JobScriptBase_C_ForceObjectiveStates_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.GetCurrentCounterCount
struct ABP_JobScriptBase_C_GetCurrentCounterCount_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TheCount;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.GetObjectiveState
struct ABP_JobScriptBase_C_GetObjectiveState_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStates>                      CurrentState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.AttachJobMapMarkerToItem
struct ABP_JobScriptBase_C_AttachJobMapMarkerToItem_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapIconIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TheActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMiniMapLocation
struct ABP_JobScriptBase_C_ChangeJobMiniMapLocation_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapIconIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.DetachJobMapMarker
struct ABP_JobScriptBase_C_DetachJobMapMarker_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapIconIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateObjectiveText
struct ABP_JobScriptBase_C_UpdateObjectiveText_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      NewFText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              DisplayToScreen;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMapMarkerType
struct ABP_JobScriptBase_C_ChangeJobMapMarkerType_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapIconIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsObjectiveRegion;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RegionSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.GetActiveJobObjectivesData
struct ABP_JobScriptBase_C_GetActiveJobObjectivesData_Params
{
	TArray<struct FBendJobObjectives>                  Objectives;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.ChangeJobMiniMapMarkerVisibility
struct ABP_JobScriptBase_C_ChangeJobMiniMapMarkerVisibility_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapIconIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HideOnMap;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HideOnMiniMap;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.OverrideJobMapImages
struct ABP_JobScriptBase_C_OverrideJobMapImages_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              OverrideAllInObjective;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapIconIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 OverrideIcon;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 OverrideImage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.StoreMapMarkers
struct ABP_JobScriptBase_C_StoreMapMarkers_Params
{
	TArray<class UChildActorComponent*>*               MapMarkers;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.PauseTheJobScript
struct ABP_JobScriptBase_C_PauseTheJobScript_Params
{
	bool*                                              Pause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.MarkJobAsActiveFocus
struct ABP_JobScriptBase_C_MarkJobAsActiveFocus_Params
{
	bool*                                              TheFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.SetUpMapMarkersForObjective
struct ABP_JobScriptBase_C_SetUpMapMarkersForObjective_Params
{
	bool*                                              AddMarkers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ObjectiveIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      ObjDescriptionText;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FBendJobObjectiveMarkers>*           MarkerData;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FBendJobObjectiveMarkers>            NewMarkerData;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveProgression
struct ABP_JobScriptBase_C_UpdateJobObjectiveProgression_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.StoreJobScriptVariables
struct ABP_JobScriptBase_C_StoreJobScriptVariables_Params
{
	class UJobClassInfo**                              JobsID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.CompleteTheJob
struct ABP_JobScriptBase_C_CompleteTheJob_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.FailTheJob
struct ABP_JobScriptBase_C_FailTheJob_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveCounter
struct ABP_JobScriptBase_C_UpdateJobObjectiveCounter_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncrementOne;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CustomCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DisplayToScreen;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UpdateJobObjectiveStatus
struct ABP_JobScriptBase_C_UpdateJobObjectiveStatus_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStates>*                     ObjState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.InitJobObjectives
struct ABP_JobScriptBase_C_InitJobObjectives_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.InitializeJob
struct ABP_JobScriptBase_C_InitializeJob_Params
{
	TArray<class UChildActorComponent*>*               MiniMapMarkers;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              EndWhenObjectivesComplete;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.UserConstructionScript
struct ABP_JobScriptBase_C_UserConstructionScript_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.GlobalObjectHandler
struct ABP_JobScriptBase_C_GlobalObjectHandler_Params
{
	class AActor*                                      CurrentlySpawnedRef;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OriginalLocation;                                         // (Parm, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.ReceiveBeginPlay
struct ABP_JobScriptBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.GlobalObjectTick
struct ABP_JobScriptBase_C_GlobalObjectTick_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.RemoveGlobalObject
struct ABP_JobScriptBase_C_RemoveGlobalObject_Params
{
	class AActor*                                      RefToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.I_InitializeJobScript
struct ABP_JobScriptBase_C_I_InitializeJobScript_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.AttachJobMapMarkerToPawn
struct ABP_JobScriptBase_C_AttachJobMapMarkerToPawn_Params
{
	struct FName*                                      ObjIdentifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapIconIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn**                                  ThePawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HideOnDeathOrDespawn;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DetachOnDeath;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.OnDiedOrDestroyed_Event_1
struct ABP_JobScriptBase_C_OnDiedOrDestroyed_Event_1_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDied;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.StartBindingTrack
struct ABP_JobScriptBase_C_StartBindingTrack_Params
{
	bool                                               ShouldStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.TimerCheckForTrackedJob
struct ABP_JobScriptBase_C_TimerCheckForTrackedJob_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.ReceiveEndPlay
struct ABP_JobScriptBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.LoadInImages
struct ABP_JobScriptBase_C_LoadInImages_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.BindTimeChange
struct ABP_JobScriptBase_C_BindTimeChange_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.HourChanged
struct ABP_JobScriptBase_C_HourChanged_Params
{
	int                                                Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.AsynchLoad
struct ABP_JobScriptBase_C_AsynchLoad_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.OnNewMissionOrJobTracked
struct ABP_JobScriptBase_C_OnNewMissionOrJobTracked_Params
{
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.BindHighlightAllWhenNothingTracked
struct ABP_JobScriptBase_C_BindHighlightAllWhenNothingTracked_Params
{
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.ExecuteUbergraph_BP_JobScriptBase
struct ABP_JobScriptBase_C_ExecuteUbergraph_BP_JobScriptBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobScriptBase.BP_JobScriptBase_C.JobObjUpdateTelemetry__DelegateSignature
struct ABP_JobScriptBase_C_JobObjUpdateTelemetry__DelegateSignature_Params
{
	struct FName                                       JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStates>                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

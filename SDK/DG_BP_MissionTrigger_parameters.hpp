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

// Function BP_MissionTrigger.BP_MissionTrigger_C.DoAutoTracking
struct ABP_MissionTrigger_C_DoAutoTracking_Params
{
	bool*                                              Enter;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.GetSizeForRegion
struct ABP_MissionTrigger_C_GetSizeForRegion_Params
{
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.ChangeMiniMapMarkerState
struct ABP_MissionTrigger_C_ChangeMiniMapMarkerState_Params
{
	bool*                                              IsRegion;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.MarkCloseToMissionTrigger
struct ABP_MissionTrigger_C_MarkCloseToMissionTrigger_Params
{
	bool*                                              IsClose;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.CheckForValidEntry
struct ABP_MissionTrigger_C_CheckForValidEntry_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.MarkMissionAsActiveTracked
struct ABP_MissionTrigger_C_MarkMissionAsActiveTracked_Params
{
	bool*                                              Tracked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.GetCurrentlyInScreenQue
struct ABP_MissionTrigger_C_GetCurrentlyInScreenQue_Params
{
	bool                                               InQue;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentDisplay;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.UpdateTriggersWorldDisplay
struct ABP_MissionTrigger_C_UpdateTriggersWorldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.UserConstructionScript
struct ABP_MissionTrigger_C_UserConstructionScript_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.Timeline_0__FinishedFunc
struct ABP_MissionTrigger_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.Timeline_0__UpdateFunc
struct ABP_MissionTrigger_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.OnHourChanged_Event_2
struct ABP_MissionTrigger_C_OnHourChanged_Event_2_Params
{
	int                                                Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.ReceiveBeginPlay
struct ABP_MissionTrigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.StartBindingTrack
struct ABP_MissionTrigger_C_StartBindingTrack_Params
{
	bool                                               ShouldStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.TimerCheckForTrackedJob
struct ABP_MissionTrigger_C_TimerCheckForTrackedJob_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.IOnSelected
struct ABP_MissionTrigger_C_IOnSelected_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.AsynchLoad
struct ABP_MissionTrigger_C_AsynchLoad_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.OnCinematicStarted_MM_Event_1
struct ABP_MissionTrigger_C_OnCinematicStarted_MM_Event_1_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.OnCinematicEnded_MM_Event_1
struct ABP_MissionTrigger_C_OnCinematicEnded_MM_Event_1_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.OnFadingFinished_MM_Event_1
struct ABP_MissionTrigger_C_OnFadingFinished_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.KeepBikeDead
struct ABP_MissionTrigger_C_KeepBikeDead_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_75_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MissionTrigger_C_BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_75_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_145_BeginOverlapSig__DelegateSignature
struct ABP_MissionTrigger_C_BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_145_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_150_EndOverlapSig__DelegateSignature
struct ABP_MissionTrigger_C_BndEvt__OverlapSphereToggleVOManager_K2Node_ComponentBoundEvent_150_EndOverlapSig__DelegateSignature_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.ForceEnding
struct ABP_MissionTrigger_C_ForceEnding_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.PopupResponse
struct ABP_MissionTrigger_C_PopupResponse_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_40_BeginOverlapSig__DelegateSignature
struct ABP_MissionTrigger_C_BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_40_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_45_EndOverlapSig__DelegateSignature
struct ABP_MissionTrigger_C_BndEvt__MapSphereComponent_K2Node_ComponentBoundEvent_45_EndOverlapSig__DelegateSignature_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.BindEnterVehicle
struct ABP_MissionTrigger_C_BindEnterVehicle_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.UnbindEventEnterVehicle
struct ABP_MissionTrigger_C_UnbindEventEnterVehicle_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.OnRiderStartedEnteringVehicle_Event_1
struct ABP_MissionTrigger_C_OnRiderStartedEnteringVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.OnRiderStartedExitingVehicle_Event_1
struct ABP_MissionTrigger_C_OnRiderStartedExitingVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendVehicleExitReason>                ExitReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.SetCurrentSphereRadius
struct ABP_MissionTrigger_C_SetCurrentSphereRadius_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.OnNewMissionOrJobTracked
struct ABP_MissionTrigger_C_OnNewMissionOrJobTracked_Params
{
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.OnFadedToBlack_MM_Event_1
struct ABP_MissionTrigger_C_OnFadedToBlack_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.checkforout
struct ABP_MissionTrigger_C_checkforout_Params
{
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.ReceivePreSaveGameLoaded
struct ABP_MissionTrigger_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_266_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MissionTrigger_C_BndEvt__MissionTriggerBoxComponent_K2Node_ComponentBoundEvent_266_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.PopupResponse_Copy
struct ABP_MissionTrigger_C_PopupResponse_Copy_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTrigger.BP_MissionTrigger_C.ExecuteUbergraph_BP_MissionTrigger
struct ABP_MissionTrigger_C_ExecuteUbergraph_BP_MissionTrigger_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

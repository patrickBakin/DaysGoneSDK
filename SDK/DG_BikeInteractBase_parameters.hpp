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

// Function BikeInteractBase.BikeInteractBase_C.CanDoSecondaryInteractCode
struct ABikeInteractBase_C_CanDoSecondaryInteractCode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.CheckConditionsForTutorialSave
struct ABikeInteractBase_C_CheckConditionsForTutorialSave_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.Tutorial_Save
struct ABikeInteractBase_C_Tutorial_Save_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.ValidVaterDepth
struct ABikeInteractBase_C_ValidVaterDepth_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.CheckIfSecondaryInteractAnchorIsValid
struct ABikeInteractBase_C_CheckIfSecondaryInteractAnchorIsValid_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.CheckBikeAdvertise
struct ABikeInteractBase_C_CheckBikeAdvertise_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.ReleaseSecondaryInteract
struct ABikeInteractBase_C_ReleaseSecondaryInteract_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.CalculateEnterVehicleNavPoint
struct ABikeInteractBase_C_CalculateEnterVehicleNavPoint_Params
{
	bool                                               DoNavTo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              UseDistance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NoNavMove;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HalfWayThereNav;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CompletelyFailed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.GetAmmoWidget
struct ABikeInteractBase_C_GetAmmoWidget_Params
{
	class UBendWidgetComponent*                        AmmoWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.ShowRepairProgress
struct ABikeInteractBase_C_ShowRepairProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.GetFuelAndHealth
struct ABikeInteractBase_C_GetFuelAndHealth_Params
{
	float                                              Fuel;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.RefuelingFinished
struct ABikeInteractBase_C_RefuelingFinished_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.InBikeInteractRange
struct ABikeInteractBase_C_InBikeInteractRange_Params
{
	bool                                               In;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.InputStartedPress
struct ABikeInteractBase_C_InputStartedPress_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.CanDoSecondaryInteract
struct ABikeInteractBase_C_CanDoSecondaryInteract_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.DisplayTheSecondaryInteract
struct ABikeInteractBase_C_DisplayTheSecondaryInteract_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.GetCanBeInteracted
struct ABikeInteractBase_C_GetCanBeInteracted_Params
{
	bool                                               Interactable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.InputFailed
struct ABikeInteractBase_C_InputFailed_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.InputSuccess
struct ABikeInteractBase_C_InputSuccess_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.UserConstructionScript
struct ABikeInteractBase_C_UserConstructionScript_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_68
struct ABikeInteractBase_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_68_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_67
struct ABikeInteractBase_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_67_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BikeInteractBase.BikeInteractBase_C.InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_66
struct ABikeInteractBase_C_InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_66_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BikeInteractBase.BikeInteractBase_C.UpdateCollision
struct ABikeInteractBase_C_UpdateCollision_Params
{
	bool                                               TurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.ReceiveBeginPlay
struct ABikeInteractBase_C_ReceiveBeginPlay_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.UpdateInteractDetails
struct ABikeInteractBase_C_UpdateInteractDetails_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.InteractOnBegin
struct ABikeInteractBase_C_InteractOnBegin_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.InteractOnEnd
struct ABikeInteractBase_C_InteractOnEnd_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.InputSlateInteractEnd
struct ABikeInteractBase_C_InputSlateInteractEnd_Params
{
	class USlateInputInteract*                         InputInteract;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.ReceiveTick
struct ABikeInteractBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.OnCinematicStarted_MM_Event_1
struct ABikeInteractBase_C_OnCinematicStarted_MM_Event_1_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.OnCinematicEnded_MM_Event_1
struct ABikeInteractBase_C_OnCinematicEnded_MM_Event_1_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.OnMissionBegin_MM_Event_1
struct ABikeInteractBase_C_OnMissionBegin_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.OnMissionComplete_MM_Event_1
struct ABikeInteractBase_C_OnMissionComplete_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.ReceiveMoveCompleted_Event_1
struct ABikeInteractBase_C_ReceiveMoveCompleted_Event_1_Params
{
	struct FAIRequestID                                RequestID;                                                // (Parm)
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.UnbindMoveComplete
struct ABikeInteractBase_C_UnbindMoveComplete_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.DoAutoNavBike
struct ABikeInteractBase_C_DoAutoNavBike_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.OnInputEnd_Copy
struct ABikeInteractBase_C_OnInputEnd_Copy_Params
{
	class USlateInputInteract*                         InputInteract;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.StartInteraction
struct ABikeInteractBase_C_StartInteraction_Params
{
	bool                                               PostNav;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.NeedThisForTimerToActuallyWork
struct ABikeInteractBase_C_NeedThisForTimerToActuallyWork_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.OnDriverEnteredVehiclePawn_Event_1
struct ABikeInteractBase_C_OnDriverEnteredVehiclePawn_Event_1_Params
{
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.OnMenuToHideSpecificUIActivated_Event_1
struct ABikeInteractBase_C_OnMenuToHideSpecificUIActivated_Event_1_Params
{
	bool                                               Activated;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.ReceiveEndPlay
struct ABikeInteractBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.OnPhotoModeStarted
struct ABikeInteractBase_C_OnPhotoModeStarted_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.OnPhotoModeEnded
struct ABikeInteractBase_C_OnPhotoModeEnded_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.ReceivePreSaveGameLoaded
struct ABikeInteractBase_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.UpdateFuelAndHealthStats
struct ABikeInteractBase_C_UpdateFuelAndHealthStats_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.SetBikeAdvertiseState
struct ABikeInteractBase_C_SetBikeAdvertiseState_Params
{
	bool*                                              IsAvailable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.OnPostSaveGameLoaded_Event_1
struct ABikeInteractBase_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.BikeObstructed
struct ABikeInteractBase_C_BikeObstructed_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.Interact2Pressed
struct ABikeInteractBase_C_Interact2Pressed_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.Interact2Released
struct ABikeInteractBase_C_Interact2Released_Params
{
};

// Function BikeInteractBase.BikeInteractBase_C.ExecuteUbergraph_BikeInteractBase
struct ABikeInteractBase_C_ExecuteUbergraph_BikeInteractBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeInteractBase.BikeInteractBase_C.SabotageOrRepairComplete__DelegateSignature
struct ABikeInteractBase_C_SabotageOrRepairComplete__DelegateSignature_Params
{
	int                                                ScrapCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

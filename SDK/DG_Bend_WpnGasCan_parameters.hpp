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

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.I_DisplayFuelInteract
struct ABend_WpnGasCan_C_I_DisplayFuelInteract_Params
{
	bool                                               DisplayInteract;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToFuel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ObjectAnimAnchorRef;                                      // (Parm, IsPlainOldData)
	struct FTransform                                  WidgetTransform;                                          // (Parm, IsPlainOldData)
	bool                                               NeedsRefilling;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ShowTutorial
struct ABend_WpnGasCan_C_ShowTutorial_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.GetAnchorForAnimations
struct ABend_WpnGasCan_C_GetAnchorForAnimations_Params
{
	int                                                AnimIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.PlayRunSloshSound
struct ABend_WpnGasCan_C_PlayRunSloshSound_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.PlayThrowSound
struct ABend_WpnGasCan_C_PlayThrowSound_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.GetFuelStatus
struct ABend_WpnGasCan_C_GetFuelStatus_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.AddFuel
struct ABend_WpnGasCan_C_AddFuel_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.UserConstructionScript
struct ABend_WpnGasCan_C_UserConstructionScript_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.InpActEvt_Interact2_UniqueObjectNameForCooking_502
struct ABend_WpnGasCan_C_InpActEvt_Interact2_UniqueObjectNameForCooking_502_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.InpActEvt_Interact2_UniqueObjectNameForCooking_501
struct ABend_WpnGasCan_C_InpActEvt_Interact2_UniqueObjectNameForCooking_501_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.BeginFillingVO
struct ABend_WpnGasCan_C_BeginFillingVO_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.EndFillingVO
struct ABend_WpnGasCan_C_EndFillingVO_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ResetVO
struct ABend_WpnGasCan_C_ResetVO_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveTick
struct ABend_WpnGasCan_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.Failed_LoopRefueling
struct ABend_WpnGasCan_C_Failed_LoopRefueling_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.BeginRefueling
struct ABend_WpnGasCan_C_BeginRefueling_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnInputEnd
struct ABend_WpnGasCan_C_OnInputEnd_Params
{
	class USlateInputInteract*                         InputInteract;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnThrowWeapon
struct ABend_WpnGasCan_C_OnThrowWeapon_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.TurnOffInteract
struct ABend_WpnGasCan_C_TurnOffInteract_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.EnterComplete
struct ABend_WpnGasCan_C_EnterComplete_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.EnterFailed
struct ABend_WpnGasCan_C_EnterFailed_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExitAnimComplete
struct ABend_WpnGasCan_C_ExitAnimComplete_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExitAnimFailed
struct ABend_WpnGasCan_C_ExitAnimFailed_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.WeaponRelease
struct ABend_WpnGasCan_C_WeaponRelease_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveBeginPlay
struct ABend_WpnGasCan_C_ReceiveBeginPlay_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.InteractOnBegin
struct ABend_WpnGasCan_C_InteractOnBegin_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.InteractOnEnd
struct ABend_WpnGasCan_C_InteractOnEnd_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.DisplaySlateInteract
struct ABend_WpnGasCan_C_DisplaySlateInteract_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReleaseTheInteract
struct ABend_WpnGasCan_C_ReleaseTheInteract_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnDrawFinished
struct ABend_WpnGasCan_C_OnDrawFinished_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.OnHolsterStarted
struct ABend_WpnGasCan_C_OnHolsterStarted_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.GasCanCloseTutorial
struct ABend_WpnGasCan_C_GasCanCloseTutorial_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReadyToDrop
struct ABend_WpnGasCan_C_ReadyToDrop_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ReceiveEndPlay
struct ABend_WpnGasCan_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.ExecuteUbergraph_Bend_WpnGasCan
struct ABend_WpnGasCan_C_ExecuteUbergraph_Bend_WpnGasCan_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.RefuelingFinished__DelegateSignature
struct ABend_WpnGasCan_C_RefuelingFinished__DelegateSignature_Params
{
};

// Function Bend_WpnGasCan.Bend_WpnGasCan_C.RefuelingStarted__DelegateSignature
struct ABend_WpnGasCan_C_RefuelingStarted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

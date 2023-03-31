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

// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedAnyAmmo
struct ABP_BikeRepair_C_DoesPlayerNeedAnyAmmo_Params
{
	bool                                               NeedsAmmo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.FillPlayersAmmo
struct ABP_BikeRepair_C_FillPlayersAmmo_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.CheckIfSecondaryInteractAnchorIsValid
struct ABP_BikeRepair_C_CheckIfSecondaryInteractAnchorIsValid_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedAmmoFromBike
struct ABP_BikeRepair_C_DoesPlayerNeedAmmoFromBike_Params
{
	bool                                               NeedsAmmo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.SetScrapRepairRate
struct ABP_BikeRepair_C_SetScrapRepairRate_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.GetAmmoWidget
struct ABP_BikeRepair_C_GetAmmoWidget_Params
{
	class UBendWidgetComponent*                        AmmoWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.SetBikeAmmoHelper
struct ABP_BikeRepair_C_SetBikeAmmoHelper_Params
{
	struct FInventoryItemTagSlot                       AmmoSlotRef;                                              // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryItemTagSlot                       NewParam;                                                 // (Parm, OutParm)
};

// Function BP_BikeRepair.BP_BikeRepair_C.GetBikeAmmoCount
struct ABP_BikeRepair_C_GetBikeAmmoCount_Params
{
	struct FGameplayTag                                AmmoTag;                                                  // (Parm)
	int                                                RemainingAmmo;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.SetBikeAmmo
struct ABP_BikeRepair_C_SetBikeAmmo_Params
{
	struct FGameplayTag                                AmmoToSet;                                                // (Parm)
	int                                                AmmoCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.DisplayAmmoNotification
struct ABP_BikeRepair_C_DisplayAmmoNotification_Params
{
	class ABendWeapon*                                 WeaponRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.SetAmmoDefaults
struct ABP_BikeRepair_C_SetAmmoDefaults_Params
{
	struct FGameplayTag                                AmmoTag;                                                  // (Parm)
};

// Function BP_BikeRepair.BP_BikeRepair_C.CanTakeAllAmmo
struct ABP_BikeRepair_C_CanTakeAllAmmo_Params
{
	struct FGameplayTag                                AmmoTag;                                                  // (Parm)
	bool                                               HasMoreAmmo;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.DoesBikeHaveAmmo
struct ABP_BikeRepair_C_DoesBikeHaveAmmo_Params
{
	struct FGameplayTag                                AmmoTag;                                                  // (Parm)
	bool                                               HasAmmo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.SetCurrentAmmoCap
struct ABP_BikeRepair_C_SetCurrentAmmoCap_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedPrimary1AmmoType
struct ABP_BikeRepair_C_DoesPlayerNeedPrimary1AmmoType_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedPrimary0AmmoType
struct ABP_BikeRepair_C_DoesPlayerNeedPrimary0AmmoType_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.GiveThePlayerAmmo
struct ABP_BikeRepair_C_GiveThePlayerAmmo_Params
{
	struct FGameplayTag                                AmmoTag;                                                  // (Parm)
	int                                                weaponSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.GetCurrentWeapons
struct ABP_BikeRepair_C_GetCurrentWeapons_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.DoesPlayerNeedSecondaryAmmoType
struct ABP_BikeRepair_C_DoesPlayerNeedSecondaryAmmoType_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.CanDoSecondaryInteract
struct ABP_BikeRepair_C_CanDoSecondaryInteract_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.SetAnimation
struct ABP_BikeRepair_C_SetAnimation_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.PlayEndingVO
struct ABP_BikeRepair_C_PlayEndingVO_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.Repair Bike
struct ABP_BikeRepair_C_Repair_Bike_Params
{
	bool                                               ScrapFinish;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.UserConstructionScript
struct ABP_BikeRepair_C_UserConstructionScript_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.InpActEvt_Interact4_UniqueObjectNameForCooking_226
struct ABP_BikeRepair_C_InpActEvt_Interact4_UniqueObjectNameForCooking_226_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_BikeRepair.BP_BikeRepair_C.InpActEvt_Interact4_UniqueObjectNameForCooking_225
struct ABP_BikeRepair_C_InpActEvt_Interact4_UniqueObjectNameForCooking_225_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_BikeRepair.BP_BikeRepair_C.CheckAmmoInteraction
struct ABP_BikeRepair_C_CheckAmmoInteraction_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.InteractOnBegin
struct ABP_BikeRepair_C_InteractOnBegin_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.InteractOnEnd
struct ABP_BikeRepair_C_InteractOnEnd_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.InputSlateInteractEnd_Copy
struct ABP_BikeRepair_C_InputSlateInteractEnd_Copy_Params
{
	class USlateInputInteract*                         InputInteract;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.RecheckAmmoStocks
struct ABP_BikeRepair_C_RecheckAmmoStocks_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.Complete_AnimIn
struct ABP_BikeRepair_C_Complete_AnimIn_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimIn
struct ABP_BikeRepair_C_Failed_AnimIn_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimLoop
struct ABP_BikeRepair_C_Failed_AnimLoop_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.Complete_AnimOut
struct ABP_BikeRepair_C_Complete_AnimOut_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.Failed_AnimOut
struct ABP_BikeRepair_C_Failed_AnimOut_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__Trigger1_K2Node_ComponentBoundEvent_2453_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BikeRepair_C_BndEvt__Trigger1_K2Node_ComponentBoundEvent_2453_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__Trigger2_K2Node_ComponentBoundEvent_2458_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BikeRepair_C_BndEvt__Trigger2_K2Node_ComponentBoundEvent_2458_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_BikeRepair.BP_BikeRepair_C.UpdateInteractDetails
struct ABP_BikeRepair_C_UpdateInteractDetails_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.InputSuccess
struct ABP_BikeRepair_C_InputSuccess_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.InputFailed
struct ABP_BikeRepair_C_InputFailed_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.UpdateCollision
struct ABP_BikeRepair_C_UpdateCollision_Params
{
	bool*                                              TurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__LeftTrigger_K2Node_ComponentBoundEvent_2421_ComponentEndOverlapSignature__DelegateSignature
struct ABP_BikeRepair_C_BndEvt__LeftTrigger_K2Node_ComponentBoundEvent_2421_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.BndEvt__RightTrigger_K2Node_ComponentBoundEvent_2425_ComponentEndOverlapSignature__DelegateSignature
struct ABP_BikeRepair_C_BndEvt__RightTrigger_K2Node_ComponentBoundEvent_2425_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.ReceiveTick
struct ABP_BikeRepair_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.InputStartedPress
struct ABP_BikeRepair_C_InputStartedPress_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.OnScrapRemoved
struct ABP_BikeRepair_C_OnScrapRemoved_Params
{
	int*                                               RemovedCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.OnRepairProgressChanged
struct ABP_BikeRepair_C_OnRepairProgressChanged_Params
{
	float*                                             RepairProgress;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.OnBikeRepairBeginEnd
struct ABP_BikeRepair_C_OnBikeRepairBeginEnd_Params
{
	bool*                                              IsRepairing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.StopRepairSound
struct ABP_BikeRepair_C_StopRepairSound_Params
{
};

// Function BP_BikeRepair.BP_BikeRepair_C.OnVehicleKnockedOver
struct ABP_BikeRepair_C_OnVehicleKnockedOver_Params
{
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BikeRepair.BP_BikeRepair_C.ExecuteUbergraph_BP_BikeRepair
struct ABP_BikeRepair_C_ExecuteUbergraph_BP_BikeRepair_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

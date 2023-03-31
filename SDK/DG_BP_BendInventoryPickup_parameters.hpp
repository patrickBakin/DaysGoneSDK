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

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.LastCheckWasFullOnObject
struct ABP_BendInventoryPickup_C_LastCheckWasFullOnObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Get Comparison Shown By Weapon
struct ABP_BendInventoryPickup_C_Get_Comparison_Shown_By_Weapon_Params
{
	class UInventoryWeaponItem*                        Weapon_Item;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Comparison_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetAdvertisePosition
struct ABP_BendInventoryPickup_C_SetAdvertisePosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.AttemptTakeItemFromAreaPickup
struct ABP_BendInventoryPickup_C_AttemptTakeItemFromAreaPickup_Params
{
	struct FVector*                                    PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.IsWeapon
struct ABP_BendInventoryPickup_C_IsWeapon_Params
{
	bool                                               IsWeapon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponType>                           WeaponType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetUpAnimOverride
struct ABP_BendInventoryPickup_C_SetUpAnimOverride_Params
{
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseAnchor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Anchor;                                                   // (Parm, IsPlainOldData)
	struct FName                                       ref;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InteractRangeOverride;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartEnabled_;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayPickupAnimation
struct ABP_BendInventoryPickup_C_PlayPickupAnimation_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.UserConstructionScript
struct ABP_BendInventoryPickup_C_UserConstructionScript_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Complete
struct ABP_BendInventoryPickup_C_Complete_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Failed
struct ABP_BendInventoryPickup_C_Failed_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.EventAnimPickup
struct ABP_BendInventoryPickup_C_EventAnimPickup_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 AnimNotify;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnPickupAccepted
struct ABP_BendInventoryPickup_C_OnPickupAccepted_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SlateInputInteractEnd
struct ABP_BendInventoryPickup_C_SlateInputInteractEnd_Params
{
	class USlateInputInteract*                         InputInteract;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnNotificationTextureLoaded
struct ABP_BendInventoryPickup_C_OnNotificationTextureLoaded_Params
{
	class UTexture2D**                                 Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ForcePickup
struct ABP_BendInventoryPickup_C_ForcePickup_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ReceiveMoveCompleted_Event_1
struct ABP_BendInventoryPickup_C_ReceiveMoveCompleted_Event_1_Params
{
	struct FAIRequestID                                RequestID;                                                // (Parm)
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Pre_InputStartPressTemp
struct ABP_BendInventoryPickup_C_Pre_InputStartPressTemp_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.DoAutoNav
struct ABP_BendInventoryPickup_C_DoAutoNav_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.StartTheInteraction
struct ABP_BendInventoryPickup_C_StartTheInteraction_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayPickupEffects
struct ABP_BendInventoryPickup_C_PlayPickupEffects_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.OnPerformActionMid
struct ABP_BendInventoryPickup_C_OnPerformActionMid_Params
{
	bool*                                              FromAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AlreadyDidPickup;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PlayAnimation
struct ABP_BendInventoryPickup_C_PlayAnimation_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Tutorials
struct ABP_BendInventoryPickup_C_Tutorials_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.TryMeleeTutorial
struct ABP_BendInventoryPickup_C_TryMeleeTutorial_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.DisplayHudNotificationInternal
struct ABP_BendInventoryPickup_C_DisplayHudNotificationInternal_Params
{
	class UTexture2D**                                 NotifyTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForInteractEnd
struct ABP_BendInventoryPickup_C_CallNotifyForInteractEnd_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForInteractStart
struct ABP_BendInventoryPickup_C_CallNotifyForInteractStart_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.CallNotifyForExactMomentOfPickup
struct ABP_BendInventoryPickup_C_CallNotifyForExactMomentOfPickup_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetNotificationDetails
struct ABP_BendInventoryPickup_C_SetNotificationDetails_Params
{
	bool*                                              IsGunAmmoPickup;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetMeleeWeaponType
struct ABP_BendInventoryPickup_C_SetMeleeWeaponType_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetIconColor
struct ABP_BendInventoryPickup_C_SetIconColor_Params
{
	bool*                                              RedIcon;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.Complain
struct ABP_BendInventoryPickup_C_Complain_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.renameActor
struct ABP_BendInventoryPickup_C_renameActor_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetGlint
struct ABP_BendInventoryPickup_C_SetGlint_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.SetColorToFriendly
struct ABP_BendInventoryPickup_C_SetColorToFriendly_Params
{
	bool*                                              Friendly;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.UnbindMoveComplete
struct ABP_BendInventoryPickup_C_UnbindMoveComplete_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.BeginTheInteract
struct ABP_BendInventoryPickup_C_BeginTheInteract_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractOnBegin
struct ABP_BendInventoryPickup_C_InteractOnBegin_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractOnEnd
struct ABP_BendInventoryPickup_C_InteractOnEnd_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ReceivePostSaveGameLoaded
struct ABP_BendInventoryPickup_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InputPressStarted
struct ABP_BendInventoryPickup_C_InputPressStarted_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InputPressReleased
struct ABP_BendInventoryPickup_C_InputPressReleased_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ForceResetWithCount
struct ABP_BendInventoryPickup_C_ForceResetWithCount_Params
{
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ExecuteUbergraph_BP_BendInventoryPickup
struct ABP_BendInventoryPickup_C_ExecuteUbergraph_BP_BendInventoryPickup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.PickupStarted__DelegateSignature
struct ABP_BendInventoryPickup_C_PickupStarted__DelegateSignature_Params
{
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.InteractEnded__DelegateSignature
struct ABP_BendInventoryPickup_C_InteractEnded__DelegateSignature_Params
{
	bool                                               DidAnimComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup.BP_BendInventoryPickup_C.ExactMomentOfPickup__DelegateSignature
struct ABP_BendInventoryPickup_C_ExactMomentOfPickup__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

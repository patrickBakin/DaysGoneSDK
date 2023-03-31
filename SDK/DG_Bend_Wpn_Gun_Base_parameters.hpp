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

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ICanEverBeRepaired
struct ABend_Wpn_Gun_Base_C_ICanEverBeRepaired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ICanBeRepaired
struct ABend_Wpn_Gun_Base_C_ICanBeRepaired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.IGetRepairCost
struct ABend_Wpn_Gun_Base_C_IGetRepairCost_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.IOnRepaired
struct ABend_Wpn_Gun_Base_C_IOnRepaired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.SetHiddenForDLC
struct ABend_Wpn_Gun_Base_C_SetHiddenForDLC_Params
{
	bool                                               ShouldHide;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.GetHideReticle
struct ABend_Wpn_Gun_Base_C_GetHideReticle_Params
{
	bool                                               HideReticle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.VerifyOverlap
struct ABend_Wpn_Gun_Base_C_VerifyOverlap_Params
{
	class UObject*                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidHit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.AdjustReticleByMovement
struct ABend_Wpn_Gun_Base_C_AdjustReticleByMovement_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.Debug_GunAccuracy
struct ABend_Wpn_Gun_Base_C_Debug_GunAccuracy_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ShakeCamera
struct ABend_Wpn_Gun_Base_C_ShakeCamera_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.UserConstructionScript
struct ABend_Wpn_Gun_Base_C_UserConstructionScript_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ReceiveBeginPlay
struct ABend_Wpn_Gun_Base_C_ReceiveBeginPlay_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponArmed
struct ABend_Wpn_Gun_Base_C_OnWeaponArmed_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponDisarmed
struct ABend_Wpn_Gun_Base_C_OnWeaponDisarmed_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnDamaged
struct ABend_Wpn_Gun_Base_C_OnDamaged_Params
{
	bool*                                              OwnerIsPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponsHealthPercentage;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnWeaponDisarmed_Copy
struct ABend_Wpn_Gun_Base_C_OnWeaponDisarmed_Copy_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature
struct ABend_Wpn_Gun_Base_C_BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnClipLoaded
struct ABend_Wpn_Gun_Base_C_OnClipLoaded_Params
{
	int*                                               MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnClipRemoved
struct ABend_Wpn_Gun_Base_C_OnClipRemoved_Params
{
	int*                                               MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnBaseMaterialSet
struct ABend_Wpn_Gun_Base_C_OnBaseMaterialSet_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnPartAdded
struct ABend_Wpn_Gun_Base_C_OnPartAdded_Params
{
	class ABendWeaponPart**                            WeaponPart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnPartRemoved
struct ABend_Wpn_Gun_Base_C_OnPartRemoved_Params
{
	class ABendWeaponPart**                            WeaponPart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.SetupBaseMaterial
struct ABend_Wpn_Gun_Base_C_SetupBaseMaterial_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnAmmoTakenFromBike
struct ABend_Wpn_Gun_Base_C_OnAmmoTakenFromBike_Params
{
	int*                                               AmmoTaken;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.OnDebuggingActive
struct ABend_Wpn_Gun_Base_C_OnDebuggingActive_Params
{
};

// Function Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C.ExecuteUbergraph_Bend_Wpn_Gun_Base
struct ABend_Wpn_Gun_Base_C_ExecuteUbergraph_Bend_Wpn_Gun_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

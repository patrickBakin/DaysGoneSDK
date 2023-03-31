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

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanUpgrade
struct ABend_WpnMelee_Blunt_Base_C_ICanUpgrade_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetTier
struct ABend_WpnMelee_Blunt_Base_C_IGetTier_Params
{
	TEnumAsByte<EWeaponMeleeTier>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetUpgradeCost
struct ABend_WpnMelee_Blunt_Base_C_IGetUpgradeCost_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ISetTier
struct ABend_WpnMelee_Blunt_Base_C_ISetTier_Params
{
	TEnumAsByte<EWeaponMeleeTier>                      Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanEverBeRepaired
struct ABend_WpnMelee_Blunt_Base_C_ICanEverBeRepaired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ICanBeRepaired
struct ABend_WpnMelee_Blunt_Base_C_ICanBeRepaired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IGetRepairCost
struct ABend_WpnMelee_Blunt_Base_C_IGetRepairCost_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.IOnRepaired
struct ABend_WpnMelee_Blunt_Base_C_IOnRepaired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.VerifyBrokenOverlap
struct ABend_WpnMelee_Blunt_Base_C_VerifyBrokenOverlap_Params
{
	class UObject*                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidHit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.VerifyOverlap
struct ABend_WpnMelee_Blunt_Base_C_VerifyOverlap_Params
{
	class UObject*                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidHit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.DisplayDebugInfo
struct ABend_WpnMelee_Blunt_Base_C_DisplayDebugInfo_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.UserConstructionScript
struct ABend_WpnMelee_Blunt_Base_C_UserConstructionScript_Params
{
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature
struct ABend_WpnMelee_Blunt_Base_C_BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnWeaponArmed
struct ABend_WpnMelee_Blunt_Base_C_OnWeaponArmed_Params
{
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnWeaponDisarmed
struct ABend_WpnMelee_Blunt_Base_C_OnWeaponDisarmed_Params
{
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDamaged
struct ABend_WpnMelee_Blunt_Base_C_OnDamaged_Params
{
	bool*                                              OwnerIsPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponsHealthPercentage;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ReceiveBeginPlay
struct ABend_WpnMelee_Blunt_Base_C_ReceiveBeginPlay_Params
{
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnHolsterStarted
struct ABend_WpnMelee_Blunt_Base_C_OnHolsterStarted_Params
{
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDrawFinished
struct ABend_WpnMelee_Blunt_Base_C_OnDrawFinished_Params
{
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.BndEvt__MeleeCollisionOnBikeComp_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature
struct ABend_WpnMelee_Blunt_Base_C_BndEvt__MeleeCollisionOnBikeComp_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.OnDebuggingActive
struct ABend_WpnMelee_Blunt_Base_C_OnDebuggingActive_Params
{
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.Melee_Tutorials
struct ABend_WpnMelee_Blunt_Base_C_Melee_Tutorials_Params
{
};

// Function Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C.ExecuteUbergraph_Bend_WpnMelee_Blunt_Base
struct ABend_WpnMelee_Blunt_Base_C_ExecuteUbergraph_Bend_WpnMelee_Blunt_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

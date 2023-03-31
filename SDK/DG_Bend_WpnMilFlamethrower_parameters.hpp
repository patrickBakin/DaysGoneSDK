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

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.Verify Overlap
struct ABend_WpnMilFlamethrower_C_Verify_Overlap_Params
{
	class UObject*                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidHit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.UserConstructionScript
struct ABend_WpnMilFlamethrower_C_UserConstructionScript_Params
{
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnDrawStarted
struct ABend_WpnMilFlamethrower_C_OnDrawStarted_Params
{
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnHolsterStarted
struct ABend_WpnMilFlamethrower_C_OnHolsterStarted_Params
{
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.ReceiveBeginPlay
struct ABend_WpnMilFlamethrower_C_ReceiveBeginPlay_Params
{
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature
struct ABend_WpnMilFlamethrower_C_BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnWeaponArmed
struct ABend_WpnMilFlamethrower_C_OnWeaponArmed_Params
{
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnWeaponDisarmed
struct ABend_WpnMilFlamethrower_C_OnWeaponDisarmed_Params
{
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.OnDamaged
struct ABend_WpnMilFlamethrower_C_OnDamaged_Params
{
	bool*                                              OwnerIsPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponsHealthPercentage;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C.ExecuteUbergraph_Bend_WpnMilFlamethrower
struct ABend_WpnMilFlamethrower_C_ExecuteUbergraph_Bend_WpnMilFlamethrower_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

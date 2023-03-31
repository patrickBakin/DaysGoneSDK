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

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.DisplayDebugInfo
struct ABend_WpnMelee_NoMesh_Base_C_DisplayDebugInfo_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm)
};

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.VerifyOverlap
struct ABend_WpnMelee_NoMesh_Base_C_VerifyOverlap_Params
{
	class AActor*                                      Other_Actor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidHit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.UserConstructionScript
struct ABend_WpnMelee_NoMesh_Base_C_UserConstructionScript_Params
{
};

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature
struct ABend_WpnMelee_NoMesh_Base_C_BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnWeaponArmed
struct ABend_WpnMelee_NoMesh_Base_C_OnWeaponArmed_Params
{
};

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnWeaponDisarmed
struct ABend_WpnMelee_NoMesh_Base_C_OnWeaponDisarmed_Params
{
};

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.ReceiveBeginPlay
struct ABend_WpnMelee_NoMesh_Base_C_ReceiveBeginPlay_Params
{
};

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.OnDebuggingActive
struct ABend_WpnMelee_NoMesh_Base_C_OnDebuggingActive_Params
{
};

// Function Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C.ExecuteUbergraph_Bend_WpnMelee_NoMesh_Base
struct ABend_WpnMelee_NoMesh_Base_C_ExecuteUbergraph_Bend_WpnMelee_NoMesh_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

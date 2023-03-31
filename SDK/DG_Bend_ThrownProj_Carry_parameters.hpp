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

// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.UserConstructionScript
struct ABend_ThrownProj_Carry_C_UserConstructionScript_Params
{
};

// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ForceExplodeManual
struct ABend_ThrownProj_Carry_C_ForceExplodeManual_Params
{
	class AController**                                Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.CreateFireDelayed
struct ABend_ThrownProj_Carry_C_CreateFireDelayed_Params
{
};

// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ReceivePreSaveGameLoaded
struct ABend_ThrownProj_Carry_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.AddExplosionForce
struct ABend_ThrownProj_Carry_C_AddExplosionForce_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ExecuteUbergraph_Bend_ThrownProj_Carry
struct ABend_ThrownProj_Carry_C_ExecuteUbergraph_Bend_ThrownProj_Carry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.CarryWeaponExploded__DelegateSignature
struct ABend_ThrownProj_Carry_C_CarryWeaponExploded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

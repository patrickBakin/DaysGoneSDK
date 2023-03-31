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

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.CheckDLCRings
struct ABend_ArrowProj_Crossbow_C_CheckDLCRings_Params
{
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.SpawnCorrectArrowPickup
struct ABend_ArrowProj_Crossbow_C_SpawnCorrectArrowPickup_Params
{
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.EnablePickup
struct ABend_ArrowProj_Crossbow_C_EnablePickup_Params
{
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.UserConstructionScript
struct ABend_ArrowProj_Crossbow_C_UserConstructionScript_Params
{
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ProjectileStopProximityMine
struct ABend_ArrowProj_Crossbow_C_ProjectileStopProximityMine_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm)
	class ABendPawn*                                   OwningPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ProjectileStop
struct ABend_ArrowProj_Crossbow_C_ProjectileStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ReceiveBeginPlay
struct ABend_ArrowProj_Crossbow_C_ReceiveBeginPlay_Params
{
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.BaseProjectileStop
struct ABend_ArrowProj_Crossbow_C_BaseProjectileStop_Params
{
	struct FHitResult                                  Impact_Result;                                            // (Parm)
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.CheckDLCRingEffectsOnProjectile
struct ABend_ArrowProj_Crossbow_C_CheckDLCRingEffectsOnProjectile_Params
{
};

// Function Bend_ArrowProj_Crossbow.Bend_ArrowProj_Crossbow_C.ExecuteUbergraph_Bend_ArrowProj_Crossbow
struct ABend_ArrowProj_Crossbow_C_ExecuteUbergraph_Bend_ArrowProj_Crossbow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

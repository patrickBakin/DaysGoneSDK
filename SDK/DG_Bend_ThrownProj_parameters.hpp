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

// Function Bend_ThrownProj.Bend_ThrownProj_C.UserConstructionScript
struct ABend_ThrownProj_C_UserConstructionScript_Params
{
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveBeginPlay
struct ABend_ThrownProj_C_ReceiveBeginPlay_Params
{
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveAnyDamage
struct ABend_ThrownProj_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.ForceExplodeManual
struct ABend_ThrownProj_C_ForceExplodeManual_Params
{
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.OnExploded
struct ABend_ThrownProj_C_OnExploded_Params
{
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.ReceivePreSaveGameLoaded
struct ABend_ThrownProj_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.ForceExplodeDelayed
struct ABend_ThrownProj_C_ForceExplodeDelayed_Params
{
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.StopVibration
struct ABend_ThrownProj_C_StopVibration_Params
{
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.ReceiveEndPlay
struct ABend_ThrownProj_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_ThrownProj.Bend_ThrownProj_C.ExecuteUbergraph_Bend_ThrownProj
struct ABend_ThrownProj_C_ExecuteUbergraph_Bend_ThrownProj_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

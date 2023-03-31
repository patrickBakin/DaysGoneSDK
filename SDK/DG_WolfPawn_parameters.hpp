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

// Function WolfPawn.WolfPawn_C.ModifyDamage
struct AWolfPawn_C_ModifyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WolfPawn.WolfPawn_C.UserConstructionScript
struct AWolfPawn_C_UserConstructionScript_Params
{
};

// Function WolfPawn.WolfPawn_C.ReceiveBeginPlay
struct AWolfPawn_C_ReceiveBeginPlay_Params
{
};

// Function WolfPawn.WolfPawn_C.ExecuteUbergraph_WolfPawn
struct AWolfPawn_C_ExecuteUbergraph_WolfPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

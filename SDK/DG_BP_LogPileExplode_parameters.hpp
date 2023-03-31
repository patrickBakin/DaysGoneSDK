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

// Function BP_LogPileExplode.BP_LogPileExplode_C.UserConstructionScript
struct ABP_LogPileExplode_C_UserConstructionScript_Params
{
};

// Function BP_LogPileExplode.BP_LogPileExplode_C.ReceiveBeginPlay
struct ABP_LogPileExplode_C_ReceiveBeginPlay_Params
{
};

// Function BP_LogPileExplode.BP_LogPileExplode_C.ReceivePostSaveGameLoaded
struct ABP_LogPileExplode_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LogPileExplode.BP_LogPileExplode_C.ReceiveAnyDamage
struct ABP_LogPileExplode_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LogPileExplode.BP_LogPileExplode_C.ExecuteUbergraph_BP_LogPileExplode
struct ABP_LogPileExplode_C_ExecuteUbergraph_BP_LogPileExplode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LogPileExplode.BP_LogPileExplode_C.DestructibleExploded__DelegateSignature
struct ABP_LogPileExplode_C_DestructibleExploded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

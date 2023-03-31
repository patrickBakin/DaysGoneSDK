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

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.SetNavLinksEnabled
struct ABP_AmbushZoneBarricade_MASTER_C_SetNavLinksEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.UserConstructionScript
struct ABP_AmbushZoneBarricade_MASTER_C_UserConstructionScript_Params
{
};

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ReceiveAnyDamage
struct ABP_AmbushZoneBarricade_MASTER_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ReceiveBeginPlay
struct ABP_AmbushZoneBarricade_MASTER_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_392_BeginOverlapSig__DelegateSignature
struct ABP_AmbushZoneBarricade_MASTER_C_BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_392_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ManualExplosion
struct ABP_AmbushZoneBarricade_MASTER_C_ManualExplosion_Params
{
};

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ManualDisableBarricade
struct ABP_AmbushZoneBarricade_MASTER_C_ManualDisableBarricade_Params
{
};

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ExecuteUbergraph_BP_AmbushZoneBarricade_MASTER
struct ABP_AmbushZoneBarricade_MASTER_C_ExecuteUbergraph_BP_AmbushZoneBarricade_MASTER_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.DestructibleExploded__DelegateSignature
struct ABP_AmbushZoneBarricade_MASTER_C_DestructibleExploded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

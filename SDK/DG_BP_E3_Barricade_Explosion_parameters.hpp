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

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.UserConstructionScript
struct ABP_E3_Barricade_Explosion_C_UserConstructionScript_Params
{
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ReceiveBeginPlay
struct ABP_E3_Barricade_Explosion_C_ReceiveBeginPlay_Params
{
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_609_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_E3_Barricade_Explosion_C_BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_609_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_98_ComponentEndOverlapSignature__DelegateSignature
struct ABP_E3_Barricade_Explosion_C_BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_98_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.OnBeginOverlap_Event_1
struct ABP_E3_Barricade_Explosion_C_OnBeginOverlap_Event_1_Params
{
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ReceiveAnyDamage
struct ABP_E3_Barricade_Explosion_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_363_EndOverlapSig__DelegateSignature
struct ABP_E3_Barricade_Explosion_C_BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_363_EndOverlapSig__DelegateSignature_Params
{
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_373_BeginOverlapSig__DelegateSignature
struct ABP_E3_Barricade_Explosion_C_BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_373_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ExecuteUbergraph_BP_E3_Barricade_Explosion
struct ABP_E3_Barricade_Explosion_C_ExecuteUbergraph_BP_E3_Barricade_Explosion_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.DestructibleExploded__DelegateSignature
struct ABP_E3_Barricade_Explosion_C_DestructibleExploded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

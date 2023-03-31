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

// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.UserConstructionScript
struct ABP_BendInventoryPickup_Bolt_Explosive_C_UserConstructionScript_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_498_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BendInventoryPickup_Bolt_Explosive_C_BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_498_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ReceiveAnyDamage
struct ABP_BendInventoryPickup_Bolt_Explosive_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ExplodeDelayed
struct ABP_BendInventoryPickup_Bolt_Explosive_C_ExplodeDelayed_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__BlastRadius_K2Node_ComponentBoundEvent_220_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BendInventoryPickup_Bolt_Explosive_C_BndEvt__BlastRadius_K2Node_ComponentBoundEvent_220_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__BlastRadius_K2Node_ComponentBoundEvent_229_ComponentEndOverlapSignature__DelegateSignature
struct ABP_BendInventoryPickup_Bolt_Explosive_C_BndEvt__BlastRadius_K2Node_ComponentBoundEvent_229_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Explosive
struct ABP_BendInventoryPickup_Bolt_Explosive_C_ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Explosive_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

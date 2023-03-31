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

// Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.UserConstructionScript
struct ABP_BendInventoryPickup_PhysicsBase_C_UserConstructionScript_Params
{
};

// Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature
struct ABP_BendInventoryPickup_PhysicsBase_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature
struct ABP_BendInventoryPickup_PhysicsBase_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.ExecuteUbergraph_BP_BendInventoryPickup_PhysicsBase
struct ABP_BendInventoryPickup_PhysicsBase_C_ExecuteUbergraph_BP_BendInventoryPickup_PhysicsBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

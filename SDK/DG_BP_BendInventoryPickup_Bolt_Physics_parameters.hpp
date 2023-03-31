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

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SetDidArrowBreak
struct ABP_BendInventoryPickup_Bolt_Physics_C_SetDidArrowBreak_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.UserConstructionScript
struct ABP_BendInventoryPickup_Bolt_Physics_C_UserConstructionScript_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature
struct ABP_BendInventoryPickup_Bolt_Physics_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.AttachToPawn
struct ABP_BendInventoryPickup_Bolt_Physics_C_AttachToPawn_Params
{
	class AActor*                                      ActorToAttachTo;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ArrowMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.actor Destroyed
struct ABP_BendInventoryPickup_Bolt_Physics_C_actor_Destroyed_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.PickupEnable
struct ABP_BendInventoryPickup_Bolt_Physics_C_PickupEnable_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SetOwningPawn
struct ABP_BendInventoryPickup_Bolt_Physics_C_SetOwningPawn_Params
{
	class ABendPawn*                                   OwningPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.TurnOffPhysics
struct ABP_BendInventoryPickup_Bolt_Physics_C_TurnOffPhysics_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.HitHardSurface
struct ABP_BendInventoryPickup_Bolt_Physics_C_HitHardSurface_Params
{
	class UMaterialInterface*                          ArrowMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.AttachToRandom
struct ABP_BendInventoryPickup_Bolt_Physics_C_AttachToRandom_Params
{
	class UMaterialInterface*                          ArrowMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.InitPickupInteract
struct ABP_BendInventoryPickup_Bolt_Physics_C_InitPickupInteract_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SpawnBrokenArrow
struct ABP_BendInventoryPickup_Bolt_Physics_C_SpawnBrokenArrow_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.OnReturnedToPool
struct ABP_BendInventoryPickup_Bolt_Physics_C_OnReturnedToPool_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.ReceivePreSaveGameLoaded
struct ABP_BendInventoryPickup_Bolt_Physics_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.BndEvt__DestroySphere_K2Node_ComponentBoundEvent_593_EndOverlapSig__DelegateSignature
struct ABP_BendInventoryPickup_Bolt_Physics_C_BndEvt__DestroySphere_K2Node_ComponentBoundEvent_593_EndOverlapSig__DelegateSignature_Params
{
};

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Physics
struct ABP_BendInventoryPickup_Bolt_Physics_C_ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Physics_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

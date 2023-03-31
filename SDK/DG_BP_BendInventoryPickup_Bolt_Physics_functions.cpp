// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SetDidArrowBreak
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Physics_C::SetDidArrowBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SetDidArrowBreak");

	ABP_BendInventoryPickup_Bolt_Physics_C_SetDidArrowBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Physics_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.UserConstructionScript");

	ABP_BendInventoryPickup_Bolt_Physics_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature");

	ABP_BendInventoryPickup_Bolt_Physics_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.AttachToPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToAttachTo                (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ArrowMaterial                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::AttachToPawn(class AActor* ActorToAttachTo, class UMaterialInterface* ArrowMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.AttachToPawn");

	ABP_BendInventoryPickup_Bolt_Physics_C_AttachToPawn_Params params;
	params.ActorToAttachTo = ActorToAttachTo;
	params.ArrowMaterial = ArrowMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.actor Destroyed
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Physics_C::actor_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.actor Destroyed");

	ABP_BendInventoryPickup_Bolt_Physics_C_actor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.PickupEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActualDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::PickupEnable(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.PickupEnable");

	ABP_BendInventoryPickup_Bolt_Physics_C_PickupEnable_Params params;
	params.ActualDamage = ActualDamage;
	params.Killer = Killer;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SetOwningPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               OwningPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::SetOwningPawn(class ABendPawn* OwningPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SetOwningPawn");

	ABP_BendInventoryPickup_Bolt_Physics_C_SetOwningPawn_Params params;
	params.OwningPawn = OwningPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.TurnOffPhysics
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Physics_C::TurnOffPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.TurnOffPhysics");

	ABP_BendInventoryPickup_Bolt_Physics_C_TurnOffPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.HitHardSurface
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      ArrowMaterial                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::HitHardSurface(class UMaterialInterface* ArrowMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.HitHardSurface");

	ABP_BendInventoryPickup_Bolt_Physics_C_HitHardSurface_Params params;
	params.ArrowMaterial = ArrowMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.AttachToRandom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      ArrowMaterial                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::AttachToRandom(class UMaterialInterface* ArrowMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.AttachToRandom");

	ABP_BendInventoryPickup_Bolt_Physics_C_AttachToRandom_Params params;
	params.ArrowMaterial = ArrowMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.InitPickupInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Physics_C::InitPickupInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.InitPickupInteract");

	ABP_BendInventoryPickup_Bolt_Physics_C_InitPickupInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SpawnBrokenArrow
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Physics_C::SpawnBrokenArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.SpawnBrokenArrow");

	ABP_BendInventoryPickup_Bolt_Physics_C_SpawnBrokenArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.OnReturnedToPool
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::OnReturnedToPool(class ABendAIController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.OnReturnedToPool");

	ABP_BendInventoryPickup_Bolt_Physics_C_OnReturnedToPool_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.ReceivePreSaveGameLoaded");

	ABP_BendInventoryPickup_Bolt_Physics_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.BndEvt__DestroySphere_K2Node_ComponentBoundEvent_593_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Physics_C::BndEvt__DestroySphere_K2Node_ComponentBoundEvent_593_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.BndEvt__DestroySphere_K2Node_ComponentBoundEvent_593_EndOverlapSig__DelegateSignature");

	ABP_BendInventoryPickup_Bolt_Physics_C_BndEvt__DestroySphere_K2Node_ComponentBoundEvent_593_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Physics
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Physics_C::ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Physics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C.ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Physics");

	ABP_BendInventoryPickup_Bolt_Physics_C_ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Physics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

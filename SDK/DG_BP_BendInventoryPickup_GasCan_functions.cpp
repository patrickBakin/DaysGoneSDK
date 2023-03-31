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

// Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_GasCan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.UserConstructionScript");

	ABP_BendInventoryPickup_GasCan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.LowFuelCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_GasCan_C::LowFuelCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.LowFuelCheck");

	ABP_BendInventoryPickup_GasCan_C_LowFuelCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_772_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_BendInventoryPickup_GasCan_C::BndEvt__MeshComp_K2Node_ComponentBoundEvent_772_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_772_ComponentHitSignature__DelegateSignature");

	ABP_BendInventoryPickup_GasCan_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_772_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.InitPickupInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_GasCan_C::InitPickupInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.InitPickupInteract");

	ABP_BendInventoryPickup_GasCan_C_InitPickupInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.Tutorials
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_GasCan_C::Tutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.Tutorials");

	ABP_BendInventoryPickup_GasCan_C_Tutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.ExecuteUbergraph_BP_BendInventoryPickup_GasCan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_GasCan_C::ExecuteUbergraph_BP_BendInventoryPickup_GasCan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C.ExecuteUbergraph_BP_BendInventoryPickup_GasCan");

	ABP_BendInventoryPickup_GasCan_C_ExecuteUbergraph_BP_BendInventoryPickup_GasCan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

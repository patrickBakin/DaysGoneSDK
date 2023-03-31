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

// Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_PhysicsBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.UserConstructionScript");

	ABP_BendInventoryPickup_PhysicsBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_PhysicsBase_C::BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature");

	ABP_BendInventoryPickup_PhysicsBase_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_BendInventoryPickup_PhysicsBase_C::BndEvt__MeshComp_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.BndEvt__MeshComp_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature");

	ABP_BendInventoryPickup_PhysicsBase_C_BndEvt__MeshComp_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.ExecuteUbergraph_BP_BendInventoryPickup_PhysicsBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_PhysicsBase_C::ExecuteUbergraph_BP_BendInventoryPickup_PhysicsBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C.ExecuteUbergraph_BP_BendInventoryPickup_PhysicsBase");

	ABP_BendInventoryPickup_PhysicsBase_C_ExecuteUbergraph_BP_BendInventoryPickup_PhysicsBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

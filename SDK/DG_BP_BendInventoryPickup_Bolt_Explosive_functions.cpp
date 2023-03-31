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

// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Explosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.UserConstructionScript");

	ABP_BendInventoryPickup_Bolt_Explosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_498_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_BendInventoryPickup_Bolt_Explosive_C::BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_498_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_498_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BendInventoryPickup_Bolt_Explosive_C_BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_498_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Explosive_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ReceiveAnyDamage");

	ABP_BendInventoryPickup_Bolt_Explosive_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ExplodeDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_BendInventoryPickup_Bolt_Explosive_C::ExplodeDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ExplodeDelayed");

	ABP_BendInventoryPickup_Bolt_Explosive_C_ExplodeDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__BlastRadius_K2Node_ComponentBoundEvent_220_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_BendInventoryPickup_Bolt_Explosive_C::BndEvt__BlastRadius_K2Node_ComponentBoundEvent_220_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__BlastRadius_K2Node_ComponentBoundEvent_220_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BendInventoryPickup_Bolt_Explosive_C_BndEvt__BlastRadius_K2Node_ComponentBoundEvent_220_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__BlastRadius_K2Node_ComponentBoundEvent_229_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Explosive_C::BndEvt__BlastRadius_K2Node_ComponentBoundEvent_229_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.BndEvt__BlastRadius_K2Node_ComponentBoundEvent_229_ComponentEndOverlapSignature__DelegateSignature");

	ABP_BendInventoryPickup_Bolt_Explosive_C_BndEvt__BlastRadius_K2Node_ComponentBoundEvent_229_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Explosive
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendInventoryPickup_Bolt_Explosive_C::ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Explosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendInventoryPickup_Bolt_Explosive.BP_BendInventoryPickup_Bolt_Explosive_C.ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Explosive");

	ABP_BendInventoryPickup_Bolt_Explosive_C_ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Explosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

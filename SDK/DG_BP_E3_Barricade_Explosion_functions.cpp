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

// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_E3_Barricade_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.UserConstructionScript");

	ABP_E3_Barricade_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_E3_Barricade_Explosion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ReceiveBeginPlay");

	ABP_E3_Barricade_Explosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_609_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_E3_Barricade_Explosion_C::BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_609_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_609_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_E3_Barricade_Explosion_C_BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_609_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_98_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_E3_Barricade_Explosion_C::BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_98_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_98_ComponentEndOverlapSignature__DelegateSignature");

	ABP_E3_Barricade_Explosion_C_BndEvt__BendCrowdCriticalTrigger_K2Node_ComponentBoundEvent_98_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.OnBeginOverlap_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_E3_Barricade_Explosion_C::OnBeginOverlap_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.OnBeginOverlap_Event_1");

	ABP_E3_Barricade_Explosion_C_OnBeginOverlap_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_E3_Barricade_Explosion_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ReceiveAnyDamage");

	ABP_E3_Barricade_Explosion_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_363_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_E3_Barricade_Explosion_C::BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_363_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_363_EndOverlapSig__DelegateSignature");

	ABP_E3_Barricade_Explosion_C_BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_363_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_373_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_E3_Barricade_Explosion_C::BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_373_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_373_BeginOverlapSig__DelegateSignature");

	ABP_E3_Barricade_Explosion_C_BndEvt__TickEnableSphere_K2Node_ComponentBoundEvent_373_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ExecuteUbergraph_BP_E3_Barricade_Explosion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_E3_Barricade_Explosion_C::ExecuteUbergraph_BP_E3_Barricade_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.ExecuteUbergraph_BP_E3_Barricade_Explosion");

	ABP_E3_Barricade_Explosion_C_ExecuteUbergraph_BP_E3_Barricade_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.DestructibleExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_E3_Barricade_Explosion_C::DestructibleExploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_E3_Barricade_Explosion.BP_E3_Barricade_Explosion_C.DestructibleExploded__DelegateSignature");

	ABP_E3_Barricade_Explosion_C_DestructibleExploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

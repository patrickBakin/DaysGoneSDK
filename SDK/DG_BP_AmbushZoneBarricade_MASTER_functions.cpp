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

// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.SetNavLinksEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneBarricade_MASTER_C::SetNavLinksEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.SetNavLinksEnabled");

	ABP_AmbushZoneBarricade_MASTER_C_SetNavLinksEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbushZoneBarricade_MASTER_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.UserConstructionScript");

	ABP_AmbushZoneBarricade_MASTER_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneBarricade_MASTER_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ReceiveAnyDamage");

	ABP_AmbushZoneBarricade_MASTER_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbushZoneBarricade_MASTER_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ReceiveBeginPlay");

	ABP_AmbushZoneBarricade_MASTER_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_392_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_AmbushZoneBarricade_MASTER_C::BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_392_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_392_BeginOverlapSig__DelegateSignature");

	ABP_AmbushZoneBarricade_MASTER_C_BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_392_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ManualExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushZoneBarricade_MASTER_C::ManualExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ManualExplosion");

	ABP_AmbushZoneBarricade_MASTER_C_ManualExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ManualDisableBarricade
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushZoneBarricade_MASTER_C::ManualDisableBarricade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ManualDisableBarricade");

	ABP_AmbushZoneBarricade_MASTER_C_ManualDisableBarricade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ExecuteUbergraph_BP_AmbushZoneBarricade_MASTER
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneBarricade_MASTER_C::ExecuteUbergraph_BP_AmbushZoneBarricade_MASTER(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.ExecuteUbergraph_BP_AmbushZoneBarricade_MASTER");

	ABP_AmbushZoneBarricade_MASTER_C_ExecuteUbergraph_BP_AmbushZoneBarricade_MASTER_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.DestructibleExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AmbushZoneBarricade_MASTER_C::DestructibleExploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C.DestructibleExploded__DelegateSignature");

	ABP_AmbushZoneBarricade_MASTER_C_DestructibleExploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

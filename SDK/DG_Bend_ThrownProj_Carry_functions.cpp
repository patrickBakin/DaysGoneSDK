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

// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_ThrownProj_Carry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.UserConstructionScript");

	ABend_ThrownProj_Carry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ForceExplodeManual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_Carry_C::ForceExplodeManual(class AController** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ForceExplodeManual");

	ABend_ThrownProj_Carry_C_ForceExplodeManual_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.CreateFireDelayed
// (BlueprintCallable, BlueprintEvent)

void ABend_ThrownProj_Carry_C::CreateFireDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.CreateFireDelayed");

	ABend_ThrownProj_Carry_C_CreateFireDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_Carry_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ReceivePreSaveGameLoaded");

	ABend_ThrownProj_Carry_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.AddExplosionForce
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_Carry_C::AddExplosionForce(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.AddExplosionForce");

	ABend_ThrownProj_Carry_C_AddExplosionForce_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ExecuteUbergraph_Bend_ThrownProj_Carry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_ThrownProj_Carry_C::ExecuteUbergraph_Bend_ThrownProj_Carry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.ExecuteUbergraph_Bend_ThrownProj_Carry");

	ABend_ThrownProj_Carry_C_ExecuteUbergraph_Bend_ThrownProj_Carry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.CarryWeaponExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABend_ThrownProj_Carry_C::CarryWeaponExploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_ThrownProj_Carry.Bend_ThrownProj_Carry_C.CarryWeaponExploded__DelegateSignature");

	ABend_ThrownProj_Carry_C_CarryWeaponExploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

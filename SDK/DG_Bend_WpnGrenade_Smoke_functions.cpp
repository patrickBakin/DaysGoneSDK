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

// Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.CheckForLighterSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSpawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGrenade_Smoke_C::CheckForLighterSpawn(bool* ShouldSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.CheckForLighterSpawn");

	ABend_WpnGrenade_Smoke_C_CheckForLighterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldSpawn != nullptr)
		*ShouldSpawn = params.ShouldSpawn;
}


// Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnGrenade_Smoke_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.UserConstructionScript");

	ABend_WpnGrenade_Smoke_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.OnDrawFinished
// (Event, Public, BlueprintEvent)

void ABend_WpnGrenade_Smoke_C::OnDrawFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.OnDrawFinished");

	ABend_WpnGrenade_Smoke_C_OnDrawFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABend_WpnGrenade_Smoke_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.ReceiveDestroyed");

	ABend_WpnGrenade_Smoke_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.OnFired
// (Event, Public, BlueprintEvent)

void ABend_WpnGrenade_Smoke_C::OnFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.OnFired");

	ABend_WpnGrenade_Smoke_C_OnFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.OnHolsterFinished
// (Event, Public, BlueprintEvent)

void ABend_WpnGrenade_Smoke_C::OnHolsterFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.OnHolsterFinished");

	ABend_WpnGrenade_Smoke_C_OnHolsterFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.OnWeaponPinRemoved
// (Event, Public, BlueprintEvent)

void ABend_WpnGrenade_Smoke_C::OnWeaponPinRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.OnWeaponPinRemoved");

	ABend_WpnGrenade_Smoke_C_OnWeaponPinRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.ExecuteUbergraph_Bend_WpnGrenade_Smoke
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGrenade_Smoke_C::ExecuteUbergraph_Bend_WpnGrenade_Smoke(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Smoke.Bend_WpnGrenade_Smoke_C.ExecuteUbergraph_Bend_WpnGrenade_Smoke");

	ABend_WpnGrenade_Smoke_C_ExecuteUbergraph_Bend_WpnGrenade_Smoke_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

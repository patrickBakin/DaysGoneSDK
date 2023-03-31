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

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.IsFiring
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile** Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFiring                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_WpnAirTaser_C::IsFiring(class ABendWeapon_Projectile** Gun, bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.IsFiring");

	ABend_WpnAirTaser_C_IsFiring_Params params;
	params.Gun = Gun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFiring != nullptr)
		*IsFiring = params.IsFiring;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnAirTaser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.UserConstructionScript");

	ABend_WpnAirTaser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnClipLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           MaterialIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnAirTaser_C::OnClipLoaded(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnClipLoaded");

	ABend_WpnAirTaser_C_OnClipLoaded_Params params;
	params.MaterialIndex = MaterialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnDrawStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnDrawStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnDrawStarted");

	ABend_WpnAirTaser_C_OnDrawStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnHolsterFinished
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnHolsterFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnHolsterFinished");

	ABend_WpnAirTaser_C_OnHolsterFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnReloadFinished
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnReloadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnReloadFinished");

	ABend_WpnAirTaser_C_OnReloadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnShellLoaded
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnShellLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnShellLoaded");

	ABend_WpnAirTaser_C_OnShellLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnThrowWeapon
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnThrowWeapon");

	ABend_WpnAirTaser_C_OnThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnOutOfAmmo
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnOutOfAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnOutOfAmmo");

	ABend_WpnAirTaser_C_OnOutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnFireOnEmpty
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnFireOnEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnFireOnEmpty");

	ABend_WpnAirTaser_C_OnFireOnEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnReloadStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnReloadStarted");

	ABend_WpnAirTaser_C_OnReloadStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnFired
// (Event, Public, BlueprintEvent)

void ABend_WpnAirTaser_C::OnFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnFired");

	ABend_WpnAirTaser_C_OnFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.ExecuteUbergraph_Bend_WpnAirTaser
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnAirTaser_C::ExecuteUbergraph_Bend_WpnAirTaser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.ExecuteUbergraph_Bend_WpnAirTaser");

	ABend_WpnAirTaser_C_ExecuteUbergraph_Bend_WpnAirTaser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.IsFiring
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile*  Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFiring                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Pistol_Base_C::IsFiring(class ABendWeapon_Projectile* Gun, bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.IsFiring");

	ABend_Wpn_Pistol_Base_C_IsFiring_Params params;
	params.Gun = Gun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFiring != nullptr)
		*IsFiring = params.IsFiring;
}


// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Pistol_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.UserConstructionScript");

	ABend_Wpn_Pistol_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnReloadStarted
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Pistol_Base_C::OnReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnReloadStarted");

	ABend_Wpn_Pistol_Base_C_OnReloadStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnFired
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Pistol_Base_C::OnFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnFired");

	ABend_Wpn_Pistol_Base_C_OnFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnOutOfAmmo
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Pistol_Base_C::OnOutOfAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnOutOfAmmo");

	ABend_Wpn_Pistol_Base_C_OnOutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnFireOnEmpty
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Pistol_Base_C::OnFireOnEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnFireOnEmpty");

	ABend_Wpn_Pistol_Base_C_OnFireOnEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnHolsterFinished
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Pistol_Base_C::OnHolsterFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnHolsterFinished");

	ABend_Wpn_Pistol_Base_C_OnHolsterFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnDrawStarted
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Pistol_Base_C::OnDrawStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnDrawStarted");

	ABend_Wpn_Pistol_Base_C_OnDrawStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.ExecuteUbergraph_Bend_Wpn_Pistol_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Pistol_Base_C::ExecuteUbergraph_Bend_Wpn_Pistol_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.ExecuteUbergraph_Bend_Wpn_Pistol_Base");

	ABend_Wpn_Pistol_Base_C_ExecuteUbergraph_Bend_Wpn_Pistol_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

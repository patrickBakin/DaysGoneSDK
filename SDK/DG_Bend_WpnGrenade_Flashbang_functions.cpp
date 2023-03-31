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

// Function Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnGrenade_Flashbang_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C.UserConstructionScript");

	ABend_WpnGrenade_Flashbang_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C.OnThrowWeapon
// (Event, Public, BlueprintEvent)

void ABend_WpnGrenade_Flashbang_C::OnThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C.OnThrowWeapon");

	ABend_WpnGrenade_Flashbang_C_OnThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C.OnWeaponPinRemoved
// (Event, Public, BlueprintEvent)

void ABend_WpnGrenade_Flashbang_C::OnWeaponPinRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C.OnWeaponPinRemoved");

	ABend_WpnGrenade_Flashbang_C_OnWeaponPinRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C.ExecuteUbergraph_Bend_WpnGrenade_Flashbang
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnGrenade_Flashbang_C::ExecuteUbergraph_Bend_WpnGrenade_Flashbang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C.ExecuteUbergraph_Bend_WpnGrenade_Flashbang");

	ABend_WpnGrenade_Flashbang_C_ExecuteUbergraph_Bend_WpnGrenade_Flashbang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

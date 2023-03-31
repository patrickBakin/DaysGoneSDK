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

// Function Bend_WpnFlare.Bend_WpnFlare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnFlare.Bend_WpnFlare_C.UserConstructionScript");

	ABend_WpnFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnFlare.Bend_WpnFlare_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_WpnFlare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnFlare.Bend_WpnFlare_C.ReceiveBeginPlay");

	ABend_WpnFlare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnFlare.Bend_WpnFlare_C.OnThrowWeapon
// (Event, Public, BlueprintEvent)

void ABend_WpnFlare_C::OnThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnFlare.Bend_WpnFlare_C.OnThrowWeapon");

	ABend_WpnFlare_C_OnThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnFlare.Bend_WpnFlare_C.ExecuteUbergraph_Bend_WpnFlare
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnFlare_C::ExecuteUbergraph_Bend_WpnFlare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnFlare.Bend_WpnFlare_C.ExecuteUbergraph_Bend_WpnFlare");

	ABend_WpnFlare_C_ExecuteUbergraph_Bend_WpnFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Bend_WpnM4a1.Bend_WpnM4a1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnM4a1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnM4a1.Bend_WpnM4a1_C.UserConstructionScript");

	ABend_WpnM4a1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnM4a1.Bend_WpnM4a1_C.OnOutOfAmmo
// (Event, Public, BlueprintEvent)

void ABend_WpnM4a1_C::OnOutOfAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnM4a1.Bend_WpnM4a1_C.OnOutOfAmmo");

	ABend_WpnM4a1_C_OnOutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnM4a1.Bend_WpnM4a1_C.OnFired
// (Event, Public, BlueprintEvent)

void ABend_WpnM4a1_C::OnFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnM4a1.Bend_WpnM4a1_C.OnFired");

	ABend_WpnM4a1_C_OnFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnM4a1.Bend_WpnM4a1_C.ExecuteUbergraph_Bend_WpnM4a1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnM4a1_C::ExecuteUbergraph_Bend_WpnM4a1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnM4a1.Bend_WpnM4a1_C.ExecuteUbergraph_Bend_WpnM4a1");

	ABend_WpnM4a1_C_ExecuteUbergraph_Bend_WpnM4a1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

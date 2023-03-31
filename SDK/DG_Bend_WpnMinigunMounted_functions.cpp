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

// Function Bend_WpnMinigunMounted.Bend_WpnMinigunMounted_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnMinigunMounted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMinigunMounted.Bend_WpnMinigunMounted_C.UserConstructionScript");

	ABend_WpnMinigunMounted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMinigunMounted.Bend_WpnMinigunMounted_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABend_WpnMinigunMounted_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMinigunMounted.Bend_WpnMinigunMounted_C.ReceiveBeginPlay");

	ABend_WpnMinigunMounted_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMinigunMounted.Bend_WpnMinigunMounted_C.OnFired
// (Event, Public, BlueprintEvent)

void ABend_WpnMinigunMounted_C::OnFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMinigunMounted.Bend_WpnMinigunMounted_C.OnFired");

	ABend_WpnMinigunMounted_C_OnFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMinigunMounted.Bend_WpnMinigunMounted_C.ExecuteUbergraph_Bend_WpnMinigunMounted
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMinigunMounted_C::ExecuteUbergraph_Bend_WpnMinigunMounted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMinigunMounted.Bend_WpnMinigunMounted_C.ExecuteUbergraph_Bend_WpnMinigunMounted");

	ABend_WpnMinigunMounted_C_ExecuteUbergraph_Bend_WpnMinigunMounted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

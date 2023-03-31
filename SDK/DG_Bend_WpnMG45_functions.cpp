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

// Function Bend_WpnMG45.Bend_WpnMG45_C.SetBulletsVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnMG45_C::SetBulletsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMG45.Bend_WpnMG45_C.SetBulletsVisibility");

	ABend_WpnMG45_C_SetBulletsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMG45.Bend_WpnMG45_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnMG45_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMG45.Bend_WpnMG45_C.UserConstructionScript");

	ABend_WpnMG45_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

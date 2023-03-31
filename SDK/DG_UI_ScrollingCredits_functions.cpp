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

// Function UI_ScrollingCredits.UI_ScrollingCredits_C.SetupFinalSection
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ScrollingCredits_C::SetupFinalSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollingCredits.UI_ScrollingCredits_C.SetupFinalSection");

	UUI_ScrollingCredits_C_SetupFinalSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollingCredits.UI_ScrollingCredits_C.SwitchCredits
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ScrollingCredits_C::SwitchCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollingCredits.UI_ScrollingCredits_C.SwitchCredits");

	UUI_ScrollingCredits_C_SwitchCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollingCredits.UI_ScrollingCredits_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScrollingCredits_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollingCredits.UI_ScrollingCredits_C.Tick");

	UUI_ScrollingCredits_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollingCredits.UI_ScrollingCredits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ScrollingCredits_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollingCredits.UI_ScrollingCredits_C.Construct");

	UUI_ScrollingCredits_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollingCredits.UI_ScrollingCredits_C.ExitCredits
// (BlueprintCallable, BlueprintEvent)

void UUI_ScrollingCredits_C::ExitCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollingCredits.UI_ScrollingCredits_C.ExitCredits");

	UUI_ScrollingCredits_C_ExitCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollingCredits.UI_ScrollingCredits_C.ExecuteUbergraph_UI_ScrollingCredits
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScrollingCredits_C::ExecuteUbergraph_UI_ScrollingCredits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollingCredits.UI_ScrollingCredits_C.ExecuteUbergraph_UI_ScrollingCredits");

	UUI_ScrollingCredits_C_ExecuteUbergraph_UI_ScrollingCredits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollingCredits.UI_ScrollingCredits_C.CreditsEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ScrollingCredits_C::CreditsEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollingCredits.UI_ScrollingCredits_C.CreditsEnd__DelegateSignature");

	UUI_ScrollingCredits_C_CreditsEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_MenuCredits.UI_MenuCredits_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuCredits_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.Tick");

	UUI_MenuCredits_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuCredits.UI_MenuCredits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MenuCredits_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.Construct");

	UUI_MenuCredits_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuCredits.UI_MenuCredits_C.StartCredits
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuCredits_C::StartCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.StartCredits");

	UUI_MenuCredits_C_StartCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuCredits.UI_MenuCredits_C.CloseCredits
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuCredits_C::CloseCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.CloseCredits");

	UUI_MenuCredits_C_CloseCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuCredits.UI_MenuCredits_C.BndEvt__ExitInteract_K2Node_ComponentBoundEvent_1208_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MenuCredits_C::BndEvt__ExitInteract_K2Node_ComponentBoundEvent_1208_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.BndEvt__ExitInteract_K2Node_ComponentBoundEvent_1208_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MenuCredits_C_BndEvt__ExitInteract_K2Node_ComponentBoundEvent_1208_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuCredits.UI_MenuCredits_C.BndEvt__FastForwardInteract_K2Node_ComponentBoundEvent_1223_OnMenuInteractPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MenuCredits_C::BndEvt__FastForwardInteract_K2Node_ComponentBoundEvent_1223_OnMenuInteractPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.BndEvt__FastForwardInteract_K2Node_ComponentBoundEvent_1223_OnMenuInteractPressedEvent__DelegateSignature");

	UUI_MenuCredits_C_BndEvt__FastForwardInteract_K2Node_ComponentBoundEvent_1223_OnMenuInteractPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuCredits.UI_MenuCredits_C.BndEvt__FastForwardInteract_K2Node_ComponentBoundEvent_1234_OnMenuInteractReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MenuCredits_C::BndEvt__FastForwardInteract_K2Node_ComponentBoundEvent_1234_OnMenuInteractReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.BndEvt__FastForwardInteract_K2Node_ComponentBoundEvent_1234_OnMenuInteractReleasedEvent__DelegateSignature");

	UUI_MenuCredits_C_BndEvt__FastForwardInteract_K2Node_ComponentBoundEvent_1234_OnMenuInteractReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuCredits.UI_MenuCredits_C.ExecuteUbergraph_UI_MenuCredits
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuCredits_C::ExecuteUbergraph_UI_MenuCredits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.ExecuteUbergraph_UI_MenuCredits");

	UUI_MenuCredits_C_ExecuteUbergraph_UI_MenuCredits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuCredits.UI_MenuCredits_C.CreditsEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MenuCredits_C::CreditsEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuCredits.UI_MenuCredits_C.CreditsEnd__DelegateSignature");

	UUI_MenuCredits_C_CreditsEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

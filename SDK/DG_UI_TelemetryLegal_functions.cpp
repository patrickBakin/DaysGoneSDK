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

// Function UI_TelemetryLegal.UI_TelemetryLegal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TelemetryLegal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.Construct");

	UUI_TelemetryLegal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TelemetryLegal_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.Tick");

	UUI_TelemetryLegal_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.ScrollDown
// (BlueprintCallable, BlueprintEvent)

void UUI_TelemetryLegal_C::ScrollDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.ScrollDown");

	UUI_TelemetryLegal_C_ScrollDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.ScrollUp
// (BlueprintCallable, BlueprintEvent)

void UUI_TelemetryLegal_C::ScrollUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.ScrollUp");

	UUI_TelemetryLegal_C_ScrollUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1836_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_TelemetryLegal_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1836_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1836_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_TelemetryLegal_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1836_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1860_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_TelemetryLegal_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1860_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1860_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_TelemetryLegal_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1860_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.StopScrolling
// (BlueprintCallable, BlueprintEvent)

void UUI_TelemetryLegal_C::StopScrolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.StopScrolling");

	UUI_TelemetryLegal_C_StopScrolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.ExecuteUbergraph_UI_TelemetryLegal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TelemetryLegal_C::ExecuteUbergraph_UI_TelemetryLegal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.ExecuteUbergraph_UI_TelemetryLegal");

	UUI_TelemetryLegal_C_ExecuteUbergraph_UI_TelemetryLegal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.DenyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TelemetryLegal_C::DenyClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.DenyClicked__DelegateSignature");

	UUI_TelemetryLegal_C_DenyClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TelemetryLegal.UI_TelemetryLegal_C.AcceptClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TelemetryLegal_C::AcceptClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TelemetryLegal.UI_TelemetryLegal_C.AcceptClicked__DelegateSignature");

	UUI_TelemetryLegal_C_AcceptClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

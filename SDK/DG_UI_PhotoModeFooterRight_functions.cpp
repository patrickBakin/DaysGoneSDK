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

// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.UpdateCaptureHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CaptureActionName              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFooterRight_C::UpdateCaptureHold(float DeltaTime, const struct FName& CaptureActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.UpdateCaptureHold");

	UUI_PhotoModeFooterRight_C_UpdateCaptureHold_Params params;
	params.DeltaTime = DeltaTime;
	params.CaptureActionName = CaptureActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFooterRight_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.Tick");

	UUI_PhotoModeFooterRight_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__HelpInteract_K2Node_ComponentBoundEvent_2017_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeFooterRight_C::BndEvt__HelpInteract_K2Node_ComponentBoundEvent_2017_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__HelpInteract_K2Node_ComponentBoundEvent_2017_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeFooterRight_C_BndEvt__HelpInteract_K2Node_ComponentBoundEvent_2017_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__AdvancedInteract_K2Node_ComponentBoundEvent_2149_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeFooterRight_C::BndEvt__AdvancedInteract_K2Node_ComponentBoundEvent_2149_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__AdvancedInteract_K2Node_ComponentBoundEvent_2149_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeFooterRight_C_BndEvt__AdvancedInteract_K2Node_ComponentBoundEvent_2149_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__HideUIInteract_K2Node_ComponentBoundEvent_2164_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeFooterRight_C::BndEvt__HideUIInteract_K2Node_ComponentBoundEvent_2164_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__HideUIInteract_K2Node_ComponentBoundEvent_2164_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeFooterRight_C_BndEvt__HideUIInteract_K2Node_ComponentBoundEvent_2164_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__ExitInteract_K2Node_ComponentBoundEvent_2180_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeFooterRight_C::BndEvt__ExitInteract_K2Node_ComponentBoundEvent_2180_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__ExitInteract_K2Node_ComponentBoundEvent_2180_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeFooterRight_C_BndEvt__ExitInteract_K2Node_ComponentBoundEvent_2180_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__CaptureInteract_K2Node_ComponentBoundEvent_1908_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeFooterRight_C::BndEvt__CaptureInteract_K2Node_ComponentBoundEvent_1908_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.BndEvt__CaptureInteract_K2Node_ComponentBoundEvent_1908_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeFooterRight_C_BndEvt__CaptureInteract_K2Node_ComponentBoundEvent_1908_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.ExecuteUbergraph_UI_PhotoModeFooterRight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFooterRight_C::ExecuteUbergraph_UI_PhotoModeFooterRight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.ExecuteUbergraph_UI_PhotoModeFooterRight");

	UUI_PhotoModeFooterRight_C_ExecuteUbergraph_UI_PhotoModeFooterRight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnPhotoCaptureClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoModeFooterRight_C::OnPhotoCaptureClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnPhotoCaptureClicked__DelegateSignature");

	UUI_PhotoModeFooterRight_C_OnPhotoCaptureClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnExitClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoModeFooterRight_C::OnExitClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnExitClicked__DelegateSignature");

	UUI_PhotoModeFooterRight_C_OnExitClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnHideUIClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoModeFooterRight_C::OnHideUIClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnHideUIClicked__DelegateSignature");

	UUI_PhotoModeFooterRight_C_OnHideUIClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnAdvancedClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoModeFooterRight_C::OnAdvancedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnAdvancedClicked__DelegateSignature");

	UUI_PhotoModeFooterRight_C_OnAdvancedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnHelpClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoModeFooterRight_C::OnHelpClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterRight.UI_PhotoModeFooterRight_C.OnHelpClicked__DelegateSignature");

	UUI_PhotoModeFooterRight_C_OnHelpClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

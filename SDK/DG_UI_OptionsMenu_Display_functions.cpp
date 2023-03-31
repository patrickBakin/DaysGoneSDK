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

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.LoadSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenu_Display_C::LoadSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.LoadSettings");

	UUI_OptionsMenu_Display_C_LoadSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.SetSelectedEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu_Display_C::SetSelectedEntry(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.SetSelectedEntry");

	UUI_OptionsMenu_Display_C_SetSelectedEntry_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateFPS
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenu_Display_C::UpdateFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateFPS");

	UUI_OptionsMenu_Display_C_UpdateFPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BuildResultString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UUI_OptionsMenu_Display_C::BuildResultString(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BuildResultString");

	UUI_OptionsMenu_Display_C_BuildResultString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateResolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MonitorIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu_Display_C::UpdateResolutions(int MonitorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateResolutions");

	UUI_OptionsMenu_Display_C_UpdateResolutions_Params params;
	params.MonitorIndex = MonitorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateRefreshRates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MonitorIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ResolutionIndex                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu_Display_C::UpdateRefreshRates(int MonitorIndex, int ResolutionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateRefreshRates");

	UUI_OptionsMenu_Display_C_UpdateRefreshRates_Params params;
	params.MonitorIndex = MonitorIndex;
	params.ResolutionIndex = ResolutionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenu_Display_C::OnUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnUpPressed");

	UUI_OptionsMenu_Display_C_OnUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenu_Display_C::OnDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnDownPressed");

	UUI_OptionsMenu_Display_C_OnDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnLeftPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenu_Display_C::OnLeftPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnLeftPressed");

	UUI_OptionsMenu_Display_C_OnLeftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnRightPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenu_Display_C::OnRightPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnRightPressed");

	UUI_OptionsMenu_Display_C_OnRightPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OptionsMenu_Display_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.Construct");

	UUI_OptionsMenu_Display_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2570_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_OptionsMenu_Display_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2570_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2570_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_OptionsMenu_Display_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2570_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2572_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_OptionsMenu_Display_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2572_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2572_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_OptionsMenu_Display_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2572_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu_Display_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.RequestClose");

	UUI_OptionsMenu_Display_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenu_Display_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnConfirmPressed");

	UUI_OptionsMenu_Display_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenu_Display_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnCancelPressed");

	UUI_OptionsMenu_Display_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ItemChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)

void UUI_OptionsMenu_Display_C::ItemChanged_Event_1(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ItemChanged_Event_1");

	UUI_OptionsMenu_Display_C_ItemChanged_Event_1_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnHovered_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu_Display_C::OnHovered_Event_1(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnHovered_Event_1");

	UUI_OptionsMenu_Display_C_OnHovered_Event_1_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnMonitorSelectionChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MonitorIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu_Display_C::OnMonitorSelectionChanged_Event_1(int MonitorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnMonitorSelectionChanged_Event_1");

	UUI_OptionsMenu_Display_C_OnMonitorSelectionChanged_Event_1_Params params;
	params.MonitorIndex = MonitorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ItemChanged_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)

void UUI_OptionsMenu_Display_C::ItemChanged_Event_2(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ItemChanged_Event_2");

	UUI_OptionsMenu_Display_C_ItemChanged_Event_2_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ExecuteUbergraph_UI_OptionsMenu_Display
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu_Display_C::ExecuteUbergraph_UI_OptionsMenu_Display(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ExecuteUbergraph_UI_OptionsMenu_Display");

	UUI_OptionsMenu_Display_C_ExecuteUbergraph_UI_OptionsMenu_Display_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm)
// struct FString                 String                         (Parm, ZeroConstructor)

void UUI_OptionsMenu_Display_C::OnClose__DelegateSignature(const struct FEventReply& Result, const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnClose__DelegateSignature");

	UUI_OptionsMenu_Display_C_OnClose__DelegateSignature_Params params;
	params.Result = Result;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

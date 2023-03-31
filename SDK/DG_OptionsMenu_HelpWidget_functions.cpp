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

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.Init
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_HelpWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.Init");

	UOptionsMenu_HelpWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.CreateTextWidgets
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_HelpWidget_C::CreateTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.CreateTextWidgets");

	UOptionsMenu_HelpWidget_C_CreateTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.SetCursorPosition
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_HelpWidget_C::SetCursorPosition(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.SetCursorPosition");

	UOptionsMenu_HelpWidget_C_SetCursorPosition_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.SetSelected
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_HelpWidget_C::SetSelected(int Index, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.SetSelected");

	UOptionsMenu_HelpWidget_C_SetSelected_Params params;
	params.Index = Index;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenu_HelpWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.Construct");

	UOptionsMenu_HelpWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_HelpWidget_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnCancelPressed");

	UOptionsMenu_HelpWidget_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnWidgetClosed
// (Event, Protected, BlueprintEvent)

void UOptionsMenu_HelpWidget_C::OnWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnWidgetClosed");

	UOptionsMenu_HelpWidget_C_OnWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_HelpWidget_C::OnUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnUpPressed");

	UOptionsMenu_HelpWidget_C_OnUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_HelpWidget_C::OnDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnDownPressed");

	UOptionsMenu_HelpWidget_C_OnDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.ExecuteUbergraph_OptionsMenu_HelpWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_HelpWidget_C::ExecuteUbergraph_OptionsMenu_HelpWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.ExecuteUbergraph_OptionsMenu_HelpWidget");

	UOptionsMenu_HelpWidget_C_ExecuteUbergraph_OptionsMenu_HelpWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.GetSelectionColor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void UUI_CategoryMenuEntryWidget_C::GetSelectionColor(bool IsSelected, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.GetSelectionColor");

	UUI_CategoryMenuEntryWidget_C_GetSelectionColor_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CategoryMenuEntryWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.Construct");

	UUI_CategoryMenuEntryWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuEntryWidget_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetSelected");

	UUI_CategoryMenuEntryWidget_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_CategoryMenuEntryWidget_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetText");

	UUI_CategoryMenuEntryWidget_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetDisabled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDisabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuEntryWidget_C::SetDisabled(bool* IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.SetDisabled");

	UUI_CategoryMenuEntryWidget_C_SetDisabled_Params params;
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CategoryMenuEntryWidget_C::BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_CategoryMenuEntryWidget_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CategoryMenuEntryWidget_C::BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_CategoryMenuEntryWidget_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.ExecuteUbergraph_UI_CategoryMenuEntryWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuEntryWidget_C::ExecuteUbergraph_UI_CategoryMenuEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuEntryWidget.UI_CategoryMenuEntryWidget_C.ExecuteUbergraph_UI_CategoryMenuEntryWidget");

	UUI_CategoryMenuEntryWidget_C_ExecuteUbergraph_UI_CategoryMenuEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.GetSelectionColor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateColor             Color                          (Parm, OutParm)

void UUI_CategoryMenuHorzEntryWidget_C::GetSelectionColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.GetSelectionColor");

	UUI_CategoryMenuHorzEntryWidget_C_GetSelectionColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CategoryMenuHorzEntryWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.Construct");

	UUI_CategoryMenuHorzEntryWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuHorzEntryWidget_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetSelected");

	UUI_CategoryMenuHorzEntryWidget_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_CategoryMenuHorzEntryWidget_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetText");

	UUI_CategoryMenuHorzEntryWidget_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetDisabled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDisabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuHorzEntryWidget_C::SetDisabled(bool* IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.SetDisabled");

	UUI_CategoryMenuHorzEntryWidget_C_SetDisabled_Params params;
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CategoryMenuHorzEntryWidget_C::BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_CategoryMenuHorzEntryWidget_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_425_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CategoryMenuHorzEntryWidget_C::BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_CategoryMenuHorzEntryWidget_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_427_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.ExecuteUbergraph_UI_CategoryMenuHorzEntryWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CategoryMenuHorzEntryWidget_C::ExecuteUbergraph_UI_CategoryMenuHorzEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CategoryMenuHorzEntryWidget.UI_CategoryMenuHorzEntryWidget_C.ExecuteUbergraph_UI_CategoryMenuHorzEntryWidget");

	UUI_CategoryMenuHorzEntryWidget_C_ExecuteUbergraph_UI_CategoryMenuHorzEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

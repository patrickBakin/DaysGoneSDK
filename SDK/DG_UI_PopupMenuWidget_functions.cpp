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

// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.SetButtonImageSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ImageWidget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PopupMenuWidget_C::SetButtonImageSelected(class UImage* ImageWidget, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.SetButtonImageSelected");

	UUI_PopupMenuWidget_C_SetButtonImageSelected_Params params;
	params.ImageWidget = ImageWidget;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.SetWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateVisibility>  Visibility                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PopupMenuWidget_C::SetWidgetVisibility(class UWidget* Widget, TEnumAsByte<ESlateVisibility> Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.SetWidgetVisibility");

	UUI_PopupMenuWidget_C_SetWidgetVisibility_Params params;
	params.Widget = Widget;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PopupMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.Construct");

	UUI_PopupMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.Configure
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlatePopupDetails*     PopupDetails                   (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_PopupMenuWidget_C::Configure(struct FSlatePopupDetails* PopupDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.Configure");

	UUI_PopupMenuWidget_C_Configure_Params params;
	params.PopupDetails = PopupDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OverrideConfirmText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangeToYesNo                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PopupMenuWidget_C::OverrideConfirmText(bool ChangeToYesNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OverrideConfirmText");

	UUI_PopupMenuWidget_C_OverrideConfirmText_Params params;
	params.ChangeToYesNo = ChangeToYesNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_PopupMenuWidget_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OnConfirmPressed");

	UUI_PopupMenuWidget_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_OK_K2Node_ComponentBoundEvent_713_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PopupMenuWidget_C::BndEvt__MenuInteract_OK_K2Node_ComponentBoundEvent_713_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_OK_K2Node_ComponentBoundEvent_713_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PopupMenuWidget_C_BndEvt__MenuInteract_OK_K2Node_ComponentBoundEvent_713_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_Conrim_K2Node_ComponentBoundEvent_715_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PopupMenuWidget_C::BndEvt__MenuInteract_Conrim_K2Node_ComponentBoundEvent_715_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_Conrim_K2Node_ComponentBoundEvent_715_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PopupMenuWidget_C_BndEvt__MenuInteract_Conrim_K2Node_ComponentBoundEvent_715_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_PopupMenuWidget_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.OnCancelPressed");

	UUI_PopupMenuWidget_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_720_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PopupMenuWidget_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_720_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_720_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PopupMenuWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_720_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.ExecuteUbergraph_UI_PopupMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PopupMenuWidget_C::ExecuteUbergraph_UI_PopupMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PopupMenuWidget.UI_PopupMenuWidget_C.ExecuteUbergraph_UI_PopupMenuWidget");

	UUI_PopupMenuWidget_C_ExecuteUbergraph_UI_PopupMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

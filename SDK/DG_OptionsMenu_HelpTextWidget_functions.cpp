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

// Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenu_HelpTextWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.Construct");

	UOptionsMenu_HelpTextWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_HelpTextWidget_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.SetSelected");

	UOptionsMenu_HelpTextWidget_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.BndEvt__MenuInteract_Text_K2Node_ComponentBoundEvent_681_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenu_HelpTextWidget_C::BndEvt__MenuInteract_Text_K2Node_ComponentBoundEvent_681_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.BndEvt__MenuInteract_Text_K2Node_ComponentBoundEvent_681_OnMenuInteractHoverEvent__DelegateSignature");

	UOptionsMenu_HelpTextWidget_C_BndEvt__MenuInteract_Text_K2Node_ComponentBoundEvent_681_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.ExecuteUbergraph_OptionsMenu_HelpTextWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_HelpTextWidget_C::ExecuteUbergraph_OptionsMenu_HelpTextWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.ExecuteUbergraph_OptionsMenu_HelpTextWidget");

	UOptionsMenu_HelpTextWidget_C_ExecuteUbergraph_OptionsMenu_HelpTextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_HelpTextWidget_C::OnHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_HelpTextWidget.OptionsMenu_HelpTextWidget_C.OnHovered__DelegateSignature");

	UOptionsMenu_HelpTextWidget_C_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

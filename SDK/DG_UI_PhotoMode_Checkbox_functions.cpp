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

// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Checkbox_C::ChangeValue(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ChangeValue");

	UUI_PhotoMode_Checkbox_C_ChangeValue_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.HandleInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Checkbox_C::HandleInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.HandleInput");

	UUI_PhotoMode_Checkbox_C_HandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PhotoMode_Checkbox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Construct");

	UUI_PhotoMode_Checkbox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Checkbox_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Tick");

	UUI_PhotoMode_Checkbox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Selected                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SubIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Checkbox_C::Selected(bool* Is_Selected, int* SubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Selected");

	UUI_PhotoMode_Checkbox_C_Selected_Params params;
	params.Is_Selected = Is_Selected;
	params.SubIndex = SubIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ResetAll                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Checkbox_C::Reset(bool* ResetAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Reset");

	UUI_PhotoMode_Checkbox_C_Reset_Params params;
	params.ResetAll = ResetAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ManualSetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Checkbox_C::ManualSetValue(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ManualSetValue");

	UUI_PhotoMode_Checkbox_C_ManualSetValue_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Disable
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_Checkbox_C::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.Disable");

	UUI_PhotoMode_Checkbox_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.enable
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_Checkbox_C::enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.enable");

	UUI_PhotoMode_Checkbox_C_enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_864_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_Checkbox_C::BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_864_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_864_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoMode_Checkbox_C_BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_864_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_2999_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_Checkbox_C::BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_2999_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_2999_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_PhotoMode_Checkbox_C_BndEvt__MenuInteract_5_K2Node_ComponentBoundEvent_2999_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ExecuteUbergraph_UI_PhotoMode_Checkbox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Checkbox_C::ExecuteUbergraph_UI_PhotoMode_Checkbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.ExecuteUbergraph_UI_PhotoMode_Checkbox");

	UUI_PhotoMode_Checkbox_C_ExecuteUbergraph_UI_PhotoMode_Checkbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.MenuChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Checkbox_C::MenuChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Checkbox.UI_PhotoMode_Checkbox_C.MenuChanged__DelegateSignature");

	UUI_PhotoMode_Checkbox_C_MenuChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

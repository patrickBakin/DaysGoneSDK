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

// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.HandleInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Button_C::HandleInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.HandleInput");

	UUI_PhotoMode_Button_C_HandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PhotoMode_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Construct");

	UUI_PhotoMode_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Button_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Tick");

	UUI_PhotoMode_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Selected                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SubIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Button_C::Selected(bool* Is_Selected, int* SubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Selected");

	UUI_PhotoMode_Button_C_Selected_Params params;
	params.Is_Selected = Is_Selected;
	params.SubIndex = SubIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ResetAll                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Button_C::Reset(bool* ResetAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Reset");

	UUI_PhotoMode_Button_C_Reset_Params params;
	params.ResetAll = ResetAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1398_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_Button_C::BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1398_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1398_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_PhotoMode_Button_C_BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1398_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1405_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_Button_C::BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1405_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1405_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoMode_Button_C_BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1405_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Lock
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_Button_C::Lock()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Lock");

	UUI_PhotoMode_Button_C_Lock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Unlock
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_Button_C::Unlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.Unlock");

	UUI_PhotoMode_Button_C_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.ExecuteUbergraph_UI_PhotoMode_Button
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Button_C::ExecuteUbergraph_UI_PhotoMode_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.ExecuteUbergraph_UI_PhotoMode_Button");

	UUI_PhotoMode_Button_C_ExecuteUbergraph_UI_PhotoMode_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_Button_C::ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Button.UI_PhotoMode_Button_C.ButtonClicked__DelegateSignature");

	UUI_PhotoMode_Button_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

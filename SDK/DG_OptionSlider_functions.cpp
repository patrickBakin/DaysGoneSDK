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

// Function OptionSlider.OptionSlider_C.UpdateFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionSlider_C::UpdateFill(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.UpdateFill");

	UOptionSlider_C_UpdateFill_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.Get_MenuInteract_Previous_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UOptionSlider_C::Get_MenuInteract_Previous_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.Get_MenuInteract_Previous_Visibility_1");

	UOptionSlider_C_Get_MenuInteract_Previous_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionSlider.OptionSlider_C.Get_MenuInteract_Next_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UOptionSlider_C::Get_MenuInteract_Next_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.Get_MenuInteract_Next_Visibility_1");

	UOptionSlider_C_Get_MenuInteract_Next_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionSlider.OptionSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.Construct");

	UOptionSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UOptionSlider_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.Tick");

	UOptionSlider_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1530_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSlider_C::BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1530_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1530_OnMenuInteractHoverEvent__DelegateSignature");

	UOptionSlider_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1530_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.OnLocked
// (Event, Public, BlueprintEvent)

void UOptionSlider_C::OnLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.OnLocked");

	UOptionSlider_C_OnLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.OnUnlocked
// (Event, Public, BlueprintEvent)

void UOptionSlider_C::OnUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.OnUnlocked");

	UOptionSlider_C_OnUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2063_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSlider_C::BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2063_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2063_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionSlider_C_BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2063_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2093_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSlider_C::BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2093_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2093_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionSlider_C_BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2093_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1614_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSlider_C::BndEvt__ValueControl_K2Node_ComponentBoundEvent_1614_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1614_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionSlider_C_BndEvt__ValueControl_K2Node_ComponentBoundEvent_1614_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1630_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSlider_C::BndEvt__ValueControl_K2Node_ComponentBoundEvent_1630_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1630_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionSlider_C_BndEvt__ValueControl_K2Node_ComponentBoundEvent_1630_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1647_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionSlider_C::BndEvt__ValueControl_K2Node_ComponentBoundEvent_1647_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.BndEvt__ValueControl_K2Node_ComponentBoundEvent_1647_OnFloatValueChangedEvent__DelegateSignature");

	UOptionSlider_C_BndEvt__ValueControl_K2Node_ComponentBoundEvent_1647_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.OnValueChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionSlider_C::OnValueChanged_Event_1(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.OnValueChanged_Event_1");

	UOptionSlider_C_OnValueChanged_Event_1_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSlider.OptionSlider_C.ExecuteUbergraph_OptionSlider
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionSlider_C::ExecuteUbergraph_OptionSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSlider.OptionSlider_C.ExecuteUbergraph_OptionSlider");

	UOptionSlider_C_ExecuteUbergraph_OptionSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SetSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChangedByUser                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::SetSliderValue(float Value, bool ChangedByUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SetSliderValue");

	UUI_PhotoMode_Silder_C_SetSliderValue_Params params;
	params.Value = Value;
	params.ChangedByUser = ChangedByUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.HandleAdjustInput_Hold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Positive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::HandleAdjustInput_Hold(bool* InputHandled, bool* Positive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.HandleAdjustInput_Hold");

	UUI_PhotoMode_Silder_C_HandleAdjustInput_Hold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;
	if (Positive != nullptr)
		*Positive = params.Positive;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SetDisplayedTextValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESliderDisplayType> Display_Type                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::SetDisplayedTextValue(float Value, TEnumAsByte<ESliderDisplayType> Display_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SetDisplayedTextValue");

	UUI_PhotoMode_Silder_C_SetDisplayedTextValue_Params params;
	params.Value = Value;
	params.Display_Type = Display_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.AdjustSlider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Positive                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CircleHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::AdjustSlider(bool Positive, bool CircleHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.AdjustSlider");

	UUI_PhotoMode_Silder_C_AdjustSlider_Params params;
	params.Positive = Positive;
	params.CircleHeld = CircleHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.HandleAdjustInput_Press
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Positive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::HandleAdjustInput_Press(bool* InputHandled, bool* Positive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.HandleAdjustInput_Press");

	UUI_PhotoMode_Silder_C_HandleAdjustInput_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;
	if (Positive != nullptr)
		*Positive = params.Positive;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PhotoMode_Silder_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Construct");

	UUI_PhotoMode_Silder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Tick");

	UUI_PhotoMode_Silder_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Selected                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SubIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::Selected(bool* Is_Selected, int* SubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Selected");

	UUI_PhotoMode_Silder_C_Selected_Params params;
	params.Is_Selected = Is_Selected;
	params.SubIndex = SubIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ResetAll                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::Reset(bool* ResetAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Reset");

	UUI_PhotoMode_Silder_C_Reset_Params params;
	params.ResetAll = ResetAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.ManualSetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::ManualSetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.ManualSetValue");

	UUI_PhotoMode_Silder_C_ManualSetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.enable
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_Silder_C::enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.enable");

	UUI_PhotoMode_Silder_C_enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Disable
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_Silder_C::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Disable");

	UUI_PhotoMode_Silder_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1347_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1347_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1347_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_PhotoMode_Silder_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1347_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__Slider_3_K2Node_ComponentBoundEvent_1413_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::BndEvt__Slider_3_K2Node_ComponentBoundEvent_1413_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__Slider_3_K2Node_ComponentBoundEvent_1413_OnFloatValueChangedEvent__DelegateSignature");

	UUI_PhotoMode_Silder_C_BndEvt__Slider_3_K2Node_ComponentBoundEvent_1413_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1360_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_Silder_C::BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1360_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1360_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_PhotoMode_Silder_C_BndEvt__MenuInteract_0_K2Node_ComponentBoundEvent_1360_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.ExecuteUbergraph_UI_PhotoMode_Silder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::ExecuteUbergraph_UI_PhotoMode_Silder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.ExecuteUbergraph_UI_PhotoMode_Silder");

	UUI_PhotoMode_Silder_C_ExecuteUbergraph_UI_PhotoMode_Silder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Selection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_Silder_C::Selection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.Selection__DelegateSignature");

	UUI_PhotoMode_Silder_C_Selection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SliderValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChangedByUser                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_Silder_C::SliderValueChanged__DelegateSignature(float Value, bool ChangedByUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_Silder.UI_PhotoMode_Silder_C.SliderValueChanged__DelegateSignature");

	UUI_PhotoMode_Silder_C_SliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.ChangedByUser = ChangedByUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

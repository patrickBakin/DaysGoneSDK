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

// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.GetSliderValue
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USlider*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_PhotoMode_SilderVec3_C::GetSliderValue(class USlider* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.GetSliderValue");

	UUI_PhotoMode_SilderVec3_C_GetSliderValue_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SetSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                 Slider                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::SetSliderValue(class USlider* Slider, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SetSliderValue");

	UUI_PhotoMode_SilderVec3_C_SetSliderValue_Params params;
	params.Slider = Slider;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.TextBoxUpdateSlider
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::TextBoxUpdateSlider(const struct FText& InText, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.TextBoxUpdateSlider");

	UUI_PhotoMode_SilderVec3_C_TextBoxUpdateSlider_Params params;
	params.InText = InText;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.GetMappedRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::GetMappedRange(float Value, float* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.GetMappedRange");

	UUI_PhotoMode_SilderVec3_C_GetMappedRange_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.FloatToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UUI_PhotoMode_SilderVec3_C::FloatToText(float Value, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.FloatToText");

	UUI_PhotoMode_SilderVec3_C_FloatToText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.HandleAdjustInput_Hold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Positive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::HandleAdjustInput_Hold(bool* InputHandled, bool* Positive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.HandleAdjustInput_Hold");

	UUI_PhotoMode_SilderVec3_C_HandleAdjustInput_Hold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;
	if (Positive != nullptr)
		*Positive = params.Positive;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SetDisplayedTextValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::SetDisplayedTextValue(const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SetDisplayedTextValue");

	UUI_PhotoMode_SilderVec3_C_SetDisplayedTextValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.AdjustSlider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Positive                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CircleHeld                     (Parm, ZeroConstructor, IsPlainOldData)
// class USlider*                 Slider                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::AdjustSlider(bool Positive, bool CircleHeld, class USlider* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.AdjustSlider");

	UUI_PhotoMode_SilderVec3_C_AdjustSlider_Params params;
	params.Positive = Positive;
	params.CircleHeld = CircleHeld;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.HandleAdjustInput_Press
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Positive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::HandleAdjustInput_Press(bool* InputHandled, bool* Positive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.HandleAdjustInput_Press");

	UUI_PhotoMode_SilderVec3_C_HandleAdjustInput_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;
	if (Positive != nullptr)
		*Positive = params.Positive;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PhotoMode_SilderVec3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Construct");

	UUI_PhotoMode_SilderVec3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Tick");

	UUI_PhotoMode_SilderVec3_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Selected                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SubIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::Selected(bool* Is_Selected, int* SubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Selected");

	UUI_PhotoMode_SilderVec3_C_Selected_Params params;
	params.Is_Selected = Is_Selected;
	params.SubIndex = SubIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ResetAll                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::Reset(bool* ResetAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Reset");

	UUI_PhotoMode_SilderVec3_C_Reset_Params params;
	params.ResetAll = ResetAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.ManualSetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::ManualSetValue(const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.ManualSetValue");

	UUI_PhotoMode_SilderVec3_C_ManualSetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_R_K2Node_ComponentBoundEvent_2998_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_SilderVec3_C::BndEvt__Slider_R_K2Node_ComponentBoundEvent_2998_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_R_K2Node_ComponentBoundEvent_2998_OnMouseCaptureBeginEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_R_K2Node_ComponentBoundEvent_2998_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_G_K2Node_ComponentBoundEvent_3012_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_SilderVec3_C::BndEvt__Slider_G_K2Node_ComponentBoundEvent_3012_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_G_K2Node_ComponentBoundEvent_3012_OnMouseCaptureBeginEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_G_K2Node_ComponentBoundEvent_3012_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_B_K2Node_ComponentBoundEvent_3027_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_SilderVec3_C::BndEvt__Slider_B_K2Node_ComponentBoundEvent_3027_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_B_K2Node_ComponentBoundEvent_3027_OnMouseCaptureBeginEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_B_K2Node_ComponentBoundEvent_3027_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxR_K2Node_ComponentBoundEvent_3465_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::BndEvt__TextBoxR_K2Node_ComponentBoundEvent_3465_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxR_K2Node_ComponentBoundEvent_3465_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__TextBoxR_K2Node_ComponentBoundEvent_3465_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxG_K2Node_ComponentBoundEvent_3533_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::BndEvt__TextBoxG_K2Node_ComponentBoundEvent_3533_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxG_K2Node_ComponentBoundEvent_3533_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__TextBoxG_K2Node_ComponentBoundEvent_3533_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxB_K2Node_ComponentBoundEvent_3543_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::BndEvt__TextBoxB_K2Node_ComponentBoundEvent_3543_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__TextBoxB_K2Node_ComponentBoundEvent_3543_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__TextBoxB_K2Node_ComponentBoundEvent_3543_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_R_K2Node_ComponentBoundEvent_3922_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::BndEvt__Slider_R_K2Node_ComponentBoundEvent_3922_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_R_K2Node_ComponentBoundEvent_3922_OnFloatValueChangedEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_R_K2Node_ComponentBoundEvent_3922_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_G_K2Node_ComponentBoundEvent_3940_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::BndEvt__Slider_G_K2Node_ComponentBoundEvent_3940_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_G_K2Node_ComponentBoundEvent_3940_OnFloatValueChangedEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_G_K2Node_ComponentBoundEvent_3940_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_B_K2Node_ComponentBoundEvent_3959_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::BndEvt__Slider_B_K2Node_ComponentBoundEvent_3959_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__Slider_B_K2Node_ComponentBoundEvent_3959_OnFloatValueChangedEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__Slider_B_K2Node_ComponentBoundEvent_3959_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__BInteract_K2Node_ComponentBoundEvent_2359_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_SilderVec3_C::BndEvt__BInteract_K2Node_ComponentBoundEvent_2359_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__BInteract_K2Node_ComponentBoundEvent_2359_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__BInteract_K2Node_ComponentBoundEvent_2359_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__GInteract_K2Node_ComponentBoundEvent_2383_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_SilderVec3_C::BndEvt__GInteract_K2Node_ComponentBoundEvent_2383_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__GInteract_K2Node_ComponentBoundEvent_2383_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__GInteract_K2Node_ComponentBoundEvent_2383_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__RInteract_K2Node_ComponentBoundEvent_2408_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_SilderVec3_C::BndEvt__RInteract_K2Node_ComponentBoundEvent_2408_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.BndEvt__RInteract_K2Node_ComponentBoundEvent_2408_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_BndEvt__RInteract_K2Node_ComponentBoundEvent_2408_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.ExecuteUbergraph_UI_PhotoMode_SilderVec3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::ExecuteUbergraph_UI_PhotoMode_SilderVec3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.ExecuteUbergraph_UI_PhotoMode_SilderVec3");

	UUI_PhotoMode_SilderVec3_C_ExecuteUbergraph_UI_PhotoMode_SilderVec3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Selection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_SilderVec3_C::Selection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.Selection__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_Selection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SliderValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_SilderVec3_C::SliderValueChanged__DelegateSignature(const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode_SilderVec3.UI_PhotoMode_SilderVec3_C.SliderValueChanged__DelegateSignature");

	UUI_PhotoMode_SilderVec3_C_SliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

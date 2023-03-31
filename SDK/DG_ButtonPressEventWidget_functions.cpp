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

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetCombatPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Combat_Prompts> PromptType                     (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::SetCombatPrompt(TEnumAsByte<Enum_Combat_Prompts> PromptType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetCombatPrompt");

	UButtonPressEventWidget_C_SetCombatPrompt_Params params;
	params.PromptType = PromptType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.HideMashAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UButtonPressEventWidget_C::HideMashAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.HideMashAnim");

	UButtonPressEventWidget_C_HideMashAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.StartFadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UButtonPressEventWidget_C::StartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.StartFadeOut");

	UButtonPressEventWidget_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.ShowMashAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UButtonPressEventWidget_C::ShowMashAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.ShowMashAnim");

	UButtonPressEventWidget_C_ShowMashAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetHoldPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::SetHoldPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetHoldPercent");

	UButtonPressEventWidget_C_SetHoldPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.InitMultiLengthMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberPresses                  (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::InitMultiLengthMeter(int NumberPresses)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.InitMultiLengthMeter");

	UButtonPressEventWidget_C_InitMultiLengthMeter_Params params;
	params.NumberPresses = NumberPresses;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetPressType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonPressEventType> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::SetPressType(TEnumAsByte<EButtonPressEventType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetPressType");

	UButtonPressEventWidget_C_SetPressType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UButtonPressEventWidget_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetText");

	UButtonPressEventWidget_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EButtonPressEventType> PressType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)
// float                          HoldLength                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            MultiLength                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_Combat_Prompts> CombatPrompt                   (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::Init(TEnumAsByte<EControllerInputButton> Button, const struct FName& ActionName, TEnumAsByte<EButtonPressEventType> PressType, const struct FText& Text, float HoldLength, int MultiLength, TEnumAsByte<Enum_Combat_Prompts> CombatPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.Init");

	UButtonPressEventWidget_C_Init_Params params;
	params.Button = Button;
	params.ActionName = ActionName;
	params.PressType = PressType;
	params.Text = Text;
	params.HoldLength = HoldLength;
	params.MultiLength = MultiLength;
	params.CombatPrompt = CombatPrompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButtonOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::SetButtonOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButtonOpacity");

	UButtonPressEventWidget_C_SetButtonOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::SetButton(TEnumAsByte<EControllerInputButton> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButton");

	UButtonPressEventWidget_C_SetButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButtonColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::SetButtonColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButtonColor");

	UButtonPressEventWidget_C_SetButtonColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButtonPressEventWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.Construct");

	UButtonPressEventWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetVisibilityOverride
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>* VisibilityType                 (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::SetVisibilityOverride(TEnumAsByte<ESlateVisibility>* VisibilityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetVisibilityOverride");

	UButtonPressEventWidget_C_SetVisibilityOverride_Params params;
	params.VisibilityType = VisibilityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.OnAnimationFinished");

	UButtonPressEventWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.ExecuteUbergraph_ButtonPressEventWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UButtonPressEventWidget_C::ExecuteUbergraph_ButtonPressEventWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.ExecuteUbergraph_ButtonPressEventWidget");

	UButtonPressEventWidget_C_ExecuteUbergraph_ButtonPressEventWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonPressEventWidget.ButtonPressEventWidget_C.FadeOutComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButtonPressEventWidget_C::FadeOutComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonPressEventWidget.ButtonPressEventWidget_C.FadeOutComplete__DelegateSignature");

	UButtonPressEventWidget_C_FadeOutComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

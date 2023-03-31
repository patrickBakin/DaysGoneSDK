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

// Function UI_DynamicButton.UI_DynamicButton_C.SetDodgeKillVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetDodgeKillVisible(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetDodgeKillVisible");

	UUI_DynamicButton_C_SetDodgeKillVisible_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.HideExtras
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_DynamicButton_C::HideExtras()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.HideExtras");

	UUI_DynamicButton_C_HideExtras_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetBrutalKillVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetBrutalKillVisible(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetBrutalKillVisible");

	UUI_DynamicButton_C_SetBrutalKillVisible_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetStealthKillVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetStealthKillVisible(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetStealthKillVisible");

	UUI_DynamicButton_C_SetStealthKillVisible_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetBlockVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetBlockVisible(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetBlockVisible");

	UUI_DynamicButton_C_SetBlockVisible_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetIndicatorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetIndicatorVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetIndicatorVisible");

	UUI_DynamicButton_C_SetIndicatorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetMashProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetMashProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetMashProgress");

	UUI_DynamicButton_C_SetMashProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetDetailsFromDelegate
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_DynamicButton_C::SetDetailsFromDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetDetailsFromDelegate");

	UUI_DynamicButton_C_SetDetailsFromDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetButtonVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> ButtonType                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetButtonVisuals(TEnumAsByte<EControllerInputButton> ButtonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetButtonVisuals");

	UUI_DynamicButton_C_SetButtonVisuals_Params params;
	params.ButtonType = ButtonType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.DisplaySuccessFailAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::DisplaySuccessFailAnim(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.DisplaySuccessFailAnim");

	UUI_DynamicButton_C_DisplaySuccessFailAnim_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> ButtonType                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetDetails(TEnumAsByte<EControllerInputButton> ButtonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetDetails");

	UUI_DynamicButton_C_SetDetails_Params params;
	params.ButtonType = ButtonType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetProgressVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetProgressVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetProgressVisible");

	UUI_DynamicButton_C_SetProgressVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::SetProgress(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.SetProgress");

	UUI_DynamicButton_C_SetProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.DisplayButtonMashAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::DisplayButtonMashAnimation(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.DisplayButtonMashAnimation");

	UUI_DynamicButton_C_DisplayButtonMashAnimation_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DynamicButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.Construct");

	UUI_DynamicButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.OnColor_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::OnColor_Event(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.OnColor_Event");

	UUI_DynamicButton_C_OnColor_Event_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DynamicButton.UI_DynamicButton_C.ExecuteUbergraph_UI_DynamicButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DynamicButton_C::ExecuteUbergraph_UI_DynamicButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DynamicButton.UI_DynamicButton_C.ExecuteUbergraph_UI_DynamicButton");

	UUI_DynamicButton_C_ExecuteUbergraph_UI_DynamicButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

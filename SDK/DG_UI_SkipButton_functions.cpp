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

// Function UI_SkipButton.UI_SkipButton_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButton_C::UpdateProgress(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.UpdateProgress");

	UUI_SkipButton_C_UpdateProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.DisplayOptionalSkip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButton_C::DisplayOptionalSkip(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.DisplayOptionalSkip");

	UUI_SkipButton_C_DisplayOptionalSkip_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.DisplayStandardSkip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButton_C::DisplayStandardSkip(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.DisplayStandardSkip");

	UUI_SkipButton_C_DisplayStandardSkip_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.DisplayCannotSkip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButton_C::DisplayCannotSkip(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.DisplayCannotSkip");

	UUI_SkipButton_C_DisplayCannotSkip_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButton_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.SetVisible");

	UUI_SkipButton_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SkipPercent                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButton_C::UpdatePercent(float SkipPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.UpdatePercent");

	UUI_SkipButton_C_UpdatePercent_Params params;
	params.SkipPercent = SkipPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.OverrideSkipPosition
// (BlueprintCallable, BlueprintEvent)

void UUI_SkipButton_C::OverrideSkipPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.OverrideSkipPosition");

	UUI_SkipButton_C_OverrideSkipPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.HideBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButton_C::HideBar(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.HideBar");

	UUI_SkipButton_C_HideBar_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkipButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.Construct");

	UUI_SkipButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButton.UI_SkipButton_C.ExecuteUbergraph_UI_SkipButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButton_C::ExecuteUbergraph_UI_SkipButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButton.UI_SkipButton_C.ExecuteUbergraph_UI_SkipButton");

	UUI_SkipButton_C_ExecuteUbergraph_UI_SkipButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.GetInteractActionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInteractButton>   InteractButton                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudUpgradeWidget_C::GetInteractActionName(TEnumAsByte<EInteractButton> InteractButton, struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.GetInteractActionName");

	UUI_HudUpgradeWidget_C_GetInteractActionName_Params params;
	params.InteractButton = InteractButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.ResetAll
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudUpgradeWidget_C::ResetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.ResetAll");

	UUI_HudUpgradeWidget_C_ResetAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetUIActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudUpgradeWidget_C::SetUIActive(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetUIActive");

	UUI_HudUpgradeWidget_C_SetUIActive_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.TurnOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NoChoiceSelected               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudUpgradeWidget_C::TurnOff(bool NoChoiceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.TurnOff");

	UUI_HudUpgradeWidget_C_TurnOff_Params params;
	params.NoChoiceSelected = NoChoiceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetupSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableInput                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ActivateLookAtCamera           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayerInCinMode                (Parm, ZeroConstructor, IsPlainOldData)
// float                          WaitTimeBeforeRemove           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudUpgradeWidget_C::SetupSettings(bool DisableInput, bool ActivateLookAtCamera, bool PlayerInCinMode, float WaitTimeBeforeRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetupSettings");

	UUI_HudUpgradeWidget_C_SetupSettings_Params params;
	params.DisableInput = DisableInput;
	params.ActivateLookAtCamera = ActivateLookAtCamera;
	params.PlayerInCinMode = PlayerInCinMode;
	params.WaitTimeBeforeRemove = WaitTimeBeforeRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetChoiceDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TriangleText                   (Parm)
// struct FText                   TriangleDescriptionText        (Parm)
// struct FText                   CircleText                     (Parm)
// struct FText                   CircleDescriptionText          (Parm)
// struct FText                   SquareText                     (Parm)
// struct FText                   SquareDescriptionText          (Parm)
// struct FText                   CrossText                      (Parm)
// struct FText                   CrossDescriptionText           (Parm)

void UUI_HudUpgradeWidget_C::SetChoiceDetails(const struct FText& TriangleText, const struct FText& TriangleDescriptionText, const struct FText& CircleText, const struct FText& CircleDescriptionText, const struct FText& SquareText, const struct FText& SquareDescriptionText, const struct FText& CrossText, const struct FText& CrossDescriptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetChoiceDetails");

	UUI_HudUpgradeWidget_C_SetChoiceDetails_Params params;
	params.TriangleText = TriangleText;
	params.TriangleDescriptionText = TriangleDescriptionText;
	params.CircleText = CircleText;
	params.CircleDescriptionText = CircleDescriptionText;
	params.SquareText = SquareText;
	params.SquareDescriptionText = SquareDescriptionText;
	params.CrossText = CrossText;
	params.CrossDescriptionText = CrossDescriptionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudUpgradeWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.Tick");

	UUI_HudUpgradeWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudUpgradeWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.Construct");

	UUI_HudUpgradeWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.ExecuteUbergraph_UI_HudUpgradeWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudUpgradeWidget_C::ExecuteUbergraph_UI_HudUpgradeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.ExecuteUbergraph_UI_HudUpgradeWidget");

	UUI_HudUpgradeWidget_C_ExecuteUbergraph_UI_HudUpgradeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.OnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudUpgradeWidget_C::OnEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.OnEnd__DelegateSignature");

	UUI_HudUpgradeWidget_C_OnEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.OnChoiceSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInteractButton>   ChoiceSelection                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudUpgradeWidget_C::OnChoiceSelected__DelegateSignature(TEnumAsByte<EInteractButton> ChoiceSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.OnChoiceSelected__DelegateSignature");

	UUI_HudUpgradeWidget_C_OnChoiceSelected__DelegateSignature_Params params;
	params.ChoiceSelection = ChoiceSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DEBUG_Pring
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Value                          (Parm)
// struct FText                   Msg                            (Parm)

void UUI_MainMenuWidget_C::DEBUG_Pring(const struct FText& Value, const struct FText& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.DEBUG_Pring");

	UUI_MainMenuWidget_C_DEBUG_Pring_Params params;
	params.Value = Value;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadCancelled
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnLoadCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadCancelled");

	UUI_MainMenuWidget_C_OnLoadCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::SetCursorPosition(int Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetCursorPosition");

	UUI_MainMenuWidget_C_SetCursorPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadWidgetActionCompleted
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnLoadWidgetActionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadWidgetActionCompleted");

	UUI_MainMenuWidget_C_OnLoadWidgetActionCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DifficultySelectionNewGamePlus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DifficultySelected             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HardOrSurvivalSelected         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::DifficultySelectionNewGamePlus(bool* DifficultySelected, bool* HardOrSurvivalSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.DifficultySelectionNewGamePlus");

	UUI_MainMenuWidget_C_DifficultySelectionNewGamePlus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DifficultySelected != nullptr)
		*DifficultySelected = params.DifficultySelected;
	if (HardOrSurvivalSelected != nullptr)
		*HardOrSurvivalSelected = params.HardOrSurvivalSelected;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.StartNewGamePlus
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::StartNewGamePlus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.StartNewGamePlus");

	UUI_MainMenuWidget_C_StartNewGamePlus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.HasLogoFinishedFading
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_MainMenuWidget_C::HasLogoFinishedFading()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.HasLogoFinishedFading");

	UUI_MainMenuWidget_C_HasLogoFinishedFading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.StartHardOrSurvivalNewGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewGameStarted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::StartHardOrSurvivalNewGame(bool* NewGameStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.StartHardOrSurvivalNewGame");

	UUI_MainMenuWidget_C_StartHardOrSurvivalNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewGameStarted != nullptr)
		*NewGameStarted = params.NewGameStarted;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DifficultySelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DifficultySelected             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::DifficultySelection(bool* DifficultySelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.DifficultySelection");

	UUI_MainMenuWidget_C_DifficultySelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DifficultySelected != nullptr)
		*DifficultySelected = params.DifficultySelected;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSurvivalMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::SetSurvivalMode(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSurvivalMode");

	UUI_MainMenuWidget_C_SetSurvivalMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnChallengeSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       Mission_ID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::OnChallengeSelected(TEnumAsByte<EMissionIDs> Mission_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnChallengeSelected");

	UUI_MainMenuWidget_C_OnChallengeSelected_Params params;
	params.Mission_ID = Mission_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.UpdateLocalizedLogo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::UpdateLocalizedLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.UpdateLocalizedLogo");

	UUI_MainMenuWidget_C_UpdateLocalizedLogo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetDifficulty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChallengeMode                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::SetDifficulty(float Value, bool IsChallengeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetDifficulty");

	UUI_MainMenuWidget_C_SetDifficulty_Params params;
	params.Value = Value;
	params.IsChallengeMode = IsChallengeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSelectedPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActiveMenuPageIndex            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::SetSelectedPage(int ActiveMenuPageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSelectedPage");

	UUI_MainMenuWidget_C_SetSelectedPage_Params params;
	params.ActiveMenuPageIndex = ActiveMenuPageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.RestoreTimeDilation
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::RestoreTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.RestoreTimeDilation");

	UUI_MainMenuWidget_C_RestoreTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.GetEntryIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   TheText                        (Parm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::GetEntryIndex(const struct FText& TheText, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.GetEntryIndex");

	UUI_MainMenuWidget_C_GetEntryIndex_Params params;
	params.TheText = TheText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.IsEntrySelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   Text                           (Parm)
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::IsEntrySelected(const struct FText& Text, bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.IsEntrySelected");

	UUI_MainMenuWidget_C_IsEntrySelected_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDevLoadSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnDevLoadSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDevLoadSelected");

	UUI_MainMenuWidget_C_OnDevLoadSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnNewGameSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Difficulty                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::OnNewGameSelected(float Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnNewGameSelected");

	UUI_MainMenuWidget_C_OnNewGameSelected_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.HandleMenuSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::HandleMenuSelection(int Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.HandleMenuSelection");

	UUI_MainMenuWidget_C_HandleMenuSelection_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.GetSelectedText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::GetSelectedText(int Index, class UTextBlock** TextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.GetSelectedText");

	UUI_MainMenuWidget_C_GetSelectedText_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextWidget != nullptr)
		*TextWidget = params.TextWidget;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetPauseMenuDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::SetPauseMenuDisabled(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetPauseMenuDisabled");

	UUI_MainMenuWidget_C_SetPauseMenuDisabled_Params params;
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSelectedOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::SetSelectedOption(int Index, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSelectedOption");

	UUI_MainMenuWidget_C_SetSelectedOption_Params params;
	params.Index = Index;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.WaitForInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::WaitForInput(bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.WaitForInput");

	UUI_MainMenuWidget_C_WaitForInput_Params params;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.UpdateMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::UpdateMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.UpdateMenu");

	UUI_MainMenuWidget_C_UpdateMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MainMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.Construct");

	UUI_MainMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.Tick");

	UUI_MainMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnWidgetClosed
// (Event, Protected, BlueprintEvent)

void UUI_MainMenuWidget_C::OnWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnWidgetClosed");

	UUI_MainMenuWidget_C_OnWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadedToBlack_AfterChoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UUI_MainMenuWidget_C::OnFadedToBlack_AfterChoice(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadedToBlack_AfterChoice");

	UUI_MainMenuWidget_C_OnFadedToBlack_AfterChoice_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ChoiceSelected
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::ChoiceSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.ChoiceSelected");

	UUI_MainMenuWidget_C_ChoiceSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SpawnBike
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::SpawnBike()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.SpawnBike");

	UUI_MainMenuWidget_C_SpawnBike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnConfirmPressed");

	UUI_MainMenuWidget_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.RequestClose");

	UUI_MainMenuWidget_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SpawnOptionsMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::SpawnOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.SpawnOptionsMenu");

	UUI_MainMenuWidget_C_SpawnOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnOptionsClosed
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnOptionsClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnOptionsClosed");

	UUI_MainMenuWidget_C_OnOptionsClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadeFromBlackStart_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UUI_MainMenuWidget_C::OnFadeFromBlackStart_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadeFromBlackStart_MM_Event_1");

	UUI_MainMenuWidget_C_OnFadeFromBlackStart_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadingFinished_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UUI_MainMenuWidget_C::OnFadingFinished_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadingFinished_MM_Event_1");

	UUI_MainMenuWidget_C_OnFadingFinished_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnCancelPressed");

	UUI_MainMenuWidget_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningIn_K2Node_ComponentBoundEvent_615_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__WarningIn_K2Node_ComponentBoundEvent_615_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningIn_K2Node_ComponentBoundEvent_615_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__WarningIn_K2Node_ComponentBoundEvent_615_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningOut_K2Node_ComponentBoundEvent_618_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__WarningOut_K2Node_ComponentBoundEvent_618_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningOut_K2Node_ComponentBoundEvent_618_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__WarningOut_K2Node_ComponentBoundEvent_618_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnCloseDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnCloseDelegate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnCloseDelegate_Event_1");

	UUI_MainMenuWidget_C_OnCloseDelegate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_610_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_610_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_610_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_610_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Display DLC Challenges Menu
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::Display_DLC_Challenges_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.Display DLC Challenges Menu");

	UUI_MainMenuWidget_C_Display_DLC_Challenges_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.On DLC Challenges Closed
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::On_DLC_Challenges_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.On DLC Challenges Closed");

	UUI_MainMenuWidget_C_On_DLC_Challenges_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.On DLC Challenge Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       ChallengeID                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::On_DLC_Challenge_Selected(TEnumAsByte<EMissionIDs> ChallengeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.On DLC Challenge Selected");

	UUI_MainMenuWidget_C_On_DLC_Challenge_Selected_Params params;
	params.ChallengeID = ChallengeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningIn_Survival_K2Node_ComponentBoundEvent_573_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__WarningIn_Survival_K2Node_ComponentBoundEvent_573_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningIn_Survival_K2Node_ComponentBoundEvent_573_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__WarningIn_Survival_K2Node_ComponentBoundEvent_573_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningOut_Survival_K2Node_ComponentBoundEvent_579_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__WarningOut_Survival_K2Node_ComponentBoundEvent_579_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningOut_Survival_K2Node_ComponentBoundEvent_579_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__WarningOut_Survival_K2Node_ComponentBoundEvent_579_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Unload Prologue Lighting
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::Unload_Prologue_Lighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.Unload Prologue Lighting");

	UUI_MainMenuWidget_C_Unload_Prologue_Lighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Skip Fade Out Animation
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::Skip_Fade_Out_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.Skip Fade Out Animation");

	UUI_MainMenuWidget_C_Skip_Fade_Out_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DoIntialSave
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::DoIntialSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.DoIntialSave");

	UUI_MainMenuWidget_C_DoIntialSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__NewGamePlusIn_K2Node_ComponentBoundEvent_203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__NewGamePlusIn_K2Node_ComponentBoundEvent_203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__NewGamePlusIn_K2Node_ComponentBoundEvent_203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__NewGamePlusIn_K2Node_ComponentBoundEvent_203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__NewGamePlusOut_K2Node_ComponentBoundEvent_283_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__NewGamePlusOut_K2Node_ComponentBoundEvent_283_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__NewGamePlusOut_K2Node_ComponentBoundEvent_283_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__NewGamePlusOut_K2Node_ComponentBoundEvent_283_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NGPLoadSaveGame
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::NGPLoadSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.NGPLoadSaveGame");

	UUI_MainMenuWidget_C_NGPLoadSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NPGLoadFailed
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::NPGLoadFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.NPGLoadFailed");

	UUI_MainMenuWidget_C_NPGLoadFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadFileSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FileName                       (Parm, ZeroConstructor)

void UUI_MainMenuWidget_C::OnLoadFileSelected(const struct FString& FileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadFileSelected");

	UUI_MainMenuWidget_C_OnLoadFileSelected_Params params;
	params.FileName = FileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ConfirmSelection
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::ConfirmSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.ConfirmSelection");

	UUI_MainMenuWidget_C_ConfirmSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_846_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_846_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_846_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_846_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_856_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_856_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_856_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_856_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_867_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_867_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_867_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_867_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_879_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_879_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_879_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_879_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_892_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_892_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_892_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_892_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_906_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_906_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_906_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_906_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_921_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_921_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_921_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_921_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_937_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_937_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_937_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_937_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_954_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_954_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_954_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_954_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_972_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_972_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_972_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_972_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_991_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_991_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_991_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_991_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1011_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1011_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1011_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1011_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1032_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1032_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1032_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1032_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_1075_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_1075_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_1075_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_1075_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_1122_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_1122_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_1122_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_1122_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_1147_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_1147_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_1147_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_1147_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_1173_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_1173_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_1173_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_1173_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_1200_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_1200_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_1200_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_1200_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_1228_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_1228_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_1228_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_1228_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_1257_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_1257_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_1257_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_1257_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_1287_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_1287_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_1287_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_1287_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_1318_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_1318_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_1318_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_1318_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_1350_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_1350_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_1350_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_1350_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1383_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1383_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1383_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1383_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1417_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1417_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1417_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1417_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1187_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1187_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1187_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1187_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1223_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1223_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1223_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1223_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NavigateBack
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.NavigateBack");

	UUI_MainMenuWidget_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.PlayCredits
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::PlayCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.PlayCredits");

	UUI_MainMenuWidget_C_PlayCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__CreditsInteract_K2Node_ComponentBoundEvent_2444_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__CreditsInteract_K2Node_ComponentBoundEvent_2444_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__CreditsInteract_K2Node_ComponentBoundEvent_2444_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__CreditsInteract_K2Node_ComponentBoundEvent_2444_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_HardModeConfirm_K2Node_ComponentBoundEvent_3437_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_HardModeConfirm_K2Node_ComponentBoundEvent_3437_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_HardModeConfirm_K2Node_ComponentBoundEvent_3437_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_HardModeConfirm_K2Node_ComponentBoundEvent_3437_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_HardModeCancel_K2Node_ComponentBoundEvent_3476_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_HardModeCancel_K2Node_ComponentBoundEvent_3476_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_HardModeCancel_K2Node_ComponentBoundEvent_3476_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_HardModeCancel_K2Node_ComponentBoundEvent_3476_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGamePlusCancel_K2Node_ComponentBoundEvent_5671_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGamePlusCancel_K2Node_ComponentBoundEvent_5671_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGamePlusCancel_K2Node_ComponentBoundEvent_5671_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGamePlusCancel_K2Node_ComponentBoundEvent_5671_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGamePlusConfirm_K2Node_ComponentBoundEvent_5712_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_NewGamePlusConfirm_K2Node_ComponentBoundEvent_5712_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGamePlusConfirm_K2Node_ComponentBoundEvent_5712_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGamePlusConfirm_K2Node_ComponentBoundEvent_5712_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_SurvivalCancel_K2Node_ComponentBoundEvent_5754_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_SurvivalCancel_K2Node_ComponentBoundEvent_5754_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_SurvivalCancel_K2Node_ComponentBoundEvent_5754_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_SurvivalCancel_K2Node_ComponentBoundEvent_5754_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_SurvivalConfirm_K2Node_ComponentBoundEvent_5797_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__MenuInteract_SurvivalConfirm_K2Node_ComponentBoundEvent_5797_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_SurvivalConfirm_K2Node_ComponentBoundEvent_5797_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__MenuInteract_SurvivalConfirm_K2Node_ComponentBoundEvent_5797_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Display New Game Plus Menu
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::Display_New_Game_Plus_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.Display New Game Plus Menu");

	UUI_MainMenuWidget_C_Display_New_Game_Plus_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnUpPressed");

	UUI_MainMenuWidget_C_OnUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDownPressed");

	UUI_MainMenuWidget_C_OnDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadSuccess
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnLoadSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadSuccess");

	UUI_MainMenuWidget_C_OnLoadSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadFailure
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnLoadFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadFailure");

	UUI_MainMenuWidget_C_OnLoadFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NGPOnFileSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FileName                       (Parm, ZeroConstructor)

void UUI_MainMenuWidget_C::NGPOnFileSelection(const struct FString& FileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.NGPOnFileSelection");

	UUI_MainMenuWidget_C_NGPOnFileSelection_Params params;
	params.FileName = FileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__BackInteract_K2Node_ComponentBoundEvent_2279_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__BackInteract_K2Node_ComponentBoundEvent_2279_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__BackInteract_K2Node_ComponentBoundEvent_2279_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__BackInteract_K2Node_ComponentBoundEvent_2279_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.RecheckSaves
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::RecheckSaves()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.RecheckSaves");

	UUI_MainMenuWidget_C_RecheckSaves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnConfirmExitToDesktop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::OnConfirmExitToDesktop(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnConfirmExitToDesktop");

	UUI_MainMenuWidget_C_OnConfirmExitToDesktop_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__Legal_K2Node_ComponentBoundEvent_2109_AcceptClicked__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__Legal_K2Node_ComponentBoundEvent_2109_AcceptClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__Legal_K2Node_ComponentBoundEvent_2109_AcceptClicked__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__Legal_K2Node_ComponentBoundEvent_2109_AcceptClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__Legal_K2Node_ComponentBoundEvent_2158_DenyClicked__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__Legal_K2Node_ComponentBoundEvent_2158_DenyClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__Legal_K2Node_ComponentBoundEvent_2158_DenyClicked__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__Legal_K2Node_ComponentBoundEvent_2158_DenyClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.AcceptLegal
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::AcceptLegal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.AcceptLegal");

	UUI_MainMenuWidget_C_AcceptLegal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DenyLegal
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::DenyLegal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.DenyLegal");

	UUI_MainMenuWidget_C_DenyLegal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DisplayTitleWithFade
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::DisplayTitleWithFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.DisplayTitleWithFade");

	UUI_MainMenuWidget_C_DisplayTitleWithFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DisplayTitleSkipFade
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::DisplayTitleSkipFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.DisplayTitleSkipFade");

	UUI_MainMenuWidget_C_DisplayTitleSkipFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnUpReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnUpReleased");

	UUI_MainMenuWidget_C_OnUpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDownReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDownReleased");

	UUI_MainMenuWidget_C_OnDownReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnSelect2Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnSelect2Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnSelect2Pressed");

	UUI_MainMenuWidget_C_OnSelect2Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ShowLegal
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::ShowLegal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.ShowLegal");

	UUI_MainMenuWidget_C_ShowLegal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.HideLegal
// (BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::HideLegal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.HideLegal");

	UUI_MainMenuWidget_C_HideLegal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__TelemetryInteract_K2Node_ComponentBoundEvent_3121_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MainMenuWidget_C::BndEvt__TelemetryInteract_K2Node_ComponentBoundEvent_3121_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__TelemetryInteract_K2Node_ComponentBoundEvent_3121_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MainMenuWidget_C_BndEvt__TelemetryInteract_K2Node_ComponentBoundEvent_3121_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnSelect1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::OnSelect1Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnSelect1Pressed");

	UUI_MainMenuWidget_C_OnSelect1Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ExecuteUbergraph_UI_MainMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenuWidget_C::ExecuteUbergraph_UI_MainMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.ExecuteUbergraph_UI_MainMenuWidget");

	UUI_MainMenuWidget_C_ExecuteUbergraph_UI_MainMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DeveloperSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::DeveloperSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.DeveloperSelected__DelegateSignature");

	UUI_MainMenuWidget_C_DeveloperSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ContinueSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::ContinueSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.ContinueSelected__DelegateSignature");

	UUI_MainMenuWidget_C_ContinueSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NewGameSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MainMenuWidget_C::NewGameSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenuWidget.UI_MainMenuWidget_C.NewGameSelected__DelegateSignature");

	UUI_MainMenuWidget_C_NewGameSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

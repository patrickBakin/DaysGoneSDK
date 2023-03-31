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

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForCriticalLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FileName                       (Parm, ZeroConstructor)

void UOptionsTopMenuWidget_C::OnFileSelectedForCriticalLoad(const struct FString& FileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForCriticalLoad");

	UOptionsTopMenuWidget_C_OnFileSelectedForCriticalLoad_Params params;
	params.FileName = FileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectMenuClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnFileSelectMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectMenuClosed");

	UOptionsTopMenuWidget_C_OnFileSelectMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.PrepareGameStateForSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::PrepareGameStateForSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.PrepareGameStateForSave");

	UOptionsTopMenuWidget_C_PrepareGameStateForSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnCriticalLoadDismissed
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnCriticalLoadDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnCriticalLoadDismissed");

	UOptionsTopMenuWidget_C_OnCriticalLoadDismissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FileName                       (Parm, ZeroConstructor)

void UOptionsTopMenuWidget_C::OnFileSelectedForSave(const struct FString& FileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForSave");

	UOptionsTopMenuWidget_C_OnFileSelectedForSave_Params params;
	params.FileName = FileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FileName                       (Parm, ZeroConstructor)

void UOptionsTopMenuWidget_C::OnFileSelectedForLoad(const struct FString& FileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForLoad");

	UOptionsTopMenuWidget_C_OnFileSelectedForLoad_Params params;
	params.FileName = FileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToDesktop
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::QuitToDesktop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToDesktop");

	UOptionsTopMenuWidget_C_QuitToDesktop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitToDesktopSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnQuitToDesktopSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitToDesktopSelected");

	UOptionsTopMenuWidget_C_OnQuitToDesktopSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnResetJobsConfirmed
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnResetJobsConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnResetJobsConfirmed");

	UOptionsTopMenuWidget_C_OnResetJobsConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnResetJobsSelected
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnResetJobsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnResetJobsSelected");

	UOptionsTopMenuWidget_C_OnResetJobsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ResetJobsMenuSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::ResetJobsMenuSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ResetJobsMenuSelected");

	UOptionsTopMenuWidget_C_ResetJobsMenuSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartChallenge
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnRestartChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartChallenge");

	UOptionsTopMenuWidget_C_OnRestartChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidRestartChallengeSelected
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnValidRestartChallengeSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidRestartChallengeSelected");

	UOptionsTopMenuWidget_C_OnValidRestartChallengeSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartChallengeSelected
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnRestartChallengeSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartChallengeSelected");

	UOptionsTopMenuWidget_C_OnRestartChallengeSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnGoToChallengeMenuSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnGoToChallengeMenuSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnGoToChallengeMenuSelected");

	UOptionsTopMenuWidget_C_OnGoToChallengeMenuSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToMainMenu_ForChallengeMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::QuitToMainMenu_ForChallengeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToMainMenu_ForChallengeMenu");

	UOptionsTopMenuWidget_C_QuitToMainMenu_ForChallengeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitChallengeSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnQuitChallengeSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitChallengeSelected");

	UOptionsTopMenuWidget_C_OnQuitChallengeSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSkipGameplaySelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnSkipGameplaySelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSkipGameplaySelected");

	UOptionsTopMenuWidget_C_OnSkipGameplaySelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPhotoModeSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnPhotoModeSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPhotoModeSelected");

	UOptionsTopMenuWidget_C_OnPhotoModeSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnHelpOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnHelpOptionSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnHelpOptionSelected");

	UOptionsTopMenuWidget_C_OnHelpOptionSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitMission
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnQuitMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitMission");

	UOptionsTopMenuWidget_C_OnQuitMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidQuitMissionSelected
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnValidQuitMissionSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidQuitMissionSelected");

	UOptionsTopMenuWidget_C_OnValidQuitMissionSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitMissionSelected
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnQuitMissionSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitMissionSelected");

	UOptionsTopMenuWidget_C_OnQuitMissionSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSaveWidgetActionCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnSaveWidgetActionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSaveWidgetActionCompleted");

	UOptionsTopMenuWidget_C_OnSaveWidgetActionCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnQuitSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitSelected");

	UOptionsTopMenuWidget_C_OnQuitSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::QuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToMainMenu");

	UOptionsTopMenuWidget_C_QuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.PostInit
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::PostInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.PostInit");

	UOptionsTopMenuWidget_C_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ShouldRemoveMenuOption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPlayerProfileSubMenuClass Option                         (Parm)
// bool                           ShouldRemoveOption_            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPlayerProfileSubMenuClass SelectionDetails               (Parm, OutParm)

void UOptionsTopMenuWidget_C::ShouldRemoveMenuOption(const struct FPlayerProfileSubMenuClass& Option, bool* ShouldRemoveOption_, struct FPlayerProfileSubMenuClass* SelectionDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ShouldRemoveMenuOption");

	UOptionsTopMenuWidget_C_ShouldRemoveMenuOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldRemoveOption_ != nullptr)
		*ShouldRemoveOption_ = params.ShouldRemoveOption_;
	if (SelectionDetails != nullptr)
		*SelectionDetails = params.SelectionDetails;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.InitMenuOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::InitMenuOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.InitMenuOptions");

	UOptionsTopMenuWidget_C_InitMenuOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetSelectionStatusText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm)

void UOptionsTopMenuWidget_C::SetSelectionStatusText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetSelectionStatusText");

	UOptionsTopMenuWidget_C_SetSelectionStatusText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.CloseIfNoCategorySelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::CloseIfNoCategorySelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.CloseIfNoCategorySelected");

	UOptionsTopMenuWidget_C_CloseIfNoCategorySelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.CloseAllWidgets
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::CloseAllWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.CloseAllWidgets");

	UOptionsTopMenuWidget_C_CloseAllWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HandleAPISaveLoad
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> ProfileType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::HandleAPISaveLoad(TEnumAsByte<EPlayerSaveProfileType> ProfileType, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HandleAPISaveLoad");

	UOptionsTopMenuWidget_C_HandleAPISaveLoad_Params params;
	params.ProfileType = ProfileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SpawnLoadSaveWidget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveMenuMode>     MenuMode                       (Parm, ZeroConstructor, IsPlainOldData)
// class UFileSelectMenu_C*       Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::SpawnLoadSaveWidget(TEnumAsByte<ESaveMenuMode> MenuMode, class UFileSelectMenu_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SpawnLoadSaveWidget");

	UOptionsTopMenuWidget_C_SpawnLoadSaveWidget_Params params;
	params.MenuMode = MenuMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Menu != nullptr)
		*Menu = params.Menu;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HasValidCheckpoint
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::HasValidCheckpoint(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HasValidCheckpoint");

	UOptionsTopMenuWidget_C_HasValidCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SaveModifiedProfile
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::SaveModifiedProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SaveModifiedProfile");

	UOptionsTopMenuWidget_C_SaveModifiedProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSaveGameSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnSaveGameSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSaveGameSelected");

	UOptionsTopMenuWidget_C_OnSaveGameSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetNumDaysGone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::SetNumDaysGone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetNumDaysGone");

	UOptionsTopMenuWidget_C_SetNumDaysGone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadWidgetActionCompleted
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnLoadWidgetActionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadWidgetActionCompleted");

	UOptionsTopMenuWidget_C_OnLoadWidgetActionCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadWidgetClosed
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnLoadWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadWidgetClosed");

	UOptionsTopMenuWidget_C_OnLoadWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadGameSelected
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnLoadGameSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadGameSelected");

	UOptionsTopMenuWidget_C_OnLoadGameSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidRestartcheckpointSelected
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnValidRestartcheckpointSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidRestartcheckpointSelected");

	UOptionsTopMenuWidget_C_OnValidRestartcheckpointSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartCheckpointSelected
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnRestartCheckpointSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartCheckpointSelected");

	UOptionsTopMenuWidget_C_OnRestartCheckpointSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPopupOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseMenuWidget*         PopUp                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::OnPopupOpen(class UBaseMenuWidget* PopUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPopupOpen");

	UOptionsTopMenuWidget_C_OnPopupOpen_Params params;
	params.PopUp = PopUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPopupClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnPopupClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPopupClosed");

	UOptionsTopMenuWidget_C_OnPopupClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetCategoryWidgetInputEnabled
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::SetCategoryWidgetInputEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetCategoryWidgetInputEnabled");

	UOptionsTopMenuWidget_C_SetCategoryWidgetInputEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartCheckpoint
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnRestartCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartCheckpoint");

	UOptionsTopMenuWidget_C_OnRestartCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HandleSelectedProfileOption
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> ProfileOption                  (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::HandleSelectedProfileOption(TEnumAsByte<EPlayerSaveProfileType> ProfileOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HandleSelectedProfileOption");

	UOptionsTopMenuWidget_C_HandleSelectedProfileOption_Params params;
	params.ProfileOption = ProfileOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Init
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Init");

	UOptionsTopMenuWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsTopMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Construct");

	UOptionsTopMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.RequestClose");

	UOptionsTopMenuWidget_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_398_OnSelectionModified__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_398_OnSelectionModified__DelegateSignature(int Index, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_398_OnSelectionModified__DelegateSignature");

	UOptionsTopMenuWidget_C_BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_398_OnSelectionModified__DelegateSignature_Params params;
	params.Index = Index;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSubMenuClose
// (BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnSubMenuClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSubMenuClose");

	UOptionsTopMenuWidget_C_OnSubMenuClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnProfileModified
// (BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnProfileModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnProfileModified");

	UOptionsTopMenuWidget_C_OnProfileModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnWidgetClosed
// (Event, Protected, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnWidgetClosed");

	UOptionsTopMenuWidget_C_OnWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_85_OnSelectionModified__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_85_OnSelectionModified__DelegateSignature(int Index, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_85_OnSelectionModified__DelegateSignature");

	UOptionsTopMenuWidget_C_BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_85_OnSelectionModified__DelegateSignature_Params params;
	params.Index = Index;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnCancelPressed");

	UOptionsTopMenuWidget_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnHelpMenuClosed
// (BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::OnHelpMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnHelpMenuClosed");

	UOptionsTopMenuWidget_C_OnHelpMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Cancel");

	UOptionsTopMenuWidget_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.TeardownMenu
// (BlueprintCallable, BlueprintEvent)

void UOptionsTopMenuWidget_C::TeardownMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.TeardownMenu");

	UOptionsTopMenuWidget_C_TeardownMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2466_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsTopMenuWidget_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2466_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2466_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsTopMenuWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2466_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__MenuInteract_Select_K2Node_ComponentBoundEvent_2526_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsTopMenuWidget_C::BndEvt__MenuInteract_Select_K2Node_ComponentBoundEvent_2526_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__MenuInteract_Select_K2Node_ComponentBoundEvent_2526_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsTopMenuWidget_C_BndEvt__MenuInteract_Select_K2Node_ComponentBoundEvent_2526_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ExecuteUbergraph_OptionsTopMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsTopMenuWidget_C::ExecuteUbergraph_OptionsTopMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ExecuteUbergraph_OptionsTopMenuWidget");

	UOptionsTopMenuWidget_C_ExecuteUbergraph_OptionsTopMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

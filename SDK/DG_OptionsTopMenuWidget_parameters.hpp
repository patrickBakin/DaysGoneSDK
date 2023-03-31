#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForCriticalLoad
struct UOptionsTopMenuWidget_C_OnFileSelectedForCriticalLoad_Params
{
	struct FString                                     FileName;                                                 // (Parm, ZeroConstructor)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectMenuClosed
struct UOptionsTopMenuWidget_C_OnFileSelectMenuClosed_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.PrepareGameStateForSave
struct UOptionsTopMenuWidget_C_PrepareGameStateForSave_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnCriticalLoadDismissed
struct UOptionsTopMenuWidget_C_OnCriticalLoadDismissed_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForSave
struct UOptionsTopMenuWidget_C_OnFileSelectedForSave_Params
{
	struct FString                                     FileName;                                                 // (Parm, ZeroConstructor)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnFileSelectedForLoad
struct UOptionsTopMenuWidget_C_OnFileSelectedForLoad_Params
{
	struct FString                                     FileName;                                                 // (Parm, ZeroConstructor)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToDesktop
struct UOptionsTopMenuWidget_C_QuitToDesktop_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitToDesktopSelected
struct UOptionsTopMenuWidget_C_OnQuitToDesktopSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnResetJobsConfirmed
struct UOptionsTopMenuWidget_C_OnResetJobsConfirmed_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnResetJobsSelected
struct UOptionsTopMenuWidget_C_OnResetJobsSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ResetJobsMenuSelected
struct UOptionsTopMenuWidget_C_ResetJobsMenuSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartChallenge
struct UOptionsTopMenuWidget_C_OnRestartChallenge_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidRestartChallengeSelected
struct UOptionsTopMenuWidget_C_OnValidRestartChallengeSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartChallengeSelected
struct UOptionsTopMenuWidget_C_OnRestartChallengeSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnGoToChallengeMenuSelected
struct UOptionsTopMenuWidget_C_OnGoToChallengeMenuSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToMainMenu_ForChallengeMenu
struct UOptionsTopMenuWidget_C_QuitToMainMenu_ForChallengeMenu_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitChallengeSelected
struct UOptionsTopMenuWidget_C_OnQuitChallengeSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSkipGameplaySelected
struct UOptionsTopMenuWidget_C_OnSkipGameplaySelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPhotoModeSelected
struct UOptionsTopMenuWidget_C_OnPhotoModeSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnHelpOptionSelected
struct UOptionsTopMenuWidget_C_OnHelpOptionSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitMission
struct UOptionsTopMenuWidget_C_OnQuitMission_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidQuitMissionSelected
struct UOptionsTopMenuWidget_C_OnValidQuitMissionSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitMissionSelected
struct UOptionsTopMenuWidget_C_OnQuitMissionSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSaveWidgetActionCompleted
struct UOptionsTopMenuWidget_C_OnSaveWidgetActionCompleted_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnQuitSelected
struct UOptionsTopMenuWidget_C_OnQuitSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.QuitToMainMenu
struct UOptionsTopMenuWidget_C_QuitToMainMenu_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.PostInit
struct UOptionsTopMenuWidget_C_PostInit_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ShouldRemoveMenuOption
struct UOptionsTopMenuWidget_C_ShouldRemoveMenuOption_Params
{
	struct FPlayerProfileSubMenuClass                  Option;                                                   // (Parm)
	bool                                               ShouldRemoveOption_;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPlayerProfileSubMenuClass                  SelectionDetails;                                         // (Parm, OutParm)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.InitMenuOptions
struct UOptionsTopMenuWidget_C_InitMenuOptions_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetSelectionStatusText
struct UOptionsTopMenuWidget_C_SetSelectionStatusText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.CloseIfNoCategorySelected
struct UOptionsTopMenuWidget_C_CloseIfNoCategorySelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.CloseAllWidgets
struct UOptionsTopMenuWidget_C_CloseAllWidgets_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HandleAPISaveLoad
struct UOptionsTopMenuWidget_C_HandleAPISaveLoad_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                ProfileType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SpawnLoadSaveWidget
struct UOptionsTopMenuWidget_C_SpawnLoadSaveWidget_Params
{
	TEnumAsByte<ESaveMenuMode>                         MenuMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFileSelectMenu_C*                           Menu;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HasValidCheckpoint
struct UOptionsTopMenuWidget_C_HasValidCheckpoint_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SaveModifiedProfile
struct UOptionsTopMenuWidget_C_SaveModifiedProfile_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSaveGameSelected
struct UOptionsTopMenuWidget_C_OnSaveGameSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetNumDaysGone
struct UOptionsTopMenuWidget_C_SetNumDaysGone_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadWidgetActionCompleted
struct UOptionsTopMenuWidget_C_OnLoadWidgetActionCompleted_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadWidgetClosed
struct UOptionsTopMenuWidget_C_OnLoadWidgetClosed_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnLoadGameSelected
struct UOptionsTopMenuWidget_C_OnLoadGameSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnValidRestartcheckpointSelected
struct UOptionsTopMenuWidget_C_OnValidRestartcheckpointSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartCheckpointSelected
struct UOptionsTopMenuWidget_C_OnRestartCheckpointSelected_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPopupOpen
struct UOptionsTopMenuWidget_C_OnPopupOpen_Params
{
	class UBaseMenuWidget*                             PopUp;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnPopupClosed
struct UOptionsTopMenuWidget_C_OnPopupClosed_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.SetCategoryWidgetInputEnabled
struct UOptionsTopMenuWidget_C_SetCategoryWidgetInputEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnRestartCheckpoint
struct UOptionsTopMenuWidget_C_OnRestartCheckpoint_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.HandleSelectedProfileOption
struct UOptionsTopMenuWidget_C_HandleSelectedProfileOption_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                ProfileOption;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Init
struct UOptionsTopMenuWidget_C_Init_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Construct
struct UOptionsTopMenuWidget_C_Construct_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.RequestClose
struct UOptionsTopMenuWidget_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_398_OnSelectionModified__DelegateSignature
struct UOptionsTopMenuWidget_C_BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_398_OnSelectionModified__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnSubMenuClose
struct UOptionsTopMenuWidget_C_OnSubMenuClose_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnProfileModified
struct UOptionsTopMenuWidget_C_OnProfileModified_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnWidgetClosed
struct UOptionsTopMenuWidget_C_OnWidgetClosed_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_85_OnSelectionModified__DelegateSignature
struct UOptionsTopMenuWidget_C_BndEvt__OptionsCategoryWidget_K2Node_ComponentBoundEvent_85_OnSelectionModified__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnCancelPressed
struct UOptionsTopMenuWidget_C_OnCancelPressed_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.OnHelpMenuClosed
struct UOptionsTopMenuWidget_C_OnHelpMenuClosed_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.Cancel
struct UOptionsTopMenuWidget_C_Cancel_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.TeardownMenu
struct UOptionsTopMenuWidget_C_TeardownMenu_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2466_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsTopMenuWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2466_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.BndEvt__MenuInteract_Select_K2Node_ComponentBoundEvent_2526_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsTopMenuWidget_C_BndEvt__MenuInteract_Select_K2Node_ComponentBoundEvent_2526_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsTopMenuWidget.OptionsTopMenuWidget_C.ExecuteUbergraph_OptionsTopMenuWidget
struct UOptionsTopMenuWidget_C_ExecuteUbergraph_OptionsTopMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

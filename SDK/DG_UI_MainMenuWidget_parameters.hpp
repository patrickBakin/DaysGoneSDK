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

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DEBUG_Pring
struct UUI_MainMenuWidget_C_DEBUG_Pring_Params
{
	struct FText                                       Value;                                                    // (Parm)
	struct FText                                       Msg;                                                      // (Parm)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadCancelled
struct UUI_MainMenuWidget_C_OnLoadCancelled_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetCursorPosition
struct UUI_MainMenuWidget_C_SetCursorPosition_Params
{
	int                                                Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadWidgetActionCompleted
struct UUI_MainMenuWidget_C_OnLoadWidgetActionCompleted_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DifficultySelectionNewGamePlus
struct UUI_MainMenuWidget_C_DifficultySelectionNewGamePlus_Params
{
	bool                                               DifficultySelected;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HardOrSurvivalSelected;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.StartNewGamePlus
struct UUI_MainMenuWidget_C_StartNewGamePlus_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.HasLogoFinishedFading
struct UUI_MainMenuWidget_C_HasLogoFinishedFading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.StartHardOrSurvivalNewGame
struct UUI_MainMenuWidget_C_StartHardOrSurvivalNewGame_Params
{
	bool                                               NewGameStarted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DifficultySelection
struct UUI_MainMenuWidget_C_DifficultySelection_Params
{
	bool                                               DifficultySelected;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSurvivalMode
struct UUI_MainMenuWidget_C_SetSurvivalMode_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnChallengeSelected
struct UUI_MainMenuWidget_C_OnChallengeSelected_Params
{
	TEnumAsByte<EMissionIDs>                           Mission_ID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.UpdateLocalizedLogo
struct UUI_MainMenuWidget_C_UpdateLocalizedLogo_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetDifficulty
struct UUI_MainMenuWidget_C_SetDifficulty_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChallengeMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSelectedPage
struct UUI_MainMenuWidget_C_SetSelectedPage_Params
{
	int                                                ActiveMenuPageIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.RestoreTimeDilation
struct UUI_MainMenuWidget_C_RestoreTimeDilation_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.GetEntryIndex
struct UUI_MainMenuWidget_C_GetEntryIndex_Params
{
	struct FText                                       TheText;                                                  // (Parm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.IsEntrySelected
struct UUI_MainMenuWidget_C_IsEntrySelected_Params
{
	struct FText                                       Text;                                                     // (Parm)
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDevLoadSelected
struct UUI_MainMenuWidget_C_OnDevLoadSelected_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnNewGameSelected
struct UUI_MainMenuWidget_C_OnNewGameSelected_Params
{
	float                                              Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.HandleMenuSelection
struct UUI_MainMenuWidget_C_HandleMenuSelection_Params
{
	int                                                Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.GetSelectedText
struct UUI_MainMenuWidget_C_GetSelectedText_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetPauseMenuDisabled
struct UUI_MainMenuWidget_C_SetPauseMenuDisabled_Params
{
	bool                                               IsDisabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SetSelectedOption
struct UUI_MainMenuWidget_C_SetSelectedOption_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.WaitForInput
struct UUI_MainMenuWidget_C_WaitForInput_Params
{
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.UpdateMenu
struct UUI_MainMenuWidget_C_UpdateMenu_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Construct
struct UUI_MainMenuWidget_C_Construct_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Tick
struct UUI_MainMenuWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnWidgetClosed
struct UUI_MainMenuWidget_C_OnWidgetClosed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadedToBlack_AfterChoice
struct UUI_MainMenuWidget_C_OnFadedToBlack_AfterChoice_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ChoiceSelected
struct UUI_MainMenuWidget_C_ChoiceSelected_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SpawnBike
struct UUI_MainMenuWidget_C_SpawnBike_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnConfirmPressed
struct UUI_MainMenuWidget_C_OnConfirmPressed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.RequestClose
struct UUI_MainMenuWidget_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.SpawnOptionsMenu
struct UUI_MainMenuWidget_C_SpawnOptionsMenu_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnOptionsClosed
struct UUI_MainMenuWidget_C_OnOptionsClosed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadeFromBlackStart_MM_Event_1
struct UUI_MainMenuWidget_C_OnFadeFromBlackStart_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnFadingFinished_MM_Event_1
struct UUI_MainMenuWidget_C_OnFadingFinished_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnCancelPressed
struct UUI_MainMenuWidget_C_OnCancelPressed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningIn_K2Node_ComponentBoundEvent_615_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__WarningIn_K2Node_ComponentBoundEvent_615_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningOut_K2Node_ComponentBoundEvent_618_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__WarningOut_K2Node_ComponentBoundEvent_618_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnCloseDelegate_Event_1
struct UUI_MainMenuWidget_C_OnCloseDelegate_Event_1_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_610_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__LogoFadeOut_K2Node_ComponentBoundEvent_610_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Display DLC Challenges Menu
struct UUI_MainMenuWidget_C_Display_DLC_Challenges_Menu_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.On DLC Challenges Closed
struct UUI_MainMenuWidget_C_On_DLC_Challenges_Closed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.On DLC Challenge Selected
struct UUI_MainMenuWidget_C_On_DLC_Challenge_Selected_Params
{
	TEnumAsByte<EMissionIDs>                           ChallengeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningIn_Survival_K2Node_ComponentBoundEvent_573_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__WarningIn_Survival_K2Node_ComponentBoundEvent_573_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__WarningOut_Survival_K2Node_ComponentBoundEvent_579_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__WarningOut_Survival_K2Node_ComponentBoundEvent_579_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Unload Prologue Lighting
struct UUI_MainMenuWidget_C_Unload_Prologue_Lighting_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Skip Fade Out Animation
struct UUI_MainMenuWidget_C_Skip_Fade_Out_Animation_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DoIntialSave
struct UUI_MainMenuWidget_C_DoIntialSave_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__NewGamePlusIn_K2Node_ComponentBoundEvent_203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__NewGamePlusIn_K2Node_ComponentBoundEvent_203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__NewGamePlusOut_K2Node_ComponentBoundEvent_283_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__NewGamePlusOut_K2Node_ComponentBoundEvent_283_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NGPLoadSaveGame
struct UUI_MainMenuWidget_C_NGPLoadSaveGame_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NPGLoadFailed
struct UUI_MainMenuWidget_C_NPGLoadFailed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadFileSelected
struct UUI_MainMenuWidget_C_OnLoadFileSelected_Params
{
	struct FString                                     FileName;                                                 // (Parm, ZeroConstructor)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ConfirmSelection
struct UUI_MainMenuWidget_C_ConfirmSelection_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_846_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_846_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_856_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_856_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_867_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_867_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_879_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_879_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_892_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_892_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_906_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_906_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_921_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_921_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_937_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_937_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_954_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_954_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_972_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_972_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_991_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_991_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1011_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1011_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1032_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1032_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_1075_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu0_K2Node_ComponentBoundEvent_1075_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame0_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_1122_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu1_K2Node_ComponentBoundEvent_1122_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_1147_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame1_K2Node_ComponentBoundEvent_1147_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_1173_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu2_K2Node_ComponentBoundEvent_1173_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_1200_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame2_K2Node_ComponentBoundEvent_1200_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_1228_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu3_K2Node_ComponentBoundEvent_1228_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_1257_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame3_K2Node_ComponentBoundEvent_1257_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_1287_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu4_K2Node_ComponentBoundEvent_1287_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_1318_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame4_K2Node_ComponentBoundEvent_1318_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_1350_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu5_K2Node_ComponentBoundEvent_1350_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1383_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGame5_K2Node_ComponentBoundEvent_1383_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1417_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu6_K2Node_ComponentBoundEvent_1417_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1187_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1187_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1223_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_MainMenu7_K2Node_ComponentBoundEvent_1223_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NavigateBack
struct UUI_MainMenuWidget_C_NavigateBack_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.PlayCredits
struct UUI_MainMenuWidget_C_PlayCredits_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__CreditsInteract_K2Node_ComponentBoundEvent_2444_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__CreditsInteract_K2Node_ComponentBoundEvent_2444_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_HardModeConfirm_K2Node_ComponentBoundEvent_3437_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_HardModeConfirm_K2Node_ComponentBoundEvent_3437_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_HardModeCancel_K2Node_ComponentBoundEvent_3476_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_HardModeCancel_K2Node_ComponentBoundEvent_3476_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGamePlusCancel_K2Node_ComponentBoundEvent_5671_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGamePlusCancel_K2Node_ComponentBoundEvent_5671_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_NewGamePlusConfirm_K2Node_ComponentBoundEvent_5712_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_NewGamePlusConfirm_K2Node_ComponentBoundEvent_5712_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_SurvivalCancel_K2Node_ComponentBoundEvent_5754_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_SurvivalCancel_K2Node_ComponentBoundEvent_5754_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__MenuInteract_SurvivalConfirm_K2Node_ComponentBoundEvent_5797_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__MenuInteract_SurvivalConfirm_K2Node_ComponentBoundEvent_5797_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.Display New Game Plus Menu
struct UUI_MainMenuWidget_C_Display_New_Game_Plus_Menu_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnUpPressed
struct UUI_MainMenuWidget_C_OnUpPressed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDownPressed
struct UUI_MainMenuWidget_C_OnDownPressed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadSuccess
struct UUI_MainMenuWidget_C_OnLoadSuccess_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnLoadFailure
struct UUI_MainMenuWidget_C_OnLoadFailure_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NGPOnFileSelection
struct UUI_MainMenuWidget_C_NGPOnFileSelection_Params
{
	struct FString                                     FileName;                                                 // (Parm, ZeroConstructor)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__BackInteract_K2Node_ComponentBoundEvent_2279_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__BackInteract_K2Node_ComponentBoundEvent_2279_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.RecheckSaves
struct UUI_MainMenuWidget_C_RecheckSaves_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnConfirmExitToDesktop
struct UUI_MainMenuWidget_C_OnConfirmExitToDesktop_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__Legal_K2Node_ComponentBoundEvent_2109_AcceptClicked__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__Legal_K2Node_ComponentBoundEvent_2109_AcceptClicked__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__Legal_K2Node_ComponentBoundEvent_2158_DenyClicked__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__Legal_K2Node_ComponentBoundEvent_2158_DenyClicked__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.AcceptLegal
struct UUI_MainMenuWidget_C_AcceptLegal_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DenyLegal
struct UUI_MainMenuWidget_C_DenyLegal_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DisplayTitleWithFade
struct UUI_MainMenuWidget_C_DisplayTitleWithFade_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DisplayTitleSkipFade
struct UUI_MainMenuWidget_C_DisplayTitleSkipFade_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnUpReleased
struct UUI_MainMenuWidget_C_OnUpReleased_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnDownReleased
struct UUI_MainMenuWidget_C_OnDownReleased_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnSelect2Pressed
struct UUI_MainMenuWidget_C_OnSelect2Pressed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ShowLegal
struct UUI_MainMenuWidget_C_ShowLegal_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.HideLegal
struct UUI_MainMenuWidget_C_HideLegal_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.BndEvt__TelemetryInteract_K2Node_ComponentBoundEvent_3121_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MainMenuWidget_C_BndEvt__TelemetryInteract_K2Node_ComponentBoundEvent_3121_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.OnSelect1Pressed
struct UUI_MainMenuWidget_C_OnSelect1Pressed_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ExecuteUbergraph_UI_MainMenuWidget
struct UUI_MainMenuWidget_C_ExecuteUbergraph_UI_MainMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.DeveloperSelected__DelegateSignature
struct UUI_MainMenuWidget_C_DeveloperSelected__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.ContinueSelected__DelegateSignature
struct UUI_MainMenuWidget_C_ContinueSelected__DelegateSignature_Params
{
};

// Function UI_MainMenuWidget.UI_MainMenuWidget_C.NewGameSelected__DelegateSignature
struct UUI_MainMenuWidget_C_NewGameSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function OptionsMenuWidget.OptionsMenuWidget_C.DoesCurrentMenuAllowDefaults
struct UOptionsMenuWidget_C_DoesCurrentMenuAllowDefaults_Params
{
	bool                                               DefaultsAllowed_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.DoesCurrentMenuAllowPerformance
struct UOptionsMenuWidget_C_DoesCurrentMenuAllowPerformance_Params
{
	bool                                               PerformanceAllowed_;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.UpdateOptionTooltip
struct UOptionsMenuWidget_C_UpdateOptionTooltip_Params
{
	class UOptionValueControl*                         OptionWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.SetActiveOptionGroup
struct UOptionsMenuWidget_C_SetActiveOptionGroup_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.UpdateHeader
struct UOptionsMenuWidget_C_UpdateHeader_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.ShowBackground
struct UOptionsMenuWidget_C_ShowBackground_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.GetSelectedOption
struct UOptionsMenuWidget_C_GetSelectedOption_Params
{
	class UOptionsMenuProfileEntry_C*                  SelectedOption;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.GetMaxMenuIndex
struct UOptionsMenuWidget_C_GetMaxMenuIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.IsHDR_Enabled
struct UOptionsMenuWidget_C_IsHDR_Enabled_Params
{
	bool                                               bIsHDR_Enabled;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.GetProfileMenuEntry
struct UOptionsMenuWidget_C_GetProfileMenuEntry_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UOptionsMenuProfileEntry_C*                  ProfileEntryWidget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnEntryChanged
struct UOptionsMenuWidget_C_OnEntryChanged_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                Option_Type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Option_Value;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.ConfigureDynamicRange
struct UOptionsMenuWidget_C_ConfigureDynamicRange_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.AddDisabledProfileEntry
struct UOptionsMenuWidget_C_AddDisabledProfileEntry_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                ProfileType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.SetProfileEntriesInputDisabled
struct UOptionsMenuWidget_C_SetProfileEntriesInputDisabled_Params
{
	bool                                               Disabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.IsProfileOptionDisabled
struct UOptionsMenuWidget_C_IsProfileOptionDisabled_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                ProfileOption;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDisabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.SyncDisabledProfileOptionText
struct UOptionsMenuWidget_C_SyncDisabledProfileOptionText_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                ProfileOption;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.DisableAnyProfileEntries
struct UOptionsMenuWidget_C_DisableAnyProfileEntries_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.NotifyProfileModified
struct UOptionsMenuWidget_C_NotifyProfileModified_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.ProfileModified
struct UOptionsMenuWidget_C_ProfileModified_Params
{
	bool                                               Modified;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.SetProfileEntrySelected
struct UOptionsMenuWidget_C_SetProfileEntrySelected_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.SetCursorPosition
struct UOptionsMenuWidget_C_SetCursorPosition_Params
{
	int                                                InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.ConfigureProfileEntries
struct UOptionsMenuWidget_C_ConfigureProfileEntries_Params
{
	TEnumAsByte<EProfileOption>                        InProfileType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.Construct
struct UOptionsMenuWidget_C_Construct_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.RequestClose
struct UOptionsMenuWidget_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__CategoryWidget_K2Node_ComponentBoundEvent_736_OnSelection__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__CategoryWidget_K2Node_ComponentBoundEvent_736_OnSelection__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__ProfileCategoryWidget_K2Node_ComponentBoundEvent_332_OnSelection__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__ProfileCategoryWidget_K2Node_ComponentBoundEvent_332_OnSelection__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnCancelPressed
struct UOptionsMenuWidget_C_OnCancelPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnHDRPopupClosed
struct UOptionsMenuWidget_C_OnHDRPopupClosed_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.SpawnHDRPopup
struct UOptionsMenuWidget_C_SpawnHDRPopup_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnAudioPageInitialized
struct UOptionsMenuWidget_C_OnAudioPageInitialized_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnAudioFormatChanged
struct UOptionsMenuWidget_C_OnAudioFormatChanged_Params
{
	class UOptionsMenuProfileEntry_C*                  ProfileEntry;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnProfileEntryChanged
struct UOptionsMenuWidget_C_OnProfileEntryChanged_Params
{
	TEnumAsByte<EPlayerSaveProfileType>                OptionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OptionValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnUpPressed
struct UOptionsMenuWidget_C_OnUpPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnDownPressed
struct UOptionsMenuWidget_C_OnDownPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnTabNextPressed
struct UOptionsMenuWidget_C_OnTabNextPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnTabPreviousPressed
struct UOptionsMenuWidget_C_OnTabPreviousPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnPageNextPressed
struct UOptionsMenuWidget_C_OnPageNextPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnPagePreviousPressed
struct UOptionsMenuWidget_C_OnPagePreviousPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnLeftPressed
struct UOptionsMenuWidget_C_OnLeftPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnRightPressed
struct UOptionsMenuWidget_C_OnRightPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnConfirmPressed
struct UOptionsMenuWidget_C_OnConfirmPressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__KeyboardOptionsPanel_K2Node_ComponentBoundEvent_1659_OptionList_ItemSelected__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__KeyboardOptionsPanel_K2Node_ComponentBoundEvent_1659_OptionList_ItemSelected__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__GamepadOptionsPanel_K2Node_ComponentBoundEvent_1664_OptionList_ItemSelected__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__GamepadOptionsPanel_K2Node_ComponentBoundEvent_1664_OptionList_ItemSelected__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Gamepad_K2Node_ComponentBoundEvent_1909_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Gamepad_K2Node_ComponentBoundEvent_1909_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Keyboard_K2Node_ComponentBoundEvent_1934_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Keyboard_K2Node_ComponentBoundEvent_1934_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionSelected
struct UOptionsMenuWidget_C_OnOptionSelected_Params
{
	class UOptionValueControl*                         OptionWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__AudioOptionsPanel_K2Node_ComponentBoundEvent_2195_OptionList_ItemSelected__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__AudioOptionsPanel_K2Node_ComponentBoundEvent_2195_OptionList_ItemSelected__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Audio_K2Node_ComponentBoundEvent_2826_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Audio_K2Node_ComponentBoundEvent_2826_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Language_K2Node_ComponentBoundEvent_2878_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Language_K2Node_ComponentBoundEvent_2878_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Gameplay_K2Node_ComponentBoundEvent_2897_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Gameplay_K2Node_ComponentBoundEvent_2897_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Accessibility_K2Node_ComponentBoundEvent_2917_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Accessibility_K2Node_ComponentBoundEvent_2917_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Language_K2Node_ComponentBoundEvent_2938_OptionList_ItemSelected__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__OptionsGroup_Language_K2Node_ComponentBoundEvent_2938_OptionList_ItemSelected__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Gameplay_K2Node_ComponentBoundEvent_2960_OptionList_ItemSelected__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__OptionsGroup_Gameplay_K2Node_ComponentBoundEvent_2960_OptionList_ItemSelected__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Accessibility_K2Node_ComponentBoundEvent_2983_OptionList_ItemSelected__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__OptionsGroup_Accessibility_K2Node_ComponentBoundEvent_2983_OptionList_ItemSelected__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2516_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2516_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Display_K2Node_ComponentBoundEvent_1895_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Display_K2Node_ComponentBoundEvent_1895_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_2457_OptionList_ItemSelected__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_2457_OptionList_ItemSelected__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Scalability_K2Node_ComponentBoundEvent_2089_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Scalability_K2Node_ComponentBoundEvent_2089_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Scalability_K2Node_ComponentBoundEvent_2404_OptionList_ItemSelected__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__OptionsGroup_Scalability_K2Node_ComponentBoundEvent_2404_OptionList_ItemSelected__DelegateSignature_Params
{
	class UOptionValueControl*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.StartAutodetect
struct UOptionsMenuWidget_C_StartAutodetect_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.FinishAutodetect
struct UOptionsMenuWidget_C_FinishAutodetect_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_1723_OnMonitorChanged__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_1723_OnMonitorChanged__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.TransitionToOptionGroup
struct UOptionsMenuWidget_C_TransitionToOptionGroup_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionGroupMenuChangeCallback
struct UOptionsMenuWidget_C_OnOptionGroupMenuChangeCallback_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionGroupMenuCloseCallback
struct UOptionsMenuWidget_C_OnOptionGroupMenuCloseCallback_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1742_OnMenuInteractClickedEvent__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1742_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnSelect1Pressed
struct UOptionsMenuWidget_C_OnSelect1Pressed_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.ResetToDefaults
struct UOptionsMenuWidget_C_ResetToDefaults_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.ConfirmResetToDefaults
struct UOptionsMenuWidget_C_ConfirmResetToDefaults_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionGroup_Gamepad_K2Node_ComponentBoundEvent_2647_OnShowControls__DelegateSignature
struct UOptionsMenuWidget_C_BndEvt__OptionGroup_Gamepad_K2Node_ComponentBoundEvent_2647_OnShowControls__DelegateSignature_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.CancelRepeat
struct UOptionsMenuWidget_C_CancelRepeat_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.Tick
struct UOptionsMenuWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.StartRepeat
struct UOptionsMenuWidget_C_StartRepeat_Params
{
	int                                                DirectionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnRightReleased
struct UOptionsMenuWidget_C_OnRightReleased_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnDownReleased
struct UOptionsMenuWidget_C_OnDownReleased_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnLeftReleased
struct UOptionsMenuWidget_C_OnLeftReleased_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.OnUpReleased
struct UOptionsMenuWidget_C_OnUpReleased_Params
{
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.ExecuteUbergraph_OptionsMenuWidget
struct UOptionsMenuWidget_C_ExecuteUbergraph_OptionsMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuWidget.OptionsMenuWidget_C.NotifyProfileOptionModifed__DelegateSignature
struct UOptionsMenuWidget_C_NotifyProfileOptionModifed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

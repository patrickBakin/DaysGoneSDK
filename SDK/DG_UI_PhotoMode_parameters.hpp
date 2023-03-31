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

// Function UI_PhotoMode.UI_PhotoMode_C.UpdateMovementInput
struct UUI_PhotoMode_C_UpdateMovementInput_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.ScreenCaptureTick
struct UUI_PhotoMode_C_ScreenCaptureTick_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.GetIsUIVisible
struct UUI_PhotoMode_C_GetIsUIVisible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.CaptureScreenShot
struct UUI_PhotoMode_C_CaptureScreenShot_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.EnableDeletePresetModalMenu
struct UUI_PhotoMode_C_EnableDeletePresetModalMenu_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.SetFocusLock
struct UUI_PhotoMode_C_SetFocusLock_Params
{
	bool                                               IsUsingGamepad;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.Get_CanvasPanel_7_Visibility_1
struct UUI_PhotoMode_C_Get_CanvasPanel_7_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.ToggleHelpMenu
struct UUI_PhotoMode_C_ToggleHelpMenu_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.ToggleAdvancedMode
struct UUI_PhotoMode_C_ToggleAdvancedMode_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.ShowHideUI
struct UUI_PhotoMode_C_ShowHideUI_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.ExitPhotoMode
struct UUI_PhotoMode_C_ExitPhotoMode_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_PhotoMode.UI_PhotoMode_C.SwitchTabsMouseClick
struct UUI_PhotoMode_C_SwitchTabsMouseClick_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.CameraSwitchCharacter
struct UUI_PhotoMode_C_CameraSwitchCharacter_Params
{
	class ABendPawn*                                   SwitchToCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.GetLogoTexture
struct UUI_PhotoMode_C_GetLogoTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.ExportPresetSettingsToTextFile
struct UUI_PhotoMode_C_ExportPresetSettingsToTextFile_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.EnableCustomPresetSaveMenu
struct UUI_PhotoMode_C_EnableCustomPresetSaveMenu_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.PresetUpdateSliders
struct UUI_PhotoMode_C_PresetUpdateSliders_Params
{
	struct FBendPhotoModePostPreset                    post;                                                     // (Parm)
};

// Function UI_PhotoMode.UI_PhotoMode_C.EnableFocalDistanceSlider
struct UUI_PhotoMode_C_EnableFocalDistanceSlider_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.MoveItemToEnd
struct UUI_PhotoMode_C_MoveItemToEnd_Params
{
	TArray<class ABendPawn*>                           pawns;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABendPawn*>                           SortedPawns;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function UI_PhotoMode.UI_PhotoMode_C.SortSwitchableCharacters
struct UUI_PhotoMode_C_SortSwitchableCharacters_Params
{
	TArray<class ABendPawn*>                           pawns;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_PhotoMode.UI_PhotoMode_C.GetOtherCharacters
struct UUI_PhotoMode_C_GetOtherCharacters_Params
{
	TArray<class ABendPawn*>                           ValidBendPawns;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function UI_PhotoMode.UI_PhotoMode_C.GetValidSwitchableCharacters
struct UUI_PhotoMode_C_GetValidSwitchableCharacters_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.SetCameraTarget
struct UUI_PhotoMode_C_SetCameraTarget_Params
{
	class ABendPawn*                                   Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.GetFocusLocation
struct UUI_PhotoMode_C_GetFocusLocation_Params
{
	bool                                               IsUsingController;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.HideFrames
struct UUI_PhotoMode_C_HideFrames_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.SetFrame
struct UUI_PhotoMode_C_SetFrame_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.GetFocalDistance
struct UUI_PhotoMode_C_GetFocalDistance_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FocalDist;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.SetToolTipWidgetText
struct UUI_PhotoMode_C_SetToolTipWidgetText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_PhotoMode.UI_PhotoMode_C.GetCameraMoveAmount
struct UUI_PhotoMode_C_GetCameraMoveAmount_Params
{
	float                                              CurrentGoalDistance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinClampValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxClampValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PercisionMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.SaveCameraStartingValues
struct UUI_PhotoMode_C_SaveCameraStartingValues_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.SetLogoVisibility
struct UUI_PhotoMode_C_SetLogoVisibility_Params
{
	bool                                               Black_Visible;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               White_Visible;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.SetLogoPosition
struct UUI_PhotoMode_C_SetLogoPosition_Params
{
	TEnumAsByte<ELogoPositions>                        Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_CameraUpDown
struct UUI_PhotoMode_C_HandleInput_CameraUpDown_Params
{
	bool                                               PercisionMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_CameraTranslation
struct UUI_PhotoMode_C_HandleInput_CameraTranslation_Params
{
	bool                                               PercisionMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_Footer
struct UUI_PhotoMode_C_HandleInput_Footer_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.SetHeaderText
struct UUI_PhotoMode_C_SetHeaderText_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_Tabs
struct UUI_PhotoMode_C_HandleInput_Tabs_Params
{
	int                                                NewTabIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SwitchingTabs;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.SwitchTab
struct UUI_PhotoMode_C_SwitchTab_Params
{
	int                                                NewTabIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.Construct
struct UUI_PhotoMode_C_Construct_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.Tick
struct UUI_PhotoMode_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.Destruct
struct UUI_PhotoMode_C_Destruct_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.ResetCamera
struct UUI_PhotoMode_C_ResetCamera_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.HideHelp
struct UUI_PhotoMode_C_HideHelp_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.DisplayFrameAsync
struct UUI_PhotoMode_C_DisplayFrameAsync_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
};

// Function UI_PhotoMode.UI_PhotoMode_C.CustomEvent_1
struct UUI_PhotoMode_C_CustomEvent_1_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnWidgetClosed
struct UUI_PhotoMode_C_OnWidgetClosed_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.InitInput
struct UUI_PhotoMode_C_InitInput_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraSlideinput
struct UUI_PhotoMode_C_OnCameraSlideinput_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraDollyInput
struct UUI_PhotoMode_C_OnCameraDollyInput_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2386_OnExitClicked__DelegateSignature
struct UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2386_OnExitClicked__DelegateSignature_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2395_OnHideUIClicked__DelegateSignature
struct UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2395_OnHideUIClicked__DelegateSignature_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2398_OnHelpClicked__DelegateSignature
struct UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2398_OnHelpClicked__DelegateSignature_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2402_OnAdvancedClicked__DelegateSignature
struct UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2402_OnAdvancedClicked__DelegateSignature_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterLeft_K2Node_ComponentBoundEvent_2407_OnResetClicked__DelegateSignature
struct UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterLeft_K2Node_ComponentBoundEvent_2407_OnResetClicked__DelegateSignature_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.FocusDistanceSliderChanged
struct UUI_PhotoMode_C_FocusDistanceSliderChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChangedByUser;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.CaptureShot
struct UUI_PhotoMode_C_CaptureShot_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.CaptureShotButtonClicked
struct UUI_PhotoMode_C_CaptureShotButtonClicked_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_1982_OnPhotoCaptureClicked__DelegateSignature
struct UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_1982_OnPhotoCaptureClicked__DelegateSignature_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnFocusLockInput
struct UUI_PhotoMode_C_OnFocusLockInput_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnTurnDelta
struct UUI_PhotoMode_C_OnTurnDelta_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnTurn
struct UUI_PhotoMode_C_OnTurn_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnLookUpDelta
struct UUI_PhotoMode_C_OnLookUpDelta_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnLookUp
struct UUI_PhotoMode_C_OnLookUp_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.ShowPhotoSavedNotification
struct UUI_PhotoMode_C_ShowPhotoSavedNotification_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnCaptureShotGamepad
struct UUI_PhotoMode_C_OnCaptureShotGamepad_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnAdvanced
struct UUI_PhotoMode_C_OnAdvanced_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveIn
struct UUI_PhotoMode_C_OnCameraMoveIn_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveOut
struct UUI_PhotoMode_C_OnCameraMoveOut_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveLeft
struct UUI_PhotoMode_C_OnCameraMoveLeft_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveRight
struct UUI_PhotoMode_C_OnCameraMoveRight_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.Exit Photo Mode Event
struct UUI_PhotoMode_C_Exit_Photo_Mode_Event_Params
{
	class UPopupMenuWidget*                            PopupMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlatePopupButton>                     SelectedButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.ExecuteUbergraph_UI_PhotoMode
struct UUI_PhotoMode_C_ExecuteUbergraph_UI_PhotoMode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PhotoMode.UI_PhotoMode_C.CapturedPhoto__DelegateSignature
struct UUI_PhotoMode_C_CapturedPhoto__DelegateSignature_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.ExitedAdvancedMode__DelegateSignature
struct UUI_PhotoMode_C_ExitedAdvancedMode__DelegateSignature_Params
{
};

// Function UI_PhotoMode.UI_PhotoMode_C.EnteredAdvancedMode__DelegateSignature
struct UUI_PhotoMode_C_EnteredAdvancedMode__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

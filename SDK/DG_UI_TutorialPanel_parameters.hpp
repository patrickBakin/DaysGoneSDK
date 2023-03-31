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

// Function UI_TutorialPanel.UI_TutorialPanel_C.AttemptPause
struct UUI_TutorialPanel_C_AttemptPause_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.SetFullscreen
struct UUI_TutorialPanel_C_SetFullscreen_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsSimple
struct UUI_TutorialPanel_C_SetDetailsSimple_Params
{
	struct FText                                       Content;                                                  // (Parm)
	bool                                               PauseGame;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                CloseButton;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.Init
struct UUI_TutorialPanel_C_Init_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.CountPanels
struct UUI_TutorialPanel_C_CountPanels_Params
{
	TArray<struct FText>                               TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               TargetArray2;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UTexture2D*>                          TargetArray3;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                PanelCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsStandard
struct UUI_TutorialPanel_C_SetDetailsStandard_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Description;                                              // (Parm)
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsMulti
struct UUI_TutorialPanel_C_SetDetailsMulti_Params
{
	struct FText                                       Title;                                                    // (Parm)
	TArray<struct FText>                               Subtitles;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               Descriptions;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UTexture2D*>                          Images;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.SetInvisible
struct UUI_TutorialPanel_C_SetInvisible_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.SetVisible
struct UUI_TutorialPanel_C_SetVisible_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.SetTitle
struct UUI_TutorialPanel_C_SetTitle_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.Construct
struct UUI_TutorialPanel_C_Construct_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.OnWidgetClosed
struct UUI_TutorialPanel_C_OnWidgetClosed_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.RequestClose
struct UUI_TutorialPanel_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.OnSimpleTutorialClosed
struct UUI_TutorialPanel_C_OnSimpleTutorialClosed_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.SetDetailsMulti_New
struct UUI_TutorialPanel_C_SetDetailsMulti_New_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Desc;                                                     // (Parm)
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.Tick
struct UUI_TutorialPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialEnter_K2Node_ComponentBoundEvent_542_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_TutorialPanel_C_BndEvt__StandardTutorialEnter_K2Node_ComponentBoundEvent_542_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialExit_K2Node_ComponentBoundEvent_11_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_TutorialPanel_C_BndEvt__StandardTutorialExit_K2Node_ComponentBoundEvent_11_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__StandardTutorialFadeIn_K2Node_ComponentBoundEvent_16_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_TutorialPanel_C_BndEvt__StandardTutorialFadeIn_K2Node_ComponentBoundEvent_16_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.Dismissed By Player
struct UUI_TutorialPanel_C_Dismissed_By_Player_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.BndEvt__MenuInteract_Continue_K2Node_ComponentBoundEvent_3095_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_TutorialPanel_C_BndEvt__MenuInteract_Continue_K2Node_ComponentBoundEvent_3095_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.OnTutorialClosedPressed
struct UUI_TutorialPanel_C_OnTutorialClosedPressed_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.OnTutorialClosedReleased
struct UUI_TutorialPanel_C_OnTutorialClosedReleased_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.OnConfirmPressed
struct UUI_TutorialPanel_C_OnConfirmPressed_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.OnConfirmReleased
struct UUI_TutorialPanel_C_OnConfirmReleased_Params
{
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.ExecuteUbergraph_UI_TutorialPanel
struct UUI_TutorialPanel_C_ExecuteUbergraph_UI_TutorialPanel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TutorialPanel.UI_TutorialPanel_C.CloseAnimationCompleted__DelegateSignature
struct UUI_TutorialPanel_C_CloseAnimationCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

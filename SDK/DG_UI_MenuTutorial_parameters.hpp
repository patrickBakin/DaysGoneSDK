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

// Function UI_MenuTutorial.UI_MenuTutorial_C.SetAllowedMenus
struct UUI_MenuTutorial_C_SetAllowedMenus_Params
{
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.CheckForStepCompletion
struct UUI_MenuTutorial_C_CheckForStepCompletion_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.NextStep
struct UUI_MenuTutorial_C_NextStep_Params
{
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayTutorialStep
struct UUI_MenuTutorial_C_DisplayTutorialStep_Params
{
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayMenuTutorials
struct UUI_MenuTutorial_C_DisplayMenuTutorials_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.DisplayArrowAnimation
struct UUI_MenuTutorial_C_DisplayArrowAnimation_Params
{
	int                                                Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.Construct
struct UUI_MenuTutorial_C_Construct_Params
{
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.SetupStep
struct UUI_MenuTutorial_C_SetupStep_Params
{
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.BndEvt__Anim_Background_Out_K2Node_ComponentBoundEvent_265_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MenuTutorial_C_BndEvt__Anim_Background_Out_K2Node_ComponentBoundEvent_265_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.BndEvt__Anim_Background_In_K2Node_ComponentBoundEvent_279_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_MenuTutorial_C_BndEvt__Anim_Background_In_K2Node_ComponentBoundEvent_279_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.OnStepAppear
struct UUI_MenuTutorial_C_OnStepAppear_Params
{
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.OnMenuDisplayed
struct UUI_MenuTutorial_C_OnMenuDisplayed_Params
{
	TEnumAsByte<EMenuTypes>                            Displayed_Menu;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.CustomEvent_1
struct UUI_MenuTutorial_C_CustomEvent_1_Params
{
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.ExecuteUbergraph_UI_MenuTutorial
struct UUI_MenuTutorial_C_ExecuteUbergraph_UI_MenuTutorial_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.OnTutorialStep__DelegateSignature
struct UUI_MenuTutorial_C_OnTutorialStep__DelegateSignature_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuTutorial.UI_MenuTutorial_C.OnTutorialComplete__DelegateSignature
struct UUI_MenuTutorial_C_OnTutorialComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

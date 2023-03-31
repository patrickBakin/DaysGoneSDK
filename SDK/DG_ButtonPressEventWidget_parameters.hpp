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

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetCombatPrompt
struct UButtonPressEventWidget_C_SetCombatPrompt_Params
{
	TEnumAsByte<Enum_Combat_Prompts>                   PromptType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.HideMashAnim
struct UButtonPressEventWidget_C_HideMashAnim_Params
{
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.StartFadeOut
struct UButtonPressEventWidget_C_StartFadeOut_Params
{
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.ShowMashAnim
struct UButtonPressEventWidget_C_ShowMashAnim_Params
{
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetHoldPercent
struct UButtonPressEventWidget_C_SetHoldPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.InitMultiLengthMeter
struct UButtonPressEventWidget_C_InitMultiLengthMeter_Params
{
	int                                                NumberPresses;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetPressType
struct UButtonPressEventWidget_C_SetPressType_Params
{
	TEnumAsByte<EButtonPressEventType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetText
struct UButtonPressEventWidget_C_SetText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.Init
struct UButtonPressEventWidget_C_Init_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressEventType>                 PressType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
	float                                              HoldLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MultiLength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_Combat_Prompts>                   CombatPrompt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButtonOpacity
struct UButtonPressEventWidget_C_SetButtonOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButton
struct UButtonPressEventWidget_C_SetButton_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetButtonColor
struct UButtonPressEventWidget_C_SetButtonColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.Construct
struct UButtonPressEventWidget_C_Construct_Params
{
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.SetVisibilityOverride
struct UButtonPressEventWidget_C_SetVisibilityOverride_Params
{
	TEnumAsByte<ESlateVisibility>*                     VisibilityType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.OnAnimationFinished
struct UButtonPressEventWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.ExecuteUbergraph_ButtonPressEventWidget
struct UButtonPressEventWidget_C_ExecuteUbergraph_ButtonPressEventWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonPressEventWidget.ButtonPressEventWidget_C.FadeOutComplete__DelegateSignature
struct UButtonPressEventWidget_C_FadeOutComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

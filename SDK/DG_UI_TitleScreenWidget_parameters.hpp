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

// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.CloseTitleScreen
struct UUI_TitleScreenWidget_C_CloseTitleScreen_Params
{
};

// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.ButtonAnimation
struct UUI_TitleScreenWidget_C_ButtonAnimation_Params
{
};

// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.Construct
struct UUI_TitleScreenWidget_C_Construct_Params
{
};

// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.OnAnimationFinished
struct UUI_TitleScreenWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.ExecuteUbergraph_UI_TitleScreenWidget
struct UUI_TitleScreenWidget_C_ExecuteUbergraph_UI_TitleScreenWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TitleScreenWidget.UI_TitleScreenWidget_C.TitleClosed__DelegateSignature
struct UUI_TitleScreenWidget_C_TitleClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

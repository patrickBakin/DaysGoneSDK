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

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.Init
struct UOptionsMenu_HelpWidget_C_Init_Params
{
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.CreateTextWidgets
struct UOptionsMenu_HelpWidget_C_CreateTextWidgets_Params
{
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.SetCursorPosition
struct UOptionsMenu_HelpWidget_C_SetCursorPosition_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.SetSelected
struct UOptionsMenu_HelpWidget_C_SetSelected_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.Construct
struct UOptionsMenu_HelpWidget_C_Construct_Params
{
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnCancelPressed
struct UOptionsMenu_HelpWidget_C_OnCancelPressed_Params
{
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnWidgetClosed
struct UOptionsMenu_HelpWidget_C_OnWidgetClosed_Params
{
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnUpPressed
struct UOptionsMenu_HelpWidget_C_OnUpPressed_Params
{
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.OnDownPressed
struct UOptionsMenu_HelpWidget_C_OnDownPressed_Params
{
};

// Function OptionsMenu_HelpWidget.OptionsMenu_HelpWidget_C.ExecuteUbergraph_OptionsMenu_HelpWidget
struct UOptionsMenu_HelpWidget_C_ExecuteUbergraph_OptionsMenu_HelpWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

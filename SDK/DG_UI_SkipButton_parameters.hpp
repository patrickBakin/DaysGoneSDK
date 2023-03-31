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

// Function UI_SkipButton.UI_SkipButton_C.UpdateProgress
struct UUI_SkipButton_C_UpdateProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButton.UI_SkipButton_C.DisplayOptionalSkip
struct UUI_SkipButton_C_DisplayOptionalSkip_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButton.UI_SkipButton_C.DisplayStandardSkip
struct UUI_SkipButton_C_DisplayStandardSkip_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButton.UI_SkipButton_C.DisplayCannotSkip
struct UUI_SkipButton_C_DisplayCannotSkip_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButton.UI_SkipButton_C.SetVisible
struct UUI_SkipButton_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButton.UI_SkipButton_C.UpdatePercent
struct UUI_SkipButton_C_UpdatePercent_Params
{
	float                                              SkipPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButton.UI_SkipButton_C.OverrideSkipPosition
struct UUI_SkipButton_C_OverrideSkipPosition_Params
{
};

// Function UI_SkipButton.UI_SkipButton_C.HideBar
struct UUI_SkipButton_C_HideBar_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButton.UI_SkipButton_C.Construct
struct UUI_SkipButton_C_Construct_Params
{
};

// Function UI_SkipButton.UI_SkipButton_C.ExecuteUbergraph_UI_SkipButton
struct UUI_SkipButton_C_ExecuteUbergraph_UI_SkipButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

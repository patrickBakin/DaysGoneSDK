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

// Function UI_DynamicButton.UI_DynamicButton_C.SetDodgeKillVisible
struct UUI_DynamicButton_C_SetDodgeKillVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.HideExtras
struct UUI_DynamicButton_C_HideExtras_Params
{
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetBrutalKillVisible
struct UUI_DynamicButton_C_SetBrutalKillVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetStealthKillVisible
struct UUI_DynamicButton_C_SetStealthKillVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetBlockVisible
struct UUI_DynamicButton_C_SetBlockVisible_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetIndicatorVisible
struct UUI_DynamicButton_C_SetIndicatorVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetMashProgress
struct UUI_DynamicButton_C_SetMashProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetDetailsFromDelegate
struct UUI_DynamicButton_C_SetDetailsFromDelegate_Params
{
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetButtonVisuals
struct UUI_DynamicButton_C_SetButtonVisuals_Params
{
	TEnumAsByte<EControllerInputButton>                ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.DisplaySuccessFailAnim
struct UUI_DynamicButton_C_DisplaySuccessFailAnim_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetDetails
struct UUI_DynamicButton_C_SetDetails_Params
{
	TEnumAsByte<EControllerInputButton>                ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetProgressVisible
struct UUI_DynamicButton_C_SetProgressVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.SetProgress
struct UUI_DynamicButton_C_SetProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.DisplayButtonMashAnimation
struct UUI_DynamicButton_C_DisplayButtonMashAnimation_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.Construct
struct UUI_DynamicButton_C_Construct_Params
{
};

// Function UI_DynamicButton.UI_DynamicButton_C.OnColor_Event
struct UUI_DynamicButton_C_OnColor_Event_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DynamicButton.UI_DynamicButton_C.ExecuteUbergraph_UI_DynamicButton
struct UUI_DynamicButton_C_ExecuteUbergraph_UI_DynamicButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

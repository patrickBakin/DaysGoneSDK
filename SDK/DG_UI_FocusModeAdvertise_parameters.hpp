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

// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.TurnOffCompletely
struct UUI_FocusModeAdvertise_C_TurnOffCompletely_Params
{
};

// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.SetInRangeOfAdvertise
struct UUI_FocusModeAdvertise_C_SetInRangeOfAdvertise_Params
{
	bool*                                              InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.FadeTheAdvertise
struct UUI_FocusModeAdvertise_C_FadeTheAdvertise_Params
{
	bool*                                              FadeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.OnAnimationFinished_Event_1
struct UUI_FocusModeAdvertise_C_OnAnimationFinished_Event_1_Params
{
};

// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.SetDangerAdvertise
struct UUI_FocusModeAdvertise_C_SetDangerAdvertise_Params
{
	bool*                                              IsDanger;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_FocusModeAdvertise.UI_FocusModeAdvertise_C.ExecuteUbergraph_UI_FocusModeAdvertise
struct UUI_FocusModeAdvertise_C_ExecuteUbergraph_UI_FocusModeAdvertise_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

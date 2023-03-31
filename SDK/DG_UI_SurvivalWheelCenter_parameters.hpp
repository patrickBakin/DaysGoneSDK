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

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetSquareAngle
struct UUI_SurvivalWheelCenter_C_SetSquareAngle_Params
{
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.TweenSquareAngle
struct UUI_SurvivalWheelCenter_C_TweenSquareAngle_Params
{
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.MakeLine
struct UUI_SurvivalWheelCenter_C_MakeLine_Params
{
	class UUI_SurvivalWheelCursorLine_C*               Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Init
struct UUI_SurvivalWheelCenter_C_Init_Params
{
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.ResetLines
struct UUI_SurvivalWheelCenter_C_ResetLines_Params
{
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetActive
struct UUI_SurvivalWheelCenter_C_SetActive_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetAngle
struct UUI_SurvivalWheelCenter_C_SetAngle_Params
{
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSubitems;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Construct
struct UUI_SurvivalWheelCenter_C_Construct_Params
{
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Tick
struct UUI_SurvivalWheelCenter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.ExecuteUbergraph_UI_SurvivalWheelCenter
struct UUI_SurvivalWheelCenter_C_ExecuteUbergraph_UI_SurvivalWheelCenter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

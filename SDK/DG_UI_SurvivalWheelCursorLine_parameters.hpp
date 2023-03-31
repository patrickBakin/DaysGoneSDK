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

// Function UI_SurvivalWheelCursorLine.UI_SurvivalWheelCursorLine_C.SetScale
struct UUI_SurvivalWheelCursorLine_C_SetScale_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScaleFrom;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScaleTo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCursorLine.UI_SurvivalWheelCursorLine_C.SetAngle
struct UUI_SurvivalWheelCursorLine_C_SetAngle_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

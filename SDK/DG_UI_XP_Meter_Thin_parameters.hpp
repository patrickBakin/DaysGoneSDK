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

// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.UpdateCurrentXP
struct UUI_XP_Meter_Thin_C_UpdateCurrentXP_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.SetCurrentXP
struct UUI_XP_Meter_Thin_C_SetCurrentXP_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.SetPreviousXP
struct UUI_XP_Meter_Thin_C_SetPreviousXP_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.Construct
struct UUI_XP_Meter_Thin_C_Construct_Params
{
};

// Function UI_XP_Meter_Thin.UI_XP_Meter_Thin_C.ExecuteUbergraph_UI_XP_Meter_Thin
struct UUI_XP_Meter_Thin_C_ExecuteUbergraph_UI_XP_Meter_Thin_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

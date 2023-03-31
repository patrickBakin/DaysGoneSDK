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

// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.GetScale
struct UUI_OptionsMonitorLayout_C_GetScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.GetSpan
struct UUI_OptionsMonitorLayout_C_GetSpan_Params
{
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Init
struct UUI_OptionsMonitorLayout_C_Init_Params
{
};

// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Construct
struct UUI_OptionsMonitorLayout_C_Construct_Params
{
};

// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.SetSelectedDisplay
struct UUI_OptionsMonitorLayout_C_SetSelectedDisplay_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.Update
struct UUI_OptionsMonitorLayout_C_Update_Params
{
};

// Function UI_OptionsMonitorLayout.UI_OptionsMonitorLayout_C.ExecuteUbergraph_UI_OptionsMonitorLayout
struct UUI_OptionsMonitorLayout_C_ExecuteUbergraph_UI_OptionsMonitorLayout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

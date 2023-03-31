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

// Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.SetSelected
struct UHUD_Debug_MissionLoad_Button2_C_SetSelected_Params
{
	bool                                               Selected_;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.SetButtonText
struct UHUD_Debug_MissionLoad_Button2_C_SetButtonText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.Construct
struct UHUD_Debug_MissionLoad_Button2_C_Construct_Params
{
};

// Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.ExecuteUbergraph_HUD_Debug_MissionLoad_Button2
struct UHUD_Debug_MissionLoad_Button2_C_ExecuteUbergraph_HUD_Debug_MissionLoad_Button2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_MissionIcon.UI_MissionIcon_C.SetIsMissionOrTask
struct UUI_MissionIcon_C_SetIsMissionOrTask_Params
{
	bool                                               IsMission;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionIcon.UI_MissionIcon_C.Construct
struct UUI_MissionIcon_C_Construct_Params
{
};

// Function UI_MissionIcon.UI_MissionIcon_C.ExecuteUbergraph_UI_MissionIcon
struct UUI_MissionIcon_C_ExecuteUbergraph_UI_MissionIcon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

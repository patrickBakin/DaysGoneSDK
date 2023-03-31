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

// Function UI_Map_MissionJobSelectedExtraContent.UI_Map_MissionJobSelectedExtraContent_C.DisplayPrompt
struct UUI_Map_MissionJobSelectedExtraContent_C_DisplayPrompt_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Map_MissionJobSelectedExtraContent.UI_Map_MissionJobSelectedExtraContent_C.SetVisualStuff
struct UUI_Map_MissionJobSelectedExtraContent_C_SetVisualStuff_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ObjectiveText;                                            // (Parm)
	bool                                               IsCurrentlyTracked;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendMissionData*                            MissionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               JobData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

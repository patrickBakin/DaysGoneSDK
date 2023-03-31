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

// Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.Set Storylines
struct UUI_ActiveMissionRewardsPanel_C_Set_Storylines_Params
{
	TArray<struct FBendStoryLinesBasicDataForUI>       StoryLines;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.Construct
struct UUI_ActiveMissionRewardsPanel_C_Construct_Params
{
};

// Function UI_ActiveMissionRewardsPanel.UI_ActiveMissionRewardsPanel_C.ExecuteUbergraph_UI_ActiveMissionRewardsPanel
struct UUI_ActiveMissionRewardsPanel_C_ExecuteUbergraph_UI_ActiveMissionRewardsPanel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_StorylineRewardsPanel.UI_StorylineRewardsPanel_C.Populate Rewards
struct UUI_StorylineRewardsPanel_C_Populate_Rewards_Params
{
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_StorylineRewardsPanel.UI_StorylineRewardsPanel_C.Set Storyline
struct UUI_StorylineRewardsPanel_C_Set_Storyline_Params
{
	struct FBendStoryLinesForScripting                 StoryLine;                                                // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

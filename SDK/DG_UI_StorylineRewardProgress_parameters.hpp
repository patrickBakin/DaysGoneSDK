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

// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetStoryline
struct UUI_StorylineRewardProgress_C_SetStoryline_Params
{
	struct FBendStoryLinesBasicDataForUI               StoryLine;                                                // (Parm)
};

// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetProgress
struct UUI_StorylineRewardProgress_C_SetProgress_Params
{
	int                                                Current_Progress;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Target_Progress;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Icon;                                                     // (Parm)
};

// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.SetAccentColor
struct UUI_StorylineRewardProgress_C_SetAccentColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.Construct
struct UUI_StorylineRewardProgress_C_Construct_Params
{
};

// Function UI_StorylineRewardProgress.UI_StorylineRewardProgress_C.ExecuteUbergraph_UI_StorylineRewardProgress
struct UUI_StorylineRewardProgress_C_ExecuteUbergraph_UI_StorylineRewardProgress_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

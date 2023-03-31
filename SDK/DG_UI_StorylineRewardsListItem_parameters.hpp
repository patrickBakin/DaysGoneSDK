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

// Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.Get Unlock Text
struct UUI_StorylineRewardsListItem_C_Get_Unlock_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.Construct
struct UUI_StorylineRewardsListItem_C_Construct_Params
{
};

// Function UI_StorylineRewardsListItem.UI_StorylineRewardsListItem_C.ExecuteUbergraph_UI_StorylineRewardsListItem
struct UUI_StorylineRewardsListItem_C_ExecuteUbergraph_UI_StorylineRewardsListItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

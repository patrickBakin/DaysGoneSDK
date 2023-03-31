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

// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.ResetAll
struct UUI_HUD_StorylineReward_Item_C_ResetAll_Params
{
};

// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.PlaySecondPart
struct UUI_HUD_StorylineReward_Item_C_PlaySecondPart_Params
{
};

// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.SetDetails
struct UUI_HUD_StorylineReward_Item_C_SetDetails_Params
{
	struct FBendStoryLinesBasicDataForUI               StoryLineData;                                            // (Parm)
};

// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.Construct
struct UUI_HUD_StorylineReward_Item_C_Construct_Params
{
};

// Function UI_HUD_StorylineReward_Item.UI_HUD_StorylineReward_Item_C.ExecuteUbergraph_UI_HUD_StorylineReward_Item
struct UUI_HUD_StorylineReward_Item_C_ExecuteUbergraph_UI_HUD_StorylineReward_Item_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

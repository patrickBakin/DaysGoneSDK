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

// Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.Animate
struct UUI_HUD_StorylineUpdate_GridItem_C_Animate_Params
{
};

// Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.SetDetails
struct UUI_HUD_StorylineUpdate_GridItem_C_SetDetails_Params
{
	struct FBendStoryLinesBasicDataForUI               StoryLineData;                                            // (Parm)
};

// Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.Construct
struct UUI_HUD_StorylineUpdate_GridItem_C_Construct_Params
{
};

// Function UI_HUD_StorylineUpdate_GridItem.UI_HUD_StorylineUpdate_GridItem_C.ExecuteUbergraph_UI_HUD_StorylineUpdate_GridItem
struct UUI_HUD_StorylineUpdate_GridItem_C_ExecuteUbergraph_UI_HUD_StorylineUpdate_GridItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

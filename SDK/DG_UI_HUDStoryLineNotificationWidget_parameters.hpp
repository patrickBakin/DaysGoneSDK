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

// Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.SetDetails
struct UUI_HUDStoryLineNotificationWidget_C_SetDetails_Params
{
	struct FBendStoryLinesBasicDataForUI               StoryLine;                                                // (Parm)
};

// Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.Construct
struct UUI_HUDStoryLineNotificationWidget_C_Construct_Params
{
};

// Function UI_HUDStoryLineNotificationWidget.UI_HUDStoryLineNotificationWidget_C.ExecuteUbergraph_UI_HUDStoryLineNotificationWidget
struct UUI_HUDStoryLineNotificationWidget_C_ExecuteUbergraph_UI_HUDStoryLineNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

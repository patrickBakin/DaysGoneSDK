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

// Function UI_Subtitle.UI_Subtitle_C.Construct
struct UUI_Subtitle_C_Construct_Params
{
};

// Function UI_Subtitle.UI_Subtitle_C.Display Cue
struct UUI_Subtitle_C_Display_Cue_Params
{
	struct FBendSubtitleCue                            Cue;                                                      // (Parm)
};

// Function UI_Subtitle.UI_Subtitle_C.Subtitle Complete
struct UUI_Subtitle_C_Subtitle_Complete_Params
{
};

// Function UI_Subtitle.UI_Subtitle_C.Hide Subtitle
struct UUI_Subtitle_C_Hide_Subtitle_Params
{
};

// Function UI_Subtitle.UI_Subtitle_C.Destroy
struct UUI_Subtitle_C_Destroy_Params
{
};

// Function UI_Subtitle.UI_Subtitle_C.ExecuteUbergraph_UI_Subtitle
struct UUI_Subtitle_C_ExecuteUbergraph_UI_Subtitle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

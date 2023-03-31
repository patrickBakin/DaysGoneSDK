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

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.GetCurrentPlaybackTime
struct UUI_SubtitleWidget_C_GetCurrentPlaybackTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.ClearCompletedSubtitles
struct UUI_SubtitleWidget_C_ClearCompletedSubtitles_Params
{
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.FindSubtitleForCharacter
struct UUI_SubtitleWidget_C_FindSubtitleForCharacter_Params
{
	struct FBendSubtitleCue                            BendSubtitleCue;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class UUI_Subtitle_C*                              SubTitle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.JoinString
struct UUI_SubtitleWidget_C_JoinString_Params
{
	TArray<struct FString>                             SourceArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.UpdateSubtitles
struct UUI_SubtitleWidget_C_UpdateSubtitles_Params
{
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.SetDebugString
struct UUI_SubtitleWidget_C_SetDebugString_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.Construct
struct UUI_SubtitleWidget_C_Construct_Params
{
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.ClearSubtitles
struct UUI_SubtitleWidget_C_ClearSubtitles_Params
{
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitle
struct UUI_SubtitleWidget_C_DisplaySubtitle_Params
{
	struct FString*                                    SubTitle;                                                 // (Parm, ZeroConstructor)
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitleCue
struct UUI_SubtitleWidget_C_DisplaySubtitleCue_Params
{
	struct FBendSubtitleCue*                           SubtitleCue;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.Tick
struct UUI_SubtitleWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitleCueArray
struct UUI_SubtitleWidget_C_DisplaySubtitleCueArray_Params
{
	TArray<struct FBendSubtitleCue>*                   SubtitleCueArray;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.KillSubtitles
struct UUI_SubtitleWidget_C_KillSubtitles_Params
{
};

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.ExecuteUbergraph_UI_SubtitleWidget
struct UUI_SubtitleWidget_C_ExecuteUbergraph_UI_SubtitleWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

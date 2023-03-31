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

// Function MediaPlayerWidget.MediaPlayerWidget_C.SetImage
struct UMediaPlayerWidget_C_SetImage_Params
{
	class UMaterial*                                   Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMediaPlayer*                                Movie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaPlayerWidget.MediaPlayerWidget_C.StopSound
struct UMediaPlayerWidget_C_StopSound_Params
{
};

// Function MediaPlayerWidget.MediaPlayerWidget_C.ExecuteUbergraph_MediaPlayerWidget
struct UMediaPlayerWidget_C_ExecuteUbergraph_MediaPlayerWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

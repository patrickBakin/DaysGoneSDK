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

// Function BendMusicManagerInterface.BendMusicManagerInterface_C.EventUpdate
struct UBendMusicManagerInterface_C_EventUpdate_Params
{
	struct FName                                       Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerInterface.BendMusicManagerInterface_C.PlayOverlayMusicRequested
struct UBendMusicManagerInterface_C_PlayOverlayMusicRequested_Params
{
	class UClass*                                      Overlay_Music;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Overlay_Sound_Cue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendMusicManagerInterface.BendMusicManagerInterface_C.PlayEventMusicRequested
struct UBendMusicManagerInterface_C_PlayEventMusicRequested_Params
{
	class UClass*                                      Event_Music;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Event_Sound_Cue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

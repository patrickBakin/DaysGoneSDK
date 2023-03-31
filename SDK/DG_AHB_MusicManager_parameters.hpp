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

// Function AHB_MusicManager.AHB_MusicManager_C.PlayInteractiveMusic
struct UAHB_MusicManager_C_PlayInteractiveMusic_Params
{
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AHB_MusicManager.AHB_MusicManager_C.MusicEventUpdate
struct UAHB_MusicManager_C_MusicEventUpdate_Params
{
	struct FName*                                      Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AHB_MusicManager.AHB_MusicManager_C.OnSetAsCurrentMusicManager
struct UAHB_MusicManager_C_OnSetAsCurrentMusicManager_Params
{
	struct FName*                                      MusicEventName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHB_MusicManager.AHB_MusicManager_C.ExecuteUbergraph_AHB_MusicManager
struct UAHB_MusicManager_C_ExecuteUbergraph_AHB_MusicManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

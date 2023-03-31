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

// Function FIN_MusicManager.FIN_MusicManager_C.PlayNeroStealth
struct UFIN_MusicManager_C_PlayNeroStealth_Params
{
};

// Function FIN_MusicManager.FIN_MusicManager_C.PlayInteractiveMusic
struct UFIN_MusicManager_C_PlayInteractiveMusic_Params
{
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FIN_MusicManager.FIN_MusicManager_C.MusicEventUpdate
struct UFIN_MusicManager_C_MusicEventUpdate_Params
{
	struct FName*                                      Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FIN_MusicManager.FIN_MusicManager_C.OnSetAsCurrentMusicManager
struct UFIN_MusicManager_C_OnSetAsCurrentMusicManager_Params
{
	struct FName*                                      MusicEventName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FIN_MusicManager.FIN_MusicManager_C.ExecuteUbergraph_FIN_MusicManager
struct UFIN_MusicManager_C_ExecuteUbergraph_FIN_MusicManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

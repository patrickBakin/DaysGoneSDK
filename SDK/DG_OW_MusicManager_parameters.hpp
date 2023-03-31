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

// Function OW_MusicManager.OW_MusicManager_C.OW_Restart_Logic
struct UOW_MusicManager_C_OW_Restart_Logic_Params
{
};

// Function OW_MusicManager.OW_MusicManager_C.OW_Start_Logic
struct UOW_MusicManager_C_OW_Start_Logic_Params
{
};

// Function OW_MusicManager.OW_MusicManager_C.PlayInteractiveMusic
struct UOW_MusicManager_C_PlayInteractiveMusic_Params
{
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OW_MusicManager.OW_MusicManager_C.MusicEventUpdate
struct UOW_MusicManager_C_MusicEventUpdate_Params
{
	struct FName*                                      Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OW_MusicManager.OW_MusicManager_C.OnSetAsCurrentMusicManager
struct UOW_MusicManager_C_OnSetAsCurrentMusicManager_Params
{
	struct FName*                                      MusicEventName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_MusicManager.OW_MusicManager_C.OnSaveGameLoadedFromCheckpoint
struct UOW_MusicManager_C_OnSaveGameLoadedFromCheckpoint_Params
{
};

// Function OW_MusicManager.OW_MusicManager_C.OnPostSaveGameLoaded_Event_1
struct UOW_MusicManager_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_MusicManager.OW_MusicManager_C.ExecuteUbergraph_OW_MusicManager
struct UOW_MusicManager_C_ExecuteUbergraph_OW_MusicManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

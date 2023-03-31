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

// Function AWI_MusicManager.AWI_MusicManager_C.PlayInteractiveMusic
struct UAWI_MusicManager_C_PlayInteractiveMusic_Params
{
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AWI_MusicManager.AWI_MusicManager_C.MusicEventUpdate
struct UAWI_MusicManager_C_MusicEventUpdate_Params
{
	struct FName*                                      Event_Name;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AWI_MusicManager.AWI_MusicManager_C.OnSetAsCurrentMusicManager
struct UAWI_MusicManager_C_OnSetAsCurrentMusicManager_Params
{
	struct FName*                                      MusicEventName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AWI_MusicManager.AWI_MusicManager_C.OnPlayerDied
struct UAWI_MusicManager_C_OnPlayerDied_Params
{
	TEnumAsByte<EAIFactionType>*                       KilledByFaction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETypeOfBaseDamage>*                    BaseDamageType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETypeOfDamage>*                        DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AWI_MusicManager.AWI_MusicManager_C.ExecuteUbergraph_AWI_MusicManager
struct UAWI_MusicManager_C_ExecuteUbergraph_AWI_MusicManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

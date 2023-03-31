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

// Function TrophyManager.TrophyManager_C.DebugDumpTrophy
struct UTrophyManager_C_DebugDumpTrophy_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function TrophyManager.TrophyManager_C.TrophyUnlocked
struct UTrophyManager_C_TrophyUnlocked_Params
{
	struct FBendTrophy*                                Trophy;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              DisplayWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateInventorySponge
struct UTrophyManager_C_UpdateInventorySponge_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateGraveRobber
struct UTrophyManager_C_UpdateGraveRobber_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.OnPostSaveGameLoaded_Event_1
struct UTrophyManager_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.BlueprintBindsTrophyManager
struct UTrophyManager_C_BlueprintBindsTrophyManager_Params
{
};

// Function TrophyManager.TrophyManager_C.UpdateGoKickRocks
struct UTrophyManager_C_UpdateGoKickRocks_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.InitializeBlueprintBinds
struct UTrophyManager_C_InitializeBlueprintBinds_Params
{
};

// Function TrophyManager.TrophyManager_C.UpdateSurvivingIsntLiving
struct UTrophyManager_C_UpdateSurvivingIsntLiving_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateLendMeYourEars
struct UTrophyManager_C_UpdateLendMeYourEars_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateDIYOregonian
struct UTrophyManager_C_UpdateDIYOregonian_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateCollectibles
struct UTrophyManager_C_UpdateCollectibles_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateStealthKill
struct UTrophyManager_C_UpdateStealthKill_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateOldReliable
struct UTrophyManager_C_UpdateOldReliable_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateArtOfBikeRepair
struct UTrophyManager_C_UpdateArtOfBikeRepair_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateAllSkills
struct UTrophyManager_C_UpdateAllSkills_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateWelcomeToThePartyPal
struct UTrophyManager_C_UpdateWelcomeToThePartyPal_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateLockerWeaponCounts
struct UTrophyManager_C_UpdateLockerWeaponCounts_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.UpdateEncampmentJobs
struct UTrophyManager_C_UpdateEncampmentJobs_Params
{
	int*                                               AddedCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrophyManager.TrophyManager_C.OnTrophyScreenShotBegin
struct UTrophyManager_C_OnTrophyScreenShotBegin_Params
{
};

// Function TrophyManager.TrophyManager_C.OnTrophyScreenShotEnd
struct UTrophyManager_C_OnTrophyScreenShotEnd_Params
{
};

// Function TrophyManager.TrophyManager_C.ExecuteUbergraph_TrophyManager
struct UTrophyManager_C_ExecuteUbergraph_TrophyManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

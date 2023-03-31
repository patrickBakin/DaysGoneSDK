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

// Function Missions.Missions_C.EndAQWVO
struct AMissions_C_EndAQWVO_Params
{
};

// Function Missions.Missions_C.ReceiveBeginPlay
struct AMissions_C_ReceiveBeginPlay_Params
{
};

// Function Missions.Missions_C.JobEnded
struct AMissions_C_JobEnded_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.MissionCompleted
struct AMissions_C_MissionCompleted_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.OnMissionBegin_MM_Event_1
struct AMissions_C_OnMissionBegin_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.NRS2_Complete
struct AMissions_C_NRS2_Complete_Params
{
};

// Function Missions.Missions_C.TLL2_Complete
struct AMissions_C_TLL2_Complete_Params
{
};

// Function Missions.Missions_C.TLL1_Complete
struct AMissions_C_TLL1_Complete_Params
{
};

// Function Missions.Missions_C.OnJobUnlocked_Event_1
struct AMissions_C_OnJobUnlocked_Event_1_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.DiamondLake_State_02
struct AMissions_C_DiamondLake_State_02_Params
{
};

// Function Missions.Missions_C.DiamondLake_State_00
struct AMissions_C_DiamondLake_State_00_Params
{
};

// Function Missions.Missions_C.OBF_Complete
struct AMissions_C_OBF_Complete_Params
{
};

// Function Missions.Missions_C.OBF_FadedIn
struct AMissions_C_OBF_FadedIn_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Missions.Missions_C.SetBoozerAlive
struct AMissions_C_SetBoozerAlive_Params
{
};

// Function Missions.Missions_C.SetBoozerDead
struct AMissions_C_SetBoozerDead_Params
{
};

// Function Missions.Missions_C.MissionBegin
struct AMissions_C_MissionBegin_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.AWI1_Begin
struct AMissions_C_AWI1_Begin_Params
{
};

// Function Missions.Missions_C.AWI2_Complete
struct AMissions_C_AWI2_Complete_Params
{
};

// Function Missions.Missions_C.AWI2_FadedIn
struct AMissions_C_AWI2_FadedIn_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Missions.Missions_C.OnDemoJumpPoint_Event_1
struct AMissions_C_OnDemoJumpPoint_Event_1_Params
{
	class UDataAsset*                                  JobOrMissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.MilitiaHostilityCheck
struct AMissions_C_MilitiaHostilityCheck_Params
{
	class UDataAsset*                                  JobOrMissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.MUF1_Begin
struct AMissions_C_MUF1_Begin_Params
{
};

// Function Missions.Missions_C.MUF1_FadedIn
struct AMissions_C_MUF1_FadedIn_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Missions.Missions_C.RNA1MUF1TrophyUnlock
struct AMissions_C_RNA1MUF1TrophyUnlock_Params
{
};

// Function Missions.Missions_C.StartEndGameCredits
struct AMissions_C_StartEndGameCredits_Params
{
};

// Function Missions.Missions_C.EnableBGCredits
struct AMissions_C_EnableBGCredits_Params
{
};

// Function Missions.Missions_C.CreditsEnd_Event_1
struct AMissions_C_CreditsEnd_Event_1_Params
{
};

// Function Missions.Missions_C.CompletedStoryMode
struct AMissions_C_CompletedStoryMode_Params
{
};

// Function Missions.Missions_C.OnFadingFinished_MM_Event_1
struct AMissions_C_OnFadingFinished_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Missions.Missions_C.StoryCompleteTutorialWait
struct AMissions_C_StoryCompleteTutorialWait_Params
{
};

// Function Missions.Missions_C.StartEndGameCreditsBegin
struct AMissions_C_StartEndGameCreditsBegin_Params
{
};

// Function Missions.Missions_C.OnPostSaveGameLoaded_Event_1
struct AMissions_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.EndCredits
struct AMissions_C_EndCredits_Params
{
};

// Function Missions.Missions_C.ContinueEndGameCredits
struct AMissions_C_ContinueEndGameCredits_Params
{
};

// Function Missions.Missions_C.FMC1_Complete
struct AMissions_C_FMC1_Complete_Params
{
};

// Function Missions.Missions_C.FIN_Complete
struct AMissions_C_FIN_Complete_Params
{
};

// Function Missions.Missions_C.RewardClosedEvent
struct AMissions_C_RewardClosedEvent_Params
{
	class UObject*                                     AssociatedData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.ResidueTut
struct AMissions_C_ResidueTut_Params
{
};

// Function Missions.Missions_C.ReceivePreSaveGameLoaded
struct AMissions_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Missions.Missions_C.COB3&4 Bike Skin
struct AMissions_C_COB3_4_Bike_Skin_Params
{
};

// Function Missions.Missions_C.ExecuteUbergraph_Missions
struct AMissions_C_ExecuteUbergraph_Missions_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

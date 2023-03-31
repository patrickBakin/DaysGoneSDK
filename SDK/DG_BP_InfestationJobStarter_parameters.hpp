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

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.CheckMissionBlacklist
struct ABP_InfestationJobStarter_C_CheckMissionBlacklist_Params
{
	bool                                               InBlacklistedMission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.CheckForMission
struct ABP_InfestationJobStarter_C_CheckForMission_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.UserConstructionScript
struct ABP_InfestationJobStarter_C_UserConstructionScript_Params
{
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.LeftZoneVOComplete
struct ABP_InfestationJobStarter_C_LeftZoneVOComplete_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.LeftZone
struct ABP_InfestationJobStarter_C_LeftZone_Params
{
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FirstEnterZoneVOComplete
struct ABP_InfestationJobStarter_C_FirstEnterZoneVOComplete_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FirstEnterZone
struct ABP_InfestationJobStarter_C_FirstEnterZone_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReenterZoneVOComplete
struct ABP_InfestationJobStarter_C_ReenterZoneVOComplete_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReenterZone
struct ABP_InfestationJobStarter_C_ReenterZone_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FinishedZoneVOComplete
struct ABP_InfestationJobStarter_C_FinishedZoneVOComplete_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FinishedZone
struct ABP_InfestationJobStarter_C_FinishedZone_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReceiveBeginPlay
struct ABP_InfestationJobStarter_C_ReceiveBeginPlay_Params
{
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.StartInfestationJob
struct ABP_InfestationJobStarter_C_StartInfestationJob_Params
{
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnMapTaken_Event
struct ABP_InfestationJobStarter_C_OnMapTaken_Event_Params
{
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnActorBeginOverlap_Event_1
struct ABP_InfestationJobStarter_C_OnActorBeginOverlap_Event_1_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnActorEndOverlap_Event_1
struct ABP_InfestationJobStarter_C_OnActorEndOverlap_Event_1_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnZoneCleared_Event_1
struct ABP_InfestationJobStarter_C_OnZoneCleared_Event_1_Params
{
	class ABendNestingZoneActor*                       ZoneActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnPostSaveGameLoaded_Event_1
struct ABP_InfestationJobStarter_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.TimerUnlockJob
struct ABP_InfestationJobStarter_C_TimerUnlockJob_Params
{
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReceivePreSaveGameLoaded
struct ABP_InfestationJobStarter_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnJobEnded_JobManager
struct ABP_InfestationJobStarter_C_OnJobEnded_JobManager_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.TrophyCheck
struct ABP_InfestationJobStarter_C_TrophyCheck_Params
{
};

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ExecuteUbergraph_BP_InfestationJobStarter
struct ABP_InfestationJobStarter_C_ExecuteUbergraph_BP_InfestationJobStarter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

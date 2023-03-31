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

// Function BP_JobManager.BP_JobManager_C.SpawnJobScriptTemp
struct ABP_JobManager_C_SpawnJobScriptTemp_Params
{
	struct FBendJobData                                JobsData;                                                 // (Parm)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               yay;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.FinishJobLoadTemp
struct ABP_JobManager_C_FinishJobLoadTemp_Params
{
	class UClass*                                      JobScriptClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Didit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.ActivateJobTemp
struct ABP_JobManager_C_ActivateJobTemp_Params
{
	bool                                               IgnoreTheState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DoneIt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.GiveJobRewardsNew
struct ABP_JobManager_C_GiveJobRewardsNew_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.GetCurrentFocusedJob
struct ABP_JobManager_C_GetCurrentFocusedJob_Params
{
	class UJobClassInfo*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.DebugCompleteAllJobObjectives
struct ABP_JobManager_C_DebugCompleteAllJobObjectives_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.PullAndStoreJobDataTableInfo
struct ABP_JobManager_C_PullAndStoreJobDataTableInfo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.StoreJobPreReqMissionTriggers
struct ABP_JobManager_C_StoreJobPreReqMissionTriggers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.DebugSetJobActive
struct ABP_JobManager_C_DebugSetJobActive_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideInt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.DebugSetAllJobPreReqsToComplete
struct ABP_JobManager_C_DebugSetAllJobPreReqsToComplete_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncludeSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.PauseAllActiveJobsForMission
struct ABP_JobManager_C_PauseAllActiveJobsForMission_Params
{
	bool*                                              Pause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.FinishEndingJob
struct ABP_JobManager_C_FinishEndingJob_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionStates>*                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.UnPauseJob
struct ABP_JobManager_C_UnPauseJob_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.PauseJob
struct ABP_JobManager_C_PauseJob_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PauseBecauseMissionActive;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.GetJobScript
struct ABP_JobManager_C_GetJobScript_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendJobScript*                              TheScript;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.UnlockJobAtID
struct ABP_JobManager_C_UnlockJobAtID_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.StartJobAtID
struct ABP_JobManager_C_StartJobAtID_Params
{
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              OnlyLoadIfUnlocked;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseSelectionScreen;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.UserConstructionScript
struct ABP_JobManager_C_UserConstructionScript_Params
{
};

// Function BP_JobManager.BP_JobManager_C.OnFinishLoad
struct ABP_JobManager_C_OnFinishLoad_Params
{
	class UClass**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.ReceivePostSaveGameLoaded
struct ABP_JobManager_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.ReceivePreSaveGameLoaded
struct ABP_JobManager_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.ActivateJobAtIndex
struct ABP_JobManager_C_ActivateJobAtIndex_Params
{
	bool*                                              IgnoreState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo**                              JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.UnloadListedLevels
struct ABP_JobManager_C_UnloadListedLevels_Params
{
};

// Function BP_JobManager.BP_JobManager_C.ReceiveEndPlay
struct ABP_JobManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.BindjobScreenClosing
struct ABP_JobManager_C_BindjobScreenClosing_Params
{
};

// Function BP_JobManager.BP_JobManager_C.SpawnAndSetupJobScript
struct ABP_JobManager_C_SpawnAndSetupJobScript_Params
{
	struct FBendJobData*                               JobData;                                                  // (Parm)
	class UClass**                                     ScriptClassReference;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobManager.BP_JobManager_C.ExecuteUbergraph_BP_JobManager
struct ABP_JobManager_C_ExecuteUbergraph_BP_JobManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

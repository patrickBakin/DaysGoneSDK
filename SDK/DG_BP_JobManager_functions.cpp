// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_JobManager.BP_JobManager_C.SpawnJobScriptTemp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendJobData            JobsData                       (Parm)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           yay                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::SpawnJobScriptTemp(const struct FBendJobData& JobsData, class UClass* ActorClass, bool* yay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.SpawnJobScriptTemp");

	ABP_JobManager_C_SpawnJobScriptTemp_Params params;
	params.JobsData = JobsData;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (yay != nullptr)
		*yay = params.yay;
}


// Function BP_JobManager.BP_JobManager_C.FinishJobLoadTemp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  JobScriptClass                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Didit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::FinishJobLoadTemp(class UClass* JobScriptClass, bool* Didit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.FinishJobLoadTemp");

	ABP_JobManager_C_FinishJobLoadTemp_Params params;
	params.JobScriptClass = JobScriptClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Didit != nullptr)
		*Didit = params.Didit;
}


// Function BP_JobManager.BP_JobManager_C.ActivateJobTemp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IgnoreTheState                 (Parm, ZeroConstructor, IsPlainOldData)
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DoneIt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::ActivateJobTemp(bool IgnoreTheState, class UJobClassInfo* JobID, bool* DoneIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.ActivateJobTemp");

	ABP_JobManager_C_ActivateJobTemp_Params params;
	params.IgnoreTheState = IgnoreTheState;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoneIt != nullptr)
		*DoneIt = params.DoneIt;
}


// Function BP_JobManager.BP_JobManager_C.GiveJobRewardsNew
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::GiveJobRewardsNew(class UJobClassInfo** JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.GiveJobRewardsNew");

	ABP_JobManager_C_GiveJobRewardsNew_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.GetCurrentFocusedJob
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UJobClassInfo*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJobClassInfo* ABP_JobManager_C::GetCurrentFocusedJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.GetCurrentFocusedJob");

	ABP_JobManager_C_GetCurrentFocusedJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.DebugCompleteAllJobObjectives
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::DebugCompleteAllJobObjectives(class UJobClassInfo** JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.DebugCompleteAllJobObjectives");

	ABP_JobManager_C_DebugCompleteAllJobObjectives_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.PullAndStoreJobDataTableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::PullAndStoreJobDataTableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.PullAndStoreJobDataTableInfo");

	ABP_JobManager_C_PullAndStoreJobDataTableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.StoreJobPreReqMissionTriggers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::StoreJobPreReqMissionTriggers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.StoreJobPreReqMissionTriggers");

	ABP_JobManager_C_StoreJobPreReqMissionTriggers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.DebugSetJobActive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideInt                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::DebugSetJobActive(class UJobClassInfo** JobID, int* OverrideInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.DebugSetJobActive");

	ABP_JobManager_C_DebugSetJobActive_Params params;
	params.JobID = JobID;
	params.OverrideInt = OverrideInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.DebugSetAllJobPreReqsToComplete
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncludeSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::DebugSetAllJobPreReqsToComplete(class UJobClassInfo** JobID, bool* IncludeSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.DebugSetAllJobPreReqsToComplete");

	ABP_JobManager_C_DebugSetAllJobPreReqsToComplete_Params params;
	params.JobID = JobID;
	params.IncludeSelf = IncludeSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.PauseAllActiveJobsForMission
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Pause                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::PauseAllActiveJobsForMission(bool* Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.PauseAllActiveJobsForMission");

	ABP_JobManager_C_PauseAllActiveJobsForMission_Params params;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.FinishEndingJob
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionStates>*   State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::FinishEndingJob(class UJobClassInfo** JobID, TEnumAsByte<EMissionStates>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.FinishEndingJob");

	ABP_JobManager_C_FinishEndingJob_Params params;
	params.JobID = JobID;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.UnPauseJob
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::UnPauseJob(class UJobClassInfo** JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.UnPauseJob");

	ABP_JobManager_C_UnPauseJob_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.PauseJob
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PauseBecauseMissionActive      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::PauseJob(class UJobClassInfo** JobID, bool* PauseBecauseMissionActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.PauseJob");

	ABP_JobManager_C_PauseJob_Params params;
	params.JobID = JobID;
	params.PauseBecauseMissionActive = PauseBecauseMissionActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.GetJobScript
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// class ABendJobScript*          TheScript                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::GetJobScript(class UJobClassInfo** JobID, class ABendJobScript** TheScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.GetJobScript");

	ABP_JobManager_C_GetJobScript_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheScript != nullptr)
		*TheScript = params.TheScript;
}


// Function BP_JobManager.BP_JobManager_C.UnlockJobAtID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::UnlockJobAtID(class UJobClassInfo** JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.UnlockJobAtID");

	ABP_JobManager_C_UnlockJobAtID_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.StartJobAtID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          OnlyLoadIfUnlocked             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseSelectionScreen             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JobManager_C::StartJobAtID(class UJobClassInfo** JobID, bool* OnlyLoadIfUnlocked, bool* UseSelectionScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.StartJobAtID");

	ABP_JobManager_C_StartJobAtID_Params params;
	params.JobID = JobID;
	params.OnlyLoadIfUnlocked = OnlyLoadIfUnlocked;
	params.UseSelectionScreen = UseSelectionScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JobManager.BP_JobManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_JobManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.UserConstructionScript");

	ABP_JobManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.OnFinishLoad
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::OnFinishLoad(class UClass** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.OnFinishLoad");

	ABP_JobManager_C_OnFinishLoad_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.ReceivePostSaveGameLoaded");

	ABP_JobManager_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.ReceivePreSaveGameLoaded");

	ABP_JobManager_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.ActivateJobAtIndex
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IgnoreState                    (Parm, ZeroConstructor, IsPlainOldData)
// class UJobClassInfo**          JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::ActivateJobAtIndex(bool* IgnoreState, class UJobClassInfo** JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.ActivateJobAtIndex");

	ABP_JobManager_C_ActivateJobAtIndex_Params params;
	params.IgnoreState = IgnoreState;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.UnloadListedLevels
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_JobManager_C::UnloadListedLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.UnloadListedLevels");

	ABP_JobManager_C_UnloadListedLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.ReceiveEndPlay");

	ABP_JobManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.BindjobScreenClosing
// (BlueprintCallable, BlueprintEvent)

void ABP_JobManager_C::BindjobScreenClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.BindjobScreenClosing");

	ABP_JobManager_C_BindjobScreenClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.SpawnAndSetupJobScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendJobData*           JobData                        (Parm)
// class UClass**                 ScriptClassReference           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::SpawnAndSetupJobScript(struct FBendJobData* JobData, class UClass** ScriptClassReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.SpawnAndSetupJobScript");

	ABP_JobManager_C_SpawnAndSetupJobScript_Params params;
	params.JobData = JobData;
	params.ScriptClassReference = ScriptClassReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JobManager.BP_JobManager_C.ExecuteUbergraph_BP_JobManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_JobManager_C::ExecuteUbergraph_BP_JobManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JobManager.BP_JobManager_C.ExecuteUbergraph_BP_JobManager");

	ABP_JobManager_C_ExecuteUbergraph_BP_JobManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

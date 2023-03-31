#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_JobManager.BP_JobManager_C
// 0x0010 (0x0668 - 0x0658)
class ABP_JobManager_C : public ABendJobManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_JobManager.BP_JobManager_C");
		return ptr;
	}


	void SpawnJobScriptTemp(const struct FBendJobData& JobsData, class UClass* ActorClass, bool* yay);
	void FinishJobLoadTemp(class UClass* JobScriptClass, bool* Didit);
	void ActivateJobTemp(bool IgnoreTheState, class UJobClassInfo* JobID, bool* DoneIt);
	bool GiveJobRewardsNew(class UJobClassInfo** JobID);
	class UJobClassInfo* GetCurrentFocusedJob();
	bool DebugCompleteAllJobObjectives(class UJobClassInfo** JobID);
	bool PullAndStoreJobDataTableInfo();
	bool StoreJobPreReqMissionTriggers();
	bool DebugSetJobActive(class UJobClassInfo** JobID, int* OverrideInt);
	bool DebugSetAllJobPreReqsToComplete(class UJobClassInfo** JobID, bool* IncludeSelf);
	bool PauseAllActiveJobsForMission(bool* Pause);
	bool FinishEndingJob(class UJobClassInfo** JobID, TEnumAsByte<EMissionStates>* State);
	bool UnPauseJob(class UJobClassInfo** JobID);
	bool PauseJob(class UJobClassInfo** JobID, bool* PauseBecauseMissionActive);
	void GetJobScript(class UJobClassInfo** JobID, class ABendJobScript** TheScript);
	bool UnlockJobAtID(class UJobClassInfo** JobID);
	bool StartJobAtID(class UJobClassInfo** JobID, bool* OnlyLoadIfUnlocked, bool* UseSelectionScreen);
	void UserConstructionScript();
	void OnFinishLoad(class UClass** Actor);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ActivateJobAtIndex(bool* IgnoreState, class UJobClassInfo** JobID);
	void UnloadListedLevels();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BindjobScreenClosing();
	void SpawnAndSetupJobScript(struct FBendJobData* JobData, class UClass** ScriptClassReference);
	void ExecuteUbergraph_BP_JobManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

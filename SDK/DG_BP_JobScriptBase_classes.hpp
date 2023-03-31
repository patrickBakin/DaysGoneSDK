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

// BlueprintGeneratedClass BP_JobScriptBase.BP_JobScriptBase_C
// 0x0051 (0x04B1 - 0x0460)
class ABP_JobScriptBase_C : public ABendJobScript
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        Mini_MapMarker;                                           // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RegionColor;                                              // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IntroducedJob;                                            // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	float                                              CurrentProgress;                                          // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFocus;                                                 // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                DisplayIndex;                                             // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initializing;                                             // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastIsIsNewObjective;                                     // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastUpdateIsCounterUpdate;                                // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x049B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    JobObjUpdateTelemetry;                                    // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               NeverTurnObjectivesVisible;                               // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_JobScriptBase.BP_JobScriptBase_C");
		return ptr;
	}


	bool AttemptToPlayLateVO();
	bool SetupLateVO();
	bool ChangeJobInWorldMarkerVisibility(struct FName* ObjIdentifier, int* MapIconIndex, bool* Hide);
	void AddPathToObjective(bool* FoundPath);
	bool UpdateObjectiveToLocked(struct FBendJobObjectives* Objective, int* Index, bool* ForcedChange);
	bool UpdateObjectiveToComplete(struct FBendJobObjectives* Objective, int* Index, bool* ForcedChange);
	bool UpdateObjectiveToFailed(struct FBendJobObjectives* Objective, int* Index, bool* ForcedChange);
	bool UpdateObjectiveToUnlocked(struct FBendJobObjectives* Objective, int* Index, bool* ForcedChange);
	void GetIsCurrentlyInScreenQue(bool* InQue, bool* CurrentDisplay);
	bool TryRemoveObjectiveFromScreen(TEnumAsByte<EObjectiveStates>* NewState, int* ObjectiveIndex);
	bool TryAddObjectiveToScreen(struct FText* NewText, bool* sideObjective, int* ObjectiveIndex);
	bool SendGenericJobScriptMessage(struct FString* Message);
	bool GoBackToJobObjectiveStage(int* TheStage);
	void ForceObjectiveStates();
	void GetCurrentCounterCount(struct FName* ObjIdentifier, int* TheCount);
	void GetObjectiveState(struct FName* ObjIdentifier, TEnumAsByte<EObjectiveStates>* CurrentState);
	bool AttachJobMapMarkerToItem(struct FName* ObjIdentifier, int* MapIconIndex, class AActor** TheActor, struct FVector* Offset);
	bool ChangeJobMiniMapLocation(struct FName* ObjIdentifier, int* MapIconIndex, struct FVector* NewLocation);
	bool DetachJobMapMarker(struct FName* ObjIdentifier, int* MapIconIndex);
	bool UpdateObjectiveText(struct FName* ObjIdentifier, struct FText* NewFText, bool* DisplayToScreen);
	bool ChangeJobMapMarkerType(struct FName* ObjIdentifier, int* MapIconIndex, bool* IsObjectiveRegion, float* RegionSize);
	void GetActiveJobObjectivesData(TArray<struct FBendJobObjectives>* Objectives);
	bool ChangeJobMiniMapMarkerVisibility(struct FName* ObjIdentifier, int* MapIconIndex, bool* HideOnMap, bool* HideOnMiniMap);
	bool OverrideJobMapImages(struct FName* ObjIdentifier, bool* OverrideAllInObjective, int* MapIconIndex, class UTexture2D** OverrideIcon, class UTexture2D** OverrideImage);
	bool StoreMapMarkers(TArray<class UChildActorComponent*>* MapMarkers);
	bool PauseTheJobScript(bool* Pause);
	bool MarkJobAsActiveFocus(bool* TheFocus);
	void SetUpMapMarkersForObjective(bool* AddMarkers, int* ObjectiveIndex, struct FText* ObjDescriptionText, TArray<struct FBendJobObjectiveMarkers>* MarkerData, TArray<struct FBendJobObjectiveMarkers>* NewMarkerData);
	bool UpdateJobObjectiveProgression();
	bool StoreJobScriptVariables(class UJobClassInfo** JobsID, int* OverrideIndex);
	bool CompleteTheJob();
	bool FailTheJob();
	bool UpdateJobObjectiveCounter(struct FName* ObjIdentifier, bool* IncrementOne, int* CustomCount, bool* DisplayToScreen);
	bool UpdateJobObjectiveStatus(struct FName* ObjIdentifier, TEnumAsByte<EObjectiveStates>* ObjState);
	bool InitJobObjectives();
	bool InitializeJob(TArray<class UChildActorComponent*>* MiniMapMarkers, bool* EndWhenObjectivesComplete);
	void UserConstructionScript();
	void GlobalObjectHandler(class AActor* CurrentlySpawnedRef, const struct FTransform& OriginalLocation);
	void ReceiveBeginPlay();
	void GlobalObjectTick();
	void RemoveGlobalObject(class AActor* RefToRemove);
	void I_InitializeJobScript();
	void AttachJobMapMarkerToPawn(struct FName* ObjIdentifier, int* MapIconIndex, class ABendPawn** ThePawn, bool* HideOnDeathOrDespawn, bool* DetachOnDeath, struct FVector* Offset);
	void OnDiedOrDestroyed_Event_1(class ABendPawn* Pawn, bool bDied);
	void StartBindingTrack(bool ShouldStart);
	void TimerCheckForTrackedJob();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void LoadInImages();
	void BindTimeChange();
	void HourChanged(int Hour);
	void AsynchLoad(TAssetPtr<class UObject> ObjectAssetPtr);
	void OnNewMissionOrJobTracked(class UObject* JobOrMissionData);
	void BindHighlightAllWhenNothingTracked();
	void ExecuteUbergraph_BP_JobScriptBase(int EntryPoint);
	void JobObjUpdateTelemetry__DelegateSignature(const struct FName& JobID, const struct FName& ObjectiveID, TEnumAsByte<EObjectiveStates> NewState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

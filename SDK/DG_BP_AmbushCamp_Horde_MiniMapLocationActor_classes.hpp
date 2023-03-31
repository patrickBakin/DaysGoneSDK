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

// BlueprintGeneratedClass BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C
// 0x0064 (0x03AC - 0x0348)
class ABP_AmbushCamp_Horde_MiniMapLocationActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMiniMapLocationComponent*                   MiniMapLocation;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendBunkerData*                             BunkerData;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Discovered;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UJobClassInfo*                               JobID;                                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EMissionIDs>>                   BlacklistedMissions;                                      // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowMapMarker;                                            // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class UBendMissionData*                            MissionCompletePrereq;                                    // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               AutoActivateWhenJobComplete;                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                Timer;                                                    // 0x03A8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C");
		return ptr;
	}


	void ShowTutorial(class UUI_TutorialPanel_C** Widget);
	void CheckHordePrereqs(bool* HordeConditionsCleared);
	bool CheckForMission(TEnumAsByte<EMissionIDs> MissionID);
	void CheckMissionBlacklist(bool* InBlacklistedMission);
	void MapIconState(bool Visible);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMapTaken_Event();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature();
	void OnBeginOverlap_BendSphere();
	void StartHordeJob(bool ViaAmbush);
	void OnJobComplete(class UJobClassInfo* JobID, bool Failed);
	void OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID);
	void DemoJump(class UDataAsset* JobOrMissionID);
	void TimerUnlockJob();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_BP_AmbushCamp_Horde_MiniMapLocationActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

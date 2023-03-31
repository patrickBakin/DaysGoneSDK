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

// BlueprintGeneratedClass BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C
// 0x005C (0x04CC - 0x0470)
class ABP_AmbushCamp_NERO_MiniMapLocationActor_C : public AMapLocationFastTravelActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendBunkerData*                             BunkerData;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendNeroCheckpointData*                     NEROData;                                                 // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LocationImage;                                            // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocationDescription;                                      // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EMissionIDs>>                   BlacklistedMissions;                                      // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UJobClassInfo*                               JobID;                                                    // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               INDLocation;                                              // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BikeChaseActive;                                          // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TopRegion;                                                // 0x04C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MiddleRegion;                                             // 0x04C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BottomRegion;                                             // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	struct FTimerHandle                                Timer;                                                    // 0x04C8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C");
		return ptr;
	}


	void UpdateFastTravelLocation(bool FastTravelAvailable);
	void CheckMissionBlacklist(bool* InBlacklistedMission);
	bool CheckForMission(TEnumAsByte<EMissionIDs> MissionID);
	void MapIconState(bool Visible, bool enable);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMapTaken_Event();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature();
	void OnCheckpointDiscovered_Event_1(class UBendNeroCheckpointData* Checkpoint);
	void StartNEROJob(bool PlayVO);
	void ProgressINDObjective(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void ArriveVO();
	void OnNeroCheckpointInjectorUsed_Event_1(class UBendNeroCheckpointData* Checkpoint);
	void BikeChaseStarted();
	void BikeChaseEnded();
	void TimerUnlockJob();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_BP_AmbushCamp_NERO_MiniMapLocationActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

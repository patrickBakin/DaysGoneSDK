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

// BlueprintGeneratedClass BP_InfestationJobStarter.BP_InfestationJobStarter_C
// 0x0054 (0x039C - 0x0348)
class ABP_InfestationJobStarter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UJobClassInfo*                               JobID;                                                    // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendNestingZone*                            BendNestingZone;                                          // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EMissionIDs>>                   BlacklistedMissions;                                      // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               OnlyLoadJobIfUnlocked;                                    // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UBendBunkerData*                             BunkerData;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendNestingZoneActor*                       BendNestingZoneActor;                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData)
	bool                                               PlayVO;                                                   // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	struct FTimerHandle                                TutorialTimer;                                            // 0x0394(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Timer;                                                    // 0x0398(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InfestationJobStarter.BP_InfestationJobStarter_C");
		return ptr;
	}


	void CheckMissionBlacklist(bool* InBlacklistedMission);
	bool CheckForMission(TEnumAsByte<EMissionIDs> MissionID);
	void UserConstructionScript();
	void LeftZoneVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void LeftZone();
	void FirstEnterZoneVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void FirstEnterZone(bool Condition);
	void ReenterZoneVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void ReenterZone(bool Condition);
	void FinishedZoneVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void FinishedZone(bool Condition);
	void ReceiveBeginPlay();
	void StartInfestationJob();
	void OnMapTaken_Event();
	void OnActorBeginOverlap_Event_1(class AActor* OtherActor);
	void OnActorEndOverlap_Event_1(class AActor* OtherActor);
	void OnZoneCleared_Event_1(class ABendNestingZoneActor* ZoneActor);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void TimerUnlockJob();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void OnJobEnded_JobManager(class UJobClassInfo* JobID, bool Failed);
	void TrophyCheck();
	void ExecuteUbergraph_BP_InfestationJobStarter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

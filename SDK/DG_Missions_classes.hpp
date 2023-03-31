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

// BlueprintGeneratedClass Missions.Missions_C
// 0x0014 (0x036C - 0x0358)
class AMissions_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_ScrollingCredits_C*                      CreditsWidget;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ResTutTimer;                                              // 0x0368(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Missions.Missions_C");
		return ptr;
	}


	void EndAQWVO();
	void ReceiveBeginPlay();
	void JobEnded(class UJobClassInfo* JobID, bool Failed);
	void MissionCompleted(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void NRS2_Complete();
	void TLL2_Complete();
	void TLL1_Complete();
	void OnJobUnlocked_Event_1(class UJobClassInfo* JobID);
	void DiamondLake_State_02();
	void DiamondLake_State_00();
	void OBF_Complete();
	void OBF_FadedIn(const struct FString& Message);
	void SetBoozerAlive();
	void SetBoozerDead();
	void MissionBegin(TEnumAsByte<EMissionIDs> MissionID);
	void AWI1_Begin();
	void AWI2_Complete();
	void AWI2_FadedIn(const struct FString& Message);
	void OnDemoJumpPoint_Event_1(class UDataAsset* JobOrMissionID);
	void MilitiaHostilityCheck(class UDataAsset* JobOrMissionID);
	void MUF1_Begin();
	void MUF1_FadedIn(const struct FString& Message);
	void RNA1MUF1TrophyUnlock();
	void StartEndGameCredits();
	void EnableBGCredits();
	void CreditsEnd_Event_1();
	void CompletedStoryMode();
	void OnFadingFinished_MM_Event_1(const struct FString& Message);
	void StoryCompleteTutorialWait();
	void StartEndGameCreditsBegin();
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void EndCredits();
	void ContinueEndGameCredits();
	void FMC1_Complete();
	void FIN_Complete();
	void RewardClosedEvent(class UObject* AssociatedData);
	void ResidueTut();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void COB3_4_Bike_Skin();
	void ExecuteUbergraph_Missions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

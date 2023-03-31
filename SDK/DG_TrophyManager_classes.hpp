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

// BlueprintGeneratedClass TrophyManager.TrophyManager_C
// 0x0014 (0x0104 - 0x00F0)
class UTrophyManager_C : public UBendTrophyManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSkillManager*                           SkillManager;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SkillsCount;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrophyManager.TrophyManager_C");
		return ptr;
	}


	void DebugDumpTrophy(const struct FGameplayTag& Tag);
	void TrophyUnlocked(struct FBendTrophy* Trophy, bool* DisplayWidget);
	void UpdateInventorySponge(int* AddedCount);
	void UpdateGraveRobber(int* AddedCount);
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void BlueprintBindsTrophyManager();
	void UpdateGoKickRocks(int* AddedCount);
	void InitializeBlueprintBinds();
	void UpdateSurvivingIsntLiving(int* AddedCount);
	void UpdateLendMeYourEars(int* AddedCount);
	void UpdateDIYOregonian(int* AddedCount);
	void UpdateCollectibles(int* AddedCount);
	void UpdateStealthKill(int* AddedCount);
	void UpdateOldReliable(int* AddedCount);
	void UpdateArtOfBikeRepair(int* AddedCount);
	void UpdateAllSkills(int* AddedCount);
	void UpdateWelcomeToThePartyPal(int* AddedCount);
	void UpdateLockerWeaponCounts(int* AddedCount);
	void UpdateEncampmentJobs(int* AddedCount);
	void OnTrophyScreenShotBegin();
	void OnTrophyScreenShotEnd();
	void ExecuteUbergraph_TrophyManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

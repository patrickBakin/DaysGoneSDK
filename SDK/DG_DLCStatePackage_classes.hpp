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

// BlueprintGeneratedClass DLCStatePackage.DLCStatePackage_C
// 0x0030 (0x03E0 - 0x03B0)
class ADLCStatePackage_C : public ABP_TelemetryPackageBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ScoreManager_C*                          CurrentScoreManager;                                      // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        MedalArray;                                               // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ScoresAndMedalsArray;                                     // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DLCStatePackage.DLCStatePackage_C");
		return ptr;
	}


	void UserConstructionScript();
	void ChallengeStartedCall();
	void ChallengeRestartedCall(TEnumAsByte<EMissionIDs> MissionID);
	void ChallengeFailedCall(TEnumAsByte<EMissionIDs> MissionID);
	void ChallengeCompletedCall(TEnumAsByte<EMissionIDs> MissionID);
	void AddPlayerChosenLoadout();
	void OnPurchaseCall(const struct FGameplayTag& ItemTag, int ItemLevel, int Reputation, int ShopPoints);
	void OnComboFinishedCall(int ComboCount);
	void ChallengeQuitToMainCall(TEnumAsByte<EMissionIDs> MissionID);
	void OnScoreIncreaseCall(const struct FGameplayTag& GameplayTag, int Score);
	void OnMedalIncreasedCall(int SubObjectiveIndex, int MedalIndex);
	void CollateScoresAndMedals();
	void MediumTickEvents();
	void ShortestTickEvents();
	void LongTickEvents();
	void ReceiveBeginPlay();
	void SetCurrentScoreManager(class ABP_ScoreManager_C* NewScoreManager);
	void FailedToFindMetaManager();
	void OnItemPurchased(const struct FGameplayTag& ItemTag, int ItemLevel, int Reputation, int ShopPoints);
	void ReCheckDLCUIManager();
	void OnDLCChallengeComplete(TEnumAsByte<EMissionIDs> MissionID);
	void OnDLCChallengeFail(TEnumAsByte<EMissionIDs> MissionID);
	void OnDLCChallengeQuitToMainMenu(TEnumAsByte<EMissionIDs> MissionID);
	void OnDlcChallengeRetry(TEnumAsByte<EMissionIDs> MissionID);
	void OnComboComplete(int ComboCountOnComplete);
	void OnScoreIncrease(const struct FGameplayTag& GameplayTag, int ScoreEvent);
	void OnMedalIncrease(int SubObjectiveIndex, int SubObjectiveMedal);
	void ExecuteUbergraph_DLCStatePackage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

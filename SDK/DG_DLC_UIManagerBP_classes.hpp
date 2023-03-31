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

// BlueprintGeneratedClass DLC_UIManagerBP.DLC_UIManagerBP_C
// 0x0160 (0x04F8 - 0x0398)
class ADLC_UIManagerBP_C : public ADLCUIManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               SubChallengeTitles;                                       // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EDLCChallengeRank>>             SubChallengeAwards;                                       // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GoldPoints;                                               // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SilverPoints;                                             // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BronzePoints;                                             // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     LastPatchAward;                                           // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<EDLCChallengeRank>>             PlayerSubchallengeRanks;                                  // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        PlayerSubchallengeScores;                                 // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       StickyScoreEventTags;                                     // 0x03F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UCombatHitCounter_C*>                 StickyScoreWidgets;                                       // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        StickyScoreTotals;                                        // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      StickyScoreLastTime;                                      // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           StickyScorePositions;                                     // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       StickyScoreEventTags_Air;                                 // 0x0458(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       StickyScoreEventTags_Drift;                               // 0x0478(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       StickyScoreEventTags_Boost;                               // 0x0498(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ScoreGainOffsets;                                         // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ScoreGainOffsetIndex;                                     // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     RankBeforeTally;                                          // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	int                                                RepRankBeforeTally;                                       // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasCompletedAnyChallengesPreTally;                        // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChallengeCompleteCalled;                                 // 0x04D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04D6(0x0002) MISSED OFFSET
	struct FGameplayTagContainer                       BikeChallenges;                                           // 0x04D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DLC_UIManagerBP.DLC_UIManagerBP_C");
		return ptr;
	}


	bool IsPauseBlockedByHUD();
	void GetStickyPosition(class AActor* FollowActor, const struct FGameplayTag& ScoreEventTag, struct FVector2D* Position, bool* Valid);
	void GetStickyIndex(const struct FGameplayTag& ScoreEventTag, int* Index, bool* Valid);
	void CalculateStickyScore(int InScore, const struct FGameplayTag& ScoreEventTag, int* TotalScore, int* Index);
	void HandleStickyScoreWidget(const struct FGameplayTag& ScoreEventTag, bool Clear, class UCombatHitCounter_C** Widget);
	void ShouldBlockPauseMenu(bool* bLock);
	void GetRankForSubChallengeScore(int Score, TEnumAsByte<EDLCValueDisplayType> ScoreType, TArray<int>* TargetScores, int* Index, TEnumAsByte<EDLCChallengeRank>* Rank);
	void GetPatchAward(float Points, struct FText* Title, struct FText* SubTitle, TEnumAsByte<EDLCChallengeRank>* Rank);
	void GetRankForScore(int Score, TArray<int>* TargetScores, TEnumAsByte<EDLCChallengeRank>* Rank);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BeginChallenge(struct FGameplayTag* Key);
	void DispatchScoreEvent(struct FText* Title, class AActor** EventInstigator, int* Value, int* Total, int* Combo, struct FGameplayTag* ScoreEventTag);
	void SetTime(bool* bVisible, struct FTimespan* Time);
	void FailChallenge(struct FGameplayTag* Key, struct FText* Reason);
	void DispatchSubChallengeEvent(int* Index, struct FGameplayTag* Key, class AActor** EventInstigator, int* Value, int* Total);
	void DisableSubChallenge(int* Index, struct FGameplayTag* Key);
	void UpdateChallengeScore(int* Points);
	void DisplayScoreGainPopup(const struct FText& ScoreText, class AActor* ActorRef, int ScoreAdded, int Combo);
	void OnPostChallengeCompleteRetry_Event();
	void FailSubChallenge(int* Index, struct FGameplayTag* Key);
	void CompleteSubChallenge(int* Index, struct FGameplayTag* Key);
	void OnPostChallengeCompleteQuit_Event();
	void Reset();
	void SetCountdownTime(bool* bVisible, struct FTimespan* TotalTime, struct FTimespan* RemainingTime);
	void SetChallengeSkills(TArray<struct FBendSkill>* Skills);
	void DispatchAltScoreEvent(struct FText* Title, int* Value, bool* bVisible);
	void ContinueToResults();
	void SetDashboardVisible(bool* bVisible);
	void ReceiveChallengeComplete(struct FDLCCompleteChallengeData* CompleteChallengeData);
	void OnDLCChallengeQuitToMainMenu_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void DisplayScoreGainPopupSticky(const struct FText& ScoreText, class AActor* ActorRef, int ScoreAdded, int Combo, const struct FGameplayTag& ScoreEventTag);
	void HandleHitCounterOnClose(class UCombatHitCounter_C* Widget);
	void UpdateChallengeCombo(int Combo, float Alpha);
	void OnDLCChallengeRetry_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void OnDLCChallengeFail_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void DispatchBonusScoreEvent(const struct FText& Title, int Score);
	void ExecuteUbergraph_DLC_UIManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

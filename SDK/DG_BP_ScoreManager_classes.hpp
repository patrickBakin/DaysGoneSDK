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

// BlueprintGeneratedClass BP_ScoreManager.BP_ScoreManager_C
// 0x090C (0x0C54 - 0x0348)
class ABP_ScoreManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                PlayerBike;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInventoryAmmoID>                      AmmoID;                                                   // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsesTimer;                                                // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TimerCountDown;                                           // 0x0362(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0363(0x0001) MISSED OFFSET
	float                                              TotalTime;                                                // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    TimerForDlcFailed;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CurrentTime;                                              // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GameplayEndOnTimerCompelte;                               // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	TArray<float>                                      TotalScoresArray;                                         // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ScoreDisplay;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerRanking;                                            // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              AllPickupItemsInLevel;                                    // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               RefreshStoredItemsInLevel;                                // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	TArray<struct FText>                               NamesOfScoreVariables;                                    // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                DisplayScoresInOrder;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	TArray<class ABP_BendInventoryPickup_GasCan_C*>    AllGasCansInLevel;                                        // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               kills;                                                    // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	int                                                ScoreForKills;                                            // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Headshots;                                                // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	int                                                ScoreForHeadShotKill;                                     // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StealthKills;                                             // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	int                                                ScoreForStealthKill;                                      // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeKills;                                               // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	int                                                ScoreForMeleeKill;                                        // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GatheringItems;                                           // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	int                                                ScoreForGatheringItems;                                   // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpDistance;                                             // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CompletingUnderTime;                                      // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0402(0x0002) MISSED OFFSET
	int                                                ScoreForCompletingUnderTime;                              // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResourcesAtEndOfRound;                                    // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                ScoreForResourcesAtEndOfRound;                            // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TakingNoDamage;                                           // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	int                                                ScoreForTakingNoDamage;                                   // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StayingStealthWholeTime;                                  // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	int                                                ScoreForStayingStealth;                                   // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyHeadshots;                                            // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	int                                                ScoreForOnlyHeadShots;                                    // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyStealthKills;                                         // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	int                                                ScoreForOnlyStealthKills;                                 // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoShotsFired;                                             // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                ScoreForNoShotsFired;                                     // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GatherAllItemsInlevel;                                    // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	int                                                ScoreForGatheredAllItemsInLevel;                          // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MarkEveryoneThatWasSpawned;                               // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	int                                                ScoreForMarkingEveryone;                                  // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KillEveryoneThatWasSpawned;                               // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                ScoreForKillingEveryone;                                  // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadShotWithin10SecondsOfStarting;                        // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	int                                                ScoreForHeadShotWithingFirst10Seconds;                    // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ThreeStealthKillsWithinxSecondsOfEachOther;               // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	int                                                ScoreForStealthKillCombo;                                 // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ignite15UnitsWith1Molotov;                                // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	int                                                ScoreForFireCombo;                                        // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Kill3PeopleWithTheSameTrap;                               // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GetAKillUsingAnEnemyUnit;                                 // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerDetected;                                           // 0x046A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x046B(0x0001) MISSED OFFSET
	int                                                ItemsPickedUp;                                            // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalSpawnedUnits;                                        // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalKilledUnits;                                         // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TookDamage;                                               // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerShotGun;                                            // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NonHeadShotOccured;                                       // 0x047A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NonStealthKillOccured;                                    // 0x047B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsedAnItem;                                               // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	TArray<class UInventoryItem*>                      InventoryItemsGathered;                                   // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DiedToNonPlayer;                                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	struct FTimerHandle                                StealthKillTimer;                                         // 0x0494(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                StealthKillComboCount;                                    // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StealthKillComboCounter_Drop;                             // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StealthComboComplete;                                     // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	TArray<int>                                        CountsOfAllScores_ByInstaceOfEvent;                       // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PawnsLitOnFlameWithin1Second;                             // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	TArray<struct FTimespan>                           ArrayOfTimesWhenLitOnFire;                                // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                OneSecondFireTimer;                                       // 0x04D0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FailedFireCombo;                                          // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	int                                                StealthKillsThatHaveOccured;                              // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KillsThatHaveOccured;                                     // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MeleeKillsThatHaveOccured;                                // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeadShotsThatHaveOccured;                                 // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BearTrapKillsThatHaveOccured;                             // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class ABendBearTrap*                               MostRecentUsedBearTrap;                                   // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                SingleTrapKillCount;                                      // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeapomWasFired;                                           // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrintHappenedForGroup;                                    // 0x04FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	class AActor*                                      RecentlyDiedPawn;                                         // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               BearTrapComboSuccessful;                                  // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	float                                              TimerScoreMultiplier;                                     // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GotEarlyHeadShot;                                         // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	struct FHudMissionTimerDetails                     mission_Timer_Variabels;                                  // 0x0518(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ScoreLooper;                                              // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class UDebug_ScoreManagerWidget_C*                 ScoreManagerWidget;                                       // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisplayScoreTick;                                         // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	int                                                ScoreForNonPlayerKill;                                    // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrapKills;                                                // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	int                                                ScoreForTrapKills;                                        // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABendCrowdGroup*>                     InsertedCrowdGroup;                                       // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FScriptMulticastDelegate                    ScoreScreenComplete;                                      // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              ActionMultiplier;                                         // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ComboKills;                                               // 0x0574(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	float                                              ComboKillCounter;                                         // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ComboTimer;                                               // 0x057C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimeBetweenComboKills;                                    // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KillComboCounterToDrop;                                   // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddBaseValueInsteadOfMultiply;                            // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x0589(0x0003) MISSED OFFSET
	float                                              KillComboValue;                                           // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxKillComboCount;                                        // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LocalyHandledScoreRuleCount;                              // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopShowingTopRightScore;                                 // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	int                                                StealthKillRequiredForBonus;                              // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StealthKillComboTimer;                                    // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	TArray<int>                                        SubObjectiveScoreArray;                                   // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTag                                DlcChallengeRowTag;                                       // 0x05B8(0x0008) (Edit, BlueprintVisible)
	bool                                               IsAStealthKill;                                           // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x05C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData39[0x6];                                       // 0x05C2(0x0006) MISSED OFFSET
	TArray<struct FText>                               SubObjectiveNames_Array;                                  // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Medal;                                                    // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ScoreScreenStart;                                         // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              TotalDamageTaken;                                         // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreOffsetFor4SubObjectives;                             // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        SubObjectiveScoreBonusArray;                              // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SubObjectiveAffected;                                     // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	TArray<int>                                        SubObjectiveprogression;                                  // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ScoresToOnlyShowAtEnd;                                    // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsTimerPaused;                                            // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x0639(0x0003) MISSED OFFSET
	int                                                BikeAirBorne;                                             // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScoreBikeJumps;                                           // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	int                                                BikeScore_Airborne;                                       // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerForBikeJumps;                                        // 0x0648(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BikeDriftingTime;                                         // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BikeBoostingTime;                                         // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScoreBikeBoosting;                                        // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	int                                                BikeBoostingScore;                                        // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepairCost;                                               // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AExplosive_C*>                        explosives;                                               // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimespan                                   LastExplosive;                                            // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ExplosiveScore;                                           // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScoreExplosives;                                          // 0x067C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	int                                                ExplosiveCombo;                                           // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	TArray<int>                                        SubObjectiveTimers;                                       // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MedalValue_Int;                                           // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x4];                                       // 0x069C(0x0004) MISSED OFFSET
	TArray<struct FText>                               DescriptionsOFMedalRewardsPerSubbjective;                 // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 ComboGrowthCurve;                                         // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ComboDecayCurve;                                          // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentGlobalCombo;                                       // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeInCombo;                                              // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TallyScoreComplete;                                       // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FGameplayTagContainer                       AllowedScoreEvents;                                       // 0x06D8(0x0020) (Edit, BlueprintVisible)
	float                                              StateMultiplier;                                          // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BikeAirTime;                                              // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreTime_Good;                                           // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreTime_Great;                                          // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreTime_Exellent;                                       // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _5_13_2019_Updated_;                                      // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoBonusEnding;                                            // 0x070D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x2];                                       // 0x070E(0x0002) MISSED OFFSET
	int                                                startingReputation;                                       // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingCredits;                                          // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoCompleteAfterX;                                       // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x0719(0x0003) MISSED OFFSET
	struct FTimerHandle                                AutoCompleteTimer;                                        // 0x071C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AddScoreForXTime;                                         // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndingScoreScreenACtiavted;                               // 0x0724(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x0725(0x0003) MISSED OFFSET
	struct FTimerHandle                                IntroStartTimer;                                          // 0x0728(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                EndTimer;                                                 // 0x072C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendActionData                             ActionDataIntroNoBike;                                    // 0x0730(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendActionData                             ActionDataIntroWithBike;                                  // 0x07D0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABendCrowdBehaviorTriggerBP_DLCPresetForceFrenzy_C* CrowdBehaviorTrigger;                                     // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBendActionData                             ActionDataEndNoBike;                                      // 0x0878(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendActionData                             ActionDataEndWithBike;                                    // 0x0918(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WaitForIntroAnimEndBeforeBegin;                           // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	TArray<class UAnimSequence*>                       INTRO_OnFoot;                                             // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       INTRO_OnBike;                                             // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       INTRO_OnGolfCart;                                         // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnFoot_NoMedal;                                       // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnFoot_Bronze;                                        // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnFoot_Silver;                                        // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnFoot_Gold;                                          // 0x0A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnBike_NoMedal;                                       // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnBike_Bronze;                                        // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnBike_Silver;                                        // 0x0A50(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnBike_Gold;                                          // 0x0A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnGolfCart_NoMedal;                                   // 0x0A70(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnGolfCart_Bronze;                                    // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnGolfCart_Silver;                                    // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       END_OnGolfCart_Gold;                                      // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EInventorySkillID>>             ArrayOfBendSkills;                                        // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        CompletedOrFailedSubObjective;                            // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ComboComplete;                                            // 0x0AD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TallyScoreBegin;                                          // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                EarlyEndScoreTotal;                                       // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnIntroTimerComplete;                                     // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FBendSkill>                          InsertedSkillsToUi;                                       // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnJumpComplete;                                           // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               StreamingScoreActive_BikeJump;                            // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StreamingScoreActiveDrft;                                 // 0x0B29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StreamingScoreActiveBoost;                                // 0x0B2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x1];                                       // 0x0B2B(0x0001) MISSED OFFSET
	struct FTimerHandle                                CountdownTimer_InternalRef;                               // 0x0B2C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ScoreDriftingTimer;                                       // 0x0B30(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasDriftedRecently;                                       // 0x0B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasBoostedRecently;                                       // 0x0B35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x2];                                       // 0x0B36(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnScoreIncrease;                                          // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ShowMainObjective;                                        // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x0B49(0x0007) MISSED OFFSET
	struct FText                                       MainObjectiveTextKey;                                     // 0x0B50(0x0018) (Edit, BlueprintVisible)
	int                                                StaringNumberForMainObjective;                            // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanCompleteChallenge;                                     // 0x0B6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x0B6D(0x0003) MISSED OFFSET
	struct FGameplayTag                                OverwriteKillData;                                        // 0x0B70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        SubObjectiveProgressionTester;                            // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MinAirTimeForJump;                                        // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboTimeGainInAirPreJump;                                // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                RetryEndAnim;                                             // 0x0B90(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NeedsBikeEnter;                                           // 0x0B94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x0B95(0x0003) MISSED OFFSET
	class AVehiclePawn*                                SpawnedVehicleRef;                                        // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumDisplayedComboTime;                                // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BadOrNullInsertedCrowd;                                   // 0x0BA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x0BA5(0x0003) MISSED OFFSET
	int                                                CrowdSizeCounter;                                         // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ComboTimerPaused;                                         // 0x0BAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScoreDrift;                                               // 0x0BAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoNotEdit;                                                // 0x0BAE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData58[0x1];                                       // 0x0BAF(0x0001) MISSED OFFSET
	class UCurveFloat*                                 TimerScoreBonusCurve;                                     // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnComboStart;                                             // 0x0BB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ScoringOccurred;                                          // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScoredEventsBlocked;                                      // 0x0BC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimerEndDoesNotEffectGameplay;                            // 0x0BCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData59[0x5];                                       // 0x0BCB(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMedalUpdate;                                            // 0x0BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HeadshotKill;                                             // 0x0BE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               InEnding;                                                 // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x7];                                       // 0x0BF1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnScoreOccured;                                           // 0x0BF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddScoreResolve;                                        // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               UseAnchorInIntroAnim;                                     // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData61[0x7];                                       // 0x0C19(0x0007) MISSED OFFSET
	struct FTransform                                  IntroAnimAnchor;                                          // 0x0C20(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                MAX_SCORE;                                                // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScoreManager.BP_ScoreManager_C");
		return ptr;
	}


	void ResetTotalTime(float NewTotalTime);
	void TIMEEXTENDED(float ExtendedTimeAmount);
	void BlockAllScoreEvents(bool bLock);
	void SortDamageCausers(class AActor* DamageCauser);
	void SortDamageType(TEnumAsByte<ETypeOfDamage> DamageType);
	void LockControls(bool Lock, class AVehiclePawn* Vehicle);
	struct FTransform SelectAnimation(bool IsIntro, struct FBendActionData* ActionData, class AVehiclePawn** VehiclePawn);
	void FreezeEnemies();
	void DidWeGainMedalBonus(int ProgressForSubObjective, int Bronze, int Silver, int Gold, int* NewParam);
	void GetSubObjectiveProgression(int SubOBjective, int* CurrentSubObjectiveProgression);
	void CombineMultipliers();
	void ResetKillValue();
	void SetKillValue(TEnumAsByte<EAIFactionType> DeadEnemyFaction);
	void UserConstructionScript();
	void DelayToLoop();
	void retryStartUp();
	void ScrollingScores();
	void DisplayAllScores();
	void ScoreEnding();
	void EndTimerFinished();
	void GetFinalScoreEarly();
	void CheckForTallyScores();
	void TryEndAnimAgain();
	void OnSpawned_Event_1(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation);
	void OnTakeAnyDamage_Event_1(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnAwarePlayer_Event_1(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void OnWeaponFired_Event_1(class ABendWeapon* Weapon);
	void BeginTimer();
	void ReceiveTick(float* DeltaSeconds);
	void BindEventSetup();
	void Retry();
	void OnInventoryPickup_Event_1(class ABendInventoryPickup* InventoryPickup);
	void AddScore_DoesStringComparison(int ScoreValue, const struct FText& ScoreName, class AActor* ActorRefFor3d, bool ScoreToBeShownOnlyOnComplete, const struct FGameplayTag& ScoreEventTag);
	void Initialize();
	void UpdateScoresIntoEndingArrays_DoNotCall(int IndexOfScoreType, int AddedScore, const struct FText& ScoreText_NeedsToBeFromALAMSKey_, class AActor* ActorRefFor3d, bool UsesComboBonuses__DoesNotTickUpCombo_, bool ScoreToBeShownOnlyOnComplete);
	void OnInventoryModifiedDelegate_Event_1(const struct FInventoryOperation& Operation);
	void OnDied_Event_1(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void StatusStartedDelegate_Event_1(class UStatusEffect* StatusEffect);
	void OnWeaponFired_Event_2(class ABendWeapon* Weapon);
	void ObjectiveComplete_BeginScoring();
	void FindAllLivingUnits();
	void CustomEvent_2(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void OnDiedPreSpawned(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void StatusStartedDelegatePreStart(class UStatusEffect* StatusEffect);
	void SpecialDieLogic(class AController* Killer, class UActorComponent* FHitComponent, class UDamageType* DamageType, class AActor* DamageCauser);
	void CompoundDeath_Crowd(class AController* Killer, class UActorComponent* Fhit_Component, class UDamageType* DamageType, class AActor* DamageCauser, bool CriticalHit);
	void Reset();
	void ScoringForSubObjectives(int SubOBjective, int SubObjectiveIncrease, class AActor* ActorRefFor3d, bool ShowBonusAtEndScreen);
	void MoveBar_Test(int SubOBjective, int IndexOfScoreType, int AddedScore, class AActor* _3dActorRef, bool EndScreen);
	void OnBeingStealthKilledStart_Event_1(class ABendPawn* AttackerPawn);
	void OnVehicleReceivedDamage_Event_1(class AVehiclePawn* VehiclePawn, class AController* Instigator, class AActor* DamageCauser, TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken);
	void ReopenTimer();
	void PauseTimer();
	void UnpauseTimer();
	void TimerForBikeScore();
	void AssignBikeStuff();
	void ExplosiveExploded_Event_1(class AExplosive_C* Actor);
	void UpdateTimer();
	void DisableSubOBjective(int NewParam);
	void GatherInfoForPlay();
	void CheckScoreForTimedSubOBjectives();
	void ValueCombo(const struct FScoreEventData& ScoreEventData, class AActor* ActorRefFor3d, bool ScoreToBeShownOnlyOnComplete, bool ShouldCombo, const struct FGameplayTag& LiteralGameplayTag, bool TimerBonus);
	void Update_Main_Objective_Number(int WhatShouldBeShownOnScreen, bool IsUpdateVisible);
	void OnDriftEnded_Event_1(float TotalDriftTime);
	void OnDriftStarted_Event_1();
	void AddScore(const struct FGameplayTag& Key, class AActor* ActorRefFor3d, bool ScoreToBeShownOnlyOnComplete, bool ShouldCombo, bool TimerBonus);
	void ReceiveBeginPlay();
	void OnDied_Event_3(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void ContentFailed();
	void AutoCompleteContent();
	void CustomEvent_3();
	void CustomEvent_4();
	void OnCrowdMemberDied_NEW_Event_1(const struct FBendCrowdMemberDiedInfo& Info);
	void OnCrowdMemberDied_NEW_Event_2(const struct FBendCrowdMemberDiedInfo& Info);
	void SetupPostScoreHandlers();
	void OnPostChallengeCompleteQuit_Event_1();
	void OnPostChallengeCompleteRetry_Event_1();
	void DLCMissionFail();
	void OnFadeFromBlackStart_MM_Event_1(const struct FString& Message);
	void IntroStartFinished();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void IntroAnimCompleted();
	void AddSkillInfo();
	void OnAnimNotify_BikeStarted(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify);
	void OnRiderStartedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle);
	void OnRiderFinishedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle);
	void OnRiderFinishedExitingVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason);
	void StartCountdownTimer_Internal();
	void UpdateTimeInCombFromBike(const struct FGameplayTag& GameplayTag, float ActionComboTime);
	void ScoreDrifting();
	void OnPreSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void JumpToCustomDmgDeath();
	void JumpToCustomDeath_Horde();
	void BearTrapKill();
	void BearTrapKill_Horde();
	void OnPauseGame_Event_1(bool IsPausing);
	void UpdateUiCombo();
	void ExplosionOverwriteForBarrel();
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void MissionManager_BeginScoring();
	void ExecuteUbergraph_BP_ScoreManager(int EntryPoint);
	void OnAddScoreResolve__DelegateSignature(const struct FGameplayTag& GameplayTag);
	void OnScoreOccured__DelegateSignature();
	void HeadshotKill__DelegateSignature();
	void OnMedalUpdate__DelegateSignature(int SubObjectiveIndex, int SubObjectiveMedal);
	void OnComboStart__DelegateSignature();
	void OnScoreIncrease__DelegateSignature(const struct FGameplayTag& GameplayTag, int ScoreEvent);
	void OnJumpComplete__DelegateSignature(const struct FGameplayTag& ScoreEventTag, float TimeAirBorne);
	void OnIntroTimerComplete__DelegateSignature();
	void TallyScoreBegin__DelegateSignature();
	void ComboComplete__DelegateSignature(int ComboCountOnComplete);
	void TallyScoreComplete__DelegateSignature();
	void ScoreScreenStart__DelegateSignature();
	void ScoreScreenComplete__DelegateSignature();
	void TimerForDlcFailed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

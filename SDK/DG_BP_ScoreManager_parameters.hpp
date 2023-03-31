#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ScoreManager.BP_ScoreManager_C.ResetTotalTime
struct ABP_ScoreManager_C_ResetTotalTime_Params
{
	float                                              NewTotalTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.TIMEEXTENDED
struct ABP_ScoreManager_C_TIMEEXTENDED_Params
{
	float                                              ExtendedTimeAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.BlockAllScoreEvents
struct ABP_ScoreManager_C_BlockAllScoreEvents_Params
{
	bool                                               bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.SortDamageCausers
struct ABP_ScoreManager_C_SortDamageCausers_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.SortDamageType
struct ABP_ScoreManager_C_SortDamageType_Params
{
	TEnumAsByte<ETypeOfDamage>                         DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.LockControls
struct ABP_ScoreManager_C_LockControls_Params
{
	bool                                               Lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.SelectAnimation
struct ABP_ScoreManager_C_SelectAnimation_Params
{
	bool                                               IsIntro;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendActionData                             ActionData;                                               // (Parm, OutParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.FreezeEnemies
struct ABP_ScoreManager_C_FreezeEnemies_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.DidWeGainMedalBonus
struct ABP_ScoreManager_C_DidWeGainMedalBonus_Params
{
	int                                                ProgressForSubObjective;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Bronze;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Silver;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Gold;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.GetSubObjectiveProgression
struct ABP_ScoreManager_C_GetSubObjectiveProgression_Params
{
	int                                                SubOBjective;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentSubObjectiveProgression;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.CombineMultipliers
struct ABP_ScoreManager_C_CombineMultipliers_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ResetKillValue
struct ABP_ScoreManager_C_ResetKillValue_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.SetKillValue
struct ABP_ScoreManager_C_SetKillValue_Params
{
	TEnumAsByte<EAIFactionType>                        DeadEnemyFaction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.UserConstructionScript
struct ABP_ScoreManager_C_UserConstructionScript_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.DelayToLoop
struct ABP_ScoreManager_C_DelayToLoop_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.retryStartUp
struct ABP_ScoreManager_C_retryStartUp_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ScrollingScores
struct ABP_ScoreManager_C_ScrollingScores_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.DisplayAllScores
struct ABP_ScoreManager_C_DisplayAllScores_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ScoreEnding
struct ABP_ScoreManager_C_ScoreEnding_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.EndTimerFinished
struct ABP_ScoreManager_C_EndTimerFinished_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.GetFinalScoreEarly
struct ABP_ScoreManager_C_GetFinalScoreEarly_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.CheckForTallyScores
struct ABP_ScoreManager_C_CheckForTallyScores_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.TryEndAnimAgain
struct ABP_ScoreManager_C_TryEndAnimAgain_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnSpawned_Event_1
struct ABP_ScoreManager_C_OnSpawned_Event_1_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnTakeAnyDamage_Event_1
struct ABP_ScoreManager_C_OnTakeAnyDamage_Event_1_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnAwarePlayer_Event_1
struct ABP_ScoreManager_C_OnAwarePlayer_Event_1_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnWeaponFired_Event_1
struct ABP_ScoreManager_C_OnWeaponFired_Event_1_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.BeginTimer
struct ABP_ScoreManager_C_BeginTimer_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ReceiveTick
struct ABP_ScoreManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.BindEventSetup
struct ABP_ScoreManager_C_BindEventSetup_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.Retry
struct ABP_ScoreManager_C_Retry_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnInventoryPickup_Event_1
struct ABP_ScoreManager_C_OnInventoryPickup_Event_1_Params
{
	class ABendInventoryPickup*                        InventoryPickup;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.AddScore_DoesStringComparison
struct ABP_ScoreManager_C_AddScore_DoesStringComparison_Params
{
	int                                                ScoreValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ScoreName;                                                // (Parm)
	class AActor*                                      ActorRefFor3d;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ScoreToBeShownOnlyOnComplete;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ScoreEventTag;                                            // (Parm)
};

// Function BP_ScoreManager.BP_ScoreManager_C.Initialize
struct ABP_ScoreManager_C_Initialize_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.UpdateScoresIntoEndingArrays_DoNotCall
struct ABP_ScoreManager_C_UpdateScoresIntoEndingArrays_DoNotCall_Params
{
	int                                                IndexOfScoreType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedScore;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ScoreText_NeedsToBeFromALAMSKey_;                         // (Parm)
	class AActor*                                      ActorRefFor3d;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UsesComboBonuses__DoesNotTickUpCombo_;                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ScoreToBeShownOnlyOnComplete;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnInventoryModifiedDelegate_Event_1
struct ABP_ScoreManager_C_OnInventoryModifiedDelegate_Event_1_Params
{
	struct FInventoryOperation                         Operation;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnDied_Event_1
struct ABP_ScoreManager_C_OnDied_Event_1_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.StatusStartedDelegate_Event_1
struct ABP_ScoreManager_C_StatusStartedDelegate_Event_1_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnWeaponFired_Event_2
struct ABP_ScoreManager_C_OnWeaponFired_Event_2_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.ObjectiveComplete_BeginScoring
struct ABP_ScoreManager_C_ObjectiveComplete_BeginScoring_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.FindAllLivingUnits
struct ABP_ScoreManager_C_FindAllLivingUnits_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_2
struct ABP_ScoreManager_C_CustomEvent_2_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIAwareState>                         PreviousAwareness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnDiedPreSpawned
struct ABP_ScoreManager_C_OnDiedPreSpawned_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.StatusStartedDelegatePreStart
struct ABP_ScoreManager_C_StatusStartedDelegatePreStart_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.SpecialDieLogic
struct ABP_ScoreManager_C_SpecialDieLogic_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.CompoundDeath_Crowd
struct ABP_ScoreManager_C_CompoundDeath_Crowd_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             Fhit_Component;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CriticalHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.Reset
struct ABP_ScoreManager_C_Reset_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ScoringForSubObjectives
struct ABP_ScoreManager_C_ScoringForSubObjectives_Params
{
	int                                                SubOBjective;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubObjectiveIncrease;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorRefFor3d;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowBonusAtEndScreen;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.MoveBar_Test
struct ABP_ScoreManager_C_MoveBar_Test_Params
{
	int                                                SubOBjective;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexOfScoreType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedScore;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      _3dActorRef;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EndScreen;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnBeingStealthKilledStart_Event_1
struct ABP_ScoreManager_C_OnBeingStealthKilledStart_Event_1_Params
{
	class ABendPawn*                                   AttackerPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnVehicleReceivedDamage_Event_1
struct ABP_ScoreManager_C_OnVehicleReceivedDamage_Event_1_Params
{
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendVehicleDamageType>                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              damageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.ReopenTimer
struct ABP_ScoreManager_C_ReopenTimer_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.PauseTimer
struct ABP_ScoreManager_C_PauseTimer_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.UnpauseTimer
struct ABP_ScoreManager_C_UnpauseTimer_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.TimerForBikeScore
struct ABP_ScoreManager_C_TimerForBikeScore_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.AssignBikeStuff
struct ABP_ScoreManager_C_AssignBikeStuff_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ExplosiveExploded_Event_1
struct ABP_ScoreManager_C_ExplosiveExploded_Event_1_Params
{
	class AExplosive_C*                                Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.UpdateTimer
struct ABP_ScoreManager_C_UpdateTimer_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.DisableSubOBjective
struct ABP_ScoreManager_C_DisableSubOBjective_Params
{
	int                                                NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.GatherInfoForPlay
struct ABP_ScoreManager_C_GatherInfoForPlay_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.CheckScoreForTimedSubOBjectives
struct ABP_ScoreManager_C_CheckScoreForTimedSubOBjectives_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ValueCombo
struct ABP_ScoreManager_C_ValueCombo_Params
{
	struct FScoreEventData                             ScoreEventData;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ActorRefFor3d;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ScoreToBeShownOnlyOnComplete;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldCombo;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                LiteralGameplayTag;                                       // (Parm)
	bool                                               TimerBonus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.Update Main Objective Number
struct ABP_ScoreManager_C_Update_Main_Objective_Number_Params
{
	int                                                WhatShouldBeShownOnScreen;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUpdateVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnDriftEnded_Event_1
struct ABP_ScoreManager_C_OnDriftEnded_Event_1_Params
{
	float                                              TotalDriftTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnDriftStarted_Event_1
struct ABP_ScoreManager_C_OnDriftStarted_Event_1_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.AddScore
struct ABP_ScoreManager_C_AddScore_Params
{
	struct FGameplayTag                                Key;                                                      // (Parm)
	class AActor*                                      ActorRefFor3d;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ScoreToBeShownOnlyOnComplete;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldCombo;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TimerBonus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.ReceiveBeginPlay
struct ABP_ScoreManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnDied_Event_3
struct ABP_ScoreManager_C_OnDied_Event_3_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.ContentFailed
struct ABP_ScoreManager_C_ContentFailed_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.AutoCompleteContent
struct ABP_ScoreManager_C_AutoCompleteContent_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_3
struct ABP_ScoreManager_C_CustomEvent_3_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.CustomEvent_4
struct ABP_ScoreManager_C_CustomEvent_4_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnCrowdMemberDied_NEW_Event_1
struct ABP_ScoreManager_C_OnCrowdMemberDied_NEW_Event_1_Params
{
	struct FBendCrowdMemberDiedInfo                    Info;                                                     // (Parm)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnCrowdMemberDied_NEW_Event_2
struct ABP_ScoreManager_C_OnCrowdMemberDied_NEW_Event_2_Params
{
	struct FBendCrowdMemberDiedInfo                    Info;                                                     // (Parm)
};

// Function BP_ScoreManager.BP_ScoreManager_C.SetupPostScoreHandlers
struct ABP_ScoreManager_C_SetupPostScoreHandlers_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnPostChallengeCompleteQuit_Event_1
struct ABP_ScoreManager_C_OnPostChallengeCompleteQuit_Event_1_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnPostChallengeCompleteRetry_Event_1
struct ABP_ScoreManager_C_OnPostChallengeCompleteRetry_Event_1_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.DLCMissionFail
struct ABP_ScoreManager_C_DLCMissionFail_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnFadeFromBlackStart_MM_Event_1
struct ABP_ScoreManager_C_OnFadeFromBlackStart_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_ScoreManager.BP_ScoreManager_C.IntroStartFinished
struct ABP_ScoreManager_C_IntroStartFinished_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ReceivePreSaveGameLoaded
struct ABP_ScoreManager_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.ReceiveEndPlay
struct ABP_ScoreManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.IntroAnimCompleted
struct ABP_ScoreManager_C_IntroAnimCompleted_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.AddSkillInfo
struct ABP_ScoreManager_C_AddSkillInfo_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnAnimNotify_BikeStarted
struct ABP_ScoreManager_C_OnAnimNotify_BikeStarted_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 AnimNotify;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnRiderStartedEnteringVehicle_Event_1
struct ABP_ScoreManager_C_OnRiderStartedEnteringVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnRiderFinishedEnteringVehicle_Event_1
struct ABP_ScoreManager_C_OnRiderFinishedEnteringVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnRiderFinishedExitingVehicle_Event_1
struct ABP_ScoreManager_C_OnRiderFinishedExitingVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendVehicleExitReason>                ExitReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.StartCountdownTimer_Internal
struct ABP_ScoreManager_C_StartCountdownTimer_Internal_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.UpdateTimeInCombFromBike
struct ABP_ScoreManager_C_UpdateTimeInCombFromBike_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
	float                                              ActionComboTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.ScoreDrifting
struct ABP_ScoreManager_C_ScoreDrifting_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnPreSaveGameLoaded_Event_1
struct ABP_ScoreManager_C_OnPreSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.JumpToCustomDmgDeath
struct ABP_ScoreManager_C_JumpToCustomDmgDeath_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.JumpToCustomDeath_Horde
struct ABP_ScoreManager_C_JumpToCustomDeath_Horde_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.BearTrapKill
struct ABP_ScoreManager_C_BearTrapKill_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.BearTrapKill_Horde
struct ABP_ScoreManager_C_BearTrapKill_Horde_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnPauseGame_Event_1
struct ABP_ScoreManager_C_OnPauseGame_Event_1_Params
{
	bool                                               IsPausing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.UpdateUiCombo
struct ABP_ScoreManager_C_UpdateUiCombo_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ExplosionOverwriteForBarrel
struct ABP_ScoreManager_C_ExplosionOverwriteForBarrel_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnPostSaveGameLoaded_Event_1
struct ABP_ScoreManager_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.MissionManager_BeginScoring
struct ABP_ScoreManager_C_MissionManager_BeginScoring_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ExecuteUbergraph_BP_ScoreManager
struct ABP_ScoreManager_C_ExecuteUbergraph_BP_ScoreManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnAddScoreResolve__DelegateSignature
struct ABP_ScoreManager_C_OnAddScoreResolve__DelegateSignature_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnScoreOccured__DelegateSignature
struct ABP_ScoreManager_C_OnScoreOccured__DelegateSignature_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.HeadshotKill__DelegateSignature
struct ABP_ScoreManager_C_HeadshotKill__DelegateSignature_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnMedalUpdate__DelegateSignature
struct ABP_ScoreManager_C_OnMedalUpdate__DelegateSignature_Params
{
	int                                                SubObjectiveIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubObjectiveMedal;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnComboStart__DelegateSignature
struct ABP_ScoreManager_C_OnComboStart__DelegateSignature_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnScoreIncrease__DelegateSignature
struct ABP_ScoreManager_C_OnScoreIncrease__DelegateSignature_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
	int                                                ScoreEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnJumpComplete__DelegateSignature
struct ABP_ScoreManager_C_OnJumpComplete__DelegateSignature_Params
{
	struct FGameplayTag                                ScoreEventTag;                                            // (Parm)
	float                                              TimeAirBorne;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.OnIntroTimerComplete__DelegateSignature
struct ABP_ScoreManager_C_OnIntroTimerComplete__DelegateSignature_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.TallyScoreBegin__DelegateSignature
struct ABP_ScoreManager_C_TallyScoreBegin__DelegateSignature_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ComboComplete__DelegateSignature
struct ABP_ScoreManager_C_ComboComplete__DelegateSignature_Params
{
	int                                                ComboCountOnComplete;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreManager.BP_ScoreManager_C.TallyScoreComplete__DelegateSignature
struct ABP_ScoreManager_C_TallyScoreComplete__DelegateSignature_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ScoreScreenStart__DelegateSignature
struct ABP_ScoreManager_C_ScoreScreenStart__DelegateSignature_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.ScoreScreenComplete__DelegateSignature
struct ABP_ScoreManager_C_ScoreScreenComplete__DelegateSignature_Params
{
};

// Function BP_ScoreManager.BP_ScoreManager_C.TimerForDlcFailed__DelegateSignature
struct ABP_ScoreManager_C_TimerForDlcFailed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.IsPauseBlockedByHUD
struct ADLC_UIManagerBP_C_IsPauseBlockedByHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetStickyPosition
struct ADLC_UIManagerBP_C_GetStickyPosition_Params
{
	class AActor*                                      FollowActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ScoreEventTag;                                            // (Parm)
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetStickyIndex
struct ADLC_UIManagerBP_C_GetStickyIndex_Params
{
	struct FGameplayTag                                ScoreEventTag;                                            // (Parm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.CalculateStickyScore
struct ADLC_UIManagerBP_C_CalculateStickyScore_Params
{
	int                                                InScore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ScoreEventTag;                                            // (Parm)
	int                                                TotalScore;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.HandleStickyScoreWidget
struct ADLC_UIManagerBP_C_HandleStickyScoreWidget_Params
{
	struct FGameplayTag                                ScoreEventTag;                                            // (Parm)
	bool                                               Clear;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCombatHitCounter_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ShouldBlockPauseMenu
struct ADLC_UIManagerBP_C_ShouldBlockPauseMenu_Params
{
	bool                                               bLock;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetRankForSubChallengeScore
struct ADLC_UIManagerBP_C_GetRankForSubChallengeScore_Params
{
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        TargetScores;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDLCValueDisplayType>                  ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetPatchAward
struct ADLC_UIManagerBP_C_GetPatchAward_Params
{
	float                                              Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm, OutParm)
	struct FText                                       SubTitle;                                                 // (Parm, OutParm)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetRankForScore
struct ADLC_UIManagerBP_C_GetRankForScore_Params
{
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        TargetScores;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.UserConstructionScript
struct ADLC_UIManagerBP_C_UserConstructionScript_Params
{
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ReceiveBeginPlay
struct ADLC_UIManagerBP_C_ReceiveBeginPlay_Params
{
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.BeginChallenge
struct ADLC_UIManagerBP_C_BeginChallenge_Params
{
	struct FGameplayTag*                               Key;                                                      // (Parm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchScoreEvent
struct ADLC_UIManagerBP_C_DispatchScoreEvent_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor**                                     EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Total;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               ScoreEventTag;                                            // (Parm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetTime
struct ADLC_UIManagerBP_C_SetTime_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan*                                  Time;                                                     // (Parm, ZeroConstructor)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.FailChallenge
struct ADLC_UIManagerBP_C_FailChallenge_Params
{
	struct FGameplayTag*                               Key;                                                      // (Parm)
	struct FText*                                      Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchSubChallengeEvent
struct ADLC_UIManagerBP_C_DispatchSubChallengeEvent_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Key;                                                      // (Parm)
	class AActor**                                     EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Total;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisableSubChallenge
struct ADLC_UIManagerBP_C_DisableSubChallenge_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Key;                                                      // (Parm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.UpdateChallengeScore
struct ADLC_UIManagerBP_C_UpdateChallengeScore_Params
{
	int*                                               Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisplayScoreGainPopup
struct ADLC_UIManagerBP_C_DisplayScoreGainPopup_Params
{
	struct FText                                       ScoreText;                                                // (Parm)
	class AActor*                                      ActorRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreAdded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnPostChallengeCompleteRetry_Event
struct ADLC_UIManagerBP_C_OnPostChallengeCompleteRetry_Event_Params
{
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.FailSubChallenge
struct ADLC_UIManagerBP_C_FailSubChallenge_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Key;                                                      // (Parm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.CompleteSubChallenge
struct ADLC_UIManagerBP_C_CompleteSubChallenge_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Key;                                                      // (Parm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnPostChallengeCompleteQuit_Event
struct ADLC_UIManagerBP_C_OnPostChallengeCompleteQuit_Event_Params
{
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.Reset
struct ADLC_UIManagerBP_C_Reset_Params
{
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetCountdownTime
struct ADLC_UIManagerBP_C_SetCountdownTime_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan*                                  TotalTime;                                                // (Parm, ZeroConstructor)
	struct FTimespan*                                  RemainingTime;                                            // (Parm, ZeroConstructor)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetChallengeSkills
struct ADLC_UIManagerBP_C_SetChallengeSkills_Params
{
	TArray<struct FBendSkill>*                         Skills;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchAltScoreEvent
struct ADLC_UIManagerBP_C_DispatchAltScoreEvent_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ContinueToResults
struct ADLC_UIManagerBP_C_ContinueToResults_Params
{
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetDashboardVisible
struct ADLC_UIManagerBP_C_SetDashboardVisible_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ReceiveChallengeComplete
struct ADLC_UIManagerBP_C_ReceiveChallengeComplete_Params
{
	struct FDLCCompleteChallengeData*                  CompleteChallengeData;                                    // (Parm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeQuitToMainMenu_Event_1
struct ADLC_UIManagerBP_C_OnDLCChallengeQuitToMainMenu_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisplayScoreGainPopupSticky
struct ADLC_UIManagerBP_C_DisplayScoreGainPopupSticky_Params
{
	struct FText                                       ScoreText;                                                // (Parm)
	class AActor*                                      ActorRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreAdded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ScoreEventTag;                                            // (Parm)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.HandleHitCounterOnClose
struct ADLC_UIManagerBP_C_HandleHitCounterOnClose_Params
{
	class UCombatHitCounter_C*                         Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.UpdateChallengeCombo
struct ADLC_UIManagerBP_C_UpdateChallengeCombo_Params
{
	int                                                Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeRetry_Event_1
struct ADLC_UIManagerBP_C_OnDLCChallengeRetry_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeFail_Event_1
struct ADLC_UIManagerBP_C_OnDLCChallengeFail_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchBonusScoreEvent
struct ADLC_UIManagerBP_C_DispatchBonusScoreEvent_Params
{
	struct FText                                       Title;                                                    // (Parm)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ExecuteUbergraph_DLC_UIManagerBP
struct ADLC_UIManagerBP_C_ExecuteUbergraph_DLC_UIManagerBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

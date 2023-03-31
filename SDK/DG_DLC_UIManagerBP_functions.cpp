// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DLC_UIManagerBP.DLC_UIManagerBP_C.IsPauseBlockedByHUD
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADLC_UIManagerBP_C::IsPauseBlockedByHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.IsPauseBlockedByHUD");

	ADLC_UIManagerBP_C_IsPauseBlockedByHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetStickyPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  FollowActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ScoreEventTag                  (Parm)
// struct FVector2D               Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::GetStickyPosition(class AActor* FollowActor, const struct FGameplayTag& ScoreEventTag, struct FVector2D* Position, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetStickyPosition");

	ADLC_UIManagerBP_C_GetStickyPosition_Params params;
	params.FollowActor = FollowActor;
	params.ScoreEventTag = ScoreEventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetStickyIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ScoreEventTag                  (Parm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::GetStickyIndex(const struct FGameplayTag& ScoreEventTag, int* Index, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetStickyIndex");

	ADLC_UIManagerBP_C_GetStickyIndex_Params params;
	params.ScoreEventTag = ScoreEventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.CalculateStickyScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InScore                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ScoreEventTag                  (Parm)
// int                            TotalScore                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::CalculateStickyScore(int InScore, const struct FGameplayTag& ScoreEventTag, int* TotalScore, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.CalculateStickyScore");

	ADLC_UIManagerBP_C_CalculateStickyScore_Params params;
	params.InScore = InScore;
	params.ScoreEventTag = ScoreEventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalScore != nullptr)
		*TotalScore = params.TotalScore;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.HandleStickyScoreWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ScoreEventTag                  (Parm)
// bool                           Clear                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCombatHitCounter_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::HandleStickyScoreWidget(const struct FGameplayTag& ScoreEventTag, bool Clear, class UCombatHitCounter_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.HandleStickyScoreWidget");

	ADLC_UIManagerBP_C_HandleStickyScoreWidget_Params params;
	params.ScoreEventTag = ScoreEventTag;
	params.Clear = Clear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ShouldBlockPauseMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLock                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::ShouldBlockPauseMenu(bool* bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.ShouldBlockPauseMenu");

	ADLC_UIManagerBP_C_ShouldBlockPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLock != nullptr)
		*bLock = params.bLock;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetRankForSubChallengeScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    TargetScores                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDLCValueDisplayType> ScoreType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::GetRankForSubChallengeScore(int Score, TEnumAsByte<EDLCValueDisplayType> ScoreType, TArray<int>* TargetScores, int* Index, TEnumAsByte<EDLCChallengeRank>* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetRankForSubChallengeScore");

	ADLC_UIManagerBP_C_GetRankForSubChallengeScore_Params params;
	params.Score = Score;
	params.ScoreType = ScoreType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetScores != nullptr)
		*TargetScores = params.TargetScores;
	if (Index != nullptr)
		*Index = params.Index;
	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetPatchAward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm, OutParm)
// struct FText                   SubTitle                       (Parm, OutParm)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::GetPatchAward(float Points, struct FText* Title, struct FText* SubTitle, TEnumAsByte<EDLCChallengeRank>* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetPatchAward");

	ADLC_UIManagerBP_C_GetPatchAward_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;
	if (SubTitle != nullptr)
		*SubTitle = params.SubTitle;
	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetRankForScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    TargetScores                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::GetRankForScore(int Score, TArray<int>* TargetScores, TEnumAsByte<EDLCChallengeRank>* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.GetRankForScore");

	ADLC_UIManagerBP_C_GetRankForScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetScores != nullptr)
		*TargetScores = params.TargetScores;
	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADLC_UIManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.UserConstructionScript");

	ADLC_UIManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ADLC_UIManagerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.ReceiveBeginPlay");

	ADLC_UIManagerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.BeginChallenge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag*           Key                            (Parm)

void ADLC_UIManagerBP_C::BeginChallenge(struct FGameplayTag* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.BeginChallenge");

	ADLC_UIManagerBP_C_BeginChallenge_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchScoreEvent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor**                 EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Total                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Combo                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           ScoreEventTag                  (Parm)

void ADLC_UIManagerBP_C::DispatchScoreEvent(struct FText* Title, class AActor** EventInstigator, int* Value, int* Total, int* Combo, struct FGameplayTag* ScoreEventTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchScoreEvent");

	ADLC_UIManagerBP_C_DispatchScoreEvent_Params params;
	params.Title = Title;
	params.EventInstigator = EventInstigator;
	params.Value = Value;
	params.Total = Total;
	params.Combo = Combo;
	params.ScoreEventTag = ScoreEventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan*              Time                           (Parm, ZeroConstructor)

void ADLC_UIManagerBP_C::SetTime(bool* bVisible, struct FTimespan* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetTime");

	ADLC_UIManagerBP_C_SetTime_Params params;
	params.bVisible = bVisible;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.FailChallenge
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag*           Key                            (Parm)
// struct FText*                  Reason                         (ConstParm, Parm, OutParm, ReferenceParm)

void ADLC_UIManagerBP_C::FailChallenge(struct FGameplayTag* Key, struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.FailChallenge");

	ADLC_UIManagerBP_C_FailChallenge_Params params;
	params.Key = Key;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchSubChallengeEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           Key                            (Parm)
// class AActor**                 EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Total                          (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::DispatchSubChallengeEvent(int* Index, struct FGameplayTag* Key, class AActor** EventInstigator, int* Value, int* Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchSubChallengeEvent");

	ADLC_UIManagerBP_C_DispatchSubChallengeEvent_Params params;
	params.Index = Index;
	params.Key = Key;
	params.EventInstigator = EventInstigator;
	params.Value = Value;
	params.Total = Total;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisableSubChallenge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           Key                            (Parm)

void ADLC_UIManagerBP_C::DisableSubChallenge(int* Index, struct FGameplayTag* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisableSubChallenge");

	ADLC_UIManagerBP_C_DisableSubChallenge_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.UpdateChallengeScore
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Points                         (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::UpdateChallengeScore(int* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.UpdateChallengeScore");

	ADLC_UIManagerBP_C_UpdateChallengeScore_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisplayScoreGainPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ScoreText                      (Parm)
// class AActor*                  ActorRef                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScoreAdded                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Combo                          (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::DisplayScoreGainPopup(const struct FText& ScoreText, class AActor* ActorRef, int ScoreAdded, int Combo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisplayScoreGainPopup");

	ADLC_UIManagerBP_C_DisplayScoreGainPopup_Params params;
	params.ScoreText = ScoreText;
	params.ActorRef = ActorRef;
	params.ScoreAdded = ScoreAdded;
	params.Combo = Combo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnPostChallengeCompleteRetry_Event
// (BlueprintCallable, BlueprintEvent)

void ADLC_UIManagerBP_C::OnPostChallengeCompleteRetry_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnPostChallengeCompleteRetry_Event");

	ADLC_UIManagerBP_C_OnPostChallengeCompleteRetry_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.FailSubChallenge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           Key                            (Parm)

void ADLC_UIManagerBP_C::FailSubChallenge(int* Index, struct FGameplayTag* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.FailSubChallenge");

	ADLC_UIManagerBP_C_FailSubChallenge_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.CompleteSubChallenge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           Key                            (Parm)

void ADLC_UIManagerBP_C::CompleteSubChallenge(int* Index, struct FGameplayTag* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.CompleteSubChallenge");

	ADLC_UIManagerBP_C_CompleteSubChallenge_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnPostChallengeCompleteQuit_Event
// (BlueprintCallable, BlueprintEvent)

void ADLC_UIManagerBP_C::OnPostChallengeCompleteQuit_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnPostChallengeCompleteQuit_Event");

	ADLC_UIManagerBP_C_OnPostChallengeCompleteQuit_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.Reset
// (BlueprintCallable, BlueprintEvent)

void ADLC_UIManagerBP_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.Reset");

	ADLC_UIManagerBP_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetCountdownTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan*              TotalTime                      (Parm, ZeroConstructor)
// struct FTimespan*              RemainingTime                  (Parm, ZeroConstructor)

void ADLC_UIManagerBP_C::SetCountdownTime(bool* bVisible, struct FTimespan* TotalTime, struct FTimespan* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetCountdownTime");

	ADLC_UIManagerBP_C_SetCountdownTime_Params params;
	params.bVisible = bVisible;
	params.TotalTime = TotalTime;
	params.RemainingTime = RemainingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetChallengeSkills
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendSkill>*     Skills                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADLC_UIManagerBP_C::SetChallengeSkills(TArray<struct FBendSkill>* Skills)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetChallengeSkills");

	ADLC_UIManagerBP_C_SetChallengeSkills_Params params;
	params.Skills = Skills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchAltScoreEvent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::DispatchAltScoreEvent(struct FText* Title, int* Value, bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchAltScoreEvent");

	ADLC_UIManagerBP_C_DispatchAltScoreEvent_Params params;
	params.Title = Title;
	params.Value = Value;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ContinueToResults
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADLC_UIManagerBP_C::ContinueToResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.ContinueToResults");

	ADLC_UIManagerBP_C_ContinueToResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetDashboardVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::SetDashboardVisible(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.SetDashboardVisible");

	ADLC_UIManagerBP_C_SetDashboardVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ReceiveChallengeComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FDLCCompleteChallengeData* CompleteChallengeData          (Parm)

void ADLC_UIManagerBP_C::ReceiveChallengeComplete(struct FDLCCompleteChallengeData* CompleteChallengeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.ReceiveChallengeComplete");

	ADLC_UIManagerBP_C_ReceiveChallengeComplete_Params params;
	params.CompleteChallengeData = CompleteChallengeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeQuitToMainMenu_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::OnDLCChallengeQuitToMainMenu_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeQuitToMainMenu_Event_1");

	ADLC_UIManagerBP_C_OnDLCChallengeQuitToMainMenu_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisplayScoreGainPopupSticky
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ScoreText                      (Parm)
// class AActor*                  ActorRef                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScoreAdded                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Combo                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ScoreEventTag                  (Parm)

void ADLC_UIManagerBP_C::DisplayScoreGainPopupSticky(const struct FText& ScoreText, class AActor* ActorRef, int ScoreAdded, int Combo, const struct FGameplayTag& ScoreEventTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.DisplayScoreGainPopupSticky");

	ADLC_UIManagerBP_C_DisplayScoreGainPopupSticky_Params params;
	params.ScoreText = ScoreText;
	params.ActorRef = ActorRef;
	params.ScoreAdded = ScoreAdded;
	params.Combo = Combo;
	params.ScoreEventTag = ScoreEventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.HandleHitCounterOnClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCombatHitCounter_C*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::HandleHitCounterOnClose(class UCombatHitCounter_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.HandleHitCounterOnClose");

	ADLC_UIManagerBP_C_HandleHitCounterOnClose_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.UpdateChallengeCombo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Combo                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::UpdateChallengeCombo(int Combo, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.UpdateChallengeCombo");

	ADLC_UIManagerBP_C_UpdateChallengeCombo_Params params;
	params.Combo = Combo;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeRetry_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::OnDLCChallengeRetry_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeRetry_Event_1");

	ADLC_UIManagerBP_C_OnDLCChallengeRetry_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeFail_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::OnDLCChallengeFail_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.OnDLCChallengeFail_Event_1");

	ADLC_UIManagerBP_C_OnDLCChallengeFail_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchBonusScoreEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::DispatchBonusScoreEvent(const struct FText& Title, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.DispatchBonusScoreEvent");

	ADLC_UIManagerBP_C_DispatchBonusScoreEvent_Params params;
	params.Title = Title;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_UIManagerBP.DLC_UIManagerBP_C.ExecuteUbergraph_DLC_UIManagerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADLC_UIManagerBP_C::ExecuteUbergraph_DLC_UIManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_UIManagerBP.DLC_UIManagerBP_C.ExecuteUbergraph_DLC_UIManagerBP");

	ADLC_UIManagerBP_C_ExecuteUbergraph_DLC_UIManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

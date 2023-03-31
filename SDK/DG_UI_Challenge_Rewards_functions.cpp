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

// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatDigitMS
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Int                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UUI_Challenge_Rewards_C::FormatDigitMS(int Int, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatDigitMS");

	UUI_Challenge_Rewards_C_FormatDigitMS_Params params;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatDigit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Int                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UUI_Challenge_Rewards_C::FormatDigit(int Int, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatDigit");

	UUI_Challenge_Rewards_C_FormatDigit_Params params;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatSubobjectiveResult
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSubChallengeData> TargetArray1                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDLCChallengeType> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::FormatSubobjectiveResult(int Id, TArray<struct FName> TargetArray, TArray<struct FSubChallengeData> TargetArray1, TEnumAsByte<EDLCChallengeType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatSubobjectiveResult");

	UUI_Challenge_Rewards_C_FormatSubobjectiveResult_Params params;
	params.Id = Id;
	params.TargetArray = TargetArray;
	params.TargetArray1 = TargetArray1;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatSubobjectiveScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSubChallengeData> TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Challenge_Rewards_C::FormatSubobjectiveScore(TArray<struct FSubChallengeData> TargetArray, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FormatSubobjectiveScore");

	UUI_Challenge_Rewards_C_FormatSubobjectiveScore_Params params;
	params.TargetArray = TargetArray;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.PlayPatchAwardAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::PlayPatchAwardAudio(TEnumAsByte<EDLCChallengeRank> Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.PlayPatchAwardAudio");

	UUI_Challenge_Rewards_C_PlayPatchAwardAudio_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.PlaySubAwardAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::PlaySubAwardAudio(TEnumAsByte<EDLCChallengeRank> Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.PlaySubAwardAudio");

	UUI_Challenge_Rewards_C_PlaySubAwardAudio_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ContinueFromChallengeComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::ContinueFromChallengeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ContinueFromChallengeComplete");

	UUI_Challenge_Rewards_C_ContinueFromChallengeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCompleteLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::DisplayCompleteLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCompleteLayout");

	UUI_Challenge_Rewards_C_DisplayCompleteLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCellPop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResultsStep                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::DisplayCellPop(int ResultsStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCellPop");

	UUI_Challenge_Rewards_C_DisplayCellPop_Params params;
	params.ResultsStep = ResultsStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Step                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::DisplayCounter(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayCounter");

	UUI_Challenge_Rewards_C_DisplayCounter_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayContentCell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::DisplayContentCell(bool Enabled, int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayContentCell");

	UUI_Challenge_Rewards_C_DisplayContentCell_Params params;
	params.Enabled = Enabled;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetSubobjectiveResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// TEnumAsByte<EDLCChallengeRank> Award                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::SetSubobjectiveResult(int Id, const struct FText& Title, TEnumAsByte<EDLCChallengeRank> Award, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetSubobjectiveResult");

	UUI_Challenge_Rewards_C_SetSubobjectiveResult_Params params;
	params.Id = Id;
	params.Title = Title;
	params.Award = Award;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayChallengeResults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::DisplayChallengeResults(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayChallengeResults");

	UUI_Challenge_Rewards_C_DisplayChallengeResults_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.GetRewardCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBendRewardsScreenData  Reward_Data                    (Parm)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::GetRewardCount(const struct FBendRewardsScreenData& Reward_Data, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.GetRewardCount");

	UUI_Challenge_Rewards_C_GetRewardCount_Params params;
	params.Reward_Data = Reward_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.RequestLoadAllImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::RequestLoadAllImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.RequestLoadAllImages");

	UUI_Challenge_Rewards_C_RequestLoadAllImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.CanPause
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::CanPause(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.CanPause");

	UUI_Challenge_Rewards_C_CanPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRewardLayout
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPatch                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondPart                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFinalStorylineScreen          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::DisplayRewardLayout(bool isPatch, const struct FLinearColor& Color, bool* bSecondPart, bool* bFinalStorylineScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRewardLayout");

	UUI_Challenge_Rewards_C_DisplayRewardLayout_Params params;
	params.isPatch = isPatch;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSecondPart != nullptr)
		*bSecondPart = params.bSecondPart;
	if (bFinalStorylineScreen != nullptr)
		*bFinalStorylineScreen = params.bFinalStorylineScreen;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRepLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::DisplayRepLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRepLayout");

	UUI_Challenge_Rewards_C_DisplayRepLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetRewardTextColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             SlateColor                     (Parm)

void UUI_Challenge_Rewards_C::SetRewardTextColors(const struct FSlateColor& SlateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetRewardTextColors");

	UUI_Challenge_Rewards_C_SetRewardTextColors_Params params;
	params.SlateColor = SlateColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Init");

	UUI_Challenge_Rewards_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetHeaderData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::SetHeaderData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetHeaderData");

	UUI_Challenge_Rewards_C_SetHeaderData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.NotifyParentOfComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::NotifyParentOfComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.NotifyParentOfComplete");

	UUI_Challenge_Rewards_C_NotifyParentOfComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetParentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Challenge_HUD_C*     Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::SetParentReference(class UUI_Challenge_HUD_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetParentReference");

	UUI_Challenge_Rewards_C_SetParentReference_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetPausedState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::SetPausedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetPausedState");

	UUI_Challenge_Rewards_C_SetPausedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRepReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::DisplayRepReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayRepReward");

	UUI_Challenge_Rewards_C_DisplayRepReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ClearVisibilityAll
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::ClearVisibilityAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ClearVisibilityAll");

	UUI_Challenge_Rewards_C_ClearVisibilityAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetColorScheme
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::SetColorScheme(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetColorScheme");

	UUI_Challenge_Rewards_C_SetColorScheme_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AnimateOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::AnimateOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AnimateOut");

	UUI_Challenge_Rewards_C_AnimateOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AnimateIn
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AnimateIn");

	UUI_Challenge_Rewards_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDLCChallengeType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Challenge_Name                 (Parm)
// float                          RepAwarded                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentRep                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          RepMax                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          CreditsAwarded                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentCredits                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CreditsMax                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeRank> Patch_Award                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Total_Score                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          GlobalRepGained                (Parm, ZeroConstructor, IsPlainOldData)
// float                          GlobalRepTotal                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          GlobalRepMax                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan               Time                           (Parm, ZeroConstructor)

void UUI_Challenge_Rewards_C::SetDetails(TEnumAsByte<EDLCChallengeType> Type, const struct FText& Challenge_Name, float RepAwarded, float CurrentRep, float RepMax, float CreditsAwarded, float CurrentCredits, float CreditsMax, const struct FLinearColor& Color, TEnumAsByte<EDLCChallengeRank> Patch_Award, int Total_Score, float GlobalRepGained, float GlobalRepTotal, float GlobalRepMax, const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.SetDetails");

	UUI_Challenge_Rewards_C_SetDetails_Params params;
	params.Type = Type;
	params.Challenge_Name = Challenge_Name;
	params.RepAwarded = RepAwarded;
	params.CurrentRep = CurrentRep;
	params.RepMax = RepMax;
	params.CreditsAwarded = CreditsAwarded;
	params.CurrentCredits = CurrentCredits;
	params.CreditsMax = CreditsMax;
	params.Color = Color;
	params.Patch_Award = Patch_Award;
	params.Total_Score = Total_Score;
	params.GlobalRepGained = GlobalRepGained;
	params.GlobalRepTotal = GlobalRepTotal;
	params.GlobalRepMax = GlobalRepMax;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Challenge_Rewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Construct");

	UUI_Challenge_Rewards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Tick");

	UUI_Challenge_Rewards_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DetailsSet_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::DetailsSet_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DetailsSet_Event");

	UUI_Challenge_Rewards_C_DetailsSet_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Closed_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::Closed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Closed_Event");

	UUI_Challenge_Rewards_C_Closed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Details                        (Parm)
// struct FSlateColor             DetailsColor                   (Parm)

void UUI_Challenge_Rewards_C::DisplayReward(float Percent, const struct FText& Details, const struct FSlateColor& DetailsColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DisplayReward");

	UUI_Challenge_Rewards_C_DisplayReward_Params params;
	params.Percent = Percent;
	params.Details = Details;
	params.DetailsColor = DetailsColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.LoadStoryLineimages
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       Target                         (Parm)

void UUI_Challenge_Rewards_C::LoadStoryLineimages(TAssetPtr<class UObject> Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.LoadStoryLineimages");

	UUI_Challenge_Rewards_C_LoadStoryLineimages_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_Challenge_Rewards_C::CustomEvent_1(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.CustomEvent_1");

	UUI_Challenge_Rewards_C_CustomEvent_1_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnPreSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::OnPreSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnPreSaveGameLoaded_Event_1");

	UUI_Challenge_Rewards_C_OnPreSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ResetPage
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::ResetPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ResetPage");

	UUI_Challenge_Rewards_C_ResetPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Challenge_Rewards_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Destruct");

	UUI_Challenge_Rewards_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_Challenge_Rewards_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_Challenge_Rewards_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_518_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AssignXPFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::AssignXPFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AssignXPFinished_Event");

	UUI_Challenge_Rewards_C_AssignXPFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FinishedAnimatingPercent_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::FinishedAnimatingPercent_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.FinishedAnimatingPercent_Event_1");

	UUI_Challenge_Rewards_C_FinishedAnimatingPercent_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ContinueFromComplete
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::ContinueFromComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ContinueFromComplete");

	UUI_Challenge_Rewards_C_ContinueFromComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_13962_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Challenge_Rewards_C::BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_13962_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_13962_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Challenge_Rewards_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_13962_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_13968_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Challenge_Rewards_C::BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_13968_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_13968_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Challenge_Rewards_C_BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_13968_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Cross_K2Node_ComponentBoundEvent_13972_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Challenge_Rewards_C::BndEvt__MenuInteract_Cross_K2Node_ComponentBoundEvent_13972_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.BndEvt__MenuInteract_Cross_K2Node_ComponentBoundEvent_13972_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Challenge_Rewards_C_BndEvt__MenuInteract_Cross_K2Node_ComponentBoundEvent_13972_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnSelect1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::OnSelect1Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnSelect1Pressed");

	UUI_Challenge_Rewards_C_OnSelect1Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnConfirmPressed");

	UUI_Challenge_Rewards_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnSelect2Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::OnSelect2Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.OnSelect2Pressed");

	UUI_Challenge_Rewards_C_OnSelect2Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ExecuteUbergraph_UI_Challenge_Rewards
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rewards_C::ExecuteUbergraph_UI_Challenge_Rewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.ExecuteUbergraph_UI_Challenge_Rewards");

	UUI_Challenge_Rewards_C_ExecuteUbergraph_UI_Challenge_Rewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AssignXPFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::AssignXPFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.AssignXPFinished__DelegateSignature");

	UUI_Challenge_Rewards_C_AssignXPFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.Closed__DelegateSignature");

	UUI_Challenge_Rewards_C_Closed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DetailsSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rewards_C::DetailsSet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rewards.UI_Challenge_Rewards_C.DetailsSet__DelegateSignature");

	UUI_Challenge_Rewards_C_DetailsSet__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

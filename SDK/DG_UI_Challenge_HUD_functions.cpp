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

// Function UI_Challenge_HUD.UI_Challenge_HUD_C.CalculateScreenPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::CalculateScreenPosition(struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.CalculateScreenPosition");

	UUI_Challenge_HUD_C_CalculateScreenPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideSkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::HideSkills(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideSkills");

	UUI_Challenge_HUD_C_HideSkills_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideAllChallengeHUD
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::HideAllChallengeHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideAllChallengeHUD");

	UUI_Challenge_HUD_C_HideAllChallengeHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetChallengeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture                        (Parm)

void UUI_Challenge_HUD_C::SetChallengeImage(TAssetPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetChallengeImage");

	UUI_Challenge_HUD_C_SetChallengeImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ShowExtendedSubobjectives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Display                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::ShowExtendedSubobjectives(bool Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.ShowExtendedSubobjectives");

	UUI_Challenge_HUD_C_ShowExtendedSubobjectives_Params params;
	params.Display = Display;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayCountdownTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan               TotalTime                      (Parm, ZeroConstructor)
// struct FTimespan               CurrentTime                    (Parm, ZeroConstructor)

void UUI_Challenge_HUD_C::DisplayCountdownTimer(bool Show, const struct FTimespan& TotalTime, const struct FTimespan& CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayCountdownTimer");

	UUI_Challenge_HUD_C_DisplayCountdownTimer_Params params;
	params.Show = Show;
	params.TotalTime = TotalTime;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ResultsComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::ResultsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.ResultsComplete");

	UUI_Challenge_HUD_C_ResultsComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveAward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeRank> ChallengeRank                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplaySubobjectiveAward(const struct FText& Title, int Score, TEnumAsByte<EDLCChallengeRank> ChallengeRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveAward");

	UUI_Challenge_HUD_C_DisplaySubobjectiveAward_Params params;
	params.Title = Title;
	params.Score = Score;
	params.ChallengeRank = ChallengeRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplaySkills(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySkills");

	UUI_Challenge_HUD_C_DisplaySkills_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.IsScoreMeterVisible
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_Challenge_HUD_C::IsScoreMeterVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.IsScoreMeterVisible");

	UUI_Challenge_HUD_C_IsScoreMeterVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.GetRankColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDLCChallengeRank> ChallengeType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::GetRankColor(TEnumAsByte<EDLCChallengeRank> ChallengeType, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.GetRankColor");

	UUI_Challenge_HUD_C_GetRankColor_Params params;
	params.ChallengeType = ChallengeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeCheckpointBP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayerPoints                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::UpdateChallengeCheckpointBP(float PlayerPoints, const struct FText& Title, TEnumAsByte<EDLCChallengeRank> Rank, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeCheckpointBP");

	UUI_Challenge_HUD_C_UpdateChallengeCheckpointBP_Params params;
	params.PlayerPoints = PlayerPoints;
	params.Title = Title;
	params.Rank = Rank;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SubobjectiveCompleteBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::SubobjectiveCompleteBP(int Id, bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SubobjectiveCompleteBP");

	UUI_Challenge_HUD_C_SubobjectiveCompleteBP_Params params;
	params.Id = Id;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveWithValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// struct FText                   Value                          (Parm)
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplaySubobjectiveWithValues(const struct FText& Title, const struct FText& SubTitle, const struct FText& Value, int Id, int Count, int Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveWithValues");

	UUI_Challenge_HUD_C_DisplaySubobjectiveWithValues_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.Value = Value;
	params.Id = Id;
	params.Count = Count;
	params.Total = Total;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.GetChallengeColorAndIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDLCChallengeType> ChallengeType                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::GetChallengeColorAndIcon(TEnumAsByte<EDLCChallengeType> ChallengeType, class UTexture2D** Icon, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.GetChallengeColorAndIcon");

	UUI_Challenge_HUD_C_GetChallengeColorAndIcon_Params params;
	params.ChallengeType = ChallengeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayPatchAwardBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// TEnumAsByte<EDLCChallengeRank> ChallengeRank                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplayPatchAwardBP(const struct FText& Title, const struct FText& SubTitle, TEnumAsByte<EDLCChallengeRank> ChallengeRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayPatchAwardBP");

	UUI_Challenge_HUD_C_DisplayPatchAwardBP_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.ChallengeRank = ChallengeRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeScoreBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayerPoints                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisplayPopup                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               EnemyPawn                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBendSkeletalMeshComponent* EnemyMesh                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// class UScoreCounter_C*         Widget_Reference               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::UpdateChallengeScoreBP(float PlayerPoints, bool DisplayPopup, class ABendPawn* EnemyPawn, class UBendSkeletalMeshComponent* EnemyMesh, const struct FText& Title, class UScoreCounter_C** Widget_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeScoreBP");

	UUI_Challenge_HUD_C_UpdateChallengeScoreBP_Params params;
	params.PlayerPoints = PlayerPoints;
	params.DisplayPopup = DisplayPopup;
	params.EnemyPawn = EnemyPawn;
	params.EnemyMesh = EnemyMesh;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Reference != nullptr)
		*Widget_Reference = params.Widget_Reference;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetMaterialTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DMI                            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::SetMaterialTexture(class UMaterialInstanceDynamic* DMI, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetMaterialTexture");

	UUI_Challenge_HUD_C_SetMaterialTexture_Params params;
	params.DMI = DMI;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetMissionCompleteVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::SetMissionCompleteVisible(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetMissionCompleteVisible");

	UUI_Challenge_HUD_C_SetMissionCompleteVisible_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.TransitionToStatic
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::TransitionToStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.TransitionToStatic");

	UUI_Challenge_HUD_C_TransitionToStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideCurrentObjective
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::HideCurrentObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideCurrentObjective");

	UUI_Challenge_HUD_C_HideCurrentObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClearBannervisible             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::HideBanner(bool ClearBannervisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.HideBanner");

	UUI_Challenge_HUD_C_HideBanner_Params params;
	params.ClearBannervisible = ClearBannervisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallenge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDLCChallengeType> ChallengeType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_Challenge_HUD_C::UpdateChallenge(TEnumAsByte<EDLCChallengeType> ChallengeType, const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallenge");

	UUI_Challenge_HUD_C_UpdateChallenge_Params params;
	params.ChallengeType = ChallengeType;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDLCChallengeType> ChallengeType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// float                          GoldPoints                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SilverPoints                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BronzePoints                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::SetDetails(TEnumAsByte<EDLCChallengeType> ChallengeType, const struct FText& Title, const struct FText& SubTitle, float GoldPoints, float SilverPoints, float BronzePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetDetails");

	UUI_Challenge_HUD_C_SetDetails_Params params;
	params.ChallengeType = ChallengeType;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.GoldPoints = GoldPoints;
	params.SilverPoints = SilverPoints;
	params.BronzePoints = BronzePoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.Init");

	UUI_Challenge_HUD_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnFail_FFB9D4C04B2A734E230A1AB0D4D34446
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::OnFail_FFB9D4C04B2A734E230A1AB0D4D34446(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnFail_FFB9D4C04B2A734E230A1AB0D4D34446");

	UUI_Challenge_HUD_C_OnFail_FFB9D4C04B2A734E230A1AB0D4D34446_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnSuccess_FFB9D4C04B2A734E230A1AB0D4D34446
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::OnSuccess_FFB9D4C04B2A734E230A1AB0D4D34446(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnSuccess_FFB9D4C04B2A734E230A1AB0D4D34446");

	UUI_Challenge_HUD_C_OnSuccess_FFB9D4C04B2A734E230A1AB0D4D34446_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnFail_BB2592EC4B3594DB62CA2B84D3297821
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::OnFail_BB2592EC4B3594DB62CA2B84D3297821(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnFail_BB2592EC4B3594DB62CA2B84D3297821");

	UUI_Challenge_HUD_C_OnFail_BB2592EC4B3594DB62CA2B84D3297821_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnSuccess_BB2592EC4B3594DB62CA2B84D3297821
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::OnSuccess_BB2592EC4B3594DB62CA2B84D3297821(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnSuccess_BB2592EC4B3594DB62CA2B84D3297821");

	UUI_Challenge_HUD_C_OnSuccess_BB2592EC4B3594DB62CA2B84D3297821_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Challenge_HUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.Construct");

	UUI_Challenge_HUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.Tick");

	UUI_Challenge_HUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.CurrentAnmAnimationFin
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::CurrentAnmAnimationFin()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.CurrentAnmAnimationFin");

	UUI_Challenge_HUD_C_CurrentAnmAnimationFin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.HUDAnimAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::HUDAnimAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.HUDAnimAnimationFinished");

	UUI_Challenge_HUD_C_HUDAnimAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayChallenge
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDLCChallengeType>* ChallengeType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  SubTitle                       (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         GoldPoints                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SilverPoints                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BronzePoints                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumSubobjectives               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplayChallenge(TEnumAsByte<EDLCChallengeType>* ChallengeType, struct FText* Title, struct FText* SubTitle, float* GoldPoints, float* SilverPoints, float* BronzePoints, int* NumSubobjectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayChallenge");

	UUI_Challenge_HUD_C_DisplayChallenge_Params params;
	params.ChallengeType = ChallengeType;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.GoldPoints = GoldPoints;
	params.SilverPoints = SilverPoints;
	params.BronzePoints = BronzePoints;
	params.NumSubobjectives = NumSubobjectives;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ChallengeComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDLCCompleteChallengeData* CompleteChallengeData          (Parm)

void UUI_Challenge_HUD_C::ChallengeComplete(struct FDLCCompleteChallengeData* CompleteChallengeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.ChallengeComplete");

	UUI_Challenge_HUD_C_ChallengeComplete_Params params;
	params.CompleteChallengeData = CompleteChallengeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjective
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           Id                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplaySubobjective(struct FText* Title, int* Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjective");

	UUI_Challenge_HUD_C_DisplaySubobjective_Params params;
	params.Title = Title;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan*              CurrentTime                    (Parm, ZeroConstructor)
// bool*                          bUseLargeTimer                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::UpdateChallengeTime(struct FTimespan* CurrentTime, bool* bUseLargeTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeTime");

	UUI_Challenge_HUD_C_UpdateChallengeTime_Params params;
	params.CurrentTime = CurrentTime;
	params.bUseLargeTimer = bUseLargeTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeScore
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Points                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::UpdateChallengeScore(float* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeScore");

	UUI_Challenge_HUD_C_UpdateChallengeScore_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SubobjectiveComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Id                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFailed                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::SubobjectiveComplete(int* Id, bool* bFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SubobjectiveComplete");

	UUI_Challenge_HUD_C_SubobjectiveComplete_Params params;
	params.Id = Id;
	params.bFailed = bFailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayPatchAward
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  SubTitle                       (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EDLCChallengeRank>* ChallengeRank                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplayPatchAward(struct FText* Title, struct FText* SubTitle, TEnumAsByte<EDLCChallengeRank>* ChallengeRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayPatchAward");

	UUI_Challenge_HUD_C_DisplayPatchAward_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.ChallengeRank = ChallengeRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Start321Countdown
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::Start321Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.Start321Countdown");

	UUI_Challenge_HUD_C_Start321Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubChallengeAward
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeRank>* SubChallengeRank               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNew                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplaySubChallengeAward(int* Index, TEnumAsByte<EDLCChallengeRank>* SubChallengeRank, bool* bNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubChallengeAward");

	UUI_Challenge_HUD_C_DisplaySubChallengeAward_Params params;
	params.Index = Index;
	params.SubChallengeRank = SubChallengeRank;
	params.bNew = bNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetTextureAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MatchSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::SetTextureAsync(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetTextureAsync");

	UUI_Challenge_HUD_C_SetTextureAsync_Params params;
	params.TextureAsset = TextureAsset;
	params.Image = Image;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetCountdownTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan*              TotalTime                      (Parm, ZeroConstructor)
// struct FTimespan*              RemainingTime                  (Parm, ZeroConstructor)

void UUI_Challenge_HUD_C::SetCountdownTime(bool* bVisible, struct FTimespan* TotalTime, struct FTimespan* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetCountdownTime");

	UUI_Challenge_HUD_C_SetCountdownTime_Params params;
	params.bVisible = bVisible;
	params.TotalTime = TotalTime;
	params.RemainingTime = RemainingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan*              Time                           (Parm, ZeroConstructor)

void UUI_Challenge_HUD_C::SetTime(bool* bVisible, struct FTimespan* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetTime");

	UUI_Challenge_HUD_C_SetTime_Params params;
	params.bVisible = bVisible;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetChallengeSkills
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendSkill>*     Skills                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Challenge_HUD_C::SetChallengeSkills(TArray<struct FBendSkill>* Skills)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.SetChallengeSkills");

	UUI_Challenge_HUD_C_SetChallengeSkills_Params params;
	params.Skills = Skills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayAltScore
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplayAltScore(struct FText* Title, int* Value, bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayAltScore");

	UUI_Challenge_HUD_C_DisplayAltScore_Params params;
	params.Title = Title;
	params.Value = Value;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ContinueToResults
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::ContinueToResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.ContinueToResults");

	UUI_Challenge_HUD_C_ContinueToResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveScoreMeter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Score                          (Parm)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplaySubobjectiveScoreMeter(int Id, const struct FText& Score, TEnumAsByte<EDLCChallengeRank> Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplaySubobjectiveScoreMeter");

	UUI_Challenge_HUD_C_DisplaySubobjectiveScoreMeter_Params params;
	params.Id = Id;
	params.Score = Score;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayDashboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Display                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplayDashboard(bool Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayDashboard");

	UUI_Challenge_HUD_C_DisplayDashboard_Params params;
	params.Display = Display;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnChallengeImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture                        (Parm)

void UUI_Challenge_HUD_C::OnChallengeImage(TAssetPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.OnChallengeImage");

	UUI_Challenge_HUD_C_OnChallengeImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeCombo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Combo                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::UpdateChallengeCombo(int Combo, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.UpdateChallengeCombo");

	UUI_Challenge_HUD_C_UpdateChallengeCombo_Params params;
	params.Combo = Combo;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.Cancel321Countdown
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::Cancel321Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.Cancel321Countdown");

	UUI_Challenge_HUD_C_Cancel321Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayTimeGain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SecondsGained                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Reason                         (Parm)

void UUI_Challenge_HUD_C::DisplayTimeGain(float SecondsGained, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayTimeGain");

	UUI_Challenge_HUD_C_DisplayTimeGain_Params params;
	params.SecondsGained = SecondsGained;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.InternalCooldownTimerAudio
// (BlueprintCallable, BlueprintEvent)

void UUI_Challenge_HUD_C::InternalCooldownTimerAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.InternalCooldownTimerAudio");

	UUI_Challenge_HUD_C_InternalCooldownTimerAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayEndOfRoundBonus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::DisplayEndOfRoundBonus(const struct FText& Title, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.DisplayEndOfRoundBonus");

	UUI_Challenge_HUD_C_DisplayEndOfRoundBonus_Params params;
	params.Title = Title;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_HUD.UI_Challenge_HUD_C.ExecuteUbergraph_UI_Challenge_HUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_HUD_C::ExecuteUbergraph_UI_Challenge_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_HUD.UI_Challenge_HUD_C.ExecuteUbergraph_UI_Challenge_HUD");

	UUI_Challenge_HUD_C_ExecuteUbergraph_UI_Challenge_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

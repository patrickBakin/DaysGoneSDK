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

// Function UI_Score_Meter.UI_Score_Meter_C.SubobjectiveFailed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::SubobjectiveFailed(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.SubobjectiveFailed");

	UUI_Score_Meter_C_SubobjectiveFailed_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.AnimateSubobjectives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Display                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::AnimateSubobjectives(bool Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.AnimateSubobjectives");

	UUI_Score_Meter_C_AnimateSubobjectives_Params params;
	params.Display = Display;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.UpdateSubobjectiveScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Id                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Score                          (Parm)
// struct FLinearColor            RankColor                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::UpdateSubobjectiveScore(int Id, const struct FText& Score, const struct FLinearColor& RankColor, TEnumAsByte<EDLCChallengeRank> Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.UpdateSubobjectiveScore");

	UUI_Score_Meter_C_UpdateSubobjectiveScore_Params params;
	params.Id = Id;
	params.Score = Score;
	params.RankColor = RankColor;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.RemoveMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Score_Meter_C::RemoveMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.RemoveMissionTimer");

	UUI_Score_Meter_C_RemoveMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.NotifyParentOfComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Score_Meter_C::NotifyParentOfComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.NotifyParentOfComplete");

	UUI_Score_Meter_C_NotifyParentOfComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.UpdatePlayerPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayerPoints                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::UpdatePlayerPoints(float PlayerPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.UpdatePlayerPoints");

	UUI_Score_Meter_C_UpdatePlayerPoints_Params params;
	params.PlayerPoints = PlayerPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.SetParentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Challenge_HUD_C*     Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::SetParentReference(class UUI_Challenge_HUD_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.SetParentReference");

	UUI_Score_Meter_C_SetParentReference_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerPoints                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GoldPoints                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SilverPoints                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BronzePoints                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerTime                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeType> ChallengeType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::SetDetails(const struct FLinearColor& Color, float PlayerPoints, float GoldPoints, float SilverPoints, float BronzePoints, float Duration, float PlayerTime, TEnumAsByte<EDLCChallengeType> ChallengeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.SetDetails");

	UUI_Score_Meter_C_SetDetails_Params params;
	params.Color = Color;
	params.PlayerPoints = PlayerPoints;
	params.GoldPoints = GoldPoints;
	params.SilverPoints = SilverPoints;
	params.BronzePoints = BronzePoints;
	params.Duration = Duration;
	params.PlayerTime = PlayerTime;
	params.ChallengeType = ChallengeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Score_Meter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.Construct");

	UUI_Score_Meter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.Tick");

	UUI_Score_Meter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.ActivateTimer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHudMissionTimerDetails* Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Score_Meter_C::ActivateTimer(struct FHudMissionTimerDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.ActivateTimer");

	UUI_Score_Meter_C_ActivateTimer_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.SetPercent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::SetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.SetPercent");

	UUI_Score_Meter_C_SetPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.UpdateCombo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Combo                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::UpdateCombo(int Combo, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.UpdateCombo");

	UUI_Score_Meter_C_UpdateCombo_Params params;
	params.Combo = Combo;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Score_Meter.UI_Score_Meter_C.ExecuteUbergraph_UI_Score_Meter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Score_Meter_C::ExecuteUbergraph_UI_Score_Meter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Score_Meter.UI_Score_Meter_C.ExecuteUbergraph_UI_Score_Meter");

	UUI_Score_Meter_C_ExecuteUbergraph_UI_Score_Meter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

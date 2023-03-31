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

// Function DLCStatePackage.DLCStatePackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.UserConstructionScript");

	ADLCStatePackage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ChallengeStartedCall
// (BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::ChallengeStartedCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ChallengeStartedCall");

	ADLCStatePackage_C_ChallengeStartedCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ChallengeRestartedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::ChallengeRestartedCall(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ChallengeRestartedCall");

	ADLCStatePackage_C_ChallengeRestartedCall_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ChallengeFailedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::ChallengeFailedCall(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ChallengeFailedCall");

	ADLCStatePackage_C_ChallengeFailedCall_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ChallengeCompletedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::ChallengeCompletedCall(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ChallengeCompletedCall");

	ADLCStatePackage_C_ChallengeCompletedCall_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.AddPlayerChosenLoadout
// (BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::AddPlayerChosenLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.AddPlayerChosenLoadout");

	ADLCStatePackage_C_AddPlayerChosenLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnPurchaseCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ItemTag                        (Parm)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reputation                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShopPoints                     (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnPurchaseCall(const struct FGameplayTag& ItemTag, int ItemLevel, int Reputation, int ShopPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnPurchaseCall");

	ADLCStatePackage_C_OnPurchaseCall_Params params;
	params.ItemTag = ItemTag;
	params.ItemLevel = ItemLevel;
	params.Reputation = Reputation;
	params.ShopPoints = ShopPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnComboFinishedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ComboCount                     (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnComboFinishedCall(int ComboCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnComboFinishedCall");

	ADLCStatePackage_C_OnComboFinishedCall_Params params;
	params.ComboCount = ComboCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ChallengeQuitToMainCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::ChallengeQuitToMainCall(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ChallengeQuitToMainCall");

	ADLCStatePackage_C_ChallengeQuitToMainCall_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnScoreIncreaseCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnScoreIncreaseCall(const struct FGameplayTag& GameplayTag, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnScoreIncreaseCall");

	ADLCStatePackage_C_OnScoreIncreaseCall_Params params;
	params.GameplayTag = GameplayTag;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnMedalIncreasedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubObjectiveIndex              (Parm, ZeroConstructor, IsPlainOldData)
// int                            MedalIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnMedalIncreasedCall(int SubObjectiveIndex, int MedalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnMedalIncreasedCall");

	ADLCStatePackage_C_OnMedalIncreasedCall_Params params;
	params.SubObjectiveIndex = SubObjectiveIndex;
	params.MedalIndex = MedalIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.CollateScoresAndMedals
// (BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::CollateScoresAndMedals()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.CollateScoresAndMedals");

	ADLCStatePackage_C_CollateScoresAndMedals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.MediumTickEvents
// (BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::MediumTickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.MediumTickEvents");

	ADLCStatePackage_C_MediumTickEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ShortestTickEvents
// (BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::ShortestTickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ShortestTickEvents");

	ADLCStatePackage_C_ShortestTickEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.LongTickEvents
// (BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::LongTickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.LongTickEvents");

	ADLCStatePackage_C_LongTickEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ADLCStatePackage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ReceiveBeginPlay");

	ADLCStatePackage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.SetCurrentScoreManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ScoreManager_C*      NewScoreManager                (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::SetCurrentScoreManager(class ABP_ScoreManager_C* NewScoreManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.SetCurrentScoreManager");

	ADLCStatePackage_C_SetCurrentScoreManager_Params params;
	params.NewScoreManager = NewScoreManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.FailedToFindMetaManager
// (BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::FailedToFindMetaManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.FailedToFindMetaManager");

	ADLCStatePackage_C_FailedToFindMetaManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnItemPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ItemTag                        (Parm)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reputation                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShopPoints                     (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnItemPurchased(const struct FGameplayTag& ItemTag, int ItemLevel, int Reputation, int ShopPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnItemPurchased");

	ADLCStatePackage_C_OnItemPurchased_Params params;
	params.ItemTag = ItemTag;
	params.ItemLevel = ItemLevel;
	params.Reputation = Reputation;
	params.ShopPoints = ShopPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ReCheckDLCUIManager
// (BlueprintCallable, BlueprintEvent)

void ADLCStatePackage_C::ReCheckDLCUIManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ReCheckDLCUIManager");

	ADLCStatePackage_C_ReCheckDLCUIManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnDLCChallengeComplete(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeComplete");

	ADLCStatePackage_C_OnDLCChallengeComplete_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnDLCChallengeFail(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeFail");

	ADLCStatePackage_C_OnDLCChallengeFail_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeQuitToMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnDLCChallengeQuitToMainMenu(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnDLCChallengeQuitToMainMenu");

	ADLCStatePackage_C_OnDLCChallengeQuitToMainMenu_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnDlcChallengeRetry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnDlcChallengeRetry(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnDlcChallengeRetry");

	ADLCStatePackage_C_OnDlcChallengeRetry_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnComboComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ComboCountOnComplete           (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnComboComplete(int ComboCountOnComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnComboComplete");

	ADLCStatePackage_C_OnComboComplete_Params params;
	params.ComboCountOnComplete = ComboCountOnComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnScoreIncrease
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)
// int                            ScoreEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnScoreIncrease(const struct FGameplayTag& GameplayTag, int ScoreEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnScoreIncrease");

	ADLCStatePackage_C_OnScoreIncrease_Params params;
	params.GameplayTag = GameplayTag;
	params.ScoreEvent = ScoreEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.OnMedalIncrease
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubObjectiveIndex              (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubObjectiveMedal              (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::OnMedalIncrease(int SubObjectiveIndex, int SubObjectiveMedal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.OnMedalIncrease");

	ADLCStatePackage_C_OnMedalIncrease_Params params;
	params.SubObjectiveIndex = SubObjectiveIndex;
	params.SubObjectiveMedal = SubObjectiveMedal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCStatePackage.DLCStatePackage_C.ExecuteUbergraph_DLCStatePackage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADLCStatePackage_C::ExecuteUbergraph_DLCStatePackage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCStatePackage.DLCStatePackage_C.ExecuteUbergraph_DLCStatePackage");

	ADLCStatePackage_C_ExecuteUbergraph_DLCStatePackage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

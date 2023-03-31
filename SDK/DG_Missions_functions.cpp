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

// Function Missions.Missions_C.EndAQWVO
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::EndAQWVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.EndAQWVO");

	AMissions_C_EndAQWVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMissions_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.ReceiveBeginPlay");

	AMissions_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.JobEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::JobEnded(class UJobClassInfo* JobID, bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.JobEnded");

	AMissions_C_JobEnded_Params params;
	params.JobID = JobID;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.MissionCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::MissionCompleted(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.MissionCompleted");

	AMissions_C_MissionCompleted_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.OnMissionBegin_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.OnMissionBegin_MM_Event_1");

	AMissions_C_OnMissionBegin_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.NRS2_Complete
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::NRS2_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.NRS2_Complete");

	AMissions_C_NRS2_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.TLL2_Complete
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::TLL2_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.TLL2_Complete");

	AMissions_C_TLL2_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.TLL1_Complete
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::TLL1_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.TLL1_Complete");

	AMissions_C_TLL1_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.OnJobUnlocked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::OnJobUnlocked_Event_1(class UJobClassInfo* JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.OnJobUnlocked_Event_1");

	AMissions_C_OnJobUnlocked_Event_1_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.DiamondLake_State_02
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::DiamondLake_State_02()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.DiamondLake_State_02");

	AMissions_C_DiamondLake_State_02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.DiamondLake_State_00
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::DiamondLake_State_00()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.DiamondLake_State_00");

	AMissions_C_DiamondLake_State_00_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.OBF_Complete
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::OBF_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.OBF_Complete");

	AMissions_C_OBF_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.OBF_FadedIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void AMissions_C::OBF_FadedIn(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.OBF_FadedIn");

	AMissions_C_OBF_FadedIn_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.SetBoozerAlive
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::SetBoozerAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.SetBoozerAlive");

	AMissions_C_SetBoozerAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.SetBoozerDead
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::SetBoozerDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.SetBoozerDead");

	AMissions_C_SetBoozerDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.MissionBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::MissionBegin(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.MissionBegin");

	AMissions_C_MissionBegin_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.AWI1_Begin
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::AWI1_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.AWI1_Begin");

	AMissions_C_AWI1_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.AWI2_Complete
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::AWI2_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.AWI2_Complete");

	AMissions_C_AWI2_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.AWI2_FadedIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void AMissions_C::AWI2_FadedIn(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.AWI2_FadedIn");

	AMissions_C_AWI2_FadedIn_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.OnDemoJumpPoint_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataAsset*              JobOrMissionID                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::OnDemoJumpPoint_Event_1(class UDataAsset* JobOrMissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.OnDemoJumpPoint_Event_1");

	AMissions_C_OnDemoJumpPoint_Event_1_Params params;
	params.JobOrMissionID = JobOrMissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.MilitiaHostilityCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataAsset*              JobOrMissionID                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::MilitiaHostilityCheck(class UDataAsset* JobOrMissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.MilitiaHostilityCheck");

	AMissions_C_MilitiaHostilityCheck_Params params;
	params.JobOrMissionID = JobOrMissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.MUF1_Begin
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::MUF1_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.MUF1_Begin");

	AMissions_C_MUF1_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.MUF1_FadedIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void AMissions_C::MUF1_FadedIn(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.MUF1_FadedIn");

	AMissions_C_MUF1_FadedIn_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.RNA1MUF1TrophyUnlock
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::RNA1MUF1TrophyUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.RNA1MUF1TrophyUnlock");

	AMissions_C_RNA1MUF1TrophyUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.StartEndGameCredits
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::StartEndGameCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.StartEndGameCredits");

	AMissions_C_StartEndGameCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.EnableBGCredits
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::EnableBGCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.EnableBGCredits");

	AMissions_C_EnableBGCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.CreditsEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::CreditsEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.CreditsEnd_Event_1");

	AMissions_C_CreditsEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.CompletedStoryMode
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::CompletedStoryMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.CompletedStoryMode");

	AMissions_C_CompletedStoryMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.OnFadingFinished_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void AMissions_C::OnFadingFinished_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.OnFadingFinished_MM_Event_1");

	AMissions_C_OnFadingFinished_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.StoryCompleteTutorialWait
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::StoryCompleteTutorialWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.StoryCompleteTutorialWait");

	AMissions_C_StoryCompleteTutorialWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.StartEndGameCreditsBegin
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::StartEndGameCreditsBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.StartEndGameCreditsBegin");

	AMissions_C_StartEndGameCreditsBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.OnPostSaveGameLoaded_Event_1");

	AMissions_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.EndCredits
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::EndCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.EndCredits");

	AMissions_C_EndCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.ContinueEndGameCredits
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::ContinueEndGameCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.ContinueEndGameCredits");

	AMissions_C_ContinueEndGameCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.FMC1_Complete
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::FMC1_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.FMC1_Complete");

	AMissions_C_FMC1_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.FIN_Complete
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::FIN_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.FIN_Complete");

	AMissions_C_FIN_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.RewardClosedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 AssociatedData                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::RewardClosedEvent(class UObject* AssociatedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.RewardClosedEvent");

	AMissions_C_RewardClosedEvent_Params params;
	params.AssociatedData = AssociatedData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.ResidueTut
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::ResidueTut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.ResidueTut");

	AMissions_C_ResidueTut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.ReceivePreSaveGameLoaded");

	AMissions_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.COB3&4 Bike Skin
// (BlueprintCallable, BlueprintEvent)

void AMissions_C::COB3_4_Bike_Skin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.COB3&4 Bike Skin");

	AMissions_C_COB3_4_Bike_Skin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Missions.Missions_C.ExecuteUbergraph_Missions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissions_C::ExecuteUbergraph_Missions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missions.Missions_C.ExecuteUbergraph_Missions");

	AMissions_C_ExecuteUbergraph_Missions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

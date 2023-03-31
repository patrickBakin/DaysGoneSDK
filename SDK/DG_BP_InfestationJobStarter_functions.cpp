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

// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.CheckMissionBlacklist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InBlacklistedMission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::CheckMissionBlacklist(bool* InBlacklistedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.CheckMissionBlacklist");

	ABP_InfestationJobStarter_C_CheckMissionBlacklist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBlacklistedMission != nullptr)
		*InBlacklistedMission = params.InBlacklistedMission;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.CheckForMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_InfestationJobStarter_C::CheckForMission(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.CheckForMission");

	ABP_InfestationJobStarter_C_CheckForMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InfestationJobStarter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.UserConstructionScript");

	ABP_InfestationJobStarter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.LeftZoneVOComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::LeftZoneVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.LeftZoneVOComplete");

	ABP_InfestationJobStarter_C_LeftZoneVOComplete_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.LeftZone
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationJobStarter_C::LeftZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.LeftZone");

	ABP_InfestationJobStarter_C_LeftZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FirstEnterZoneVOComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::FirstEnterZoneVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FirstEnterZoneVOComplete");

	ABP_InfestationJobStarter_C_FirstEnterZoneVOComplete_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FirstEnterZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::FirstEnterZone(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FirstEnterZone");

	ABP_InfestationJobStarter_C_FirstEnterZone_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReenterZoneVOComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::ReenterZoneVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReenterZoneVOComplete");

	ABP_InfestationJobStarter_C_ReenterZoneVOComplete_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReenterZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::ReenterZone(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReenterZone");

	ABP_InfestationJobStarter_C_ReenterZone_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FinishedZoneVOComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::FinishedZoneVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FinishedZoneVOComplete");

	ABP_InfestationJobStarter_C_FinishedZoneVOComplete_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FinishedZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::FinishedZone(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.FinishedZone");

	ABP_InfestationJobStarter_C_FinishedZone_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_InfestationJobStarter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReceiveBeginPlay");

	ABP_InfestationJobStarter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.StartInfestationJob
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationJobStarter_C::StartInfestationJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.StartInfestationJob");

	ABP_InfestationJobStarter_C_StartInfestationJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnMapTaken_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationJobStarter_C::OnMapTaken_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnMapTaken_Event");

	ABP_InfestationJobStarter_C_OnMapTaken_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnActorBeginOverlap_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::OnActorBeginOverlap_Event_1(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnActorBeginOverlap_Event_1");

	ABP_InfestationJobStarter_C_OnActorBeginOverlap_Event_1_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnActorEndOverlap_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::OnActorEndOverlap_Event_1(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnActorEndOverlap_Event_1");

	ABP_InfestationJobStarter_C_OnActorEndOverlap_Event_1_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnZoneCleared_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendNestingZoneActor*   ZoneActor                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::OnZoneCleared_Event_1(class ABendNestingZoneActor* ZoneActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnZoneCleared_Event_1");

	ABP_InfestationJobStarter_C_OnZoneCleared_Event_1_Params params;
	params.ZoneActor = ZoneActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnPostSaveGameLoaded_Event_1");

	ABP_InfestationJobStarter_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.TimerUnlockJob
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationJobStarter_C::TimerUnlockJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.TimerUnlockJob");

	ABP_InfestationJobStarter_C_TimerUnlockJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ReceivePreSaveGameLoaded");

	ABP_InfestationJobStarter_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnJobEnded_JobManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::OnJobEnded_JobManager(class UJobClassInfo* JobID, bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.OnJobEnded_JobManager");

	ABP_InfestationJobStarter_C_OnJobEnded_JobManager_Params params;
	params.JobID = JobID;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.TrophyCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationJobStarter_C::TrophyCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.TrophyCheck");

	ABP_InfestationJobStarter_C_TrophyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ExecuteUbergraph_BP_InfestationJobStarter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationJobStarter_C::ExecuteUbergraph_BP_InfestationJobStarter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationJobStarter.BP_InfestationJobStarter_C.ExecuteUbergraph_BP_InfestationJobStarter");

	ABP_InfestationJobStarter_C_ExecuteUbergraph_BP_InfestationJobStarter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

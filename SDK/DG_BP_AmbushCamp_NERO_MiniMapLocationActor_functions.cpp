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

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.UpdateFastTravelLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FastTravelAvailable            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::UpdateFastTravelLocation(bool FastTravelAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.UpdateFastTravelLocation");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_UpdateFastTravelLocation_Params params;
	params.FastTravelAvailable = FastTravelAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.CheckMissionBlacklist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InBlacklistedMission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::CheckMissionBlacklist(bool* InBlacklistedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.CheckMissionBlacklist");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_CheckMissionBlacklist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBlacklistedMission != nullptr)
		*InBlacklistedMission = params.InBlacklistedMission;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.CheckForMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AmbushCamp_NERO_MiniMapLocationActor_C::CheckForMission(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.CheckForMission");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_CheckForMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.MapIconState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::MapIconState(bool Visible, bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.MapIconState");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_MapIconState_Params params;
	params.Visible = Visible;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.UserConstructionScript");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ReceiveBeginPlay");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnMapTaken_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::OnMapTaken_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnMapTaken_Event");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_OnMapTaken_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnCheckpointDiscovered_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendNeroCheckpointData* Checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::OnCheckpointDiscovered_Event_1(class UBendNeroCheckpointData* Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnCheckpointDiscovered_Event_1");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_OnCheckpointDiscovered_Event_1_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.StartNEROJob
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayVO                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::StartNEROJob(bool PlayVO)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.StartNEROJob");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_StartNEROJob_Params params;
	params.PlayVO = PlayVO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ProgressINDObjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               PawnSpeaking                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConversationID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> SuccessOrFail                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::ProgressINDObjective(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ProgressINDObjective");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ProgressINDObjective_Params params;
	params.PawnSpeaking = PawnSpeaking;
	params.SoundName = SoundName;
	params.ConversationID = ConversationID;
	params.SuccessOrFail = SuccessOrFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ArriveVO
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::ArriveVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ArriveVO");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ArriveVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnNeroCheckpointInjectorUsed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendNeroCheckpointData* Checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::OnNeroCheckpointInjectorUsed_Event_1(class UBendNeroCheckpointData* Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnNeroCheckpointInjectorUsed_Event_1");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_OnNeroCheckpointInjectorUsed_Event_1_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BikeChaseStarted
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::BikeChaseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BikeChaseStarted");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_BikeChaseStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BikeChaseEnded
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::BikeChaseEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BikeChaseEnded");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_BikeChaseEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.TimerUnlockJob
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::TimerUnlockJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.TimerUnlockJob");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_TimerUnlockJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ReceivePreSaveGameLoaded");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_NERO_MiniMapLocationActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_NERO_MiniMapLocationActor_C::ExecuteUbergraph_BP_AmbushCamp_NERO_MiniMapLocationActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_NERO_MiniMapLocationActor");

	ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ExecuteUbergraph_BP_AmbushCamp_NERO_MiniMapLocationActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

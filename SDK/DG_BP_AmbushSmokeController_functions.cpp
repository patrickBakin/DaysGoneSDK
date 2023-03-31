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

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckForPrerequisiteMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NotCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::CheckForPrerequisiteMission(bool* NotCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckForPrerequisiteMission");

	ABP_AmbushSmokeController_C_CheckForPrerequisiteMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotCompleted != nullptr)
		*NotCompleted = params.NotCompleted;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckForFlashbackMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInFlashback                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::CheckForFlashbackMission(TEnumAsByte<EMissionIDs> MissionID, bool* IsInFlashback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckForFlashbackMission");

	ABP_AmbushSmokeController_C_CheckForFlashbackMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInFlashback != nullptr)
		*IsInFlashback = params.IsInFlashback;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckSmokeParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendBunkerData*         BendBunkerData                 (Parm, ZeroConstructor, IsPlainOldData)
// class AEmitter*                Emitter                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::CheckSmokeParticle(class UBendBunkerData* BendBunkerData, class AEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckSmokeParticle");

	ABP_AmbushSmokeController_C_CheckSmokeParticle_Params params;
	params.BendBunkerData = BendBunkerData;
	params.Emitter = Emitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbushSmokeController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.UserConstructionScript");

	ABP_AmbushSmokeController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnEnemyCampCleared_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushSmokeController_C::OnEnemyCampCleared_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnEnemyCampCleared_Event");

	ABP_AmbushSmokeController_C_OnEnemyCampCleared_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckParticles
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushSmokeController_C::CheckParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckParticles");

	ABP_AmbushSmokeController_C_CheckParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.BindEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushSmokeController_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.BindEvents");

	ABP_AmbushSmokeController_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnMissionBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::OnMissionBegin(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnMissionBegin");

	ABP_AmbushSmokeController_C_OnMissionBegin_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnMissionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnMissionComplete");

	ABP_AmbushSmokeController_C_OnMissionComplete_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbushSmokeController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ReceiveBeginPlay");

	ABP_AmbushSmokeController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ReceivePreSaveGameLoaded");

	ABP_AmbushSmokeController_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.InitializeParticles
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushSmokeController_C::InitializeParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.InitializeParticles");

	ABP_AmbushSmokeController_C_InitializeParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.UpdatePatricle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::UpdatePatricle(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.UpdatePatricle");

	ABP_AmbushSmokeController_C_UpdatePatricle_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.DeactivateParticle
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushSmokeController_C::DeactivateParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.DeactivateParticle");

	ABP_AmbushSmokeController_C_DeactivateParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.DeactivateAndHideParticle
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushSmokeController_C::DeactivateAndHideParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.DeactivateAndHideParticle");

	ABP_AmbushSmokeController_C_DeactivateAndHideParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnDemoJumpPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataAsset*              JobOrMissionID                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::OnDemoJumpPoint(class UDataAsset* JobOrMissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnDemoJumpPoint");

	ABP_AmbushSmokeController_C_OnDemoJumpPoint_Params params;
	params.JobOrMissionID = JobOrMissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnPostSaveGameLoaded_Event_1");

	ABP_AmbushSmokeController_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ExecuteUbergraph_BP_AmbushSmokeController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushSmokeController_C::ExecuteUbergraph_BP_AmbushSmokeController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ExecuteUbergraph_BP_AmbushSmokeController");

	ABP_AmbushSmokeController_C_ExecuteUbergraph_BP_AmbushSmokeController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

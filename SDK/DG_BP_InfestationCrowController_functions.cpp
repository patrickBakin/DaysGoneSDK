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

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckForPrerequisiteMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NotCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::CheckForPrerequisiteMission(bool* NotCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckForPrerequisiteMission");

	ABP_InfestationCrowController_C_CheckForPrerequisiteMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotCompleted != nullptr)
		*NotCompleted = params.NotCompleted;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckForFlashbackMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInFlashback                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::CheckForFlashbackMission(TEnumAsByte<EMissionIDs> MissionID, bool* IsInFlashback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckForFlashbackMission");

	ABP_InfestationCrowController_C_CheckForFlashbackMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInFlashback != nullptr)
		*IsInFlashback = params.IsInFlashback;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckCrowParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendNestingZone*        InfestationData                (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* Emitter                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::CheckCrowParticle(class UBendNestingZone* InfestationData, class UParticleSystemComponent* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckCrowParticle");

	ABP_InfestationCrowController_C_CheckCrowParticle_Params params;
	params.InfestationData = InfestationData;
	params.Emitter = Emitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InfestationCrowController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.UserConstructionScript");

	ABP_InfestationCrowController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ParticleDisable__FinishedFunc
// (BlueprintEvent)

void ABP_InfestationCrowController_C::ParticleDisable__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.ParticleDisable__FinishedFunc");

	ABP_InfestationCrowController_C_ParticleDisable__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ParticleDisable__UpdateFunc
// (BlueprintEvent)

void ABP_InfestationCrowController_C::ParticleDisable__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.ParticleDisable__UpdateFunc");

	ABP_InfestationCrowController_C_ParticleDisable__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckParticles
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationCrowController_C::CheckParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckParticles");

	ABP_InfestationCrowController_C_CheckParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.BindEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationCrowController_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.BindEvents");

	ABP_InfestationCrowController_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnMissionBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::OnMissionBegin(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnMissionBegin");

	ABP_InfestationCrowController_C_OnMissionBegin_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnMissionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnMissionComplete");

	ABP_InfestationCrowController_C_OnMissionComplete_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_InfestationCrowController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.ReceiveBeginPlay");

	ABP_InfestationCrowController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.ReceivePreSaveGameLoaded");

	ABP_InfestationCrowController_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.InitializeParticles
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationCrowController_C::InitializeParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.InitializeParticles");

	ABP_InfestationCrowController_C_InitializeParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.UpdatePatricle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::UpdatePatricle(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.UpdatePatricle");

	ABP_InfestationCrowController_C_UpdatePatricle_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.DeactivateParticle
// (BlueprintCallable, BlueprintEvent)

void ABP_InfestationCrowController_C::DeactivateParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.DeactivateParticle");

	ABP_InfestationCrowController_C_DeactivateParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnZoneCleared_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendNestingZoneActor*   ZoneActor                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::OnZoneCleared_Event_1(class ABendNestingZoneActor* ZoneActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnZoneCleared_Event_1");

	ABP_InfestationCrowController_C_OnZoneCleared_Event_1_Params params;
	params.ZoneActor = ZoneActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnPostSaveGameLoaded_Event_1");

	ABP_InfestationCrowController_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ExecuteUbergraph_BP_InfestationCrowController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InfestationCrowController_C::ExecuteUbergraph_BP_InfestationCrowController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfestationCrowController.BP_InfestationCrowController_C.ExecuteUbergraph_BP_InfestationCrowController");

	ABP_InfestationCrowController_C_ExecuteUbergraph_BP_InfestationCrowController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

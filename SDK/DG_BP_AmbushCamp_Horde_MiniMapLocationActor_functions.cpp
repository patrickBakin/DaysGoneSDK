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

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ShowTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TutorialPanel_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::ShowTutorial(class UUI_TutorialPanel_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ShowTutorial");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_ShowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckHordePrereqs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HordeConditionsCleared         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::CheckHordePrereqs(bool* HordeConditionsCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckHordePrereqs");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_CheckHordePrereqs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HordeConditionsCleared != nullptr)
		*HordeConditionsCleared = params.HordeConditionsCleared;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckForMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AmbushCamp_Horde_MiniMapLocationActor_C::CheckForMission(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckForMission");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_CheckForMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckMissionBlacklist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InBlacklistedMission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::CheckMissionBlacklist(bool* InBlacklistedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckMissionBlacklist");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_CheckMissionBlacklist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBlacklistedMission != nullptr)
		*InBlacklistedMission = params.InBlacklistedMission;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.MapIconState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::MapIconState(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.MapIconState");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_MapIconState_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.UserConstructionScript");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ReceiveBeginPlay");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnMapTaken_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::OnMapTaken_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnMapTaken_Event");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnMapTaken_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnBeginOverlap_BendSphere
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::OnBeginOverlap_BendSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnBeginOverlap_BendSphere");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnBeginOverlap_BendSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.StartHordeJob
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ViaAmbush                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::StartHordeJob(bool ViaAmbush)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.StartHordeJob");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_StartHordeJob_Params params;
	params.ViaAmbush = ViaAmbush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnJobComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::OnJobComplete(class UJobClassInfo* JobID, bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnJobComplete");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnJobComplete_Params params;
	params.JobID = JobID;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnMissionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnMissionComplete");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnMissionComplete_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.DemoJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataAsset*              JobOrMissionID                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::DemoJump(class UDataAsset* JobOrMissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.DemoJump");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_DemoJump_Params params;
	params.JobOrMissionID = JobOrMissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.TimerUnlockJob
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::TimerUnlockJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.TimerUnlockJob");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_TimerUnlockJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ReceivePreSaveGameLoaded");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Horde_MiniMapLocationActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Horde_MiniMapLocationActor_C::ExecuteUbergraph_BP_AmbushCamp_Horde_MiniMapLocationActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Horde_MiniMapLocationActor");

	ABP_AmbushCamp_Horde_MiniMapLocationActor_C_ExecuteUbergraph_BP_AmbushCamp_Horde_MiniMapLocationActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

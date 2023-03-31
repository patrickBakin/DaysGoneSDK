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

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ConvertRegionToWorldRegion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERegions>          Region                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWorldRegions>     WorldRegion                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneCampJobStarter_C::ConvertRegionToWorldRegion(TEnumAsByte<ERegions> Region, TEnumAsByte<EWorldRegions>* WorldRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ConvertRegionToWorldRegion");

	ABP_AmbushZoneCampJobStarter_C_ConvertRegionToWorldRegion_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldRegion != nullptr)
		*WorldRegion = params.WorldRegion;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckCurrentRegion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInRegion                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneCampJobStarter_C::CheckCurrentRegion(bool* IsInRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckCurrentRegion");

	ABP_AmbushZoneCampJobStarter_C_CheckCurrentRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInRegion != nullptr)
		*IsInRegion = params.IsInRegion;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckMissionBlacklist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InBlacklistedMission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneCampJobStarter_C::CheckMissionBlacklist(bool* InBlacklistedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckMissionBlacklist");

	ABP_AmbushZoneCampJobStarter_C_CheckMissionBlacklist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBlacklistedMission != nullptr)
		*InBlacklistedMission = params.InBlacklistedMission;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckForMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AmbushZoneCampJobStarter_C::CheckForMission(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckForMission");

	ABP_AmbushZoneCampJobStarter_C_CheckForMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbushZoneCampJobStarter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.UserConstructionScript");

	ABP_AmbushZoneCampJobStarter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbushZoneCampJobStarter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ReceiveBeginPlay");

	ABP_AmbushZoneCampJobStarter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnBeginOverlap_BendSphere
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushZoneCampJobStarter_C::OnBeginOverlap_BendSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnBeginOverlap_BendSphere");

	ABP_AmbushZoneCampJobStarter_C_OnBeginOverlap_BendSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnMissionComplete_MissionManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneCampJobStarter_C::OnMissionComplete_MissionManager(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnMissionComplete_MissionManager");

	ABP_AmbushZoneCampJobStarter_C_OnMissionComplete_MissionManager_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.UnlockJob
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushZoneCampJobStarter_C::UnlockJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.UnlockJob");

	ABP_AmbushZoneCampJobStarter_C_UnlockJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.MissionCompleteDelay
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushZoneCampJobStarter_C::MissionCompleteDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.MissionCompleteDelay");

	ABP_AmbushZoneCampJobStarter_C_MissionCompleteDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnRegionEntered_BendPlayerController
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERegions>          Region                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneCampJobStarter_C::OnRegionEntered_BendPlayerController(TEnumAsByte<ERegions> Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnRegionEntered_BendPlayerController");

	ABP_AmbushZoneCampJobStarter_C_OnRegionEntered_BendPlayerController_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneCampJobStarter_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnPostSaveGameLoaded_Event_1");

	ABP_AmbushZoneCampJobStarter_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ExecuteUbergraph_BP_AmbushZoneCampJobStarter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushZoneCampJobStarter_C::ExecuteUbergraph_BP_AmbushZoneCampJobStarter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ExecuteUbergraph_BP_AmbushZoneCampJobStarter");

	ABP_AmbushZoneCampJobStarter_C_ExecuteUbergraph_BP_AmbushZoneCampJobStarter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

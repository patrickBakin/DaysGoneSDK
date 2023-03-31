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

// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.MapIconState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Bunker_MiniMapLocationActor_C::MapIconState(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.MapIconState");

	ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_MapIconState_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Bunker_MiniMapLocationActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.UserConstructionScript");

	ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbushCamp_Bunker_MiniMapLocationActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.ReceiveBeginPlay");

	ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnDiscovered_BunkerData
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_Bunker_MiniMapLocationActor_C::OnDiscovered_BunkerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnDiscovered_BunkerData");

	ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_OnDiscovered_BunkerData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Bunker_MiniMapLocationActor_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1");

	ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnJobResetCalled_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJobResetTypes>    JobResetType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Bunker_MiniMapLocationActor_C::OnJobResetCalled_Event_1(TEnumAsByte<EJobResetTypes> JobResetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.OnJobResetCalled_Event_1");

	ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_OnJobResetCalled_Event_1_Params params;
	params.JobResetType = JobResetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Bunker_MiniMapLocationActor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_Bunker_MiniMapLocationActor_C::ExecuteUbergraph_BP_AmbushCamp_Bunker_MiniMapLocationActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_Bunker_MiniMapLocationActor.BP_AmbushCamp_Bunker_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Bunker_MiniMapLocationActor");

	ABP_AmbushCamp_Bunker_MiniMapLocationActor_C_ExecuteUbergraph_BP_AmbushCamp_Bunker_MiniMapLocationActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.UpdateFastTravelLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FastTravelAvailable            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::UpdateFastTravelLocation(bool FastTravelAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.UpdateFastTravelLocation");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_UpdateFastTravelLocation_Params params;
	params.FastTravelAvailable = FastTravelAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.MapIconState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::MapIconState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.MapIconState");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_MapIconState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.CampCleared
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::CampCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.CampCleared");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_CampCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.UserConstructionScript");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.ReceiveBeginPlay");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnMapTaken_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::OnMapTaken_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnMapTaken_Event_1");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_OnMapTaken_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnPostSaveGameLoaded_Event_1");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnJobResetCalled_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJobResetTypes>    JobResetType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::OnJobResetCalled_Event_1(TEnumAsByte<EJobResetTypes> JobResetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.OnJobResetCalled_Event_1");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_OnJobResetCalled_Event_1_Params params;
	params.JobResetType = JobResetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.ExecuteUbergraph_BP_AmbushCamp_MiniMapFastTravelLocation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbushCamp_MiniMapFastTravelLocation_C::ExecuteUbergraph_BP_AmbushCamp_MiniMapFastTravelLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbushCamp_MiniMapFastTravelLocation.BP_AmbushCamp_MiniMapFastTravelLocation_C.ExecuteUbergraph_BP_AmbushCamp_MiniMapFastTravelLocation");

	ABP_AmbushCamp_MiniMapFastTravelLocation_C_ExecuteUbergraph_BP_AmbushCamp_MiniMapFastTravelLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

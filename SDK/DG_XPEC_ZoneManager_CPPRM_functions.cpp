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

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.GetNearbyWaypointsFromMigrationPath
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                loc                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTransform> AXPEC_ZoneManager_CPPRM_C::GetNearbyWaypointsFromMigrationPath(struct FVector* loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.GetNearbyWaypointsFromMigrationPath");

	AXPEC_ZoneManager_CPPRM_C_GetNearbyWaypointsFromMigrationPath_Params params;
	params.loc = loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.HideActorInMissionBlockingVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_ZoneManager_CPPRM_C::HideActorInMissionBlockingVolume(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.HideActorInMissionBlockingVolume");

	AXPEC_ZoneManager_CPPRM_C_HideActorInMissionBlockingVolume_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.OnZoneDeactivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_ZoneManager_CPPRM_C::OnZoneDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.OnZoneDeactivate");

	AXPEC_ZoneManager_CPPRM_C_OnZoneDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.OnZoneActivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_ZoneManager_CPPRM_C::OnZoneActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.OnZoneActivate");

	AXPEC_ZoneManager_CPPRM_C_OnZoneActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AXPEC_ZoneManager_CPPRM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.UserConstructionScript");

	AXPEC_ZoneManager_CPPRM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AXPEC_ZoneManager_CPPRM_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.ReceiveBeginPlay");

	AXPEC_ZoneManager_CPPRM_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.RequestSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void AXPEC_ZoneManager_CPPRM_C::RequestSpawn(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.RequestSpawn");

	AXPEC_ZoneManager_CPPRM_C_RequestSpawn_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.ExecuteUbergraph_XPEC_ZoneManager_CPPRM
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_ZoneManager_CPPRM_C::ExecuteUbergraph_XPEC_ZoneManager_CPPRM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.ExecuteUbergraph_XPEC_ZoneManager_CPPRM");

	AXPEC_ZoneManager_CPPRM_C_ExecuteUbergraph_XPEC_ZoneManager_CPPRM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

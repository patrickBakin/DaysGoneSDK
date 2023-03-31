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

// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerRespawnLoc_NEROCheckpointIND_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.UserConstructionScript");

	APlayerRespawnLoc_NEROCheckpointIND_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APlayerRespawnLoc_NEROCheckpointIND_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ReceiveBeginPlay");

	APlayerRespawnLoc_NEROCheckpointIND_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_NEROCheckpointIND_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ReceivePostSaveGameLoaded");

	APlayerRespawnLoc_NEROCheckpointIND_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void APlayerRespawnLoc_NEROCheckpointIND_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature");

	APlayerRespawnLoc_NEROCheckpointIND_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.OnJobEnded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_NEROCheckpointIND_C::OnJobEnded_Event_1(class UJobClassInfo* JobID, bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.OnJobEnded_Event_1");

	APlayerRespawnLoc_NEROCheckpointIND_C_OnJobEnded_Event_1_Params params;
	params.JobID = JobID;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpointIND
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_NEROCheckpointIND_C::ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpointIND(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpointIND");

	APlayerRespawnLoc_NEROCheckpointIND_C_ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpointIND_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

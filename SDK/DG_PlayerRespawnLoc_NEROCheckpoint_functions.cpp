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

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerRespawnLoc_NEROCheckpoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.UserConstructionScript");

	APlayerRespawnLoc_NEROCheckpoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APlayerRespawnLoc_NEROCheckpoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceiveBeginPlay");

	APlayerRespawnLoc_NEROCheckpoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.OnCheckpointCleared_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendNeroCheckpointData* Checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_NEROCheckpoint_C::OnCheckpointCleared_Event(class UBendNeroCheckpointData* Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.OnCheckpointCleared_Event");

	APlayerRespawnLoc_NEROCheckpoint_C_OnCheckpointCleared_Event_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_NEROCheckpoint_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceivePostSaveGameLoaded");

	APlayerRespawnLoc_NEROCheckpoint_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void APlayerRespawnLoc_NEROCheckpoint_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature");

	APlayerRespawnLoc_NEROCheckpoint_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void APlayerRespawnLoc_NEROCheckpoint_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature");

	APlayerRespawnLoc_NEROCheckpoint_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_NEROCheckpoint_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceiveEndPlay");

	APlayerRespawnLoc_NEROCheckpoint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_NEROCheckpoint_C::ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpoint");

	APlayerRespawnLoc_NEROCheckpoint_C_ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

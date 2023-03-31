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

// Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerRespawnLoc_AmbushZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.UserConstructionScript");

	APlayerRespawnLoc_AmbushZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.OnMapTaken_Event
// (BlueprintCallable, BlueprintEvent)

void APlayerRespawnLoc_AmbushZone_C::OnMapTaken_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.OnMapTaken_Event");

	APlayerRespawnLoc_AmbushZone_C_OnMapTaken_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APlayerRespawnLoc_AmbushZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.ReceiveBeginPlay");

	APlayerRespawnLoc_AmbushZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_AmbushZone_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.ReceivePostSaveGameLoaded");

	APlayerRespawnLoc_AmbushZone_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_171_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void APlayerRespawnLoc_AmbushZone_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_171_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_171_BeginOverlapSig__DelegateSignature");

	APlayerRespawnLoc_AmbushZone_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_171_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.ExecuteUbergraph_PlayerRespawnLoc_AmbushZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_AmbushZone_C::ExecuteUbergraph_PlayerRespawnLoc_AmbushZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_AmbushZone.PlayerRespawnLoc_AmbushZone_C.ExecuteUbergraph_PlayerRespawnLoc_AmbushZone");

	APlayerRespawnLoc_AmbushZone_C_ExecuteUbergraph_PlayerRespawnLoc_AmbushZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerRespawnLoc_Encampment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.UserConstructionScript");

	APlayerRespawnLoc_Encampment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APlayerRespawnLoc_Encampment_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ReceiveBeginPlay");

	APlayerRespawnLoc_Encampment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.OnEnteredEncampment_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_Encampment_C::OnEnteredEncampment_Event(class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.OnEnteredEncampment_Event");

	APlayerRespawnLoc_Encampment_C_OnEnteredEncampment_Event_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_Encampment_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ReceivePostSaveGameLoaded");

	APlayerRespawnLoc_Encampment_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_179_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void APlayerRespawnLoc_Encampment_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_179_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_179_BeginOverlapSig__DelegateSignature");

	APlayerRespawnLoc_Encampment_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_179_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ExecuteUbergraph_PlayerRespawnLoc_Encampment
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerRespawnLoc_Encampment_C::ExecuteUbergraph_PlayerRespawnLoc_Encampment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ExecuteUbergraph_PlayerRespawnLoc_Encampment");

	APlayerRespawnLoc_Encampment_C_ExecuteUbergraph_PlayerRespawnLoc_Encampment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

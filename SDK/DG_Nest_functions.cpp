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

// Function Nest.Nest_C.Tutorial
// (Public, BlueprintCallable, BlueprintEvent)

void ANest_C::Tutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.Tutorial");

	ANest_C_Tutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.UserConstructionScript");

	ANest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.OnNestDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DestroyedNestID                (Parm, ZeroConstructor)
// class ABendNest*               DestroyedNest                  (Parm, ZeroConstructor, IsPlainOldData)

void ANest_C::OnNestDestroyed_Event_1(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.OnNestDestroyed_Event_1");

	ANest_C_OnNestDestroyed_Event_1_Params params;
	params.DestroyedNestID = DestroyedNestID;
	params.DestroyedNest = DestroyedNest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ANest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.ReceiveBeginPlay");

	ANest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_411_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ANest_C::BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_411_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_411_BeginOverlapSig__DelegateSignature");

	ANest_C_BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_411_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_413_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ANest_C::BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_413_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_413_EndOverlapSig__DelegateSignature");

	ANest_C_BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_413_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.OnBurnedSpawned_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ANest_C::OnBurnedSpawned_Event_1(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.OnBurnedSpawned_Event_1");

	ANest_C_OnBurnedSpawned_Event_1_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.OnJobUnlocked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void ANest_C::OnJobUnlocked_Event_1(class UJobClassInfo* JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.OnJobUnlocked_Event_1");

	ANest_C_OnJobUnlocked_Event_1_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.ScriptEndOVerlap
// (BlueprintCallable, BlueprintEvent)

void ANest_C::ScriptEndOVerlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.ScriptEndOVerlap");

	ANest_C_ScriptEndOVerlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ANest_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.ReceiveEndPlay");

	ANest_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ANest_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.ReceivePreSaveGameLoaded");

	ANest_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nest.Nest_C.ExecuteUbergraph_Nest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANest_C::ExecuteUbergraph_Nest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nest.Nest_C.ExecuteUbergraph_Nest");

	ANest_C_ExecuteUbergraph_Nest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

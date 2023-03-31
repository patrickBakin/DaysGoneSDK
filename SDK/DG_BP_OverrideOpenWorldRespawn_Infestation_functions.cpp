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

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.SetOverlapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Overlapping                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_Infestation_C::SetOverlapping(bool Overlapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.SetOverlapping");

	ABP_OverrideOpenWorldRespawn_Infestation_C_SetOverlapping_Params params;
	params.Overlapping = Overlapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.RemoveSiblingRespawnOverrideLocations
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_Infestation_C::RemoveSiblingRespawnOverrideLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.RemoveSiblingRespawnOverrideLocations");

	ABP_OverrideOpenWorldRespawn_Infestation_C_RemoveSiblingRespawnOverrideLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_Infestation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.UserConstructionScript");

	ABP_OverrideOpenWorldRespawn_Infestation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_Infestation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceiveBeginPlay");

	ABP_OverrideOpenWorldRespawn_Infestation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnZoneCleared
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendNestingZoneActor*   ZoneActor                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_Infestation_C::OnZoneCleared(class ABendNestingZoneActor* ZoneActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnZoneCleared");

	ABP_OverrideOpenWorldRespawn_Infestation_C_OnZoneCleared_Params params;
	params.ZoneActor = ZoneActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_Infestation_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceivePreSaveGameLoaded");

	ABP_OverrideOpenWorldRespawn_Infestation_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_Infestation_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceivePostSaveGameLoaded");

	ABP_OverrideOpenWorldRespawn_Infestation_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnActorBeginOverlap_NestingZoneActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_Infestation_C::OnActorBeginOverlap_NestingZoneActor(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnActorBeginOverlap_NestingZoneActor");

	ABP_OverrideOpenWorldRespawn_Infestation_C_OnActorBeginOverlap_NestingZoneActor_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnActorEndOverlap_NestingZoneActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_Infestation_C::OnActorEndOverlap_NestingZoneActor(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnActorEndOverlap_NestingZoneActor");

	ABP_OverrideOpenWorldRespawn_Infestation_C_OnActorEndOverlap_NestingZoneActor_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_Infestation_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature");

	ABP_OverrideOpenWorldRespawn_Infestation_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_Infestation_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature");

	ABP_OverrideOpenWorldRespawn_Infestation_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.CheckActivation
// (BlueprintCallable, BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_Infestation_C::CheckActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.CheckActivation");

	ABP_OverrideOpenWorldRespawn_Infestation_C_CheckActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnNestDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DestroyedNestID                (Parm, ZeroConstructor)
// class ABendNest*               DestroyedNest                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_Infestation_C::OnNestDestroyed(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnNestDestroyed");

	ABP_OverrideOpenWorldRespawn_Infestation_C_OnNestDestroyed_Params params;
	params.DestroyedNestID = DestroyedNestID;
	params.DestroyedNest = DestroyedNest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ExecuteUbergraph_BP_OverrideOpenWorldRespawn_Infestation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_Infestation_C::ExecuteUbergraph_BP_OverrideOpenWorldRespawn_Infestation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ExecuteUbergraph_BP_OverrideOpenWorldRespawn_Infestation");

	ABP_OverrideOpenWorldRespawn_Infestation_C_ExecuteUbergraph_BP_OverrideOpenWorldRespawn_Infestation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

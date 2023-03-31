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

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.FindTeleLocationForAudioCAlloutActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 UnitLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIFactionType>    Faction                        (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientSpawnGenerator_C::FindTeleLocationForAudioCAlloutActor(const struct FVector& UnitLocation, TEnumAsByte<EAIFactionType> Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.FindTeleLocationForAudioCAlloutActor");

	AAmbientSpawnGenerator_C_FindTeleLocationForAudioCAlloutActor_Params params;
	params.UnitLocation = UnitLocation;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAmbientSpawnGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.UserConstructionScript");

	AAmbientSpawnGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.TestingNewAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientSpawnGenerator_C::TestingNewAudio(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.TestingNewAudio");

	AAmbientSpawnGenerator_C_TestingNewAudio_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AAmbientSpawnGenerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ReceiveBeginPlay");

	AAmbientSpawnGenerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.CheckIfDeaconCanSpeak
// (BlueprintCallable, BlueprintEvent)

void AAmbientSpawnGenerator_C::CheckIfDeaconCanSpeak()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.CheckIfDeaconCanSpeak");

	AAmbientSpawnGenerator_C_CheckIfDeaconCanSpeak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientSpawnGenerator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ReceiveTick");

	AAmbientSpawnGenerator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.StartCalloutAudi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIFactionType>    Faction                        (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientSpawnGenerator_C::StartCalloutAudi(const struct FVector& Location, TEnumAsByte<EAIFactionType> Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.StartCalloutAudi");

	AAmbientSpawnGenerator_C_StartCalloutAudi_Params params;
	params.Location = Location;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ExecuteUbergraph_AmbientSpawnGenerator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientSpawnGenerator_C::ExecuteUbergraph_AmbientSpawnGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ExecuteUbergraph_AmbientSpawnGenerator");

	AAmbientSpawnGenerator_C_ExecuteUbergraph_AmbientSpawnGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

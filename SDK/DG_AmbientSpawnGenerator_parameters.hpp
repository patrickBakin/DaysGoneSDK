#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.FindTeleLocationForAudioCAlloutActor
struct AAmbientSpawnGenerator_C_FindTeleLocationForAudioCAlloutActor_Params
{
	struct FVector                                     UnitLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIFactionType>                        Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.UserConstructionScript
struct AAmbientSpawnGenerator_C_UserConstructionScript_Params
{
};

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.TestingNewAudio
struct AAmbientSpawnGenerator_C_TestingNewAudio_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ReceiveBeginPlay
struct AAmbientSpawnGenerator_C_ReceiveBeginPlay_Params
{
};

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.CheckIfDeaconCanSpeak
struct AAmbientSpawnGenerator_C_CheckIfDeaconCanSpeak_Params
{
};

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ReceiveTick
struct AAmbientSpawnGenerator_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.StartCalloutAudi
struct AAmbientSpawnGenerator_C_StartCalloutAudi_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIFactionType>                        Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientSpawnGenerator.AmbientSpawnGenerator_C.ExecuteUbergraph_AmbientSpawnGenerator
struct AAmbientSpawnGenerator_C_ExecuteUbergraph_AmbientSpawnGenerator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

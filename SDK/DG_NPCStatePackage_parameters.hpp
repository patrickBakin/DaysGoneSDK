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

// Function NPCStatePackage.NPCStatePackage_C.UserConstructionScript
struct ANPCStatePackage_C_UserConstructionScript_Params
{
};

// Function NPCStatePackage.NPCStatePackage_C.AiKilledByPlayerCall
struct ANPCStatePackage_C_AiKilledByPlayerCall_Params
{
	struct FKillInfo                                   KillInfo;                                                 // (Parm)
};

// Function NPCStatePackage.NPCStatePackage_C.LimbSeveredCall
struct ANPCStatePackage_C_LimbSeveredCall_Params
{
	class ASkeletalMeshActor*                          MeshActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatePackage.NPCStatePackage_C.AIKIlledByNPC
struct ANPCStatePackage_C_AIKIlledByNPC_Params
{
	struct FKillInfo                                   KillInfo;                                                 // (Parm)
};

// Function NPCStatePackage.NPCStatePackage_C.ReceiveBeginPlay
struct ANPCStatePackage_C_ReceiveBeginPlay_Params
{
};

// Function NPCStatePackage.NPCStatePackage_C.RecheckPlayer
struct ANPCStatePackage_C_RecheckPlayer_Params
{
};

// Function NPCStatePackage.NPCStatePackage_C.RecheckSpawner
struct ANPCStatePackage_C_RecheckSpawner_Params
{
};

// Function NPCStatePackage.NPCStatePackage_C.ReceivePostSaveGameLoaded
struct ANPCStatePackage_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatePackage.NPCStatePackage_C.LimbSevered
struct ANPCStatePackage_C_LimbSevered_Params
{
	class ASkeletalMeshActor*                          SkeletalMeshActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatePackage.NPCStatePackage_C.PlayerRespawned
struct ANPCStatePackage_C_PlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatePackage.NPCStatePackage_C.AISpawned
struct ANPCStatePackage_C_AISpawned_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatePackage.NPCStatePackage_C.AIKilledByPlayer2
struct ANPCStatePackage_C_AIKilledByPlayer2_Params
{
	struct FKillInfo                                   KillInfo;                                                 // (Parm)
};

// Function NPCStatePackage.NPCStatePackage_C.OnKilledByNPC_Event_1
struct ANPCStatePackage_C_OnKilledByNPC_Event_1_Params
{
	struct FKillInfo                                   KillInfo;                                                 // (Parm)
};

// Function NPCStatePackage.NPCStatePackage_C.ExecuteUbergraph_NPCStatePackage
struct ANPCStatePackage_C_ExecuteUbergraph_NPCStatePackage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

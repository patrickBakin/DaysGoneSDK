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

// Function NPCStatePackage.NPCStatePackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPCStatePackage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.UserConstructionScript");

	ANPCStatePackage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.AiKilledByPlayerCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKillInfo               KillInfo                       (Parm)

void ANPCStatePackage_C::AiKilledByPlayerCall(const struct FKillInfo& KillInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.AiKilledByPlayerCall");

	ANPCStatePackage_C_AiKilledByPlayerCall_Params params;
	params.KillInfo = KillInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.LimbSeveredCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*      MeshActor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ANPCStatePackage_C::LimbSeveredCall(class ASkeletalMeshActor* MeshActor, const struct FName& BoneName, class ABendPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.LimbSeveredCall");

	ANPCStatePackage_C_LimbSeveredCall_Params params;
	params.MeshActor = MeshActor;
	params.BoneName = BoneName;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.AIKIlledByNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKillInfo               KillInfo                       (Parm)

void ANPCStatePackage_C::AIKIlledByNPC(const struct FKillInfo& KillInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.AIKIlledByNPC");

	ANPCStatePackage_C_AIKIlledByNPC_Params params;
	params.KillInfo = KillInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ANPCStatePackage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.ReceiveBeginPlay");

	ANPCStatePackage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.RecheckPlayer
// (BlueprintCallable, BlueprintEvent)

void ANPCStatePackage_C::RecheckPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.RecheckPlayer");

	ANPCStatePackage_C_RecheckPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.RecheckSpawner
// (BlueprintCallable, BlueprintEvent)

void ANPCStatePackage_C::RecheckSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.RecheckSpawner");

	ANPCStatePackage_C_RecheckSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ANPCStatePackage_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.ReceivePostSaveGameLoaded");

	ANPCStatePackage_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.LimbSevered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*      SkeletalMeshActor              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ANPCStatePackage_C::LimbSevered(class ASkeletalMeshActor* SkeletalMeshActor, const struct FName& BoneName, class ABendPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.LimbSevered");

	ANPCStatePackage_C_LimbSevered_Params params;
	params.SkeletalMeshActor = SkeletalMeshActor;
	params.BoneName = BoneName;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.PlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ANPCStatePackage_C::PlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.PlayerRespawned");

	ANPCStatePackage_C_PlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.AISpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ANPCStatePackage_C::AISpawned(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.AISpawned");

	ANPCStatePackage_C_AISpawned_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.AIKilledByPlayer2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKillInfo               KillInfo                       (Parm)

void ANPCStatePackage_C::AIKilledByPlayer2(const struct FKillInfo& KillInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.AIKilledByPlayer2");

	ANPCStatePackage_C_AIKilledByPlayer2_Params params;
	params.KillInfo = KillInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.OnKilledByNPC_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKillInfo               KillInfo                       (Parm)

void ANPCStatePackage_C::OnKilledByNPC_Event_1(const struct FKillInfo& KillInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.OnKilledByNPC_Event_1");

	ANPCStatePackage_C_OnKilledByNPC_Event_1_Params params;
	params.KillInfo = KillInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatePackage.NPCStatePackage_C.ExecuteUbergraph_NPCStatePackage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANPCStatePackage_C::ExecuteUbergraph_NPCStatePackage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCStatePackage.NPCStatePackage_C.ExecuteUbergraph_NPCStatePackage");

	ANPCStatePackage_C_ExecuteUbergraph_NPCStatePackage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

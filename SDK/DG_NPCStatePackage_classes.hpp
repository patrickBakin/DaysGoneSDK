#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPCStatePackage.NPCStatePackage_C
// 0x0088 (0x0438 - 0x03B0)
class ANPCStatePackage_C : public ABP_TelemetryPackageBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     LimbSeveredArchetype;                                     // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EquippedWeapon;                                           // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     KillerArchetype;                                          // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerKilledNPCDamageCauser;                              // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerHitBone;                                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerKilledNPCArchetype;                                 // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     KilledArchetype;                                          // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NPCKilledNPCWeapon;                                       // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCStatePackage.NPCStatePackage_C");
		return ptr;
	}


	void UserConstructionScript();
	void AiKilledByPlayerCall(const struct FKillInfo& KillInfo);
	void LimbSeveredCall(class ASkeletalMeshActor* MeshActor, const struct FName& BoneName, class ABendPawn* Pawn);
	void AIKIlledByNPC(const struct FKillInfo& KillInfo);
	void ReceiveBeginPlay();
	void RecheckPlayer();
	void RecheckSpawner();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void LimbSevered(class ASkeletalMeshActor* SkeletalMeshActor, const struct FName& BoneName, class ABendPawn* Pawn);
	void PlayerRespawned(class ABendPlayerController* PlayerController);
	void AISpawned(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation);
	void AIKilledByPlayer2(const struct FKillInfo& KillInfo);
	void OnKilledByNPC_Event_1(const struct FKillInfo& KillInfo);
	void ExecuteUbergraph_NPCStatePackage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

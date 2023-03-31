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

// BlueprintGeneratedClass PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C
// 0x0036 (0x0396 - 0x0360)
class APlayerRespawnLoc_NEROCheckpoint_C : public APlayerRespawnLoc_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendNeroCheckpointData*                     NERODataAsset;                                            // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Cleared;                                                  // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	struct FString                                     PlayerBikeString;                                         // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RespawnID;                                                // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CriticalSave;                                             // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAlwaysClearAllRespawns;                             // 0x0395(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnCheckpointCleared_Event(class UBendNeroCheckpointData* Checkpoint);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

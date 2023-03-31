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

// BlueprintGeneratedClass Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C
// 0x00F4 (0x06D4 - 0x05E0)
class ABend_SearchBody_Pickup_C : public ABendSearchBody
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMapLocationComponent*                   MiniMapLocation;                                          // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SearchAnimSequence;                                       // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<ECharacterClass>                       ClassOfBody;                                              // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	struct FName                                       SubclassOfBody;                                           // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class ABendInventoryPickup*                        DroppedItems;                                             // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Delay;                                                    // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	TArray<struct FInventoryIDDetails>                 Non_Table_Drops;                                          // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimSequenceBase*                           SearchAnimSequenceCrouched;                               // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPickup;                                                 // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SHOOTANDFRISKAttempted;                                   // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	float                                              SHOOTANDFRISKPercentChance;                               // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumItemSpawns;                                            // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DelayStart;                                               // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<EAIFactionType>>                MeshSwapIds;                                              // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EePawnGender>>                  MeshSwapSex;                                              // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class USkeletalMesh>>             MeshSwapLooks;                                            // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMesh*                               MeshSwapLook;                                             // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHideMeshOnInteract;                                 // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddedItemDuringInteract;                                  // 0x0689(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               TriedPickupInventoryFull;                                 // 0x068A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x068B(0x0005) MISSED OFFSET
	class UInventoryItem*                              InventoryItemToPickup;                                    // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<EInventoryStorageQueryResult>          BSBecausePureFunction;                                    // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0699(0x0003) MISSED OFFSET
	int                                                ActualAmountThatCanBeAdded;                               // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountToAdd;                                              // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	struct FName                                       VOLineOnPickup;                                           // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UInventoryItem*>                      ItemDisplayQueue;                                         // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ItemDisplayQueueCounts;                                   // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                Timer;                                                    // 0x06D0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_SearchBody_Pickup.Bend_SearchBody_Pickup_C");
		return ptr;
	}


	bool HasEverBeenSearched();
	bool IsMaxedOnSearchLoot();
	bool AttemptToSearchBodyFromAreaPickup(struct FVector* PlayerPositions);
	void HandleTrophies();
	void HandleNotify(class UInventoryItem* Item, int Count);
	void Non_TableDrops();
	void SetupSearchBody(class UAnimSequenceBase* Anim_Sequence, class UAnimSequenceBase* AnimSequenceCrouched, TEnumAsByte<ECharacterClass> Class, const struct FName& SubClass, class USceneComponent* AttachTo, const struct FName& AttachSocket, float Delay, int NumItemSpawns, class ABendPawn* PawnPointer, bool AllowPickups, bool TrackInSaveGame, TArray<struct FInventoryIDDetails>* Non_Table_Drops);
	void UserConstructionScript();
	void Complete();
	void Failed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void HandlePickupLogic();
	void HandleFinishedPickupLogic();
	void HandleBeganInteract();
	void OnInputSucceeded();
	void InitInteract();
	void LoadLookAtIndex(int Index);
	void AsynchLoadLookDone(TAssetPtr<class UObject> ObjectAssetPtr);
	void LootingFinished();
	void EnteredAdvertiseRange();
	void LeftAdvertiseRange();
	void EnteredInteractRange();
	void OnInventoryModifiedDelegate_Event_1(const struct FInventoryOperation& Operation);
	void EventAnimPickup(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify);
	void UnbindAnimNotify();
	void BindAnimNotify();
	void CheckQueue();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void EnableOrDisableInteraction(bool* Enabled);
	void HideBody();
	void UnhideBody();
	void SetInteractionFinished(bool* InteractCompleted, bool* TurnOffIfOneUseInteract);
	void PostSetup();
	void OnReturnedToPool_Event_1(class ABendAIController* Controller);
	void ForceInventoryModificationUpdate();
	void ResetTheInteraction();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void LoadMeshSwapLookAtIndex(int* Index);
	void ExecuteUbergraph_Bend_SearchBody_Pickup(int EntryPoint);
	void OnPickup__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

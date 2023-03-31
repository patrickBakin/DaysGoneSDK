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

// BlueprintGeneratedClass GameStatePackage.GameStatePackage_C
// 0x00F8 (0x04A8 - 0x03B0)
class AGameStatePackage_C : public ABP_TelemetryPackageBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CinSkipped;                                               // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              PlayerDamagedAmount;                                      // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Encampment;                                               // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               GameplaySkipped;                                          // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FName                                       GameplaySkipID;                                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBendGameEvent>                        Type;                                                     // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBendGameEventAction>                  Action;                                                   // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	class UInventoryItem*                              Item;                                                     // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UInventoryWeaponItem*                        Weapon;                                                   // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UInventoryItem*                              Part;                                                     // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Cost;                                                     // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActionValue;                                              // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustRequired;                                            // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FDateTime                                   CinLoadStartTime;                                         // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       CinLevel;                                                 // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTelemetryEventAttr                         TempMissionID;                                            // 0x0420(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     TempMiss;                                                 // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             ConflictEscalationArchetypes;                             // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SpawnedOrPulled;                                          // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ConflictEscalationList;                                   // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumConflictEscalationPawns;                               // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EeConflictEventType>                   StoredConflictEvent;                                      // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	float                                              StoredConflictRadius;                                     // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StoredConflictCenter;                                     // 0x048C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ConflictEscalationReady;                                  // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	struct FTimerHandle                                EscalationTimer;                                          // 0x049C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBendSavePlayerProfile*                      PlayerProfile;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameStatePackage.GameStatePackage_C");
		return ptr;
	}


	void HaveWeResetThisJobBefore(class UJobClassInfo* Job, bool* WasReset);
	void FindOutProperID(class UObject* MissionOrJobData, struct FString* Proper_ID);
	void UserConstructionScript();
	void MissionBeginCall(TEnumAsByte<EMissionIDs> MissionID);
	void ObjectiveCompleteCall(int CompletedObjective);
	void MissionEndingCall();
	void FastTravelBeginCall();
	void CollectibleCollectedCall(class UInventoryItemCollectible* Collectible);
	void ReachedJobLocationCall(class UJobClassInfo* JobID);
	void JobFinishedCall(class UJobClassInfo* JobID, bool Failed);
	void CinematicEndCall(const struct FName& CinematicLevel, class UObject* JobOrMissionData);
	void ItemPurchased(class UInventoryItem* Item, int Cost, TEnumAsByte<ETrustTier> TrustRequired);
	void WeaponPurchased(class UInventoryItem* Weapon, int Cost, TEnumAsByte<ETrustTier> TrustRequired);
	void WeaponPartPurchased(class UInventoryItem* Weapon, class UInventoryItem* Part, int Cost, TEnumAsByte<ETrustTier> TrustRequired);
	void BikePartPurchased(class UInventoryItem* Part, int Cost, TEnumAsByte<ETrustTier> TrustRequired);
	void ItemSold(class UInventoryItem* Item, int Cost);
	void ItemConsumed(class UInventoryItem* Item, float Value);
	void WeaponPartEquipped(class UInventoryItem* Weapon, class UInventoryItem* Part);
	void RepairBike(int Cost, float RepairAmount);
	void RefuelBike(int Cost, float RefuelAmount);
	void EarSoldCall(class UInventoryItem* Item, int Quantity, int Cost);
	void RepairWeapon(class UInventoryWeaponItem* Weapon, int Cost);
	void TrustModifiedCall(class UBendEncampmentData* Encampment, float ModificationAmount, bool SetDirectly);
	void FastTravelEndCall();
	void EnterEncampmentCall(class UBendEncampmentData* Encampment);
	void ExitEncampmentCall(class UBendEncampmentData* Encampment);
	void CinematicStartCall(const struct FName& CinematicLevel, class UObject* JobOrMissionData);
	void LeftJobLocationCall(class UJobClassInfo* JobID);
	void JobObjectiveChangeCall(const struct FName& JobID, const struct FName& ObjectiveID, TEnumAsByte<EObjectiveStates> New_State);
	void UserChoiceMadeCall(TEnumAsByte<EInteractButton> ChoiceButton, const struct FText& ChoiceTitle);
	void SkippableGameplayStartedCall(const struct FName& MissionSkipIdentifier);
	void SkippableGameplayEndedCall(const struct FName& MissionSkipIdentifier);
	void CinStartLoadingCall(const struct FName& CinematicLevel);
	void CinEndLoadingCall(const struct FName& CinematicLevel);
	void CheatMenuUsed(const struct FString& CommandName, const struct FString& CommandArguments);
	void ConflictEscalationAddPawnCall(class ABendAIController* AIController);
	void ConflictEscalationCall(const struct FVector& Center, float Radius, TEnumAsByte<EeConflictEventType> Conflict_Event);
	void OnConflictEscalationReady();
	void LeftMissionFailureZoneCall(bool ByVolume);
	void ReturnFromFailureZoneCall(bool ByVolume);
	void FailedViaFailureZoneCall(bool ByVolume);
	void OnOWSaveCall(bool IsBikeOrBedQuicksave, bool IsMenuSave);
	void OnDifficultyChangedCall();
	void TrophyUnlockedCall(const struct FName& TrophyName, const struct FGameplayTag& TrophyTag, int TrophyID);
	void OnConversationStartedCall(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, bool UsesInterruptSystem, class AActor* WhoIsSpeaking);
	void OnConversationInterruptedCall(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking, TEnumAsByte<EConversationInterruptReason> InterruptReason);
	void OnConversationResumedCall(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking);
	void OnConversationFinishedCall(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking, TEnumAsByte<EDonePlayVocalReason> ReasonStopped);
	void OnProfileEntryChangedCall(TEnumAsByte<EPlayerSaveProfileType> EntryName, float EntryValue);
	void JobResetCall(TEnumAsByte<EJobResetTypes> JobResetType);
	void ReceiveBeginPlay();
	void RecheckMM();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void RecheckPlayer();
	void RecheckPlayerCont();
	void RecheckJM();
	void MissionEnding(TEnumAsByte<EMissionIDs> MissionID);
	void MissionBegin(TEnumAsByte<EMissionIDs> MissionID);
	void FastTravelBegin(const struct FName& TravelDestination);
	void CinematicSkipped(const struct FName& CinematicLevel);
	void ReachedJobLocation(class UJobClassInfo* JobID);
	void JobFinished(class UJobClassInfo* JobID, bool Failed);
	void PlayerDamaged(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void CinEnded(const struct FName& CinematicLevel);
	void RecheckEM();
	void EventHappened(const struct FBendGameEventBase& Event);
	void OnObjectiveComplete(int Index);
	void PlayerRespawned(class ABendPlayerController* PlayerController);
	void PlayerRespawn();
	void EarSold(class UInventoryItem* Item, int Quantity, int Cost);
	void BikeRefuel(int Cost, float Amount);
	void BikeRepair(int Cost, float Amount);
	void OnItemSold(class UInventoryItem* Item, int Cost);
	void OnWeaponPartEquip(class UInventoryWeaponItem* Weapon, class UInventoryItemWeaponPart* Part);
	void WeaponRepaired(class UInventoryWeaponItem* Weapon, int Cost);
	void TrustModified(class UBendEncampmentData* Encampment, float ModificationAmount, bool SetDirectly);
	void FastTravelEnd(const struct FName& TravelDestination);
	void EnterEncampment(class UBendEncampmentData* Encampment);
	void ExitEncampment(class UBendEncampmentData* Encampment);
	void JobUnlocked(class UJobClassInfo* JobID);
	void LeaveJobLocation(class UJobClassInfo* JobID);
	void UserChoiceMade(TEnumAsByte<EInteractButton> ChoiceButton, const struct FText& ChoiceTitle);
	void SkippableGameplayStarted(const struct FName& MissionSkipIdentifier);
	void SkippableGameplaySkipped(const struct FName& MissionSkipIdentifier);
	void SkippableGameplayEnded(const struct FName& MissionSkipIdentifier);
	void CollectibleCollected(class UInventoryItemCollectible* Collectible);
	void CinStartLoading(const struct FName& CinematicLevel);
	void CinStartPlaying(const struct FName& CinematicLevel);
	void RecheckGM();
	void CinBegin(class UObject* JobOrMissionData, const struct FName& CinematicLevel);
	void CinEnd(class UObject* JobOrMissionData, const struct FName& CinematicLevel);
	void OnCheatActivated(const struct FString& CommandName, const struct FString& CommandArguments);
	void Recheck_AI();
	void OnConflictEscalation(const struct FVector& Center, float Radius, TEnumAsByte<EeConflictEventType> ConflictEventType);
	void OnConflictEscalationPullPawn(class ABendAIController* AIController);
	void OnEscalationSpawnedTelemetry(class ABendAIController* SpawnedController);
	void JobObjUpdate(const struct FName& JobID, const struct FName& ObjectiveID, TEnumAsByte<EObjectiveStates> NewState);
	void OnLeftMissionFailureZone(bool ByVolume);
	void OnReturnFromFailureZone(bool ByVolume);
	void OnFailedViaFailureZone(bool ByVolume);
	void OnOWSave(bool IsBikeOrBedQuicksave, bool IsMenuSave);
	void OnProfileEntryChanged_Event_1(TEnumAsByte<EPlayerSaveProfileType> OptionType, float OptionValue);
	void OnTrophyUnlocked(const struct FName& TrophyName, const struct FGameplayTag& TrophyTag, int TrophyID);
	void RecheckTM();
	void RecheckAudioM();
	void OnConversationBegin(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, bool UsesInterruptSystem, class AActor* WhoIsSpeaking);
	void OnConversationInterrupted(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking, TEnumAsByte<EConversationInterruptReason> InterruptReason);
	void OnConversationResumed(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking);
	void OnConversationFinished(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking, TEnumAsByte<EDonePlayVocalReason> ReasonStopped);
	void JobReset(TEnumAsByte<EJobResetTypes> JobResetType);
	void OnDifficultyChanged(TEnumAsByte<EGameDifficulty> NewDifficulty);
	void ExecuteUbergraph_GameStatePackage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

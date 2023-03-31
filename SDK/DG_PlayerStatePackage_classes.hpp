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

// BlueprintGeneratedClass PlayerStatePackage.PlayerStatePackage_C
// 0x00F0 (0x04A0 - 0x03B0)
class APlayerStatePackage_C : public ABP_TelemetryPackageBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    PlayerLocationsFull;                                      // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     PlayerLocationPrev;                                       // 0x03C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerStuckLocation;                                      // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasInEnclosedSpace;                                       // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	TArray<struct FTelemetryEventAttr>                 PlayerLocationAttributes;                                 // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ManualStuck;                                              // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              TelemetrySpeed_LOCAL;                                     // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasInCinematic;                                           // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FDateTime                                   SpawnTime;                                                // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDateTime                                   LoadTime;                                                 // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimespan                                   TimeOffline;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AttributeName;                                            // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EMenuTypes>                            CurrentMenu;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                WeaponRarity;                                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     GrappleBrokenArchetype;                                   // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     GrappleFailedArchetype;                                   // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DamageInstigatorArchetype;                                // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DamageCauser;                                             // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerDeathWeapon;                                        // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTelemetryEventTypedAttr>            PlayerLocationTelemetryAttributes;                        // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StartPhotoModeTime;                                       // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAdvancedModeTime;                                    // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerStatePackage.PlayerStatePackage_C");
		return ptr;
	}


	void GetPawnClosestToLocation(const struct FVector& Location, float* DistanceToClosestPawn);
	void CheckWhichAttribute(class UObject* Attribute);
	void UserConstructionScript();
	void InpActEvt_F8_UniqueObjectNameForCooking_201(const struct FKey& Key);
	void PlayerLocationTick();
	void PlayerStuckTick();
	void PlayerDiedCall(class AController* Killer, class UDamageType* DamageType, class AActor* DamageCauser);
	void GetOnVehicleCall(class ABendPawn* Pawn, class AVehiclePawn* VehiclePawn);
	void GetOffVehicleCall(class AVehiclePawn* VehiclePawn);
	void HideStateChangeEnterDumpster();
	void SkillAcquiredCall(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem);
	void LevelUpCall(int NewLevel);
	void HideStateChangeCall(bool IsHiding, bool CanControl, bool IsEnclosedSpace);
	void HideStateChangeExitDumpster();
	void GrappleBrokenCall(class ABendPawn* Grappler);
	void GrappleFailedCall(class ABendPawn* Grappler);
	void ItemCraftedCall(const struct FInventoryIDDetails& CraftedItem);
	void RecipeUnlockedCall(class UInventoryItemRecipe* Recipe);
	void AttributePointUsedCall(class UBendAttribute* Attribute, float Value);
	void EnemyTaggedCall(class UBendCalloutWidgetComponent* PawnTagged);
	void PlayerTriggeredTrapCall(class ABendTrap* Trap, class ABendPawn* TriggeringPawn);
	void OpenMenuCall(const struct FString& Menu_Class);
	void CloseMenuCall(const struct FString& MenuClass);
	void ChangedMenu(const struct FString& Menu_Class);
	void PlayerTakeDamageCall(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void PickedUpMeleeCall(const struct FString& Name, TEnumAsByte<EWeaponRarity> Tier);
	void PickupItemCall(class UInventoryItem* Pickup_Item, int Count);
	void PhotoModeStartedCall();
	void PhotoModeEndedCall();
	void EnteredAdvancedModeCall();
	void ExitedAdvancedModeCall();
	void OnPhotoTaken();
	void MediumTickEvents();
	void ReceiveBeginPlay();
	void RecheckPlayer();
	void PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void BeginGetOnVehicle(class ABendAIController* Controller, class ABendPawn* Pawn, class AVehiclePawn* VehiclePawn);
	void BeginGetOffVehicle(class AVehiclePawn* VehiclePawn, TEnumAsByte<EBendVehicleExitReason> ExitReason);
	void ShortestTickEvents();
	void HideStateChange(bool IsHiding, bool CanControl, bool IsEnclosedSpace);
	void LevelUp(class UPlayerExperienceLevel* PlayerXP, int Level);
	void GrappleBroken(class ABendPawn* Grappler);
	void GrappleFailed(class ABendPawn* Grappler);
	void ItemCrafted(const struct FInventoryIDDetails& ItemCrafted);
	void RecipeUnlocked(class UInventoryItemRecipe* Recipe);
	void PlayerRespawned(class ABendPlayerController* PlayerController);
	void CheckTimeSinceClose();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ResetTimeOffline();
	void SkillAcquired(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem);
	void EnemyTagged(class UBendCalloutWidgetComponent* PawnTagged);
	void TriggeredTrap(class ABendTrap* Trap, class ABendPawn* TriggeringPawn);
	void RetryGM();
	void PauseMenuOpened();
	void PauseMenuClosed();
	void WeaponWheelOpened();
	void WeaponWheelClosed();
	void _3DMenuClosed();
	void MenuOpened(TEnumAsByte<EMenuTypes> OpenedMenu);
	void PlayerTakeDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void AttributePointUsed(class UBendAttribute* Attribute, float Value);
	void InventoryModified(const struct FInventoryOperation& Operation);
	void OnInventoryItemPickupDelegate_Event_1(class UInventoryItem* PickupItem, int Count);
	void PhotoModeStarted();
	void PhotoModeEnded();
	void EnteredAdvancedMode();
	void ExitedAdvancedMode();
	void PhotoCapture();
	void ExecuteUbergraph_PlayerStatePackage(int EntryPoint);
	void PlayerLocationsFull__DelegateSignature(TArray<struct FTelemetryEventAttr>* PlayerLocations);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

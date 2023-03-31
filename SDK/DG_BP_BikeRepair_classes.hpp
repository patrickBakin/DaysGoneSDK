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

// BlueprintGeneratedClass BP_BikeRepair.BP_BikeRepair_C
// 0x0390 (0x0900 - 0x0570)
class ABP_BikeRepair_C : public ABikeInteractBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendWidgetComponent*                        BendWidgetAmmo;                                           // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlateInputInteractComponent*                SlateInteract_Ammo;                                       // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             AnchorRight;                                              // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             AnchorLeft;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RightTrigger_2;                                           // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               LeftTrigger_2;                                            // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultRepairRateForScrap;                                // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepairRatePerScrap;                                       // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthRepairedPerScrap;                                   // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToRepair;                                             // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             RepairSound;                                              // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta;                                                    // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScrapCount;                                               // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalScrapUsed;                                           // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeCountToNextRepair;                                    // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UArrowComponent*                             Anchor;                                                   // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrapNeeded;                                              // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInventoryUtilityID>                   Scrap;                                                    // 0x05DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           EnterAnimation;                                           // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           LoopingAnimation;                                         // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           ExitAnimation;                                            // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBendActionData                             EnterActionData;                                          // 0x05F8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendActionData                             LoopActionData;                                           // 0x0698(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBendActionData                             ExitActionData;                                           // 0x0738(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CanGetAmmo;                                               // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07D9(0x0007) MISSED OFFSET
	TArray<struct FGameplayTag>                        AmmoTags;                                                 // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UInputInteractWidget*                        InteractRefAmmo;                                          // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisplayedAmmoInteract;                                    // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07F9(0x0007) MISSED OFFSET
	class UInventoryBikeStorage*                       BikesAmmoStorage;                                         // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UInventoryAmmoStorage*                       PlayersAmmoStorage;                                       // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                CurrentAmmoType;                                          // 0x0810(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PlayersAvailableAmmoCap;                                  // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoTypeDisplayCount;                                     // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendWeapon*                                 Primary0Weapon;                                           // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendWeapon*                                 Primary1Weapon;                                           // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendWeapon*                                 SecondaryWeapon;                                          // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EInventoryAmmoID>>              PistolAmmoIDs;                                            // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              ShotgunAmmoIDs;                                           // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              AssaultRifleAmmoTags;                                     // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              SubmachineGunAmmoIDs;                                     // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              RifleAmmoIDs;                                             // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              SniperRifleIDs;                                           // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              LMGAmmoIDs;                                               // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FoundMatchingAmmo;                                        // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	int                                                PlayerMaxAmmoPrimary0;                                    // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerMaxAmmoPrimary1;                                    // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerMaxAmmoSecondary;                                   // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerCurrentAmmoPrimary0;                                // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerCurrentAmmoPrimary1;                                // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerCurrentAmmoSecondary;                               // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BikeCurrentAmmo;                                          // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                AmmoTag;                                                  // 0x08C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AmmoGiven;                                                // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrapRateGreaseMonkey;                                    // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrapRate;                                                // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TempAllowNPCAttacksToBeDodged;                            // 0x08DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisplayedWaterNotification;                               // 0x08DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x08DE(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<EInventoryAmmoID>>              IgnoredAmmoIDs;                                           // 0x08E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              MB150AmmoIDs;                                             // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BikeRepair.BP_BikeRepair_C");
		return ptr;
	}


	void DoesPlayerNeedAnyAmmo(bool* NeedsAmmo);
	void FillPlayersAmmo();
	void CheckIfSecondaryInteractAnchorIsValid(bool* Valid);
	void DoesPlayerNeedAmmoFromBike(bool* NeedsAmmo);
	void SetScrapRepairRate();
	void GetAmmoWidget(class UBendWidgetComponent** AmmoWidget);
	void SetBikeAmmoHelper(const struct FInventoryItemTagSlot& AmmoSlotRef, int Count, struct FInventoryItemTagSlot* NewParam);
	void GetBikeAmmoCount(const struct FGameplayTag& AmmoTag, int* RemainingAmmo);
	void SetBikeAmmo(const struct FGameplayTag& AmmoToSet, int AmmoCount);
	void DisplayAmmoNotification(class ABendWeapon* WeaponRef);
	void SetAmmoDefaults(const struct FGameplayTag& AmmoTag);
	void CanTakeAllAmmo(const struct FGameplayTag& AmmoTag, bool* HasMoreAmmo);
	void DoesBikeHaveAmmo(const struct FGameplayTag& AmmoTag, bool* HasAmmo);
	void SetCurrentAmmoCap(class ABendWeapon* Weapon);
	void DoesPlayerNeedPrimary1AmmoType();
	void DoesPlayerNeedPrimary0AmmoType();
	void GiveThePlayerAmmo(const struct FGameplayTag& AmmoTag, int weaponSlot);
	void GetCurrentWeapons();
	void DoesPlayerNeedSecondaryAmmoType();
	void CanDoSecondaryInteract(bool* Can);
	void SetAnimation();
	void PlayEndingVO();
	void Repair_Bike(bool ScrapFinish);
	void UserConstructionScript();
	void InpActEvt_Interact4_UniqueObjectNameForCooking_226(const struct FKey& Key);
	void InpActEvt_Interact4_UniqueObjectNameForCooking_225(const struct FKey& Key);
	void CheckAmmoInteraction();
	void InteractOnBegin();
	void InteractOnEnd();
	void InputSlateInteractEnd_Copy(class USlateInputInteract* InputInteract);
	void RecheckAmmoStocks();
	void Complete_AnimIn();
	void Failed_AnimIn(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void Failed_AnimLoop(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void Complete_AnimOut();
	void Failed_AnimOut(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void BndEvt__Trigger1_K2Node_ComponentBoundEvent_2453_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Trigger2_K2Node_ComponentBoundEvent_2458_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UpdateInteractDetails();
	void InputSuccess();
	void InputFailed();
	void UpdateCollision(bool* TurnOn);
	void BndEvt__LeftTrigger_K2Node_ComponentBoundEvent_2421_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__RightTrigger_K2Node_ComponentBoundEvent_2425_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float* DeltaSeconds);
	void InputStartedPress();
	void OnScrapRemoved(int* RemovedCount);
	void OnRepairProgressChanged(float* RepairProgress);
	void OnBikeRepairBeginEnd(bool* IsRepairing);
	void StopRepairSound();
	void OnVehicleKnockedOver(class AVehiclePawn* VehiclePawn);
	void ExecuteUbergraph_BP_BikeRepair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_BendInventoryPickup.BP_BendInventoryPickup_C
// 0x0111 (0x0881 - 0x0770)
class ABP_BendInventoryPickup_C : public ABendInventoryPickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<EUI_HudNotificationType>               Notify_Type;                                              // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0779(0x0007) MISSED OFFSET
	TArray<struct FGameplayTag>                        AxeWeaponTagList;                                         // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        BladedWeaponTagList;                                      // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        BluntMetalWeaponTagList;                                  // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ExactMomentOfPickup;                                      // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<TEnumAsByte<EWeaponType>>                   GunTypeArray;                                             // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundCue*>                           GunAmmoSoundCues;                                         // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    InteractEnded;                                            // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PickupStarted;                                            // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundCue*                                   LocalSoundCue;                                            // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalPlayerLocation;                                      // 0x0808(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0814(0x0004) MISSED OFFSET
	struct FName                                       Melee_Durability_Tutorial1;                               // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AnimalMeatTutorialKey;                                    // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SuppressorTutorial;                                       // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BulletPenetrationTutorial;                                // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BikeStorageTutorial;                                      // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CrossbowCraftingTutorial;                                 // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       NewVar_1;                                                 // 0x0848(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       Weapon_Comparison_Blacklist;                              // 0x0860(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasCalledGreenThumbs;                                     // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BendInventoryPickup.BP_BendInventoryPickup_C");
		return ptr;
	}


	bool LastCheckWasFullOnObject();
	void Get_Comparison_Shown_By_Weapon(class UInventoryWeaponItem* Weapon_Item, bool* Show_Comparison_);
	bool SetAdvertisePosition();
	bool AttemptTakeItemFromAreaPickup(struct FVector* PlayerLocation);
	void IsWeapon(bool* IsWeapon, TEnumAsByte<EWeaponType>* WeaponType);
	void SetUpAnimOverride(class UAnimSequenceBase* Animation, bool UseAnchor, const struct FTransform& Anchor, const struct FName& ref, bool InteractRangeOverride, bool StartEnabled_);
	void PlayPickupAnimation();
	void UserConstructionScript();
	void Complete();
	void Failed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void EventAnimPickup(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify);
	void OnPickupAccepted();
	void SlateInputInteractEnd(class USlateInputInteract* InputInteract);
	void OnNotificationTextureLoaded(class UTexture2D** Icon);
	void ForcePickup();
	void ReceiveMoveCompleted_Event_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void Pre_InputStartPressTemp();
	void DoAutoNav();
	void StartTheInteraction();
	void PlayPickupEffects();
	void OnPerformActionMid(bool* FromAnim, bool* AlreadyDidPickup);
	void PlayAnimation();
	void Tutorials();
	void TryMeleeTutorial();
	void DisplayHudNotificationInternal(class UTexture2D** NotifyTexture);
	void CallNotifyForInteractEnd();
	void CallNotifyForInteractStart();
	void CallNotifyForExactMomentOfPickup();
	void SetNotificationDetails(bool* IsGunAmmoPickup);
	void SetMeleeWeaponType();
	void SetIconColor(bool* RedIcon);
	void Complain();
	void renameActor();
	void SetGlint(bool* On);
	void SetColorToFriendly(bool* Friendly);
	void UnbindMoveComplete();
	void BeginTheInteract();
	void InteractOnBegin();
	void InteractOnEnd();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void InputPressStarted();
	void InputPressReleased();
	void ForceResetWithCount(int NewCount);
	void ExecuteUbergraph_BP_BendInventoryPickup(int EntryPoint);
	void PickupStarted__DelegateSignature();
	void InteractEnded__DelegateSignature(bool DidAnimComplete);
	void ExactMomentOfPickup__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

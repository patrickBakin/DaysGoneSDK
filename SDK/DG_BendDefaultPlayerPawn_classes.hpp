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

// BlueprintGeneratedClass BendDefaultPlayerPawn.BendDefaultPlayerPawn_C
// 0x029D (0x34BD - 0x3220)
class ABendDefaultPlayerPawn_C : public ABendPlayerPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        FocusModeSphere;                                          // 0x3228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendDetourCrowdAvoidanceComponent*          BendDetourCrowdAvoidance;                                 // 0x3230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x3238(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      TwoWayRadio_v2_rig;                                       // 0x3240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Music_2ndTrack;                                           // 0x3248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SurrealSounds;                                            // 0x3250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           CollisionAgainstHorde;                                    // 0x3258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Music;                                                    // 0x3260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendVoxelLightComponent*                    BendVoxelLight5;                                          // 0x3268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendVoxelLightComponent*                    BendVoxelLight4;                                          // 0x3270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendVoxelLightComponent*                    BendVoxelLight3;                                          // 0x3278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendVoxelLightComponent*                    BendVoxelLight2;                                          // 0x3280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendVoxelLightComponent*                    BendVoxelLight1;                                          // 0x3288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendVoxelLightComponent*                    BendVoxelLight;                                           // 0x3290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSpotLightComponent*                     PlayerFlashLight;                                         // 0x3298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPawnNoiseEmitterComponent*                  PlayerNoiseEmitter;                                       // 0x32A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             player_health;                                            // 0x32A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ClearSounds;                                              // 0x32B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             WindSounds;                                               // 0x32B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           CollisionAgainstPhysics;                                  // 0x32C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             RainSounds;                                               // 0x32C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              EnemiesWithinAimRange;                                    // 0x32D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              EnemiesPreviouslyWithinAimRange;                          // 0x32E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FRotator                                    DefaultAimSpeed;                                          // 0x32F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrappleDone;                                              // 0x32FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x32FD(0x0003) MISSED OFFSET
	float                                              CombatCameraDistance;                                     // 0x3300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x3304(0x0004) MISSED OFFSET
	class ABP_ButtonPressEvent_C*                      StealthKillButtonPress;                                   // 0x3308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendWeapon*                                 EquippedWeaponRef;                                        // 0x3310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LowSpareAmmoThreshold;                                    // 0x3318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowAmmoThreshold;                                         // 0x331C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DeaconDiedDispatch;                                       // 0x3320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MinPawnDeathDist;                                         // 0x3330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x3334(0x0004) MISSED OFFSET
	class ABP_ButtonPressEvent_C*                      CurrentDodgeButtonEvent;                                  // 0x3338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ButtonPressEvent_C*                      CurrentDodgeAttackButtonEvent;                            // 0x3340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      AnimAttachedProp;                                         // 0x3348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    GrappleBroken;                                            // 0x3350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsInDebugZenMode;                                         // 0x3360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x3361(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    StealthKillBegin;                                         // 0x3368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_ButtonPressEvent_C*                      CurrentBrutalKillButtonEvent;                             // 0x3378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendPawn*                                   BrutalKillVictim;                                         // 0x3380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TelemetryEvent_GS_Collectible;                            // 0x3388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_GS_Infestation;                            // 0x3398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_AutoRegen;                              // 0x33A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_GS_EnterEncampment;                        // 0x33B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_GS_ExitEncampment;                         // 0x33C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_GS_NestClear;                              // 0x33D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GrappleFailed;                                            // 0x33E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                FactionLvlGRegVal;                                        // 0x33F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AimOnBike_DID;                                            // 0x33FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowAmmoVOPriority;                                        // 0x3400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedLowAmmoVO;                                          // 0x3404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x3405(0x0003) MISSED OFFSET
	float                                              FIGHTTHROUGHTHEPAINModifier;                              // 0x3408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Adrenaline_Slo_Mo_ID;                                     // 0x340C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnemyKilledVOChance;                                      // 0x3410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnemyKilledVOTimeout;                                     // 0x3414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                EnemyKilledVOTimer;                                       // 0x3418(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x4];                                       // 0x341C(0x0004) MISSED OFFSET
	struct FName                                       EnemyKilledVOLine;                                        // 0x3420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       InfestationClearedKey;                                    // 0x3428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FactionLvlRegInd;                                         // 0x3430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ClearAdrenalineTime;                                      // 0x3434(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BuffTimeHealth;                                           // 0x3438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuffTimeStamina;                                          // 0x343C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuffTimeFocus;                                            // 0x3440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerHiddenFlag;                                         // 0x3444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x3445(0x0003) MISSED OFFSET
	int                                                ForcedWalkToken;                                          // 0x3448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x344C(0x0004) MISSED OFFSET
	class UBendSkeletalMeshArrayData*                  PlayerMeshList;                                           // 0x3450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InEncampmentRangeSphere;                                  // 0x3458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanTakeFallDamage;                                        // 0x3459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x345A(0x0006) MISSED OFFSET
	struct FName                                       MeatTurnedInDatabaseName;                                 // 0x3460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowHeavyMeleeCombo;                                     // 0x3468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x3469(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    DeaconCounterSuccess;                                     // 0x3470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CounterIconDebug;                                         // 0x3480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x3481(0x0007) MISSED OFFSET
	class UBendMissionData*                            OBT_MissionID;                                            // 0x3488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SuppressorTutorial;                                       // 0x3490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BulletPenetrationTutorial;                                // 0x3498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BikeStorageTutorial;                                      // 0x34A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CritHit_CoolSystemTime;                                   // 0x34A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x34AC(0x0004) MISSED OFFSET
	struct FName                                       CrossbowCraftingTutorial;                                 // 0x34B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugDamageModifier;                                      // 0x34B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDamageModifierOn;                                    // 0x34BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendDefaultPlayerPawn.BendDefaultPlayerPawn_C");
		return ptr;
	}


	void I_GetPlayerMusic2ndTrackComponent(class UAudioComponent** AudioComponent);
	void I_GetPlayerMusicComponent(class UAudioComponent** AudioComponent);
	void I_SetPlayerTakeFallDamage(bool TakeDamage_, bool* Success_);
	class ABendButtonPressEventBlueprintSupport* AttachMeleeIconToPawn(class ABendPawn** Target, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, TEnumAsByte<EAttachLocation>* LocationType, bool* bAutoDestroy, TEnumAsByte<ECoolMeleeType>* MeleeType);
	float ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser);
	void CheckTutorials(class UInventoryItem* Item);
	void ResetSurroundedTutorial();
	class UStaticMeshComponent* GetFocusModeSphere();
	void SetNativeRefs();
	void SetupMolotovDamageModifier();
	void HandleInfestationReward(TArray<struct FBendRewardData>* FactionRewards);
	void FIGHTTHROUGHTHEPAINDamageModifier(float Damage);
	void HasLOS_ForStealthKill(const struct FVector& StartLocation, class ABendPawn* Bend_Pawn_Target, int RemainingIterations, bool DebugDraw, TArray<class AActor*>* ActorsToIgnore, bool* HasLOS);
	void GetWeaponStoppingPower(class AActor* DamageCauser, float* Min_Stopping_Power, float* Max_Stopping_Power, float* NPCMin_Stopping_Power, float* NPCMax_Stopping_Power);
	class UBendSpotLightComponent* GetPlayerFlashlight();
	void PlayDeacReactHumanDeath(class ABendPawn* Dead_Pawn);
	void CheckAmmoCounts();
	void IsPlayerInCombat(bool* InCombat);
	void UserConstructionScript();
	void OnCanDoCoolMeleeAttackStarted();
	void OnCanDoCoolMeleeAttackEnded();
	void OnCoolMeleeAttackSuccessful();
	void OnCoolMeleeAttackFailed();
	void K2_OnStartCrouch(float* HalfHeightAdjust, float* ScaledHalfHeightAdjust);
	void K2_OnEndCrouch(float* HalfHeightAdjust, float* ScaledHalfHeightAdjust);
	void OnStartSprinting();
	void OnStopSprinting();
	void UpdateDeathSource(class AController* Killer, class UDamageType* Damage_Type, class AActor* Damage_Causer);
	void InitFactionVO();
	void VO_ToggleOnBike_GlobalRegister(bool PlayerOnBike);
	void OnRiderStartedEnteringVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle);
	void OnRiderStartedExitingVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason);
	void InitBikeVO();
	void TrustTierChanged(class UBendEncampmentData* Encampment, TEnumAsByte<ETrustTier> PreviousTier, TEnumAsByte<ETrustTier> NewTier);
	void PlayEnemyKilledVO(class ABendPawn* VictimPawn, class UDamageType* DamageType, int XPValue, class AActor* DamageCauser, bool WasCriticalHit);
	void InitEnemyKilledVO();
	void ResetEnemyKilledVO();
	void InitExplosiveNearbyVO();
	void PlayExplosiveNearbyVO(class ABendProjectile* Projectile, float TimeToExplode, class UUserWidget* Widget);
	void PlayTrapNearbyVO(class ABendTrap* Trap, float TimeToExplode, class UUserWidget* Widget);
	void OnFailedActionBecauseOutOfStamina();
	void ReceiveBeginPlay();
	void OnDied_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void OnPairedDodgeBegin_Event_1(class ABendPawn* Dodger);
	void OnPairedDodgeEnded_Event_1(class ABendPawn* Dodger);
	void StabKillSuccess();
	void OnBrutalKillBegin_Event(class ABendPawn* Attacker, class ABendPawn* Victim);
	void BrutalKillSuccess_Event();
	void OnBrutalKillEnded_Event(class ABendPawn* Attacker, class ABendPawn* Victim);
	void OnSkillAcquired(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem);
	void DodgeButtonPressed();
	void UnlockRushNAttack();
	void MakeAdrenalineLonger();
	void UnlockPlayerReversalDirectional();
	void UnlockMakeAmends();
	void CheckSixFeetUnder();
	void UnlockFullThrottle_Skill();
	void OnInventoryModifiedDelegate_Event_1(const struct FInventoryOperation& Operation);
	void OnCounterAttackSuccessful();
	void OnSurrounded_Event_1();
	void OnAimStanceChanged_Event_1(TEnumAsByte<EAimStance> NewAimStance, TEnumAsByte<EAimStance> OldAimStance);
	void InventoryModified(const struct FInventoryOperation& Operation);
	void UnbindInventoryModified();
	void BreakGrapple(float defaultCompletionPercent);
	void UpdateGrappleEscapeVO();
	void FailedGrapple();
	void StealthKillInitiatedEvent();
	void EnteredEncampment(class UBendEncampmentData** Encampment);
	void LeavingEncampment(class UBendEncampmentData** Encampment);
	void UpdateEncampmentDisplay();
	void NotifyTrustModified(class UBendEncampmentData** Encampment, float* ModificationAmount);
	void OnStartAiming();
	void OnStopAiming();
	void ResetAim();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void OnWeaponFired_Event(class ABendWeapon* Weapon);
	void AmmoVOBinds();
	void OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void OnMissionComplete_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void UnbindMissionCheckEvents();
	void OnMeleeCriticalHitSuccessful();
	void OnCollectibleDiscovered(TEnumAsByte<EInventoryCollectibleID>* CollectibleID);
	void OnEquipCompleted(class ABendWeapon** EquippedItem);
	void ActivateAutoKills();
	void OnSlomoActivated_Event_1();
	void OnSlomoDeactivated_Event_1();
	void CustomEvent_1();
	void I_WearRadioOnChest(bool WearRadio);
	void OnInventoryConsumableItemUsed(class UInventoryItemConsumable** Item, class UGameplayEffect** Effect, float* Duration, struct FActiveGameplayEffectHandle* GE_Handle);
	void HealthComplete();
	void StaminaComplete();
	void FocusComplete();
	void EnteredEncampmentRange(class UBendEncampmentData** Encampment);
	void LeavingEncampmentRange(class UBendEncampmentData** Encampment);
	void CreateStealthKillPrompt();
	void DestroyStealthKillPrompt();
	void OnFocusFadingFinished_Event_1();
	void OnReloadFinished();
	void OnReloadStarted();
	void SaveOnEncampmentEnterExit();
	void HandleSpawningForEncampments(bool Entered);
	void AskToRecoverStuckVehicle();
	void HandleRecoverMessage(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton);
	void FadeFromBlackStart(const struct FString& Message);
	void ExecuteUbergraph_BendDefaultPlayerPawn(int EntryPoint);
	void DeaconCounterSuccess__DelegateSignature();
	void GrappleFailed__DelegateSignature(class ABendPawn* Grappler);
	void TelemetryEvent_GS_NestClear__DelegateSignature(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest);
	void TelemetryEvent_GS_ExitEncampment__DelegateSignature(class UBendEncampmentData* Encampment);
	void TelemetryEvent_GS_EnterEncampment__DelegateSignature(class UBendEncampmentData* Encampment);
	void TelemetryEvent_PS_AutoRegen__DelegateSignature();
	void TelemetryEvent_GS_Infestation__DelegateSignature(class ABendNestingZoneActor* ZoneActor);
	void TelemetryEvent_GS_Collectible__DelegateSignature(TEnumAsByte<EInventoryCollectibleID> CollectibleID);
	void StealthKillBegin__DelegateSignature();
	void GrappleBroken__DelegateSignature(class ABendPawn* Grappler);
	void DeaconDiedDispatch__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass HumanBasePawn.HumanBasePawn_C
// 0x0181 (0x2BD1 - 0x2A50)
class AHumanBasePawn_C : public ABendHumanPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x2A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                         // 0x2A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x2A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowHealthThresholdValue_1;                                // 0x2A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInHealthRedZone_1;                                      // 0x2A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2A71(0x0003) MISSED OFFSET
	int                                                DeathVOIndex;                                             // 0x2A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPlayerDeathDist;                                       // 0x2A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasLastWeatherBeenSet;                                    // 0x2A7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2A7D(0x0003) MISSED OFFSET
	float                                              TimeOfLastHitRxn;                                         // 0x2A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PawnLevel;                                                // 0x2A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExperienceValue;                                          // 0x2A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2A8C(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        FullBodyHitReactions;                                     // 0x2A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        UpperBodyHitReactions;                                    // 0x2AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PerformHitReaction;                                       // 0x2AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2AB1(0x0003) MISSED OFFSET
	float                                              LastDamageAmount;                                         // 0x2AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCombat;                                                 // 0x2AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeatherType>                          CurWeatherState;                                          // 0x2AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeatherType>                          LastWeatherState;                                         // 0x2ABA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x2ABB(0x0001) MISSED OFFSET
	float                                              CheckWeatherInterval;                                     // 0x2ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeSameWeather;                                          // 0x2AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2AC4(0x0004) MISSED OFFSET
	struct FName                                       WeatherVOFXName;                                          // 0x2AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasWeatherVOBeenPlayed;                                   // 0x2AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2AD1(0x0003) MISSED OFFSET
	int                                                WeatherVOPercentChanceToPlay;                             // 0x2AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedTimeSameWeather;                                   // 0x2AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SameWeatherTimeLimit;                                     // 0x2ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SameWeatherCount;                                         // 0x2AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ChanceToGetMad;                                           // 0x2AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ChanceToGetMadStepValue;                                  // 0x2AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeWeatherVOCD;                                          // 0x2AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedTimeWeatherVOCD;                                   // 0x2AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurationWeatherVOCD;                                      // 0x2AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPlayedLowHealthVO_1;                                  // 0x2AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2AF9(0x0007) MISSED OFFSET
	class UDamageType*                                 LastDamagesType;                                          // 0x2B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentHitLocation;                                       // 0x2B08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2B14(0x0004) MISSED OFFSET
	class AController*                                 LastDamageInstigator;                                     // 0x2B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBendActionData>                     FireReactionActionData;                                   // 0x2B20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                OverrideFireReaction;                                     // 0x2B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDefaultFireAnims;                                      // 0x2B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FireAnimsDisabled;                                        // 0x2B35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NPCCalloutOverriden;                                      // 0x2B36(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x2B37(0x0001) MISSED OFFSET
	float                                              ChanceToBreakGrapple;                                     // 0x2B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysBreakGrapple;                                       // 0x2B3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2B3D(0x0003) MISSED OFFSET
	float                                              MinGrappleDuration;                                       // 0x2B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxGrappleDuration;                                       // 0x2B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInventoryIDDetails                         Table_Drops_;                                             // 0x2B48(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2B54(0x0004) MISSED OFFSET
	class AHumanLootBehaviorPOI_C*                     Humanlootbehaviorpoi;                                     // 0x2B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              OneShotOneKillDamageMultiplier;                           // 0x2B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CH_TD;                                                    // 0x2B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTimerHandle>                        CH_Timers;                                                // 0x2B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsTicking;                                                // 0x2B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2B79(0x0003) MISSED OFFSET
	float                                              DilationAmount;                                           // 0x2B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DilationDuration;                                         // 0x2B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurTimeDilation;                                          // 0x2B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ThisTimeDilation;                                         // 0x2B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x2B8C(0x0004) MISSED OFFSET
	class UTexture2D*                                  OverrideCallout;                                          // 0x2B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x2B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysTakeFullDamageOverride;                             // 0x2B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // 0x2B9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x2B9E(0x0002) MISSED OFFSET
	int                                                NumDroppedItems;                                          // 0x2BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x2BA4(0x0004) MISSED OFFSET
	class UUI_NPCCallout_C*                            CalloutWidgetRef;                                         // 0x2BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffscreenAngle;                                           // 0x2BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OffscreenState;                                           // 0x2BB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x2BB5(0x0003) MISSED OFFSET
	class UClass*                                      SearchBodyClass;                                          // 0x2BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PawnOnVehicleDoubleDamage;                                // 0x2BC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x2BC1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    BloodPool;                                                // 0x2BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PawnHasArmor;                                             // 0x2BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HumanBasePawn.HumanBasePawn_C");
		return ptr;
	}


	void UpdateCallout(bool OffScreen, float angle);
	void SetVolumetricMaterial();
	void GetNumberOfDroppedItems(int* Num_Items_Dropped);
	void GetLootAnimations(class UAnimSequenceBase** Search_Animation, class UAnimSequenceBase** Crouched_Search_Animation);
	float ClampGrappleResult(float* InResult);
	float ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser);
	void SetCalloutPosition();
	void DisableFireAnims();
	void IsPawnInCombat(bool* InCombat);
	void TriggerUpperBodyHitReaction();
	void TriggerFullBodyHitReaction();
	void HandleDamage();
	void CalculateIfCriticalHit(const struct FName& Bone_Name, class UDamageType* Damage_Type, float DamageAmount);
	void CalculateXPGain(int* ExperienceEarned);
	void UserConstructionScript();
	void VO_LowHealth();
	void VO_DeaconDiedNearby();
	void VO_DeathEvent(class AController* Killer, class UDamageType* Damage_Type, class AActor* Damage_Causer);
	void WeatherVOCDExpired();
	void VO_Weather();
	void OnPlayerPawnDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void OnDied_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void CalculateCriticalHit(struct FName* BoneName, class UDamageType** DamageType, class ABendProjectile** Projectile, float* DamageAmount);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnGrappledBegin_Event_1(class ABendPawn* Attacker, bool SkipButtonEvent);
	void Fire_Damage_Anims();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnExitStunState();
	void OnPickup_Event_1();
	void StartTimeDilation();
	void DialtionStep();
	void StopTimer();
	void SpawnActorPOIGoreBody();
	void WillHearThrownNoise(class ABendWeapon_Projectile** ThrownWeapon, bool* WillHear);
	void HeavyWeaponCheck();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceivePossessed(class AController** NewController);
	void TrophyCount(const struct FGameplayTag& TrophyTagName, int Count);
	void Event_OnAngleChanged(float angle);
	void Event_OnOffScreenChanged(bool OffScreen);
	void OnFocusFadingFinished_Event_1();
	void SpawnActorSearchBody(int* NumItemSpawns);
	void CatchAnimNotifyMessage(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify);
	void OnBeingStealthKilledStart_Event_1(class ABendPawn* AttackerPawn);
	void StealthKillCheckForStamina();
	void DudeAwareOPlayer(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void KillRockHighlightHumansNow();
	void ExecuteUbergraph_HumanBasePawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

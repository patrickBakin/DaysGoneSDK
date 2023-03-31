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

// BlueprintGeneratedClass NewtPawn.NewtPawn_C
// 0x00B0 (0x2AA0 - 0x29F0)
class ANewtPawn_C : public ABendSwarmerPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x29F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                         // 0x29F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SND_Grapple_Foley_lp;                                     // 0x2A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCrowdFlowSoundEmitter*                  PlayerAwareEmitter;                                       // 0x2A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomColorVisuals;                                       // 0x2A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomBloodVisuals;                                       // 0x2A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDamageAmount;                                         // 0x2A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentHitLocation;                                       // 0x2A1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 LastDamageInstigator;                                     // 0x2A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 LastDamagesType;                                          // 0x2A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x2A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PawnLevel;                                                // 0x2A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExperienceValue;                                          // 0x2A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFreakerPawn_States>                   LastState;                                                // 0x2A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFreakerPawn_States>                   CurState;                                                 // 0x2A45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayLastTransitionSound;                                  // 0x2A46(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropsLoot;                                                // 0x2A47(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendFreakerController*                      FreakerController;                                        // 0x2A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x2A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsIndoorsChanged;                                         // 0x2A51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x2A52(0x0006) MISSED OFFSET
	struct FName                                       LastStateTransitionSound;                                 // 0x2A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendInventoryPickup*                        DroppedItems;                                             // 0x2A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              OneShotOneKillDamageMultiplier;                           // 0x2A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NPCCalloutOverriden;                                      // 0x2A6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2A6D(0x0003) MISSED OFFSET
	struct FVector                                     CalloutLocation;                                          // 0x2A70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2A7C(0x0004) MISSED OFFSET
	class UTexture2D*                                  OverrideCallout;                                          // 0x2A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fail;                                                     // 0x2A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // 0x2A89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x2A8A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    BloodPool;                                                // 0x2A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x2A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysTakeFullDamageOverride;                             // 0x2A99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2A9A(0x0002) MISSED OFFSET
	float                                              DamageMultiplier;                                         // 0x2A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NewtPawn.NewtPawn_C");
		return ptr;
	}


	void ActivateObjectiveCallout(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, bool* Failed);
	void IsCalloutActive(bool* Active);
	void GetAwareness(TEnumAsByte<EAIAwareState>* Awareness);
	void ActivateCallout(TEnumAsByte<Enum_CalloutType> CalloutType, bool CalloutOverride, bool* Failed);
	void DeactivateCallout(bool* Failed);
	void SetCalloutPosition();
	void OnFireUpdate();
	float ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser);
	void AwarePassiveUpdate();
	void PlayLastStateTransitionSound();
	void Semi_AwareUpdate();
	void FrustratedUpdate();
	void EnragedUpdate();
	void NestingUpdate();
	void SetColors();
	void GrapplingUpdate();
	void HandleDamageTypes();
	void UpdateCurrentState();
	void StateCheckForAudio();
	void AwareUpdate();
	void LightUpdate();
	void UnawareUpdate();
	void EatingUpdate();
	void CalculateXPGain(int* ExperienceAwarded);
	void HandleDamage();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnDied_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void OnGrappledBegin_Event_1(class ABendPawn* Attacker, bool SkipButtonEvent);
	void NonTablePickedUp();
	void StatusStartedDelegate_Event_1(class UStatusEffect* StatusEffect);
	void Complete();
	void SpawnActorPOIGoreBody();
	void WillHearThrownNoise(class ABendWeapon_Projectile** ThrownWeapon, bool* WillHear);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnFocusFadingFinished_Event_1();
	void OnBeingStealthKilledStart_Event_1(class ABendPawn* AttackerPawn);
	void StealthKillCheckForStamina();
	void KillRockHighlightNewtsNow();
	void ReceivePossessed(class AController** NewController);
	void SwarmerAwareOPlayer(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void ExecuteUbergraph_NewtPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

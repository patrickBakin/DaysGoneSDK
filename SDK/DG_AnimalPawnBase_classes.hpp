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

// BlueprintGeneratedClass AnimalPawnBase.AnimalPawnBase_C
// 0x00B8 (0x2CF8 - 0x2C40)
class AAnimalPawnBase_C : public ABendAnimalPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2C40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Drool;                                                 // 0x2C48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Creature_BleedOut;                                     // 0x2C50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EatingBodyPOIComponent;                                   // 0x2C58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                         // 0x2C60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SearchBodyAttachSocket;                                   // 0x2C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  OverrideCallout;                                          // 0x2C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NPCCalloutOverriden;                                      // 0x2C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fail;                                                     // 0x2C79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2C7A(0x0002) MISSED OFFSET
	float                                              LastDamageAmount;                                         // 0x2C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 LastDamagesType;                                          // 0x2C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentHitLocation;                                       // 0x2C88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2C94(0x0004) MISSED OFFSET
	class AController*                                 LastDamageInstigator;                                     // 0x2C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CalloutLocation;                                          // 0x2CA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              One_Shot_One_Kill_Damage_Multiplier;                      // 0x2CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Always_Take_Full_Damage_Override;                         // 0x2CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2CB1(0x0003) MISSED OFFSET
	float                                              Damage_Multiplier;                                        // 0x2CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // 0x2CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAnimalPawn_States>                    LastState;                                                // 0x2CB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAnimalPawn_States>                    CurState;                                                 // 0x2CBA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayLastTransitionSound;                                  // 0x2CBB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2CBC(0x0004) MISSED OFFSET
	class ABendAnimalController*                       AnimalController;                                         // 0x2CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DecalBleedOutMaterial;                                    // 0x2CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // 0x2CD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterDeathDecalDelay;                                     // 0x2CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             BleedOutDecal;                                            // 0x2CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LastStateTransitionSound;                                 // 0x2CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    BloodPool;                                                // 0x2CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimalPawnBase.AnimalPawnBase_C");
		return ptr;
	}


	float ClampGrappleResult(float* InResult);
	void UpdateCurrentState();
	void OnFireUpdate();
	void FrustratedUpdate();
	void GrappleUpdate();
	void DrinkingUpdate();
	void EatingUpdate();
	void UnawareUpdate();
	void SemiawareUpdate();
	void AwareUpdate();
	void NoneUpdate();
	void StateCheckForAudio();
	float ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser);
	void SetCalloutPosition();
	class AActor* SpawnAndSetupSearchBodyActor(class UAnimSequenceBase** AnimSequence, class UAnimSequenceBase** AnimSequenceCrouched, struct FName* SubClass);
	void UserConstructionScript();
	void SpawnActorPOIGoreBody();
	void ReceiveBeginPlay();
	void AnimalDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnPickup_Event_1();
	void OnInventoryPickup_Event_1(class ABendInventoryPickup* InventoryPickup);
	void SetupAnimalLootBinds();
	void WillHearThrownNoise(class ABendWeapon_Projectile** ThrownWeapon, bool* WillHear);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnFocusFadingFinished_Event_1();
	void ExecuteUbergraph_AnimalPawnBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

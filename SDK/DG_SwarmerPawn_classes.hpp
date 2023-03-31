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

// BlueprintGeneratedClass SwarmerPawn.SwarmerPawn_C
// 0x0160 (0x2B50 - 0x29F0)
class ASwarmerPawn_C : public ABendSwarmerPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x29F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             SND_grapple_eject;                                        // 0x29F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SND_swarmer_grapple_foley_lp;                             // 0x2A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter1;                                        // 0x2A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCrowdFlowSoundEmitter*                  PlayerAwareEmitter;                                       // 0x2A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExperienceValue;                                          // 0x2A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PawnLevel;                                                // 0x2A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESwarmerPawn_States>                   LastState;                                                // 0x2A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESwarmerPawn_States>                   CurState;                                                 // 0x2A21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x2A22(0x0006) MISSED OFFSET
	class UDamageType*                                 LastDamageType_1;                                         // 0x2A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDamageAmount;                                         // 0x2A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2A34(0x0004) MISSED OFFSET
	class AController*                                 LastDamageInstigator;                                     // 0x2A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x2A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentHitLocation;                                       // 0x2A44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendFreakerController*                      FreakerController;                                        // 0x2A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomColorVisuals;                                       // 0x2A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomBloodVisuals;                                       // 0x2A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsIndoorsChanged;                                         // 0x2A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x2A61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x2A62(0x0006) MISSED OFFSET
	struct FName                                       LastStateTransitionSound;                                 // 0x2A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayLastTransitionSound;                                  // 0x2A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2A71(0x0007) MISSED OFFSET
	TArray<struct FBendActionData>                     FireReactionActionData;                                   // 0x2A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                OverrideFireReaction;                                     // 0x2A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FleeLocation;                                             // 0x2A8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  HitResult_Placeholder;                                    // 0x2A98(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OneShotOneKillDamageMultiplier;                           // 0x2B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2B24(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    BloodPool;                                                // 0x2B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuringAnimationDuration;                                  // 0x2B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NPCCalloutOverriden;                                      // 0x2B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2B35(0x0003) MISSED OFFSET
	class UTexture2D*                                  OverrideCallout;                                          // 0x2B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // 0x2B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2B41(0x0003) MISSED OFFSET
	float                                              Damage_Done;                                              // 0x2B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysTakeFullDamageOverride;                             // 0x2B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2B49(0x0003) MISSED OFFSET
	float                                              DamageMultiplier;                                         // 0x2B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SwarmerPawn.SwarmerPawn_C");
		return ptr;
	}


	void ActivateObjectiveCallout(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, bool* Failed);
	void IsCalloutActive(bool* Active);
	void GetAwareness(TEnumAsByte<EAIAwareState>* Awareness);
	void ActivateCallout(TEnumAsByte<Enum_CalloutType> CalloutType, bool CalloutOverride, bool* Failed);
	void DeactivateCallout(bool* Failed);
	void SetCalloutPosition();
	void AwareWaitingUpdate();
	void OnFireUpdate();
	float ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser);
	float ClampGrappleResult(float* InResult);
	void EquipClaws();
	void PlayLastStateTransitionSound();
	void Semi_AwareUpdate();
	void FrustratedUpdate_();
	void EnragedUpdate();
	void NestingUpdate();
	void GrapplingUpdate();
	void HandleDamage();
	void NoneUpdate();
	void UpdateCurrentState();
	void StateCheckForAudio();
	void AwareUpdate();
	void LightUpdate();
	void UnawareUpdate();
	void EatingUpdate();
	void CalculateXPGain(int* ExperienceAwarded);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnDied_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void Fire_Damage_Anims();
	void AnimComplete();
	void AnimFailed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void OnHeadBlownOff(class USkeletalMeshComponent** pLimbMesh, class ASkeletalMeshActor** pSeveredLimb);
	void SearchedBody();
	void SpawnActorPOIGoreBody();
	void WillHearThrownNoise(class ABendWeapon_Projectile** ThrownWeapon, bool* WillHear);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnFocusFadingFinished_Event_1();
	void CatchAnimNotifyMessage(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotify);
	void OnBeingStealthKilledStart_Event_1(class ABendPawn* AttackerPawn);
	void StealthKillCheckForStamina();
	void ReceivePossessed(class AController** NewController);
	void SwarmerAwareOPlayer(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness);
	void KillRockHighlightSwarmersNow();
	void ExecuteUbergraph_SwarmerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

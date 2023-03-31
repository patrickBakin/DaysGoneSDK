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

// BlueprintGeneratedClass BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C
// 0x01DF (0x0A78 - 0x0899)
class ABP_CarryWeaponPickupBase_C : public ABP_BendInventoryPickup_PhysicsBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0899(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             CenterOfObject;                                           // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InfiniteRespawning;                                       // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x08B1(0x000F) MISSED OFFSET
	struct FTransform                                  OriginalTransform;                                        // 0x08C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_CarryWeaponPickupBase_C*                 OriginalPickup;                                           // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WidgetOffset;                                             // 0x08F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInventoryWeaponID>                    WeaponID;                                                 // 0x0904(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0905(0x0003) MISSED OFFSET
	struct FName                                       PickupVO;                                                 // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupVOChance;                                           // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinExpDmg;                                                // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExpDmg;                                                // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinExpRadius;                                             // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExpRadius;                                             // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DmgFalloffRate;                                           // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionForce;                                           // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	class UParticleSystem*                             ExplosionEmitter;                                         // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ExplosionEmitterRef;                                      // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionFire;                                            // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendImpactEffect*                           ExplosionFireRef;                                         // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionShake;                                           // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeRadiusScale;                                         // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeFalloffRate;                                         // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VibrationDuration;                                        // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPawnsAffected;                                         // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBendExplosionParams                        BendExplosionParams;                                      // 0x0970(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Exploding;                                                // 0x0A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyed;                                               // 0x0A29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0A2A(0x0006) MISSED OFFSET
	class AController*                                 InstigatedBy;                                             // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                OnFireTimer;                                              // 0x0A38(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                DamagedTimer;                                             // 0x0A3C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpShakeTimer;                                            // 0x0A40(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OnFireDelay;                                              // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ETypeOfDamage>>                 IgnoreDmgTypes;                                           // 0x0A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ETypeOfBaseDamage>>             AllowBaseDmgTypes;                                        // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    CarryWeaponExploded;                                      // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CarryWeaponPickupBase.BP_CarryWeaponPickupBase_C");
		return ptr;
	}


	void ObjectBlownUp();
	void HandleInfiniteRespawn(class ABendWeapon* Weapon);
	void UserConstructionScript();
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void HandleExploded();
	void BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature(struct FName* BoneName);
	void ResetObject();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ExplodePickup(class AController* Instigator);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void OnPerformActionEnd();
	void DisplayHudNotificationInternal(class UTexture2D** NotifyTexture);
	void ExplodePickupDelayed();
	void AddExplosionForce(const struct FVector& Location);
	void CreateFireDelayed();
	void MakeExplosionNoise(class AController* Instigator);
	void InitPickupInteract();
	void PlayCameraShake();
	void PlayCameraShakeDelayed();
	void PlayPickupVO();
	void OnFireDelayed();
	void StopVibration();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_CarryWeaponPickupBase(int EntryPoint);
	void CarryWeaponExploded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

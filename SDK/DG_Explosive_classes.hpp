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

// BlueprintGeneratedClass Explosive.Explosive_C
// 0x0269 (0x05B1 - 0x0348)
class AExplosive_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        TutorialTrigger;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendFocusModeOutlineComponent*              BendFocusModeOutline;                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDestructibleComponent*                      DestructibleComp;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             DecalComp;                                                // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CenterOfObject;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MeshComp;                                                 // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Actor;                                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	struct FTransform                                  OriginalPosition;                                         // 0x0390(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastPosition;                                             // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              MinExpDmg;                                                // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExpDmg;                                                // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinExpRadius;                                             // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExpRadius;                                             // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DmgFalloffRate;                                           // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionForce;                                           // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class UParticleSystem*                             ExplosionEmitter;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ExplosionSound;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionFire;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendImpactEffect*                           ExplosionFireRef;                                         // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ExplosionEmitterRef;                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExplosionCenter;                                          // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExplosionOffset;                                          // 0x041C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ExplodedMesh;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FractureChunks;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           DecalMaterial;                                            // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalMatInst;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionShake;                                           // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeRadiusScale;                                         // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeFalloffRate;                                         // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VibrationDuration;                                        // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPawnsAffected;                                         // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBendExplosionParams                        BendExplosionParams;                                      // 0x0470(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ExplosionBottom;                                          // 0x0528(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SoundOffset;                                              // 0x0534(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TutorialKey;                                              // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_TutorialPanel_C*                         TutorialRef;                                              // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Exploding;                                                // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Exploded;                                                 // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0552(0x0006) MISSED OFFSET
	class AController*                                 InstigatedBy;                                             // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                OnFireTimer;                                              // 0x0560(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                DamagedTimer;                                             // 0x0564(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpMeshTimer;                                             // 0x0568(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpShakeTimer;                                            // 0x056C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OnFireDelay;                                              // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ETypeOfDamage>>                 IgnoreDmgTypes;                                           // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ETypeOfBaseDamage>>             AllowBaseDmgTypes;                                        // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ExplosiveExploded;                                        // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimespan                                   JobResetTime;                                             // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TEnumAsByte<EJobResetTypes>                        JobResetType;                                             // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Explosive.Explosive_C");
		return ptr;
	}


	void ForceExplode();
	void RepositionExplosivePieces();
	void Explode(bool LoadExploded);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ExplodeDelayed();
	void SetStateToExploded();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void CreateFire();
	void CreateFireDelayed();
	void PlayCameraShake();
	void PlayCameraShakeDelayed();
	void BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_55_BeginOverlapSig__DelegateSignature();
	void OnFireDelayed();
	void SwapExplodedMesh();
	void SwapExplodedMeshDelayed();
	void StopVibration();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_Explosive(int EntryPoint);
	void ExplosiveExploded__DelegateSignature(class AExplosive_C* Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C
// 0x00C1 (0x0409 - 0x0348)
class ABP_AmbushZoneBarricade_MASTER_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        NavLink3;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        NavLink2;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSphereComponent*                        TutorialTrigger;                                          // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendFocusModeOutlineComponent*              BendFocusModeOutline1;                                    // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BlockCutNav;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        NavLink;                                                  // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        AmbushZone_Barricade_Rope;                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      AmbushZone_Barricade_Skeletal;                            // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Exploded;                                                 // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class ABP_BasicInteractBase_C*                     Interact;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UAnimSequence*                               Explosion_Animation_Sequence;                             // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Explosion_Animation_Play_Rate;                            // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    DestructibleExploded;                                     // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UParticleSystem*                             PS_Explosion;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TutorialKey;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_TutorialPanel_C*                         TutorialRef;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionShake;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinExpRadius;                                             // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DestructionRadius;                                        // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeRadiusScale;                                         // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeFalloffRate;                                         // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayCameraShake;                                          // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FTimespan                                   JobResetTime;                                             // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TEnumAsByte<EJobResetTypes>                        JobResetType;                                             // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushZoneBarricade_MASTER.BP_AmbushZoneBarricade_MASTER_C");
		return ptr;
	}


	void SetNavLinksEnabled(bool Enabled);
	void UserConstructionScript();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveBeginPlay();
	void BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_392_BeginOverlapSig__DelegateSignature();
	void ManualExplosion();
	void ManualDisableBarricade();
	void ExecuteUbergraph_BP_AmbushZoneBarricade_MASTER(int EntryPoint);
	void DestructibleExploded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

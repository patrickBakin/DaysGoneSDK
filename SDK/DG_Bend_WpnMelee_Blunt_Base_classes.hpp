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

// BlueprintGeneratedClass Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C
// 0x0060 (0x2B00 - 0x2AA0)
class ABend_WpnMelee_Blunt_Base_C : public ABendWeaponMeleeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                DamagePerHit;                                             // 0x2AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmtDamageToApply;                                         // 0x2AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedback;                                            // 0x2AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OriginalDamageValue;                                      // 0x2AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponMeleeTier>                      WeaponTier;                                               // 0x2AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2ABA(0x0002) MISSED OFFSET
	float                                              STRONGARMDamageBuff;                                      // 0x2ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               STRONGARMApplied;                                         // 0x2AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2AC1(0x0003) MISSED OFFSET
	float                                              HITTINGTHESWEETSPOTBuff;                                  // 0x2AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HITTINGTHESWEETSPOTApplied;                               // 0x2AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2AC9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 DamageSpeedScaler;                                        // 0x2AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OriginalDamage;                                           // 0x2AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyDamageMeleeTarget;                                    // 0x2ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScaleDamageByBikeSpeed;                                   // 0x2ADD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x2ADE(0x0002) MISSED OFFSET
	struct FVector                                     ColliderScale;                                            // 0x2AE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2AEC(0x0004) MISSED OFFSET
	struct FName                                       MeleeWeaponBreakMulti;                                    // 0x2AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MeleeWeaponBreakSimple;                                   // 0x2AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnMelee_Blunt_Base.Bend_WpnMelee_Blunt_Base_C");
		return ptr;
	}


	bool ICanUpgrade();
	TEnumAsByte<EWeaponMeleeTier> IGetTier();
	int IGetUpgradeCost();
	bool ISetTier(TEnumAsByte<EWeaponMeleeTier> Tier);
	bool ICanEverBeRepaired();
	bool ICanBeRepaired();
	int IGetRepairCost();
	bool IOnRepaired();
	void VerifyBrokenOverlap(class UObject* OtherActor, bool* ValidHit);
	void VerifyOverlap(class UObject* OtherActor, bool* ValidHit);
	void DisplayDebugInfo(struct FHitResult* Hit);
	void UserConstructionScript();
	void BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnWeaponArmed();
	void OnWeaponDisarmed();
	void OnDamaged(bool* OwnerIsPlayer, float* WeaponsHealthPercentage);
	void ReceiveBeginPlay();
	void OnHolsterStarted();
	void OnDrawFinished();
	void BndEvt__MeleeCollisionOnBikeComp_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnDebuggingActive();
	void Melee_Tutorials();
	void ExecuteUbergraph_Bend_WpnMelee_Blunt_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

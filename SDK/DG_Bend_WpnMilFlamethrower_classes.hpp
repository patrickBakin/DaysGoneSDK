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

// BlueprintGeneratedClass Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C
// 0x0039 (0x2BB9 - 0x2B80)
class ABend_WpnMilFlamethrower_C : public ABendWeapon_Flamethrower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Flamethrower;                                          // 0x2B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             wpn_flame_thrower_idle;                                   // 0x2B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ForceWalkToken;                                           // 0x2B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ColliderScale;                                            // 0x2B9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DamageSpeedScaler;                                        // 0x2BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyDamageMeleeTarget;                                    // 0x2BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2BB1(0x0003) MISSED OFFSET
	int                                                OriginalDamage;                                           // 0x2BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScaleDamageByBikeSpeed;                                   // 0x2BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnMilFlamethrower.Bend_WpnMilFlamethrower_C");
		return ptr;
	}


	void Verify_Overlap(class UObject* OtherActor, bool* ValidHit);
	void UserConstructionScript();
	void OnDrawStarted();
	void OnHolsterStarted();
	void ReceiveBeginPlay();
	void BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnWeaponArmed();
	void OnWeaponDisarmed();
	void OnDamaged(bool* OwnerIsPlayer, float* WeaponsHealthPercentage);
	void ExecuteUbergraph_Bend_WpnMilFlamethrower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

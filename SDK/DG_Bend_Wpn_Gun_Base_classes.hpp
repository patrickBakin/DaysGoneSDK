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

// BlueprintGeneratedClass Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C
// 0x0009 (0x2B39 - 0x2B30)
class ABend_Wpn_Gun_Base_C : public ABendWeaponGunBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<EUI_Reticle_Types>                     ReticleType;                                              // 0x2B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_Wpn_Gun_Base.Bend_Wpn_Gun_Base_C");
		return ptr;
	}


	bool ICanEverBeRepaired();
	bool ICanBeRepaired();
	int IGetRepairCost();
	bool IOnRepaired();
	void SetHiddenForDLC(bool ShouldHide);
	void GetHideReticle(bool* HideReticle);
	void VerifyOverlap(class UObject* OtherActor, bool* ValidHit);
	void AdjustReticleByMovement();
	void Debug_GunAccuracy();
	void ShakeCamera();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnWeaponArmed();
	void OnWeaponDisarmed();
	void OnDamaged(bool* OwnerIsPlayer, float* WeaponsHealthPercentage);
	void OnWeaponDisarmed_Copy();
	void BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnClipLoaded(int* MaterialIndex);
	void OnClipRemoved(int* MaterialIndex);
	void OnBaseMaterialSet();
	void OnPartAdded(class ABendWeaponPart** WeaponPart);
	void OnPartRemoved(class ABendWeaponPart** WeaponPart);
	void SetupBaseMaterial();
	void OnAmmoTakenFromBike(int* AmmoTaken);
	void OnDebuggingActive();
	void ExecuteUbergraph_Bend_Wpn_Gun_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

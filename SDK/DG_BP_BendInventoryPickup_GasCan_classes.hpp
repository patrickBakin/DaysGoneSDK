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

// BlueprintGeneratedClass BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C
// 0x0009 (0x0A81 - 0x0A78)
class ABP_BendInventoryPickup_GasCan_C : public ABP_CarryWeaponPickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               SuppressMiniMapIcon;                                      // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BendInventoryPickup_GasCan.BP_BendInventoryPickup_GasCan_C");
		return ptr;
	}


	void UserConstructionScript();
	void LowFuelCheck();
	void BndEvt__MeshComp_K2Node_ComponentBoundEvent_772_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void InitPickupInteract();
	void Tutorials();
	void ExecuteUbergraph_BP_BendInventoryPickup_GasCan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

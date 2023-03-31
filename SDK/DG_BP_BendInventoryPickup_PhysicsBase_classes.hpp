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

// BlueprintGeneratedClass BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C
// 0x0018 (0x0899 - 0x0881)
class ABP_BendInventoryPickup_PhysicsBase_C : public ABP_BendInventoryPickup_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPickupCCD*                                  PickupCCD;                                                // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedDropSoundRecently;                                  // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BendInventoryPickup_PhysicsBase.BP_BendInventoryPickup_PhysicsBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature(const struct FName& BoneName);
	void BndEvt__MeshComp_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_BendInventoryPickup_PhysicsBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

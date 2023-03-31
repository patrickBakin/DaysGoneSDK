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

// BlueprintGeneratedClass BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C
// 0x004F (0x08D0 - 0x0881)
class ABP_BendInventoryPickup_Bolt_Physics_C : public ABP_BendInventoryPickup_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        DestroySphere;                                            // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BrokenTip;                                                // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachedActor;                                            // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendPawn*                                   OwningPawn;                                               // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ChanceArrowIsPickupable;                                  // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class UUI_ItemTexture_C*                           AdvertiseIcon;                                            // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSpecialBoltType;                                        // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HitSoftTarget;                                            // 0x08C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ArrowBroke;                                               // 0x08C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnedBrokenArrow;                                       // 0x08C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	class ABrokenArrowActor_C*                         BrokenArrow;                                              // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BendInventoryPickup_Bolt_Physics.BP_BendInventoryPickup_Bolt_Physics_C");
		return ptr;
	}


	void SetDidArrowBreak();
	void UserConstructionScript();
	void BndEvt__MeshComp_K2Node_ComponentBoundEvent_208_ComponentSleepSignature__DelegateSignature(const struct FName& BoneName);
	void AttachToPawn(class AActor* ActorToAttachTo, class UMaterialInterface* ArrowMaterial);
	void actor_Destroyed();
	void PickupEnable(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void SetOwningPawn(class ABendPawn* OwningPawn);
	void TurnOffPhysics();
	void HitHardSurface(class UMaterialInterface* ArrowMaterial);
	void AttachToRandom(class UMaterialInterface* ArrowMaterial);
	void InitPickupInteract();
	void SpawnBrokenArrow();
	void OnReturnedToPool(class ABendAIController* Controller);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void BndEvt__DestroySphere_K2Node_ComponentBoundEvent_593_EndOverlapSig__DelegateSignature();
	void ExecuteUbergraph_BP_BendInventoryPickup_Bolt_Physics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

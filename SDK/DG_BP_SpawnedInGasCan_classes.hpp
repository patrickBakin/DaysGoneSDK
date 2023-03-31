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

// BlueprintGeneratedClass BP_SpawnedInGasCan.BP_SpawnedInGasCan_C
// 0x0023 (0x0AA4 - 0x0A81)
class ABP_SpawnedInGasCan_C : public ABP_BendInventoryPickup_GasCan_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A81(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A88(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        OutOfRangeSphere;                                         // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasEndPlay;                                               // 0x0A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A99(0x0003) MISSED OFFSET
	float                                              Threshold;                                                // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxImpactStrength;                                        // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnedInGasCan.BP_SpawnedInGasCan_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OutOfRangeSphere_K2Node_ComponentBoundEvent_402_EndOverlapSig__DelegateSignature();
	void ObjectBlownUp();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void BndEvt__MeshComp_K2Node_ComponentBoundEvent_1494_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SpawnedInGasCan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

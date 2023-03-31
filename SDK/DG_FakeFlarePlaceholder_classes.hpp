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

// BlueprintGeneratedClass FakeFlarePlaceholder.FakeFlarePlaceholder_C
// 0x0045 (0x05E0 - 0x059B)
class AFakeFlarePlaceholder_C : public ABP_Spotlight_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x059B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            BrightnessOverrideSphere;                                 // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           FlareCollider;                                            // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendVoxelLightComponent*                    BendVoxelLight;                                           // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FlareMesh;                                                // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FlareFX;                                                  // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlareLifetime;                                            // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrightnessOverride;                                       // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FakeFlarePlaceholder.FakeFlarePlaceholder_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AfterFallToGround();
	void TurnOffFireEffects();
	void BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphereligtoverride_K2Node_ComponentBoundEvent_254_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void TurnOnRig();
	void TurnOffRig();
	void ExecuteUbergraph_FakeFlarePlaceholder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

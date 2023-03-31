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

// BlueprintGeneratedClass Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C
// 0x0070 (0x05D0 - 0x0560)
class ABend_BulletImpact_Assault_C : public ABendImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_1_BloodDryTime_F9BFEC404F51B46CA8FB2EA3D2C096FB; // 0x0568(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_BloodDripTime_F9BFEC404F51B46CA8FB2EA3D2C096FB;// 0x056C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_F9BFEC404F51B46CA8FB2EA3D2C096FB;   // 0x0570(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_BloodDryTime_B433ACC74DD89432830458A082AB85A2; // 0x0580(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_BloodDripTime_B433ACC74DD89432830458A082AB85A2;// 0x0584(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_B433ACC74DD89432830458A082AB85A2;   // 0x0588(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x0598(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalPosition;                                            // 0x05A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DecalMaterials;                                           // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDecalComponent*>                     Decals;                                                   // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void BndEvt__ParticleComponent_K2Node_ComponentBoundEvent_113_ParticleCollisionSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName);
	void ExecuteUbergraph_Bend_BulletImpact_Assault(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

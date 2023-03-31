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

// BlueprintGeneratedClass Bend_BulletProj_Flare.Bend_BulletProj_Flare_C
// 0x0030 (0x2288 - 0x2258)
class ABend_BulletProj_Flare_C : public ABend_ThrownProj_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendVoxelLightComponent*                    FlareVoxelLight;                                          // 0x2260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        FlarePointLight;                                          // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FlareFX;                                                  // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FlareSound;                                               // 0x2278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FakeFlareRef;                                             // 0x2280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_BulletProj_Flare.Bend_BulletProj_Flare_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_558_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnProjectileStopCompleted();
	void ForceExplodeManual(class AController** Instigator);
	void ExecuteUbergraph_Bend_BulletProj_Flare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass Bend_RocketProj_RPG.Bend_RocketProj_RPG_C
// 0x0018 (0x21F8 - 0x21E0)
class ABend_RocketProj_RPG_C : public ABendProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x21E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             wpn_panzerfaust_projectile;                               // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RocketModel;                                              // 0x21F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_RocketProj_RPG.Bend_RocketProj_RPG_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_135_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void ExecuteUbergraph_Bend_RocketProj_RPG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

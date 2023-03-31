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

// BlueprintGeneratedClass Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C
// 0x0020 (0x2200 - 0x21E0)
class ABend_BulletProj_AirTaser_C : public ABendProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x21E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCableComponent*                             CableLeft;                                                // 0x21F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCableComponent*                             CableRight;                                               // 0x21F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_BulletProj_AirTaser.Bend_BulletProj_AirTaser_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_1469_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Bend_BulletProj_AirTaser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

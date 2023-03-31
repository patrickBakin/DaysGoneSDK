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

// BlueprintGeneratedClass Bend_BulletProj_Rock.Bend_BulletProj_Rock_C
// 0x0010 (0x2268 - 0x2258)
class ABend_BulletProj_Rock_C : public ABend_ThrownProj_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMapLocationComponent*                   MiniMapLocation;                                          // 0x2260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_BulletProj_Rock.Bend_BulletProj_Rock_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__CollisionComp_K2Node_ComponentBoundEvent_1002_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Bend_BulletProj_Rock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

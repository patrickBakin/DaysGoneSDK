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

// BlueprintGeneratedClass Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C
// 0x0008 (0x2AA8 - 0x2AA0)
class ABend_WpnMelee_NoMesh_Base_C : public ABendWeaponMeleeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnMelee_NoMesh_Base.Bend_WpnMelee_NoMesh_Base_C");
		return ptr;
	}


	void DisplayDebugInfo(const struct FHitResult& Hit);
	void VerifyOverlap(class AActor* Other_Actor, bool* ValidHit);
	void UserConstructionScript();
	void BndEvt__MeleeCollisionComp_K2Node_ComponentBoundEvent_248_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnWeaponArmed();
	void OnWeaponDisarmed();
	void ReceiveBeginPlay();
	void OnDebuggingActive();
	void ExecuteUbergraph_Bend_WpnMelee_NoMesh_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

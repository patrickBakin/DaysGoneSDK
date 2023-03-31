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

// BlueprintGeneratedClass Bend_WpnAirTaser.Bend_WpnAirTaser_C
// 0x000F (0x2B80 - 0x2B71)
class ABend_WpnAirTaser_C : public ABend_Wpn_Pistol_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2B71(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnAirTaser.Bend_WpnAirTaser_C");
		return ptr;
	}


	void IsFiring(class ABendWeapon_Projectile** Gun, bool* IsFiring);
	void UserConstructionScript();
	void OnClipLoaded(int* MaterialIndex);
	void OnDrawStarted();
	void OnHolsterFinished();
	void OnReloadFinished();
	void OnShellLoaded();
	void OnThrowWeapon();
	void OnOutOfAmmo();
	void OnFireOnEmpty();
	void OnReloadStarted();
	void OnFired();
	void ExecuteUbergraph_Bend_WpnAirTaser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

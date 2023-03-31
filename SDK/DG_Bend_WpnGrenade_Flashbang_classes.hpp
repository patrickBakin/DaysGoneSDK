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

// BlueprintGeneratedClass Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C
// 0x0014 (0x2AE8 - 0x2AD4)
class ABend_WpnGrenade_Flashbang_C : public ABend_WpnGrenade_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundCue*                                   PinPullSound;                                             // 0x2AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnGrenade_Flashbang.Bend_WpnGrenade_Flashbang_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnThrowWeapon();
	void OnWeaponPinRemoved();
	void ExecuteUbergraph_Bend_WpnGrenade_Flashbang(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

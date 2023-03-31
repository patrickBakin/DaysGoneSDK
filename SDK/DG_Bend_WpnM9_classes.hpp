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

// BlueprintGeneratedClass Bend_WpnM9.Bend_WpnM9_C
// 0x0000 (0x2B71 - 0x2B71)
class ABend_WpnM9_C : public ABend_Wpn_Pistol_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnM9.Bend_WpnM9_C");
		return ptr;
	}


	void IsFiring(class ABendWeapon_Projectile** Gun, bool* IsFiring);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass Bend_Wpn_Sig226.Bend_Wpn_Sig226_C
// 0x0007 (0x2B78 - 0x2B71)
class ABend_Wpn_Sig226_C : public ABend_Wpn_Pistol_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x2B71(0x0003) MISSED OFFSET
	int                                                magazineIndex;                                            // 0x2B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_Wpn_Sig226.Bend_Wpn_Sig226_C");
		return ptr;
	}


	void IsFiring(class ABendWeapon_Projectile** Gun, bool* IsFiring);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

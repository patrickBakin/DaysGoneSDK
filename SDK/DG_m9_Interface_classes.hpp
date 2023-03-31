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

// BlueprintGeneratedClass m9_Interface.m9_Interface_C
// 0x0000 (0x0028 - 0x0028)
class Um9_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass m9_Interface.m9_Interface_C");
		return ptr;
	}


	void IsFiring(class ABendWeapon_Projectile* Gun, bool* IsFiring);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

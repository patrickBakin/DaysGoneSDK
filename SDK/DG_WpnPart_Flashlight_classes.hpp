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

// BlueprintGeneratedClass WpnPart_Flashlight.WpnPart_Flashlight_C
// 0x0000 (0x0CA8 - 0x0CA8)
class AWpnPart_Flashlight_C : public ABendWeaponPart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WpnPart_Flashlight.WpnPart_Flashlight_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass INTERFACE_Menu3D.INTERFACE_Menu3D_C
// 0x0000 (0x0028 - 0x0028)
class UINTERFACE_Menu3D_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INTERFACE_Menu3D.INTERFACE_Menu3D_C");
		return ptr;
	}


	void GetStorylinesMenu(class UUI_Storylines_Menu_C** StorylinesMenu);
	void DisplayMenu_For3D(TEnumAsByte<EMenuTypes> MenuTypes, bool NoAnimation, bool* Found);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

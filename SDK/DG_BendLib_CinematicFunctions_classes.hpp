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

// BlueprintGeneratedClass BendLib_CinematicFunctions.BendLib_CinematicFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_CinematicFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_CinematicFunctions.BendLib_CinematicFunctions_C");
		return ptr;
	}


	void STATIC_CinematicMode(bool CinematicActive, bool Affects_HUD, TEnumAsByte<ENUM_CinematicHidePawns> HideActors, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass INTERFACE_GasCan.INTERFACE_GasCan_C
// 0x0000 (0x0028 - 0x0028)
class UINTERFACE_GasCan_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INTERFACE_GasCan.INTERFACE_GasCan_C");
		return ptr;
	}


	void I_DisplayFuelInteract(bool DisplayInteract, class AActor* ActorToFuel, const struct FTransform& ObjectAnimAnchorRef, const struct FTransform& WidgetTransform, bool* NeedsRefilling);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BTDec_Buddy_HolsterWeaponOutOfCombat.BTDec_Buddy_HolsterWeaponOutOfCombat_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTDec_Buddy_HolsterWeaponOutOfCombat_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDec_Buddy_HolsterWeaponOutOfCombat.BTDec_Buddy_HolsterWeaponOutOfCombat_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

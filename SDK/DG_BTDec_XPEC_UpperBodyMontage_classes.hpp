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

// BlueprintGeneratedClass BTDec_XPEC_UpperBodyMontage.BTDec_XPEC_UpperBodyMontage_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTDec_XPEC_UpperBodyMontage_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDec_XPEC_UpperBodyMontage.BTDec_XPEC_UpperBodyMontage_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

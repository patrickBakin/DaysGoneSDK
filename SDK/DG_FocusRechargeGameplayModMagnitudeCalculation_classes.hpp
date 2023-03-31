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

// BlueprintGeneratedClass FocusRechargeGameplayModMagnitudeCalculation.FocusRechargeGameplayModMagnitudeCalculation_C
// 0x0000 (0x0038 - 0x0038)
class UFocusRechargeGameplayModMagnitudeCalculation_C : public UGameplayModMagnitudeCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FocusRechargeGameplayModMagnitudeCalculation.FocusRechargeGameplayModMagnitudeCalculation_C");
		return ptr;
	}


	float CalculateBaseMagnitude(struct FGameplayEffectSpec* Spec);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

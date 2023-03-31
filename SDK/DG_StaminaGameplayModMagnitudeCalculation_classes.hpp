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

// BlueprintGeneratedClass StaminaGameplayModMagnitudeCalculation.StaminaGameplayModMagnitudeCalculation_C
// 0x0000 (0x0038 - 0x0038)
class UStaminaGameplayModMagnitudeCalculation_C : public UGameplayModMagnitudeCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StaminaGameplayModMagnitudeCalculation.StaminaGameplayModMagnitudeCalculation_C");
		return ptr;
	}


	float CalculateBaseMagnitude(struct FGameplayEffectSpec* Spec);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

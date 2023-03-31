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

// BlueprintGeneratedClass FocusGameplayModMagnitudeCalculation.FocusGameplayModMagnitudeCalculation_C
// 0x0008 (0x0040 - 0x0038)
class UFocusGameplayModMagnitudeCalculation_C : public UGameplayModMagnitudeCalculation
{
public:
	struct FGameplayTag                                IgnoreActiveFocusTag;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FocusGameplayModMagnitudeCalculation.FocusGameplayModMagnitudeCalculation_C");
		return ptr;
	}


	float CalculateBaseMagnitude(struct FGameplayEffectSpec* Spec);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

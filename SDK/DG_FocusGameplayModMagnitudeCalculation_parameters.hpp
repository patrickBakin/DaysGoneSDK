#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FocusGameplayModMagnitudeCalculation.FocusGameplayModMagnitudeCalculation_C.CalculateBaseMagnitude
struct UFocusGameplayModMagnitudeCalculation_C_CalculateBaseMagnitude_Params
{
	struct FGameplayEffectSpec*                        Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

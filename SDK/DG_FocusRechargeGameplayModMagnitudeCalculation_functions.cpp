// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FocusRechargeGameplayModMagnitudeCalculation.FocusRechargeGameplayModMagnitudeCalculation_C.CalculateBaseMagnitude
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec*    Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFocusRechargeGameplayModMagnitudeCalculation_C::CalculateBaseMagnitude(struct FGameplayEffectSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function FocusRechargeGameplayModMagnitudeCalculation.FocusRechargeGameplayModMagnitudeCalculation_C.CalculateBaseMagnitude");

	UFocusRechargeGameplayModMagnitudeCalculation_C_CalculateBaseMagnitude_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

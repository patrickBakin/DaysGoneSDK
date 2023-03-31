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

// Function ChallengeSelectIndicator.ChallengeSelectIndicator_C.GetEarnedAwardText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ChallengeTag                   (Parm)
// struct FText                   ShopPointText                  (Parm, OutParm)
// struct FText                   ReputationText                 (Parm, OutParm)

void UChallengeSelectIndicator_C::GetEarnedAwardText(const struct FGameplayTag& ChallengeTag, struct FText* ShopPointText, struct FText* ReputationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSelectIndicator.ChallengeSelectIndicator_C.GetEarnedAwardText");

	UChallengeSelectIndicator_C_GetEarnedAwardText_Params params;
	params.ChallengeTag = ChallengeTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShopPointText != nullptr)
		*ShopPointText = params.ShopPointText;
	if (ReputationText != nullptr)
		*ReputationText = params.ReputationText;
}


// Function ChallengeSelectIndicator.ChallengeSelectIndicator_C.SetChallenge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (Parm)

void UChallengeSelectIndicator_C::SetChallenge(const struct FGameplayTag& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSelectIndicator.ChallengeSelectIndicator_C.SetChallenge");

	UChallengeSelectIndicator_C_SetChallenge_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

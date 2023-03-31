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

// Function ChallengeIndicator.ChallengeIndicator_C.SetChallenge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Challenge_Tag                  (Parm)

void UChallengeIndicator_C::SetChallenge(const struct FGameplayTag& Challenge_Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeIndicator.ChallengeIndicator_C.SetChallenge");

	UChallengeIndicator_C_SetChallenge_Params params;
	params.Challenge_Tag = Challenge_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

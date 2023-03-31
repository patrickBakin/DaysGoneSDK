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

// Function ChallengeLoadoutIndicator.ChallengeLoadoutIndicator_C.SetChallenge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (Parm)

void UChallengeLoadoutIndicator_C::SetChallenge(const struct FGameplayTag& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeLoadoutIndicator.ChallengeLoadoutIndicator_C.SetChallenge");

	UChallengeLoadoutIndicator_C_SetChallenge_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

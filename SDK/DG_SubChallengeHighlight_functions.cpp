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

// Function SubChallengeHighlight.SubChallengeHighlight_C.SetChallenge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (Parm)
// TEnumAsByte<EDLCChallengeType> ChallengeType                  (Parm, ZeroConstructor, IsPlainOldData)

void USubChallengeHighlight_C::SetChallenge(const struct FGameplayTag& Key, TEnumAsByte<EDLCChallengeType> ChallengeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubChallengeHighlight.SubChallengeHighlight_C.SetChallenge");

	USubChallengeHighlight_C_SetChallenge_Params params;
	params.Key = Key;
	params.ChallengeType = ChallengeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

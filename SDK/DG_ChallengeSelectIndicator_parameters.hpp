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

// Function ChallengeSelectIndicator.ChallengeSelectIndicator_C.GetEarnedAwardText
struct UChallengeSelectIndicator_C_GetEarnedAwardText_Params
{
	struct FGameplayTag                                ChallengeTag;                                             // (Parm)
	struct FText                                       ShopPointText;                                            // (Parm, OutParm)
	struct FText                                       ReputationText;                                           // (Parm, OutParm)
};

// Function ChallengeSelectIndicator.ChallengeSelectIndicator_C.SetChallenge
struct UChallengeSelectIndicator_C_SetChallenge_Params
{
	struct FGameplayTag                                Key;                                                      // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

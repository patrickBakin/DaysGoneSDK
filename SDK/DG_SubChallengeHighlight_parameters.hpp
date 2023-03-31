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

// Function SubChallengeHighlight.SubChallengeHighlight_C.SetChallenge
struct USubChallengeHighlight_C_SetChallenge_Params
{
	struct FGameplayTag                                Key;                                                      // (Parm)
	TEnumAsByte<EDLCChallengeType>                     ChallengeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

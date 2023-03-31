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

// Function AltScore.AltScore_C.SetAltScore
struct UAltScore_C_SetAltScore_Params
{
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

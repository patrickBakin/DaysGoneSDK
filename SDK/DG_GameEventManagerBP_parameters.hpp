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

// Function GameEventManagerBP.GameEventManagerBP_C.OnGameEvent
struct UGameEventManagerBP_C_OnGameEvent_Params
{
	struct FBendGameEventBase*                         Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

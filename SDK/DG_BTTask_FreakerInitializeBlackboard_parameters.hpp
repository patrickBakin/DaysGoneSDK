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

// Function BTTask_FreakerInitializeBlackboard.BTTask_FreakerInitializeBlackboard_C.ReceiveExecute
struct UBTTask_FreakerInitializeBlackboard_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerInitializeBlackboard.BTTask_FreakerInitializeBlackboard_C.ExecuteUbergraph_BTTask_FreakerInitializeBlackboard
struct UBTTask_FreakerInitializeBlackboard_C_ExecuteUbergraph_BTTask_FreakerInitializeBlackboard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

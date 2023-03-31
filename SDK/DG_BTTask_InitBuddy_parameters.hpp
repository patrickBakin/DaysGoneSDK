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

// Function BTTask_InitBuddy.BTTask_InitBuddy_C.ReceiveExecute
struct UBTTask_InitBuddy_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_InitBuddy.BTTask_InitBuddy_C.ExecuteUbergraph_BTTask_InitBuddy
struct UBTTask_InitBuddy_C_ExecuteUbergraph_BTTask_InitBuddy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

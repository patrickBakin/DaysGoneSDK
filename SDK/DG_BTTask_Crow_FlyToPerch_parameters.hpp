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

// Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.ReceiveExecuteAI
struct UBTTask_Crow_FlyToPerch_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.OnMoveToPerchComplete
struct UBTTask_Crow_FlyToPerch_C_OnMoveToPerchComplete_Params
{
};

// Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.ExecuteUbergraph_BTTask_Crow_FlyToPerch
struct UBTTask_Crow_FlyToPerch_C_ExecuteUbergraph_BTTask_Crow_FlyToPerch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

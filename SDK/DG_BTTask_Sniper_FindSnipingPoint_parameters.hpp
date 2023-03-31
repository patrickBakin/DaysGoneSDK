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

// Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ReceiveExecuteAI
struct UBTTask_Sniper_FindSnipingPoint_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.OnEQSQueryFinished
struct UBTTask_Sniper_FindSnipingPoint_C_OnEQSQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ReceiveAbortAI
struct UBTTask_Sniper_FindSnipingPoint_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ExecuteUbergraph_BTTask_Sniper_FindSnipingPoint
struct UBTTask_Sniper_FindSnipingPoint_C_ExecuteUbergraph_BTTask_Sniper_FindSnipingPoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

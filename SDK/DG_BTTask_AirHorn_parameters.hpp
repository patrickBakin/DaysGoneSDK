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

// Function BTTask_AirHorn.BTTask_AirHorn_C.ReceiveExecuteAI
struct UBTTask_AirHorn_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_AirHorn.BTTask_AirHorn_C.ActionComplete
struct UBTTask_AirHorn_C_ActionComplete_Params
{
};

// Function BTTask_AirHorn.BTTask_AirHorn_C.ActionFail
struct UBTTask_AirHorn_C_ActionFail_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_AirHorn.BTTask_AirHorn_C.ExecuteUbergraph_BTTask_AirHorn
struct UBTTask_AirHorn_C_ExecuteUbergraph_BTTask_AirHorn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

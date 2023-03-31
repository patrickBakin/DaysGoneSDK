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

// Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ReceiveExecuteAI
struct UBTTask_Animal_AttemptWarningAlert_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.OnAlertEnded
struct UBTTask_Animal_AttemptWarningAlert_C_OnAlertEnded_Params
{
};

// Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ReceiveAbort
struct UBTTask_Animal_AttemptWarningAlert_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ExecuteUbergraph_BTTask_Animal_AttemptWarningAlert
struct UBTTask_Animal_AttemptWarningAlert_C_ExecuteUbergraph_BTTask_Animal_AttemptWarningAlert_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

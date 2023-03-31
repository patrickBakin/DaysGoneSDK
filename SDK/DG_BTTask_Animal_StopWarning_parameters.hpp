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

// Function BTTask_Animal_StopWarning.BTTask_Animal_StopWarning_C.ReceiveExecuteAI
struct UBTTask_Animal_StopWarning_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Animal_StopWarning.BTTask_Animal_StopWarning_C.ExecuteUbergraph_BTTask_Animal_StopWarning
struct UBTTask_Animal_StopWarning_C_ExecuteUbergraph_BTTask_Animal_StopWarning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

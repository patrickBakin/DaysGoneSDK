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

// Function BTTask_VariableWait.BTTask_VariableWait_C.ReceiveExecute
struct UBTTask_VariableWait_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_VariableWait.BTTask_VariableWait_C.Wait Over
struct UBTTask_VariableWait_C_Wait_Over_Params
{
};

// Function BTTask_VariableWait.BTTask_VariableWait_C.ExecuteUbergraph_BTTask_VariableWait
struct UBTTask_VariableWait_C_ExecuteUbergraph_BTTask_VariableWait_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

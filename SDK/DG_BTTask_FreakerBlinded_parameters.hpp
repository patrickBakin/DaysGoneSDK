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

// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ReceiveExecute
struct UBTTask_FreakerBlinded_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.PerformActionCompleteDelegate__DelegateSignature_Event
struct UBTTask_FreakerBlinded_C_PerformActionCompleteDelegate__DelegateSignature_Event_Params
{
};

// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.PerformActionFailedDelegate__DelegateSignature_Event
struct UBTTask_FreakerBlinded_C_PerformActionFailedDelegate__DelegateSignature_Event_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ReceiveAbort
struct UBTTask_FreakerBlinded_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.OnTimedOut
struct UBTTask_FreakerBlinded_C_OnTimedOut_Params
{
};

// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ExecuteUbergraph_BTTask_FreakerBlinded
struct UBTTask_FreakerBlinded_C_ExecuteUbergraph_BTTask_FreakerBlinded_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

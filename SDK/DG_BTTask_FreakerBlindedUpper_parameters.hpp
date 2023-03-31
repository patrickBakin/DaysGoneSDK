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

// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ReceiveExecute
struct UBTTask_FreakerBlindedUpper_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.PerformActionCompleteDelegate__DelegateSignature_Event
struct UBTTask_FreakerBlindedUpper_C_PerformActionCompleteDelegate__DelegateSignature_Event_Params
{
};

// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.PerformActionFailedDelegate__DelegateSignature_Event
struct UBTTask_FreakerBlindedUpper_C_PerformActionFailedDelegate__DelegateSignature_Event_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ReceiveAbort
struct UBTTask_FreakerBlindedUpper_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ExecuteUbergraph_BTTask_FreakerBlindedUpper
struct UBTTask_FreakerBlindedUpper_C_ExecuteUbergraph_BTTask_FreakerBlindedUpper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

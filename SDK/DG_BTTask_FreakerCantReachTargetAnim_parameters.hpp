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

// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ReceiveExecute
struct UBTTask_FreakerCantReachTargetAnim_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.PerformActionCompleteDelegate__DelegateSignature_Event
struct UBTTask_FreakerCantReachTargetAnim_C_PerformActionCompleteDelegate__DelegateSignature_Event_Params
{
};

// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.PerformActionFailedDelegate__DelegateSignature_Event
struct UBTTask_FreakerCantReachTargetAnim_C_PerformActionFailedDelegate__DelegateSignature_Event_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ReceiveAbort
struct UBTTask_FreakerCantReachTargetAnim_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ExecuteUbergraph_BTTask_FreakerCantReachTargetAnim
struct UBTTask_FreakerCantReachTargetAnim_C_ExecuteUbergraph_BTTask_FreakerCantReachTargetAnim_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

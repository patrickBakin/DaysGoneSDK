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

// Function GenericPOI.GenericPOI_C.UserConstructionScript
struct AGenericPOI_C_UserConstructionScript_Params
{
};

// Function GenericPOI.GenericPOI_C.OnPathComplete
struct AGenericPOI_C_OnPathComplete_Params
{
	TEnumAsByte<EPathFollowingResult>*                 Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOI.GenericPOI_C.PerformActionFailedDelegate
struct AGenericPOI_C_PerformActionFailedDelegate_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOI.GenericPOI_C.PerformActionCompleteDelegate
struct AGenericPOI_C_PerformActionCompleteDelegate_Params
{
};

// Function GenericPOI.GenericPOI_C.ReceiveBeginPlay
struct AGenericPOI_C_ReceiveBeginPlay_Params
{
};

// Function GenericPOI.GenericPOI_C.ExecuteUbergraph_GenericPOI
struct AGenericPOI_C_ExecuteUbergraph_GenericPOI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

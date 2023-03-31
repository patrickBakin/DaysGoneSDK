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

// Function BTTask_PathNavagation.BTTask_PathNavagation_C.ReceiveExecute
struct UBTTask_PathNavagation_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_PathNavagation.BTTask_PathNavagation_C.Waypoint Reached
struct UBTTask_PathNavagation_C_Waypoint_Reached_Params
{
	class ABendAIWaypoint*                             Waypoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SequenceFinished;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_PathNavagation.BTTask_PathNavagation_C.Leave POI
struct UBTTask_PathNavagation_C_Leave_POI_Params
{
	class ABendPOI*                                    CompletedPOI;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendAIController*                           User;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_PathNavagation.BTTask_PathNavagation_C.ReceiveAbort
struct UBTTask_PathNavagation_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_PathNavagation.BTTask_PathNavagation_C.ExecuteUbergraph_BTTask_PathNavagation
struct UBTTask_PathNavagation_C_ExecuteUbergraph_BTTask_PathNavagation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

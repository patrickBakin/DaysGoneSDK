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

// Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.ReceiveExecuteAI
struct UBTTask_Crow_FlyToLocation_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.OnMoveToLocationComplete
struct UBTTask_Crow_FlyToLocation_C_OnMoveToLocationComplete_Params
{
};

// Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.OnFlightTimeExpired
struct UBTTask_Crow_FlyToLocation_C_OnFlightTimeExpired_Params
{
};

// Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.ExecuteUbergraph_BTTask_Crow_FlyToLocation
struct UBTTask_Crow_FlyToLocation_C_ExecuteUbergraph_BTTask_Crow_FlyToLocation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

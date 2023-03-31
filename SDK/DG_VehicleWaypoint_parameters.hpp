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

// Function VehicleWaypoint.VehicleWaypoint_C.UserConstructionScript
struct AVehicleWaypoint_C_UserConstructionScript_Params
{
};

// Function VehicleWaypoint.VehicleWaypoint_C.OnReachedEndWaypoint
struct AVehicleWaypoint_C_OnReachedEndWaypoint_Params
{
	class AVehiclePawn**                               VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleWaypoint.VehicleWaypoint_C.OnReachedWaypoint
struct AVehicleWaypoint_C_OnReachedWaypoint_Params
{
	class AVehiclePawn**                               VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isEndWaypoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleWaypoint.VehicleWaypoint_C.ExecuteUbergraph_VehicleWaypoint
struct AVehicleWaypoint_C_ExecuteUbergraph_VehicleWaypoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleWaypoint.VehicleWaypoint_C.ReachedWaypoint__DelegateSignature
struct AVehicleWaypoint_C_ReachedWaypoint__DelegateSignature_Params
{
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isEndWaypoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleWaypoint.VehicleWaypoint_C.ReachedEndWaypoint__DelegateSignature
struct AVehicleWaypoint_C_ReachedEndWaypoint__DelegateSignature_Params
{
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

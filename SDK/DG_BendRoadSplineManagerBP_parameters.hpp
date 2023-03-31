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

// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.UserConstructionScript
struct ABendRoadSplineManagerBP_C_UserConstructionScript_Params
{
};

// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ReceivePostSaveGameLoaded
struct ABendRoadSplineManagerBP_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ReceiveBeginPlay
struct ABendRoadSplineManagerBP_C_ReceiveBeginPlay_Params
{
};

// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.OnMissionComplete_MM_Event_1
struct ABendRoadSplineManagerBP_C_OnMissionComplete_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.OnMissionBegin_MM_Event_1
struct ABendRoadSplineManagerBP_C_OnMissionBegin_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.UpdateRoadSplineSegmentsManually
struct ABendRoadSplineManagerBP_C_UpdateRoadSplineSegmentsManually_Params
{
};

// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ExecuteUbergraph_BendRoadSplineManagerBP
struct ABendRoadSplineManagerBP_C_ExecuteUbergraph_BendRoadSplineManagerBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

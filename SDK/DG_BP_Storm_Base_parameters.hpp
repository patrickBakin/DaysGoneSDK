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

// Function BP_Storm_Base.BP_Storm_Base_C.CheckAllowedStormEvents
struct ABP_Storm_Base_C_CheckAllowedStormEvents_Params
{
	bool                                               EventsAllowed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Base.BP_Storm_Base_C.InitializeStorm
struct ABP_Storm_Base_C_InitializeStorm_Params
{
};

// Function BP_Storm_Base.BP_Storm_Base_C.DebugPrintsBaseStorm
struct ABP_Storm_Base_C_DebugPrintsBaseStorm_Params
{
};

// Function BP_Storm_Base.BP_Storm_Base_C.StormController
struct ABP_Storm_Base_C_StormController_Params
{
};

// Function BP_Storm_Base.BP_Storm_Base_C.StormTimer
struct ABP_Storm_Base_C_StormTimer_Params
{
	float                                              Storm_Timer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Storm_Timer_Delta;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Base.BP_Storm_Base_C.UserConstructionScript
struct ABP_Storm_Base_C_UserConstructionScript_Params
{
};

// Function BP_Storm_Base.BP_Storm_Base_C.ReceiveTick
struct ABP_Storm_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Base.BP_Storm_Base_C.Editor Tick
struct ABP_Storm_Base_C_Editor_Tick_Params
{
};

// Function BP_Storm_Base.BP_Storm_Base_C.End Storm
struct ABP_Storm_Base_C_End_Storm_Params
{
};

// Function BP_Storm_Base.BP_Storm_Base_C.Reset Storm
struct ABP_Storm_Base_C_Reset_Storm_Params
{
};

// Function BP_Storm_Base.BP_Storm_Base_C.ReceiveBeginPlay
struct ABP_Storm_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Storm_Base.BP_Storm_Base_C.ExecuteUbergraph_BP_Storm_Base
struct ABP_Storm_Base_C_ExecuteUbergraph_BP_Storm_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

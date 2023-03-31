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

// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.Debug Prints
struct ABP_Storm_Lightning_StrikeTarget_Actor_C_Debug_Prints_Params
{
	float                                              Text_Time_On_Screen;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.UserConstructionScript
struct ABP_Storm_Lightning_StrikeTarget_Actor_C_UserConstructionScript_Params
{
};

// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.Editor Tick
struct ABP_Storm_Lightning_StrikeTarget_Actor_C_Editor_Tick_Params
{
};

// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.EventStrikeMe
struct ABP_Storm_Lightning_StrikeTarget_Actor_C_EventStrikeMe_Params
{
};

// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.ReceiveTick
struct ABP_Storm_Lightning_StrikeTarget_Actor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C.ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Actor
struct ABP_Storm_Lightning_StrikeTarget_Actor_C_ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Actor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

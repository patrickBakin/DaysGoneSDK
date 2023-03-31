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

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.StateFrameDelay
struct ABP_Storm_Lightning_Effect_C_StateFrameDelay_Params
{
	bool                                               AllowTick;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.UserConstructionScript
struct ABP_Storm_Lightning_Effect_C_UserConstructionScript_Params
{
};

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveTick
struct ABP_Storm_Lightning_Effect_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.Editor Tick
struct ABP_Storm_Lightning_Effect_C_Editor_Tick_Params
{
};

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveDestroyed
struct ABP_Storm_Lightning_Effect_C_ReceiveDestroyed_Params
{
};

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ReceiveBeginPlay
struct ABP_Storm_Lightning_Effect_C_ReceiveBeginPlay_Params
{
};

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.End Lightning
struct ABP_Storm_Lightning_Effect_C_End_Lightning_Params
{
};

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.Start Lightning
struct ABP_Storm_Lightning_Effect_C_Start_Lightning_Params
{
};

// Function BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C.ExecuteUbergraph_BP_Storm_Lightning_Effect
struct ABP_Storm_Lightning_Effect_C_ExecuteUbergraph_BP_Storm_Lightning_Effect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

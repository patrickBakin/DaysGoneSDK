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

// Function BP_Storm_Lightning.BP_Storm_Lightning_C.CloudController
struct ABP_Storm_Lightning_C_CloudController_Params
{
};

// Function BP_Storm_Lightning.BP_Storm_Lightning_C.UserConstructionScript
struct ABP_Storm_Lightning_C_UserConstructionScript_Params
{
};

// Function BP_Storm_Lightning.BP_Storm_Lightning_C.ReceiveTick
struct ABP_Storm_Lightning_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Lightning.BP_Storm_Lightning_C.Editor Tick
struct ABP_Storm_Lightning_C_Editor_Tick_Params
{
};

// Function BP_Storm_Lightning.BP_Storm_Lightning_C.End Storm
struct ABP_Storm_Lightning_C_End_Storm_Params
{
};

// Function BP_Storm_Lightning.BP_Storm_Lightning_C.ExecuteUbergraph_BP_Storm_Lightning
struct ABP_Storm_Lightning_C_ExecuteUbergraph_BP_Storm_Lightning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

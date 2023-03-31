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

// Function bp_env_common.bp_env_common_C.UserConstructionScript
struct Abp_env_common_C_UserConstructionScript_Params
{
};

// Function bp_env_common.bp_env_common_C.ReceiveTick
struct Abp_env_common_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_env_common.bp_env_common_C.ExecuteUbergraph_bp_env_common
struct Abp_env_common_C_ExecuteUbergraph_bp_env_common_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

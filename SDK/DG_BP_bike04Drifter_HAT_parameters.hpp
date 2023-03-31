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

// Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.WhatBikeIsThis
struct ABP_bike04Drifter_HAT_C_WhatBikeIsThis_Params
{
	TEnumAsByte<EAB_bike_size>                         VehBIkeType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.UserConstructionScript
struct ABP_bike04Drifter_HAT_C_UserConstructionScript_Params
{
};

// Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.ExecuteUbergraph_BP_bike04Drifter_HAT
struct ABP_bike04Drifter_HAT_C_ExecuteUbergraph_BP_bike04Drifter_HAT_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

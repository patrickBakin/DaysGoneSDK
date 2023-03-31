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

// Function Interface_Bikes.Interface_Bikes_C.WhatBikeIsThis
struct UInterface_Bikes_C_WhatBikeIsThis_Params
{
	TEnumAsByte<EAB_bike_size>                         VehBIkeType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnTick
struct UAirTaserStatusEffect_C_OnTick_Params
{
	bool                                               StopEffect;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnStart
struct UAirTaserStatusEffect_C_OnStart_Params
{
};

// Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnEnd
struct UAirTaserStatusEffect_C_OnEnd_Params
{
};

// Function AirTaserStatusEffect.AirTaserStatusEffect_C.ExecuteUbergraph_AirTaserStatusEffect
struct UAirTaserStatusEffect_C_ExecuteUbergraph_AirTaserStatusEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

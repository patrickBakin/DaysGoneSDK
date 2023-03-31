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

// Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnTick
struct UFireBaseStatusEffect_C_OnTick_Params
{
	bool                                               StopEffect;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnStart
struct UFireBaseStatusEffect_C_OnStart_Params
{
};

// Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnEnd
struct UFireBaseStatusEffect_C_OnEnd_Params
{
};

// Function FireBaseStatusEffect.FireBaseStatusEffect_C.SpawnFirstEffect
struct UFireBaseStatusEffect_C_SpawnFirstEffect_Params
{
};

// Function FireBaseStatusEffect.FireBaseStatusEffect_C.SpawnSecondEffect
struct UFireBaseStatusEffect_C_SpawnSecondEffect_Params
{
};

// Function FireBaseStatusEffect.FireBaseStatusEffect_C.KillFireParticles
struct UFireBaseStatusEffect_C_KillFireParticles_Params
{
};

// Function FireBaseStatusEffect.FireBaseStatusEffect_C.ExecuteUbergraph_FireBaseStatusEffect
struct UFireBaseStatusEffect_C_ExecuteUbergraph_FireBaseStatusEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

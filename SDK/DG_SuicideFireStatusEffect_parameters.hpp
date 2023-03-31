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

// Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnTick
struct USuicideFireStatusEffect_C_OnTick_Params
{
	bool                                               StopEffect;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnEnd
struct USuicideFireStatusEffect_C_OnEnd_Params
{
};

// Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnStart
struct USuicideFireStatusEffect_C_OnStart_Params
{
};

// Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.ExecuteUbergraph_SuicideFireStatusEffect
struct USuicideFireStatusEffect_C_ExecuteUbergraph_SuicideFireStatusEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

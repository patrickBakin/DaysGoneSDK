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

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ResetLightningEffects
struct ABP_Storm_Lightning_NoClouds_C_ResetLightningEffects_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsDespawner
struct ABP_Storm_Lightning_NoClouds_C_LightningEffectsDespawner_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsManager
struct ABP_Storm_Lightning_NoClouds_C_LightningEffectsManager_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsSpawner
struct ABP_Storm_Lightning_NoClouds_C_LightningEffectsSpawner_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.GetStrikeTarget
struct ABP_Storm_Lightning_NoClouds_C_GetStrikeTarget_Params
{
	class AActor*                                      StrikeTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.TargetLightningController
struct ABP_Storm_Lightning_NoClouds_C_TargetLightningController_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.AmbientLightningController
struct ABP_Storm_Lightning_NoClouds_C_AmbientLightningController_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.UserConstructionScript
struct ABP_Storm_Lightning_NoClouds_C_UserConstructionScript_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ReceiveTick
struct ABP_Storm_Lightning_NoClouds_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Editor Tick
struct ABP_Storm_Lightning_NoClouds_C_Editor_Tick_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.End Storm
struct ABP_Storm_Lightning_NoClouds_C_End_Storm_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Invoke Lightning
struct ABP_Storm_Lightning_NoClouds_C_Invoke_Lightning_Params
{
	class UBP_Storm_Lightning_StrikeTarget_Component_C* Lightning_Strike_Target;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ReceiveBeginPlay
struct ABP_Storm_Lightning_NoClouds_C_ReceiveBeginPlay_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Reset Storm
struct ABP_Storm_Lightning_NoClouds_C_Reset_Storm_Params
{
};

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ExecuteUbergraph_BP_Storm_Lightning_NoClouds
struct ABP_Storm_Lightning_NoClouds_C_ExecuteUbergraph_BP_Storm_Lightning_NoClouds_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

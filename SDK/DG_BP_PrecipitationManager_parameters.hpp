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

// Function BP_PrecipitationManager.BP_PrecipitationManager_C.UserConstructionScript
struct ABP_PrecipitationManager_C_UserConstructionScript_Params
{
};

// Function BP_PrecipitationManager.BP_PrecipitationManager_C.BndEvt__RainParticleComponent_K2Node_ComponentBoundEvent_107_ParticleBurstSignature__DelegateSignature
struct ABP_PrecipitationManager_C_BndEvt__RainParticleComponent_K2Node_ComponentBoundEvent_107_ParticleBurstSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrecipitationManager.BP_PrecipitationManager_C.PerFrameCameraUpdate
struct ABP_PrecipitationManager_C_PerFrameCameraUpdate_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDebug;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrecipitationManager.BP_PrecipitationManager_C.ExecuteUbergraph_BP_PrecipitationManager
struct ABP_PrecipitationManager_C_ExecuteUbergraph_BP_PrecipitationManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

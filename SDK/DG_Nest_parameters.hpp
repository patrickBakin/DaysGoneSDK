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

// Function Nest.Nest_C.Tutorial
struct ANest_C_Tutorial_Params
{
};

// Function Nest.Nest_C.UserConstructionScript
struct ANest_C_UserConstructionScript_Params
{
};

// Function Nest.Nest_C.OnNestDestroyed_Event_1
struct ANest_C_OnNestDestroyed_Event_1_Params
{
	struct FString                                     DestroyedNestID;                                          // (Parm, ZeroConstructor)
	class ABendNest*                                   DestroyedNest;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nest.Nest_C.ReceiveBeginPlay
struct ANest_C_ReceiveBeginPlay_Params
{
};

// Function Nest.Nest_C.BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_411_BeginOverlapSig__DelegateSignature
struct ANest_C_BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_411_BeginOverlapSig__DelegateSignature_Params
{
};

// Function Nest.Nest_C.BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_413_EndOverlapSig__DelegateSignature
struct ANest_C_BndEvt__NestSphereComponent_K2Node_ComponentBoundEvent_413_EndOverlapSig__DelegateSignature_Params
{
};

// Function Nest.Nest_C.OnBurnedSpawned_Event_1
struct ANest_C_OnBurnedSpawned_Event_1_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nest.Nest_C.OnJobUnlocked_Event_1
struct ANest_C_OnJobUnlocked_Event_1_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nest.Nest_C.ScriptEndOVerlap
struct ANest_C_ScriptEndOVerlap_Params
{
};

// Function Nest.Nest_C.ReceiveEndPlay
struct ANest_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nest.Nest_C.ReceivePreSaveGameLoaded
struct ANest_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nest.Nest_C.ExecuteUbergraph_Nest
struct ANest_C_ExecuteUbergraph_Nest_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

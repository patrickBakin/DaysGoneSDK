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

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.SetOverlapping
struct ABP_OverrideOpenWorldRespawn_Infestation_C_SetOverlapping_Params
{
	bool                                               Overlapping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.RemoveSiblingRespawnOverrideLocations
struct ABP_OverrideOpenWorldRespawn_Infestation_C_RemoveSiblingRespawnOverrideLocations_Params
{
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.UserConstructionScript
struct ABP_OverrideOpenWorldRespawn_Infestation_C_UserConstructionScript_Params
{
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceiveBeginPlay
struct ABP_OverrideOpenWorldRespawn_Infestation_C_ReceiveBeginPlay_Params
{
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnZoneCleared
struct ABP_OverrideOpenWorldRespawn_Infestation_C_OnZoneCleared_Params
{
	class ABendNestingZoneActor*                       ZoneActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceivePreSaveGameLoaded
struct ABP_OverrideOpenWorldRespawn_Infestation_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ReceivePostSaveGameLoaded
struct ABP_OverrideOpenWorldRespawn_Infestation_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnActorBeginOverlap_NestingZoneActor
struct ABP_OverrideOpenWorldRespawn_Infestation_C_OnActorBeginOverlap_NestingZoneActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnActorEndOverlap_NestingZoneActor
struct ABP_OverrideOpenWorldRespawn_Infestation_C_OnActorEndOverlap_NestingZoneActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature
struct ABP_OverrideOpenWorldRespawn_Infestation_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature
struct ABP_OverrideOpenWorldRespawn_Infestation_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature_Params
{
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.CheckActivation
struct ABP_OverrideOpenWorldRespawn_Infestation_C_CheckActivation_Params
{
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.OnNestDestroyed
struct ABP_OverrideOpenWorldRespawn_Infestation_C_OnNestDestroyed_Params
{
	struct FString                                     DestroyedNestID;                                          // (Parm, ZeroConstructor)
	class ABendNest*                                   DestroyedNest;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OverrideOpenWorldRespawn_Infestation.BP_OverrideOpenWorldRespawn_Infestation_C.ExecuteUbergraph_BP_OverrideOpenWorldRespawn_Infestation
struct ABP_OverrideOpenWorldRespawn_Infestation_C_ExecuteUbergraph_BP_OverrideOpenWorldRespawn_Infestation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

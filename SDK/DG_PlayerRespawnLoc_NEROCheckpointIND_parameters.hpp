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

// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.UserConstructionScript
struct APlayerRespawnLoc_NEROCheckpointIND_C_UserConstructionScript_Params
{
};

// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ReceiveBeginPlay
struct APlayerRespawnLoc_NEROCheckpointIND_C_ReceiveBeginPlay_Params
{
};

// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ReceivePostSaveGameLoaded
struct APlayerRespawnLoc_NEROCheckpointIND_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature
struct APlayerRespawnLoc_NEROCheckpointIND_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature_Params
{
};

// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.OnJobEnded_Event_1
struct APlayerRespawnLoc_NEROCheckpointIND_C_OnJobEnded_Event_1_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRespawnLoc_NEROCheckpointIND.PlayerRespawnLoc_NEROCheckpointIND_C.ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpointIND
struct APlayerRespawnLoc_NEROCheckpointIND_C_ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpointIND_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

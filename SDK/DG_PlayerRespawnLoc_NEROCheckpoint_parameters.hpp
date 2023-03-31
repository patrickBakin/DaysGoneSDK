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

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.UserConstructionScript
struct APlayerRespawnLoc_NEROCheckpoint_C_UserConstructionScript_Params
{
};

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceiveBeginPlay
struct APlayerRespawnLoc_NEROCheckpoint_C_ReceiveBeginPlay_Params
{
};

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.OnCheckpointCleared_Event
struct APlayerRespawnLoc_NEROCheckpoint_C_OnCheckpointCleared_Event_Params
{
	class UBendNeroCheckpointData*                     Checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceivePostSaveGameLoaded
struct APlayerRespawnLoc_NEROCheckpoint_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature
struct APlayerRespawnLoc_NEROCheckpoint_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_175_BeginOverlapSig__DelegateSignature_Params
{
};

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature
struct APlayerRespawnLoc_NEROCheckpoint_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature_Params
{
};

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ReceiveEndPlay
struct APlayerRespawnLoc_NEROCheckpoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRespawnLoc_NEROCheckpoint.PlayerRespawnLoc_NEROCheckpoint_C.ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpoint
struct APlayerRespawnLoc_NEROCheckpoint_C_ExecuteUbergraph_PlayerRespawnLoc_NEROCheckpoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

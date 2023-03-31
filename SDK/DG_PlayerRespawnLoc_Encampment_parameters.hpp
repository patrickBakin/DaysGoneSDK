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

// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.UserConstructionScript
struct APlayerRespawnLoc_Encampment_C_UserConstructionScript_Params
{
};

// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ReceiveBeginPlay
struct APlayerRespawnLoc_Encampment_C_ReceiveBeginPlay_Params
{
};

// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.OnEnteredEncampment_Event
struct APlayerRespawnLoc_Encampment_C_OnEnteredEncampment_Event_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ReceivePostSaveGameLoaded
struct APlayerRespawnLoc_Encampment_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_179_BeginOverlapSig__DelegateSignature
struct APlayerRespawnLoc_Encampment_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_179_BeginOverlapSig__DelegateSignature_Params
{
};

// Function PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C.ExecuteUbergraph_PlayerRespawnLoc_Encampment
struct APlayerRespawnLoc_Encampment_C_ExecuteUbergraph_PlayerRespawnLoc_Encampment_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

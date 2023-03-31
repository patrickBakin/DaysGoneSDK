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

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ShouldReEnableSaving
struct ABP_BlockOpenWorldSaving_C_ShouldReEnableSaving_Params
{
	bool                                               ReEnableSaving;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.UserConstructionScript
struct ABP_BlockOpenWorldSaving_C_UserConstructionScript_Params
{
};

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReceiveBeginPlay
struct ABP_BlockOpenWorldSaving_C_ReceiveBeginPlay_Params
{
};

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.PlayerEnteredSaveBlockVolume
struct ABP_BlockOpenWorldSaving_C_PlayerEnteredSaveBlockVolume_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.PlayerExitedSaveBlockVolume
struct ABP_BlockOpenWorldSaving_C_PlayerExitedSaveBlockVolume_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReceiveTick
struct ABP_BlockOpenWorldSaving_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ReEnableSaving
struct ABP_BlockOpenWorldSaving_C_ReEnableSaving_Params
{
};

// Function BP_BlockOpenWorldSaving.BP_BlockOpenWorldSaving_C.ExecuteUbergraph_BP_BlockOpenWorldSaving
struct ABP_BlockOpenWorldSaving_C_ExecuteUbergraph_BP_BlockOpenWorldSaving_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

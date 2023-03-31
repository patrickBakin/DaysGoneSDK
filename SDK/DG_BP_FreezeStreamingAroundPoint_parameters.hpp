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

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.UserConstructionScript
struct ABP_FreezeStreamingAroundPoint_C_UserConstructionScript_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.BndEvt__BendSphereChecked_K2Node_ComponentBoundEvent_663_BeginOverlapSig__DelegateSignature
struct ABP_FreezeStreamingAroundPoint_C_BndEvt__BendSphereChecked_K2Node_ComponentBoundEvent_663_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.BndEvt__BendSphereChecked_K2Node_ComponentBoundEvent_665_EndOverlapSig__DelegateSignature
struct ABP_FreezeStreamingAroundPoint_C_BndEvt__BendSphereChecked_K2Node_ComponentBoundEvent_665_EndOverlapSig__DelegateSignature_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.ReceiveBeginPlay
struct ABP_FreezeStreamingAroundPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.OnActorBeginOverlap_Event_1
struct ABP_FreezeStreamingAroundPoint_C_OnActorBeginOverlap_Event_1_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.OnActorEndOverlap_Event_1
struct ABP_FreezeStreamingAroundPoint_C_OnActorEndOverlap_Event_1_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.UpdateStreamingFrozen
struct ABP_FreezeStreamingAroundPoint_C_UpdateStreamingFrozen_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.SetUnfrozen
struct ABP_FreezeStreamingAroundPoint_C_SetUnfrozen_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.ReceiveEndPlay
struct ABP_FreezeStreamingAroundPoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.LevelStreamingUpdated
struct ABP_FreezeStreamingAroundPoint_C_LevelStreamingUpdated_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.FlashbackCinematicToggled
struct ABP_FreezeStreamingAroundPoint_C_FlashbackCinematicToggled_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.ReceivePreSaveGameLoaded
struct ABP_FreezeStreamingAroundPoint_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.OnFinishedSetSynchronousStreaming
struct ABP_FreezeStreamingAroundPoint_C_OnFinishedSetSynchronousStreaming_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.OnPostSaveGameLoaded
struct ABP_FreezeStreamingAroundPoint_C_OnPostSaveGameLoaded_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.OnAsyncLoadingFinished
struct ABP_FreezeStreamingAroundPoint_C_OnAsyncLoadingFinished_Params
{
};

// Function BP_FreezeStreamingAroundPoint.BP_FreezeStreamingAroundPoint_C.ExecuteUbergraph_BP_FreezeStreamingAroundPoint
struct ABP_FreezeStreamingAroundPoint_C_ExecuteUbergraph_BP_FreezeStreamingAroundPoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

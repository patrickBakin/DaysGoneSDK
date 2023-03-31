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

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.AreAllCompleted
struct ABP_ControlOutOfBounds_C_AreAllCompleted_Params
{
	TArray<class UBendMissionData*>                    Missions;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UJobClassInfo*>                       Jobs;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AllCompleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.UserConstructionScript
struct ABP_ControlOutOfBounds_C_UserConstructionScript_Params
{
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorBeginOverlap_Event_1
struct ABP_ControlOutOfBounds_C_OnActorBeginOverlap_Event_1_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnFadedToBlack_MM_Event_1
struct ABP_ControlOutOfBounds_C_OnFadedToBlack_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.ReceiveBeginPlay
struct ABP_ControlOutOfBounds_C_ReceiveBeginPlay_Params
{
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_269_OnFailStart__DelegateSignature
struct ABP_ControlOutOfBounds_C_BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_269_OnFailStart__DelegateSignature_Params
{
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_271_OnFailEnd__DelegateSignature
struct ABP_ControlOutOfBounds_C_BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_271_OnFailEnd__DelegateSignature_Params
{
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorBeginOverlap_Event_2
struct ABP_ControlOutOfBounds_C_OnActorBeginOverlap_Event_2_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorEndOverlap_Event_1
struct ABP_ControlOutOfBounds_C_OnActorEndOverlap_Event_1_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.ExecuteUbergraph_BP_ControlOutOfBounds
struct ABP_ControlOutOfBounds_C_ExecuteUbergraph_BP_ControlOutOfBounds_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

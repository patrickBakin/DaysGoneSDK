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

// Function BP_TraversalInteract.BP_TraversalInteract_C.TryFindItemInWorld
struct ABP_TraversalInteract_C_TryFindItemInWorld_Params
{
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.UserConstructionScript
struct ABP_TraversalInteract_C_UserConstructionScript_Params
{
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.CompleteTraversal
struct ABP_TraversalInteract_C_CompleteTraversal_Params
{
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.FailTraversal
struct ABP_TraversalInteract_C_FailTraversal_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.OnAutoNavSuccess
struct ABP_TraversalInteract_C_OnAutoNavSuccess_Params
{
	class ABendPOISlot*                                Slot;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 User;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyDone
struct ABP_TraversalInteract_C_BuddyDone_Params
{
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyAnimFailed
struct ABP_TraversalInteract_C_BuddyAnimFailed_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.OnInputSucceeded
struct ABP_TraversalInteract_C_OnInputSucceeded_Params
{
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.InitInteract
struct ABP_TraversalInteract_C_InitInteract_Params
{
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.MovePickupsFromArea
struct ABP_TraversalInteract_C_MovePickupsFromArea_Params
{
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.ExecuteUbergraph_BP_TraversalInteract
struct ABP_TraversalInteract_C_ExecuteUbergraph_BP_TraversalInteract_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyActionFail_Event__DelegateSignature
struct ABP_TraversalInteract_C_BuddyActionFail_Event__DelegateSignature_Params
{
	TEnumAsByte<EPeformActionFailedReason>             ReasonForFailure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyActionComplete_Event__DelegateSignature
struct ABP_TraversalInteract_C_BuddyActionComplete_Event__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.UserConstructionScript
struct ABP_Interact_SHSInteract_C_UserConstructionScript_Params
{
};

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.OnMissionComplete
struct ABP_Interact_SHSInteract_C_OnMissionComplete_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.ReceivePostSaveGameLoaded
struct ABP_Interact_SHSInteract_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_633_EndOverlapSig__DelegateSignature
struct ABP_Interact_SHSInteract_C_BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_633_EndOverlapSig__DelegateSignature_Params
{
};

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_25_BeginOverlapSig__DelegateSignature
struct ABP_Interact_SHSInteract_C_BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_25_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.RetryChecks
struct ABP_Interact_SHSInteract_C_RetryChecks_Params
{
};

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.InitInteract
struct ABP_Interact_SHSInteract_C_InitInteract_Params
{
};

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.ExecuteUbergraph_BP_Interact_SHSInteract
struct ABP_Interact_SHSInteract_C_ExecuteUbergraph_BP_Interact_SHSInteract_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

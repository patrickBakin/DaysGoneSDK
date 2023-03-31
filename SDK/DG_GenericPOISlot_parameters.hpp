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

// Function GenericPOISlot.GenericPOISlot_C.UserConstructionScript
struct AGenericPOISlot_C_UserConstructionScript_Params
{
};

// Function GenericPOISlot.GenericPOISlot_C.OnPathComplete
struct AGenericPOISlot_C_OnPathComplete_Params
{
	TEnumAsByte<EPathFollowingResult>*                 Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.OnBecomeAware
struct AGenericPOISlot_C_OnBecomeAware_Params
{
	TEnumAsByte<EAIAwareState>*                        prevAwareness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.OnBecomeSemiAware
struct AGenericPOISlot_C_OnBecomeSemiAware_Params
{
	TEnumAsByte<EAIAwareState>*                        prevAwareness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.OnUserLeavesSlot
struct AGenericPOISlot_C_OnUserLeavesSlot_Params
{
};

// Function GenericPOISlot.GenericPOISlot_C.OnUserTakesSlot
struct AGenericPOISlot_C_OnUserTakesSlot_Params
{
};

// Function GenericPOISlot.GenericPOISlot_C.OnEnterComplete
struct AGenericPOISlot_C_OnEnterComplete_Params
{
};

// Function GenericPOISlot.GenericPOISlot_C.OnEnterFail
struct AGenericPOISlot_C_OnEnterFail_Params
{
	TEnumAsByte<EPeformActionFailedReason>*            eReason;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.OnLoopFail
struct AGenericPOISlot_C_OnLoopFail_Params
{
	TEnumAsByte<EPeformActionFailedReason>*            eReason;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.ExecuteUbergraph_GenericPOISlot
struct AGenericPOISlot_C_ExecuteUbergraph_GenericPOISlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.On Leave POISlot__DelegateSignature
struct AGenericPOISlot_C_On_Leave_POISlot__DelegateSignature_Params
{
	class ABendAIController*                           AI_Controller;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.AtLocation__DelegateSignature
struct AGenericPOISlot_C_AtLocation__DelegateSignature_Params
{
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.AnimationFailed__DelegateSignature
struct AGenericPOISlot_C_AnimationFailed__DelegateSignature_Params
{
	class AGenericPOISlot_C*                           FromSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendActionData                             ActionData;                                               // (Parm)
	class ABendAIController*                           SlotUser;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericPOISlot.GenericPOISlot_C.AnimationComplete__DelegateSignature
struct AGenericPOISlot_C_AnimationComplete__DelegateSignature_Params
{
	class AGenericPOISlot_C*                           FromSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBendActionData                             ActionData;                                               // (Parm)
	class ABendAIController*                           SlotUser;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

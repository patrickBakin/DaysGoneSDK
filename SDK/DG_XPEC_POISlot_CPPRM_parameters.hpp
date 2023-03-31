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

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IOnPostEditChangeProperty
struct AXPEC_POISlot_CPPRM_C_IOnPostEditChangeProperty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ILookAt
struct AXPEC_POISlot_CPPRM_C_ILookAt_Params
{
	struct FXpecLookAtData*                            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableMoveToIdle
struct AXPEC_POISlot_CPPRM_C_IEnableMoveToIdle_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableFootLocking
struct AXPEC_POISlot_CPPRM_C_IEnableFootLocking_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableMoveToIdleAnchor
struct AXPEC_POISlot_CPPRM_C_IEnableMoveToIdleAnchor_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableTurnToIdleInMovement
struct AXPEC_POISlot_CPPRM_C_IEnableTurnToIdleInMovement_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ITurnInPlaceByAngle
struct AXPEC_POISlot_CPPRM_C_ITurnInPlaceByAngle_Params
{
	float*                                             fAngle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.UserConstructionScript
struct AXPEC_POISlot_CPPRM_C_UserConstructionScript_Params
{
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnUserTakesSlot
struct AXPEC_POISlot_CPPRM_C_OnUserTakesSlot_Params
{
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnUserLeavesSlot
struct AXPEC_POISlot_CPPRM_C_OnUserLeavesSlot_Params
{
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnPathComplete
struct AXPEC_POISlot_CPPRM_C_OnPathComplete_Params
{
	TEnumAsByte<EPathFollowingResult>*                 Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnBecomeSemiAware
struct AXPEC_POISlot_CPPRM_C_OnBecomeSemiAware_Params
{
	TEnumAsByte<EAIAwareState>*                        prevAwareness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnBecomeAware
struct AXPEC_POISlot_CPPRM_C_OnBecomeAware_Params
{
	TEnumAsByte<EAIAwareState>*                        prevAwareness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnRequestLeaveSlot
struct AXPEC_POISlot_CPPRM_C_OnRequestLeaveSlot_Params
{
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.CE_TickTurnInPlace
struct AXPEC_POISlot_CPPRM_C_CE_TickTurnInPlace_Params
{
};

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ExecuteUbergraph_XPEC_POISlot_CPPRM
struct AXPEC_POISlot_CPPRM_C_ExecuteUbergraph_XPEC_POISlot_CPPRM_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

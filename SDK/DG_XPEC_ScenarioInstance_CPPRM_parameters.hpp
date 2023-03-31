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

// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.IIsForceHighLOD
struct AXPEC_ScenarioInstance_CPPRM_C_IIsForceHighLOD_Params
{
	int*                                               iSN;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.UserConstructionScript
struct AXPEC_ScenarioInstance_CPPRM_C_UserConstructionScript_Params
{
};

// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.OnGetPriority
struct AXPEC_ScenarioInstance_CPPRM_C_OnGetPriority_Params
{
	float*                                             defaultPriority;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EePOIUserType>*                        userType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.OnRequestUsePOI
struct AXPEC_ScenarioInstance_CPPRM_C_OnRequestUsePOI_Params
{
	TEnumAsByte<EePOIUserType>*                        userType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPOISlot**                               closestOpenSlot;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.ExecuteUbergraph_XPEC_ScenarioInstance_CPPRM
struct AXPEC_ScenarioInstance_CPPRM_C_ExecuteUbergraph_XPEC_ScenarioInstance_CPPRM_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Interface_NPCCallout.Interface_NPCCallout_C.ActivateObjectiveCallout
struct UInterface_NPCCallout_C_ActivateObjectiveCallout_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_NPCCallout.Interface_NPCCallout_C.IsCalloutActive
struct UInterface_NPCCallout_C_IsCalloutActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_NPCCallout.Interface_NPCCallout_C.GetAwareness
struct UInterface_NPCCallout_C_GetAwareness_Params
{
	TEnumAsByte<EAIAwareState>                         Awareness;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_NPCCallout.Interface_NPCCallout_C.DeactivateCallout
struct UInterface_NPCCallout_C_DeactivateCallout_Params
{
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_NPCCallout.Interface_NPCCallout_C.ActivateCallout
struct UInterface_NPCCallout_C_ActivateCallout_Params
{
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CalloutOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

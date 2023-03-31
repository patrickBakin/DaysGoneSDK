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

// Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.IsParentFullyEngagedWithChild
struct UInterface_PairedAnimParent_C_IsParentFullyEngagedWithChild_Params
{
	bool                                               IsEngaged;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.ParentDisengageFromChild
struct UInterface_PairedAnimParent_C_ParentDisengageFromChild_Params
{
};

// Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.ParentEngageWithChild_Movement
struct UInterface_PairedAnimParent_C_ParentEngageWithChild_Movement_Params
{
	class UAnimInstance*                               Child;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendAnimationSetMovement>             ParentAnimationSet;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBendAnimationSetMovement>             ChildAnimationSet;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Interface_PairedAnimChild.Interface_PairedAnimChild_C.ChildSetAnimationSet_Movement
struct UInterface_PairedAnimChild_C_ChildSetAnimationSet_Movement_Params
{
	TEnumAsByte<EBendAnimationSetMovement>             AnimationSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimInstance*                               Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_PairedAnimChild.Interface_PairedAnimChild_C.OnChildsParentStateChanged_Movement
struct UInterface_PairedAnimChild_C_OnChildsParentStateChanged_Movement_Params
{
	TEnumAsByte<EBendPairedStateMovement>              NewParentState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

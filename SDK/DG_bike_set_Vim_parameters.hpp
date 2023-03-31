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

// Function bike_set_Vim.bike_set_Vim_C.UpdateWheel
struct Ubike_set_Vim_C_UpdateWheel_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bike_set_Vim.bike_set_Vim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_bike_set_Vim_AnimGraphNode_SequenceEvaluator_B532093E43383532EFC01FAC29555B9E
struct Ubike_set_Vim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_bike_set_Vim_AnimGraphNode_SequenceEvaluator_B532093E43383532EFC01FAC29555B9E_Params
{
};

// Function bike_set_Vim.bike_set_Vim_C.BlueprintUpdateAnimation
struct Ubike_set_Vim_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function bike_set_Vim.bike_set_Vim_C.ExecuteUbergraph_bike_set_Vim
struct Ubike_set_Vim_C_ExecuteUbergraph_bike_set_Vim_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

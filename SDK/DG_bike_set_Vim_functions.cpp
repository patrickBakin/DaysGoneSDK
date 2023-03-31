// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bike_set_Vim.bike_set_Vim_C.UpdateWheel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubike_set_Vim_C::UpdateWheel(int WheelIndex, struct FVector* Offset, struct FRotator* Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function bike_set_Vim.bike_set_Vim_C.UpdateWheel");

	Ubike_set_Vim_C_UpdateWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
	if (Rotator != nullptr)
		*Rotator = params.Rotator;
}


// Function bike_set_Vim.bike_set_Vim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_bike_set_Vim_AnimGraphNode_SequenceEvaluator_B532093E43383532EFC01FAC29555B9E
// (BlueprintEvent)

void Ubike_set_Vim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_bike_set_Vim_AnimGraphNode_SequenceEvaluator_B532093E43383532EFC01FAC29555B9E()
{
	static auto fn = UObject::FindObject<UFunction>("Function bike_set_Vim.bike_set_Vim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_bike_set_Vim_AnimGraphNode_SequenceEvaluator_B532093E43383532EFC01FAC29555B9E");

	Ubike_set_Vim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_bike_set_Vim_AnimGraphNode_SequenceEvaluator_B532093E43383532EFC01FAC29555B9E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bike_set_Vim.bike_set_Vim_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void Ubike_set_Vim_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function bike_set_Vim.bike_set_Vim_C.BlueprintUpdateAnimation");

	Ubike_set_Vim_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bike_set_Vim.bike_set_Vim_C.ExecuteUbergraph_bike_set_Vim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Ubike_set_Vim_C::ExecuteUbergraph_bike_set_Vim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bike_set_Vim.bike_set_Vim_C.ExecuteUbergraph_bike_set_Vim");

	Ubike_set_Vim_C_ExecuteUbergraph_bike_set_Vim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

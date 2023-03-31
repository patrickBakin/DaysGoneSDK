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

// Function MissionScript_Interface.MissionScript_Interface_C.I_GetCurrentCheckpointCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxCount                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionScript_Interface_C::I_GetCurrentCheckpointCount(int* Count, int* MaxCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionScript_Interface.MissionScript_Interface_C.I_GetCurrentCheckpointCount");

	UMissionScript_Interface_C_I_GetCurrentCheckpointCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
	if (MaxCount != nullptr)
		*MaxCount = params.MaxCount;
}


// Function MissionScript_Interface.MissionScript_Interface_C.I_SetDoOnceVariables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HighestIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   init_d                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<bool>                   Closed                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMissionScript_Interface_C::I_SetDoOnceVariables(int HighestIndex, TArray<bool>* init_d, TArray<bool>* Closed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionScript_Interface.MissionScript_Interface_C.I_SetDoOnceVariables");

	UMissionScript_Interface_C_I_SetDoOnceVariables_Params params;
	params.HighestIndex = HighestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (init_d != nullptr)
		*init_d = params.init_d;
	if (Closed != nullptr)
		*Closed = params.Closed;
}


// Function MissionScript_Interface.MissionScript_Interface_C.I_GetDoonceVariable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   init_d                         (Parm, OutParm, ZeroConstructor)
// TArray<bool>                   Closed                         (Parm, OutParm, ZeroConstructor)
// int                            highest_index_used             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionScript_Interface_C::I_GetDoonceVariable(TArray<bool>* init_d, TArray<bool>* Closed, int* highest_index_used)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionScript_Interface.MissionScript_Interface_C.I_GetDoonceVariable");

	UMissionScript_Interface_C_I_GetDoonceVariable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (init_d != nullptr)
		*init_d = params.init_d;
	if (Closed != nullptr)
		*Closed = params.Closed;
	if (highest_index_used != nullptr)
		*highest_index_used = params.highest_index_used;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

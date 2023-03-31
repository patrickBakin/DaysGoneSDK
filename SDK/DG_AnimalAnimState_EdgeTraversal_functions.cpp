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

// Function AnimalAnimState_EdgeTraversal.AnimalAnimState_EdgeTraversal_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimalAnimState_EdgeTraversal_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalAnimState_EdgeTraversal.AnimalAnimState_EdgeTraversal_C.OnEnterState");

	UAnimalAnimState_EdgeTraversal_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalAnimState_EdgeTraversal.AnimalAnimState_EdgeTraversal_C.OnExitState
// (Event, Public, BlueprintEvent)

void UAnimalAnimState_EdgeTraversal_C::OnExitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalAnimState_EdgeTraversal.AnimalAnimState_EdgeTraversal_C.OnExitState");

	UAnimalAnimState_EdgeTraversal_C_OnExitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimalAnimState_EdgeTraversal.AnimalAnimState_EdgeTraversal_C.ExecuteUbergraph_AnimalAnimState_EdgeTraversal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimalAnimState_EdgeTraversal_C::ExecuteUbergraph_AnimalAnimState_EdgeTraversal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalAnimState_EdgeTraversal.AnimalAnimState_EdgeTraversal_C.ExecuteUbergraph_AnimalAnimState_EdgeTraversal");

	UAnimalAnimState_EdgeTraversal_C_ExecuteUbergraph_AnimalAnimState_EdgeTraversal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

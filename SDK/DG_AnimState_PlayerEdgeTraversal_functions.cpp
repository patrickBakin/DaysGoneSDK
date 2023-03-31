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

// Function AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimState_PlayerEdgeTraversal_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C.OnEnterState");

	UAnimState_PlayerEdgeTraversal_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C.OnExitState
// (Event, Public, BlueprintEvent)

void UAnimState_PlayerEdgeTraversal_C::OnExitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C.OnExitState");

	UAnimState_PlayerEdgeTraversal_C_OnExitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C.OnStateTimerEvent
// (Event, Public, BlueprintEvent)

void UAnimState_PlayerEdgeTraversal_C::OnStateTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C.OnStateTimerEvent");

	UAnimState_PlayerEdgeTraversal_C_OnStateTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C.ExecuteUbergraph_AnimState_PlayerEdgeTraversal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_PlayerEdgeTraversal_C::ExecuteUbergraph_AnimState_PlayerEdgeTraversal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C.ExecuteUbergraph_AnimState_PlayerEdgeTraversal");

	UAnimState_PlayerEdgeTraversal_C_ExecuteUbergraph_AnimState_PlayerEdgeTraversal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

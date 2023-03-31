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

// Function AnimState_Grapple.AnimState_Grapple_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimState_Grapple_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Grapple.AnimState_Grapple_C.OnEnterState");

	UAnimState_Grapple_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_Grapple.AnimState_Grapple_C.OnExitState
// (Event, Public, BlueprintEvent)

void UAnimState_Grapple_C::OnExitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Grapple.AnimState_Grapple_C.OnExitState");

	UAnimState_Grapple_C_OnExitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_Grapple.AnimState_Grapple_C.ExecuteUbergraph_AnimState_Grapple
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_Grapple_C::ExecuteUbergraph_AnimState_Grapple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Grapple.AnimState_Grapple_C.ExecuteUbergraph_AnimState_Grapple");

	UAnimState_Grapple_C_ExecuteUbergraph_AnimState_Grapple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

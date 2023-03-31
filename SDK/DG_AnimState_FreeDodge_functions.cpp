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

// Function AnimState_FreeDodge.AnimState_FreeDodge_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimState_FreeDodge_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_FreeDodge.AnimState_FreeDodge_C.OnEnterState");

	UAnimState_FreeDodge_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_FreeDodge.AnimState_FreeDodge_C.OnExitState
// (Event, Public, BlueprintEvent)

void UAnimState_FreeDodge_C::OnExitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_FreeDodge.AnimState_FreeDodge_C.OnExitState");

	UAnimState_FreeDodge_C_OnExitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_FreeDodge.AnimState_FreeDodge_C.ExecuteUbergraph_AnimState_FreeDodge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_FreeDodge_C::ExecuteUbergraph_AnimState_FreeDodge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_FreeDodge.AnimState_FreeDodge_C.ExecuteUbergraph_AnimState_FreeDodge");

	UAnimState_FreeDodge_C_ExecuteUbergraph_AnimState_FreeDodge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

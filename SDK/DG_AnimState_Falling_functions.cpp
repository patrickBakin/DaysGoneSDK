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

// Function AnimState_Falling.AnimState_Falling_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimState_Falling_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Falling.AnimState_Falling_C.OnEnterState");

	UAnimState_Falling_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_Falling.AnimState_Falling_C.ExecuteUbergraph_AnimState_Falling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_Falling_C::ExecuteUbergraph_AnimState_Falling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Falling.AnimState_Falling_C.ExecuteUbergraph_AnimState_Falling");

	UAnimState_Falling_C_ExecuteUbergraph_AnimState_Falling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

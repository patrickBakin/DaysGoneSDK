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

// Function AnimState_Sliding.AnimState_Sliding_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimState_Sliding_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Sliding.AnimState_Sliding_C.OnEnterState");

	UAnimState_Sliding_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_Sliding.AnimState_Sliding_C.ExecuteUbergraph_AnimState_Sliding
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_Sliding_C::ExecuteUbergraph_AnimState_Sliding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Sliding.AnimState_Sliding_C.ExecuteUbergraph_AnimState_Sliding");

	UAnimState_Sliding_C_ExecuteUbergraph_AnimState_Sliding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

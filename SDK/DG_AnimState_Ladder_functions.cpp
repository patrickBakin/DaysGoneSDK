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

// Function AnimState_Ladder.AnimState_Ladder_C.OnExitState
// (Event, Public, BlueprintEvent)

void UAnimState_Ladder_C::OnExitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Ladder.AnimState_Ladder_C.OnExitState");

	UAnimState_Ladder_C_OnExitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_Ladder.AnimState_Ladder_C.ExecuteUbergraph_AnimState_Ladder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_Ladder_C::ExecuteUbergraph_AnimState_Ladder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Ladder.AnimState_Ladder_C.ExecuteUbergraph_AnimState_Ladder");

	UAnimState_Ladder_C_ExecuteUbergraph_AnimState_Ladder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

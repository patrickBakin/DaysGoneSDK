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

// Function AnimState_RagerRushAttack.AnimState_RagerRushAttack_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimState_RagerRushAttack_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_RagerRushAttack.AnimState_RagerRushAttack_C.OnEnterState");

	UAnimState_RagerRushAttack_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_RagerRushAttack.AnimState_RagerRushAttack_C.ExecuteUbergraph_AnimState_RagerRushAttack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_RagerRushAttack_C::ExecuteUbergraph_AnimState_RagerRushAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_RagerRushAttack.AnimState_RagerRushAttack_C.ExecuteUbergraph_AnimState_RagerRushAttack");

	UAnimState_RagerRushAttack_C_ExecuteUbergraph_AnimState_RagerRushAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

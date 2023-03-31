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

// Function AnimState_Damage.AnimState_Damage_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimState_Damage_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Damage.AnimState_Damage_C.OnEnterState");

	UAnimState_Damage_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_Damage.AnimState_Damage_C.ExecuteUbergraph_AnimState_Damage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_Damage_C::ExecuteUbergraph_AnimState_Damage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Damage.AnimState_Damage_C.ExecuteUbergraph_AnimState_Damage");

	UAnimState_Damage_C_ExecuteUbergraph_AnimState_Damage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

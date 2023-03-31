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

// Function AnimState_Dodge.AnimState_Dodge_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAnimState_Dodge_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Dodge.AnimState_Dodge_C.OnEnterState");

	UAnimState_Dodge_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimState_Dodge.AnimState_Dodge_C.ExecuteUbergraph_AnimState_Dodge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimState_Dodge_C::ExecuteUbergraph_AnimState_Dodge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimState_Dodge.AnimState_Dodge_C.ExecuteUbergraph_AnimState_Dodge");

	UAnimState_Dodge_C_ExecuteUbergraph_AnimState_Dodge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BTTask_StartAttacking.BTTask_StartAttacking_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_StartAttacking_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartAttacking.BTTask_StartAttacking_C.ReceiveExecute");

	UBTTask_StartAttacking_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_StartAttacking.BTTask_StartAttacking_C.ExecuteUbergraph_BTTask_StartAttacking
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_StartAttacking_C::ExecuteUbergraph_BTTask_StartAttacking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartAttacking.BTTask_StartAttacking_C.ExecuteUbergraph_BTTask_StartAttacking");

	UBTTask_StartAttacking_C_ExecuteUbergraph_BTTask_StartAttacking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

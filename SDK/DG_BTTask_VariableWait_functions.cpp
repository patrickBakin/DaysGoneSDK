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

// Function BTTask_VariableWait.BTTask_VariableWait_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_VariableWait_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_VariableWait.BTTask_VariableWait_C.ReceiveExecute");

	UBTTask_VariableWait_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_VariableWait.BTTask_VariableWait_C.Wait Over
// (BlueprintCallable, BlueprintEvent)

void UBTTask_VariableWait_C::Wait_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_VariableWait.BTTask_VariableWait_C.Wait Over");

	UBTTask_VariableWait_C_Wait_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_VariableWait.BTTask_VariableWait_C.ExecuteUbergraph_BTTask_VariableWait
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_VariableWait_C::ExecuteUbergraph_BTTask_VariableWait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_VariableWait.BTTask_VariableWait_C.ExecuteUbergraph_BTTask_VariableWait");

	UBTTask_VariableWait_C_ExecuteUbergraph_BTTask_VariableWait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

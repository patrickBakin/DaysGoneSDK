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

// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerCantReachTargetAnim_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ReceiveExecute");

	UBTTask_FreakerCantReachTargetAnim_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.PerformActionCompleteDelegate__DelegateSignature_Event
// (BlueprintCallable, BlueprintEvent)

void UBTTask_FreakerCantReachTargetAnim_C::PerformActionCompleteDelegate__DelegateSignature_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.PerformActionCompleteDelegate__DelegateSignature_Event");

	UBTTask_FreakerCantReachTargetAnim_C_PerformActionCompleteDelegate__DelegateSignature_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.PerformActionFailedDelegate__DelegateSignature_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerCantReachTargetAnim_C::PerformActionFailedDelegate__DelegateSignature_Event(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.PerformActionFailedDelegate__DelegateSignature_Event");

	UBTTask_FreakerCantReachTargetAnim_C_PerformActionFailedDelegate__DelegateSignature_Event_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerCantReachTargetAnim_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ReceiveAbort");

	UBTTask_FreakerCantReachTargetAnim_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ExecuteUbergraph_BTTask_FreakerCantReachTargetAnim
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerCantReachTargetAnim_C::ExecuteUbergraph_BTTask_FreakerCantReachTargetAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerCantReachTargetAnim.BTTask_FreakerCantReachTargetAnim_C.ExecuteUbergraph_BTTask_FreakerCantReachTargetAnim");

	UBTTask_FreakerCantReachTargetAnim_C_ExecuteUbergraph_BTTask_FreakerCantReachTargetAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

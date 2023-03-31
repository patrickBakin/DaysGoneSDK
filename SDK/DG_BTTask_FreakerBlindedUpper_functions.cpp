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

// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerBlindedUpper_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ReceiveExecute");

	UBTTask_FreakerBlindedUpper_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.PerformActionCompleteDelegate__DelegateSignature_Event
// (BlueprintCallable, BlueprintEvent)

void UBTTask_FreakerBlindedUpper_C::PerformActionCompleteDelegate__DelegateSignature_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.PerformActionCompleteDelegate__DelegateSignature_Event");

	UBTTask_FreakerBlindedUpper_C_PerformActionCompleteDelegate__DelegateSignature_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.PerformActionFailedDelegate__DelegateSignature_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerBlindedUpper_C::PerformActionFailedDelegate__DelegateSignature_Event(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.PerformActionFailedDelegate__DelegateSignature_Event");

	UBTTask_FreakerBlindedUpper_C_PerformActionFailedDelegate__DelegateSignature_Event_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerBlindedUpper_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ReceiveAbort");

	UBTTask_FreakerBlindedUpper_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ExecuteUbergraph_BTTask_FreakerBlindedUpper
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerBlindedUpper_C::ExecuteUbergraph_BTTask_FreakerBlindedUpper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C.ExecuteUbergraph_BTTask_FreakerBlindedUpper");

	UBTTask_FreakerBlindedUpper_C_ExecuteUbergraph_BTTask_FreakerBlindedUpper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

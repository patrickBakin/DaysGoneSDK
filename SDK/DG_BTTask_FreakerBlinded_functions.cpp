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

// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerBlinded_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ReceiveExecute");

	UBTTask_FreakerBlinded_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.PerformActionCompleteDelegate__DelegateSignature_Event
// (BlueprintCallable, BlueprintEvent)

void UBTTask_FreakerBlinded_C::PerformActionCompleteDelegate__DelegateSignature_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.PerformActionCompleteDelegate__DelegateSignature_Event");

	UBTTask_FreakerBlinded_C_PerformActionCompleteDelegate__DelegateSignature_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.PerformActionFailedDelegate__DelegateSignature_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerBlinded_C::PerformActionFailedDelegate__DelegateSignature_Event(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.PerformActionFailedDelegate__DelegateSignature_Event");

	UBTTask_FreakerBlinded_C_PerformActionFailedDelegate__DelegateSignature_Event_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerBlinded_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ReceiveAbort");

	UBTTask_FreakerBlinded_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.OnTimedOut
// (BlueprintCallable, BlueprintEvent)

void UBTTask_FreakerBlinded_C::OnTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.OnTimedOut");

	UBTTask_FreakerBlinded_C_OnTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ExecuteUbergraph_BTTask_FreakerBlinded
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FreakerBlinded_C::ExecuteUbergraph_BTTask_FreakerBlinded(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FreakerBlinded.BTTask_FreakerBlinded_C.ExecuteUbergraph_BTTask_FreakerBlinded");

	UBTTask_FreakerBlinded_C_ExecuteUbergraph_BTTask_FreakerBlinded_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

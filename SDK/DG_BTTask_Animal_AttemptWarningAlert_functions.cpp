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

// Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Animal_AttemptWarningAlert_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ReceiveExecuteAI");

	UBTTask_Animal_AttemptWarningAlert_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.OnAlertEnded
// (BlueprintCallable, BlueprintEvent)

void UBTTask_Animal_AttemptWarningAlert_C::OnAlertEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.OnAlertEnded");

	UBTTask_Animal_AttemptWarningAlert_C_OnAlertEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Animal_AttemptWarningAlert_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ReceiveAbort");

	UBTTask_Animal_AttemptWarningAlert_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ExecuteUbergraph_BTTask_Animal_AttemptWarningAlert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Animal_AttemptWarningAlert_C::ExecuteUbergraph_BTTask_Animal_AttemptWarningAlert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Animal_AttemptWarningAlert.BTTask_Animal_AttemptWarningAlert_C.ExecuteUbergraph_BTTask_Animal_AttemptWarningAlert");

	UBTTask_Animal_AttemptWarningAlert_C_ExecuteUbergraph_BTTask_Animal_AttemptWarningAlert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BTTask_AirHorn.BTTask_AirHorn_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_AirHorn_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_AirHorn.BTTask_AirHorn_C.ReceiveExecuteAI");

	UBTTask_AirHorn_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_AirHorn.BTTask_AirHorn_C.ActionComplete
// (BlueprintCallable, BlueprintEvent)

void UBTTask_AirHorn_C::ActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_AirHorn.BTTask_AirHorn_C.ActionComplete");

	UBTTask_AirHorn_C_ActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_AirHorn.BTTask_AirHorn_C.ActionFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_AirHorn_C::ActionFail(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_AirHorn.BTTask_AirHorn_C.ActionFail");

	UBTTask_AirHorn_C_ActionFail_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_AirHorn.BTTask_AirHorn_C.ExecuteUbergraph_BTTask_AirHorn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_AirHorn_C::ExecuteUbergraph_BTTask_AirHorn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_AirHorn.BTTask_AirHorn_C.ExecuteUbergraph_BTTask_AirHorn");

	UBTTask_AirHorn_C_ExecuteUbergraph_BTTask_AirHorn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

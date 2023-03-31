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

// Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Crow_FlyToPerch_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.ReceiveExecuteAI");

	UBTTask_Crow_FlyToPerch_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.OnMoveToPerchComplete
// (BlueprintCallable, BlueprintEvent)

void UBTTask_Crow_FlyToPerch_C::OnMoveToPerchComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.OnMoveToPerchComplete");

	UBTTask_Crow_FlyToPerch_C_OnMoveToPerchComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.ExecuteUbergraph_BTTask_Crow_FlyToPerch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Crow_FlyToPerch_C::ExecuteUbergraph_BTTask_Crow_FlyToPerch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C.ExecuteUbergraph_BTTask_Crow_FlyToPerch");

	UBTTask_Crow_FlyToPerch_C_ExecuteUbergraph_BTTask_Crow_FlyToPerch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

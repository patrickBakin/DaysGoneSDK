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

// Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Sniper_FindSnipingPoint_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ReceiveExecuteAI");

	UBTTask_Sniper_FindSnipingPoint_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.OnEQSQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Sniper_FindSnipingPoint_C::OnEQSQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.OnEQSQueryFinished");

	UBTTask_Sniper_FindSnipingPoint_C_OnEQSQueryFinished_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Sniper_FindSnipingPoint_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ReceiveAbortAI");

	UBTTask_Sniper_FindSnipingPoint_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ExecuteUbergraph_BTTask_Sniper_FindSnipingPoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Sniper_FindSnipingPoint_C::ExecuteUbergraph_BTTask_Sniper_FindSnipingPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Sniper_FindSnipingPoint.BTTask_Sniper_FindSnipingPoint_C.ExecuteUbergraph_BTTask_Sniper_FindSnipingPoint");

	UBTTask_Sniper_FindSnipingPoint_C_ExecuteUbergraph_BTTask_Sniper_FindSnipingPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

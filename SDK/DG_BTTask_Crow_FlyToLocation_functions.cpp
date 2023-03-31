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

// Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Crow_FlyToLocation_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.ReceiveExecuteAI");

	UBTTask_Crow_FlyToLocation_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.OnMoveToLocationComplete
// (BlueprintCallable, BlueprintEvent)

void UBTTask_Crow_FlyToLocation_C::OnMoveToLocationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.OnMoveToLocationComplete");

	UBTTask_Crow_FlyToLocation_C_OnMoveToLocationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.OnFlightTimeExpired
// (BlueprintCallable, BlueprintEvent)

void UBTTask_Crow_FlyToLocation_C::OnFlightTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.OnFlightTimeExpired");

	UBTTask_Crow_FlyToLocation_C_OnFlightTimeExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.ExecuteUbergraph_BTTask_Crow_FlyToLocation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Crow_FlyToLocation_C::ExecuteUbergraph_BTTask_Crow_FlyToLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Crow_FlyToLocation.BTTask_Crow_FlyToLocation_C.ExecuteUbergraph_BTTask_Crow_FlyToLocation");

	UBTTask_Crow_FlyToLocation_C_ExecuteUbergraph_BTTask_Crow_FlyToLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

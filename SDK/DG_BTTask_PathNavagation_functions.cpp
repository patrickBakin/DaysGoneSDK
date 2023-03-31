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

// Function BTTask_PathNavagation.BTTask_PathNavagation_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PathNavagation_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PathNavagation.BTTask_PathNavagation_C.ReceiveExecute");

	UBTTask_PathNavagation_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_PathNavagation.BTTask_PathNavagation_C.Waypoint Reached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIWaypoint*         Waypoint                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SequenceFinished               (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PathNavagation_C::Waypoint_Reached(class ABendAIWaypoint* Waypoint, int Index, bool SequenceFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PathNavagation.BTTask_PathNavagation_C.Waypoint Reached");

	UBTTask_PathNavagation_C_Waypoint_Reached_Params params;
	params.Waypoint = Waypoint;
	params.Index = Index;
	params.SequenceFinished = SequenceFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_PathNavagation.BTTask_PathNavagation_C.Leave POI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPOI*                CompletedPOI                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABendAIController*       User                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PathNavagation_C::Leave_POI(class ABendPOI* CompletedPOI, class ABendAIController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PathNavagation.BTTask_PathNavagation_C.Leave POI");

	UBTTask_PathNavagation_C_Leave_POI_Params params;
	params.CompletedPOI = CompletedPOI;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_PathNavagation.BTTask_PathNavagation_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PathNavagation_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PathNavagation.BTTask_PathNavagation_C.ReceiveAbort");

	UBTTask_PathNavagation_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_PathNavagation.BTTask_PathNavagation_C.ExecuteUbergraph_BTTask_PathNavagation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PathNavagation_C::ExecuteUbergraph_BTTask_PathNavagation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PathNavagation.BTTask_PathNavagation_C.ExecuteUbergraph_BTTask_PathNavagation");

	UBTTask_PathNavagation_C_ExecuteUbergraph_BTTask_PathNavagation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

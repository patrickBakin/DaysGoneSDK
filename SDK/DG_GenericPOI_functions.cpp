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

// Function GenericPOI.GenericPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGenericPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOI.GenericPOI_C.UserConstructionScript");

	AGenericPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOI.GenericPOI_C.OnPathComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* Result                         (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOI_C::OnPathComplete(TEnumAsByte<EPathFollowingResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOI.GenericPOI_C.OnPathComplete");

	AGenericPOI_C_OnPathComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOI.GenericPOI_C.PerformActionFailedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOI_C::PerformActionFailedDelegate(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOI.GenericPOI_C.PerformActionFailedDelegate");

	AGenericPOI_C_PerformActionFailedDelegate_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOI.GenericPOI_C.PerformActionCompleteDelegate
// (BlueprintCallable, BlueprintEvent)

void AGenericPOI_C::PerformActionCompleteDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOI.GenericPOI_C.PerformActionCompleteDelegate");

	AGenericPOI_C_PerformActionCompleteDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOI.GenericPOI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGenericPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOI.GenericPOI_C.ReceiveBeginPlay");

	AGenericPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOI.GenericPOI_C.ExecuteUbergraph_GenericPOI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOI_C::ExecuteUbergraph_GenericPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOI.GenericPOI_C.ExecuteUbergraph_GenericPOI");

	AGenericPOI_C_ExecuteUbergraph_GenericPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_TraversalInteract.BP_TraversalInteract_C.TryFindItemInWorld
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TraversalInteract_C::TryFindItemInWorld(bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.TryFindItemInWorld");

	ABP_TraversalInteract_C_TryFindItemInWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TraversalInteract_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.UserConstructionScript");

	ABP_TraversalInteract_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.CompleteTraversal
// (BlueprintCallable, BlueprintEvent)

void ABP_TraversalInteract_C::CompleteTraversal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.CompleteTraversal");

	ABP_TraversalInteract_C_CompleteTraversal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.FailTraversal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TraversalInteract_C::FailTraversal(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.FailTraversal");

	ABP_TraversalInteract_C_FailTraversal_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.OnAutoNavSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPOISlot*            Slot                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             User                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TraversalInteract_C::OnAutoNavSuccess(class ABendPOISlot* Slot, class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.OnAutoNavSuccess");

	ABP_TraversalInteract_C_OnAutoNavSuccess_Params params;
	params.Slot = Slot;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyDone
// (BlueprintCallable, BlueprintEvent)

void ABP_TraversalInteract_C::BuddyDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyDone");

	ABP_TraversalInteract_C_BuddyDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyAnimFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TraversalInteract_C::BuddyAnimFailed(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyAnimFailed");

	ABP_TraversalInteract_C_BuddyAnimFailed_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.OnInputSucceeded
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_TraversalInteract_C::OnInputSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.OnInputSucceeded");

	ABP_TraversalInteract_C_OnInputSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.InitInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TraversalInteract_C::InitInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.InitInteract");

	ABP_TraversalInteract_C_InitInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.MovePickupsFromArea
// (BlueprintCallable, BlueprintEvent)

void ABP_TraversalInteract_C::MovePickupsFromArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.MovePickupsFromArea");

	ABP_TraversalInteract_C_MovePickupsFromArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.ExecuteUbergraph_BP_TraversalInteract
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TraversalInteract_C::ExecuteUbergraph_BP_TraversalInteract(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.ExecuteUbergraph_BP_TraversalInteract");

	ABP_TraversalInteract_C_ExecuteUbergraph_BP_TraversalInteract_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyActionFail_Event__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason> ReasonForFailure               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TraversalInteract_C::BuddyActionFail_Event__DelegateSignature(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyActionFail_Event__DelegateSignature");

	ABP_TraversalInteract_C_BuddyActionFail_Event__DelegateSignature_Params params;
	params.ReasonForFailure = ReasonForFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyActionComplete_Event__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TraversalInteract_C::BuddyActionComplete_Event__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraversalInteract.BP_TraversalInteract_C.BuddyActionComplete_Event__DelegateSignature");

	ABP_TraversalInteract_C_BuddyActionComplete_Event__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

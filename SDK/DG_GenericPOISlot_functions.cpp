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

// Function GenericPOISlot.GenericPOISlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGenericPOISlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.UserConstructionScript");

	AGenericPOISlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.OnPathComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* Result                         (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::OnPathComplete(TEnumAsByte<EPathFollowingResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.OnPathComplete");

	AGenericPOISlot_C_OnPathComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.OnBecomeAware
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIAwareState>*    prevAwareness                  (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::OnBecomeAware(TEnumAsByte<EAIAwareState>* prevAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.OnBecomeAware");

	AGenericPOISlot_C_OnBecomeAware_Params params;
	params.prevAwareness = prevAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.OnBecomeSemiAware
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIAwareState>*    prevAwareness                  (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::OnBecomeSemiAware(TEnumAsByte<EAIAwareState>* prevAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.OnBecomeSemiAware");

	AGenericPOISlot_C_OnBecomeSemiAware_Params params;
	params.prevAwareness = prevAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.OnUserLeavesSlot
// (Event, Public, BlueprintEvent)

void AGenericPOISlot_C::OnUserLeavesSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.OnUserLeavesSlot");

	AGenericPOISlot_C_OnUserLeavesSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.OnUserTakesSlot
// (Event, Public, BlueprintEvent)

void AGenericPOISlot_C::OnUserTakesSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.OnUserTakesSlot");

	AGenericPOISlot_C_OnUserTakesSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.OnEnterComplete
// (Event, Public, BlueprintEvent)

void AGenericPOISlot_C::OnEnterComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.OnEnterComplete");

	AGenericPOISlot_C_OnEnterComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.OnEnterFail
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason>* eReason                        (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::OnEnterFail(TEnumAsByte<EPeformActionFailedReason>* eReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.OnEnterFail");

	AGenericPOISlot_C_OnEnterFail_Params params;
	params.eReason = eReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.OnLoopFail
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPeformActionFailedReason>* eReason                        (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::OnLoopFail(TEnumAsByte<EPeformActionFailedReason>* eReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.OnLoopFail");

	AGenericPOISlot_C_OnLoopFail_Params params;
	params.eReason = eReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.ExecuteUbergraph_GenericPOISlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::ExecuteUbergraph_GenericPOISlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.ExecuteUbergraph_GenericPOISlot");

	AGenericPOISlot_C_ExecuteUbergraph_GenericPOISlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.On Leave POISlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       AI_Controller                  (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::On_Leave_POISlot__DelegateSignature(class ABendAIController* AI_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.On Leave POISlot__DelegateSignature");

	AGenericPOISlot_C_On_Leave_POISlot__DelegateSignature_Params params;
	params.AI_Controller = AI_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.AtLocation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::AtLocation__DelegateSignature(class ABendAIController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.AtLocation__DelegateSignature");

	AGenericPOISlot_C_AtLocation__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.AnimationFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGenericPOISlot_C*       FromSlot                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendActionData         ActionData                     (Parm)
// class ABendAIController*       SlotUser                       (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::AnimationFailed__DelegateSignature(class AGenericPOISlot_C* FromSlot, const struct FBendActionData& ActionData, class ABendAIController* SlotUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.AnimationFailed__DelegateSignature");

	AGenericPOISlot_C_AnimationFailed__DelegateSignature_Params params;
	params.FromSlot = FromSlot;
	params.ActionData = ActionData;
	params.SlotUser = SlotUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericPOISlot.GenericPOISlot_C.AnimationComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGenericPOISlot_C*       FromSlot                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendActionData         ActionData                     (Parm)
// class ABendAIController*       SlotUser                       (Parm, ZeroConstructor, IsPlainOldData)

void AGenericPOISlot_C::AnimationComplete__DelegateSignature(class AGenericPOISlot_C* FromSlot, const struct FBendActionData& ActionData, class ABendAIController* SlotUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericPOISlot.GenericPOISlot_C.AnimationComplete__DelegateSignature");

	AGenericPOISlot_C_AnimationComplete__DelegateSignature_Params params;
	params.FromSlot = FromSlot;
	params.ActionData = ActionData;
	params.SlotUser = SlotUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

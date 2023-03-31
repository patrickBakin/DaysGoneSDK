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

// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IOnPostEditChangeProperty
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_POISlot_CPPRM_C::IOnPostEditChangeProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IOnPostEditChangeProperty");

	AXPEC_POISlot_CPPRM_C_IOnPostEditChangeProperty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ILookAt
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FXpecLookAtData*        Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_POISlot_CPPRM_C::ILookAt(struct FXpecLookAtData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ILookAt");

	AXPEC_POISlot_CPPRM_C_ILookAt_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableMoveToIdle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_POISlot_CPPRM_C::IEnableMoveToIdle(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableMoveToIdle");

	AXPEC_POISlot_CPPRM_C_IEnableMoveToIdle_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableFootLocking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_POISlot_CPPRM_C::IEnableFootLocking(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableFootLocking");

	AXPEC_POISlot_CPPRM_C_IEnableFootLocking_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableMoveToIdleAnchor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_POISlot_CPPRM_C::IEnableMoveToIdleAnchor(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableMoveToIdleAnchor");

	AXPEC_POISlot_CPPRM_C_IEnableMoveToIdleAnchor_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableTurnToIdleInMovement
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_POISlot_CPPRM_C::IEnableTurnToIdleInMovement(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.IEnableTurnToIdleInMovement");

	AXPEC_POISlot_CPPRM_C_IEnableTurnToIdleInMovement_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ITurnInPlaceByAngle
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         fAngle                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_POISlot_CPPRM_C::ITurnInPlaceByAngle(float* fAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ITurnInPlaceByAngle");

	AXPEC_POISlot_CPPRM_C_ITurnInPlaceByAngle_Params params;
	params.fAngle = fAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AXPEC_POISlot_CPPRM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.UserConstructionScript");

	AXPEC_POISlot_CPPRM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnUserTakesSlot
// (Event, Public, BlueprintEvent)

void AXPEC_POISlot_CPPRM_C::OnUserTakesSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnUserTakesSlot");

	AXPEC_POISlot_CPPRM_C_OnUserTakesSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnUserLeavesSlot
// (Event, Public, BlueprintEvent)

void AXPEC_POISlot_CPPRM_C::OnUserLeavesSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnUserLeavesSlot");

	AXPEC_POISlot_CPPRM_C_OnUserLeavesSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnPathComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* Result                         (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_POISlot_CPPRM_C::OnPathComplete(TEnumAsByte<EPathFollowingResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnPathComplete");

	AXPEC_POISlot_CPPRM_C_OnPathComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnBecomeSemiAware
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIAwareState>*    prevAwareness                  (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_POISlot_CPPRM_C::OnBecomeSemiAware(TEnumAsByte<EAIAwareState>* prevAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnBecomeSemiAware");

	AXPEC_POISlot_CPPRM_C_OnBecomeSemiAware_Params params;
	params.prevAwareness = prevAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnBecomeAware
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIAwareState>*    prevAwareness                  (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_POISlot_CPPRM_C::OnBecomeAware(TEnumAsByte<EAIAwareState>* prevAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnBecomeAware");

	AXPEC_POISlot_CPPRM_C_OnBecomeAware_Params params;
	params.prevAwareness = prevAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnRequestLeaveSlot
// (Event, Public, BlueprintEvent)

void AXPEC_POISlot_CPPRM_C::OnRequestLeaveSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.OnRequestLeaveSlot");

	AXPEC_POISlot_CPPRM_C_OnRequestLeaveSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.CE_TickTurnInPlace
// (BlueprintCallable, BlueprintEvent)

void AXPEC_POISlot_CPPRM_C::CE_TickTurnInPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.CE_TickTurnInPlace");

	AXPEC_POISlot_CPPRM_C_CE_TickTurnInPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ExecuteUbergraph_XPEC_POISlot_CPPRM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_POISlot_CPPRM_C::ExecuteUbergraph_XPEC_POISlot_CPPRM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_POISlot_CPPRM.XPEC_POISlot_CPPRM_C.ExecuteUbergraph_XPEC_POISlot_CPPRM");

	AXPEC_POISlot_CPPRM_C_ExecuteUbergraph_XPEC_POISlot_CPPRM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

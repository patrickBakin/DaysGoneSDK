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

// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.IIsForceHighLOD
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           iSN                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXPEC_ScenarioInstance_CPPRM_C::IIsForceHighLOD(int* iSN)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.IIsForceHighLOD");

	AXPEC_ScenarioInstance_CPPRM_C_IIsForceHighLOD_Params params;
	params.iSN = iSN;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AXPEC_ScenarioInstance_CPPRM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.UserConstructionScript");

	AXPEC_ScenarioInstance_CPPRM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.OnGetPriority
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         defaultPriority                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EePOIUserType>*    userType                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            User                           (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_ScenarioInstance_CPPRM_C::OnGetPriority(float* defaultPriority, TEnumAsByte<EePOIUserType>* userType, class AController** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.OnGetPriority");

	AXPEC_ScenarioInstance_CPPRM_C_OnGetPriority_Params params;
	params.defaultPriority = defaultPriority;
	params.userType = userType;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.OnRequestUsePOI
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EePOIUserType>*    userType                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            User                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPOISlot**           closestOpenSlot                (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_ScenarioInstance_CPPRM_C::OnRequestUsePOI(TEnumAsByte<EePOIUserType>* userType, class AController** User, class ABendPOISlot** closestOpenSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.OnRequestUsePOI");

	AXPEC_ScenarioInstance_CPPRM_C_OnRequestUsePOI_Params params;
	params.userType = userType;
	params.User = User;
	params.closestOpenSlot = closestOpenSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.ExecuteUbergraph_XPEC_ScenarioInstance_CPPRM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_ScenarioInstance_CPPRM_C::ExecuteUbergraph_XPEC_ScenarioInstance_CPPRM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C.ExecuteUbergraph_XPEC_ScenarioInstance_CPPRM");

	AXPEC_ScenarioInstance_CPPRM_C_ExecuteUbergraph_XPEC_ScenarioInstance_CPPRM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

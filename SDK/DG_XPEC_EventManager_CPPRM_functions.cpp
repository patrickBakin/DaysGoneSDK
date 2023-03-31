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

// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.SpawnScenarioActorSlot
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AXpecPOISlot*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXpecPOISlot* AXPEC_EventManager_CPPRM_C::SpawnScenarioActorSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.SpawnScenarioActorSlot");

	AXPEC_EventManager_CPPRM_C_SpawnScenarioActorSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.SpawnScenarioInstance
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AXpecScenarioInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXpecScenarioInstance* AXPEC_EventManager_CPPRM_C::SpawnScenarioInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.SpawnScenarioInstance");

	AXPEC_EventManager_CPPRM_C_SpawnScenarioInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AXPEC_EventManager_CPPRM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.UserConstructionScript");

	AXPEC_EventManager_CPPRM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AXPEC_EventManager_CPPRM_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.ReceiveBeginPlay");

	AXPEC_EventManager_CPPRM_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.FadeFinishRequestSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void AXPEC_EventManager_CPPRM_C::FadeFinishRequestSpawn(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.FadeFinishRequestSpawn");

	AXPEC_EventManager_CPPRM_C_FadeFinishRequestSpawn_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.ExecuteUbergraph_XPEC_EventManager_CPPRM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXPEC_EventManager_CPPRM_C::ExecuteUbergraph_XPEC_EventManager_CPPRM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.ExecuteUbergraph_XPEC_EventManager_CPPRM");

	AXPEC_EventManager_CPPRM_C_ExecuteUbergraph_XPEC_EventManager_CPPRM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function FreakCrowController.FreakCrowController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFreakCrowController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakCrowController.FreakCrowController_C.UserConstructionScript");

	AFreakCrowController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakCrowController.FreakCrowController_C.OnNestBurningStarted
// (BlueprintCallable, BlueprintEvent)

void AFreakCrowController_C::OnNestBurningStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakCrowController.FreakCrowController_C.OnNestBurningStarted");

	AFreakCrowController_C_OnNestBurningStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakCrowController.FreakCrowController_C.SetCrierNest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACrierNest_C*            CrierNest                      (Parm, ZeroConstructor, IsPlainOldData)

void AFreakCrowController_C::SetCrierNest(class ACrierNest_C* CrierNest)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakCrowController.FreakCrowController_C.SetCrierNest");

	AFreakCrowController_C_SetCrierNest_Params params;
	params.CrierNest = CrierNest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakCrowController.FreakCrowController_C.ExecuteUbergraph_FreakCrowController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFreakCrowController_C::ExecuteUbergraph_FreakCrowController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakCrowController.FreakCrowController_C.ExecuteUbergraph_FreakCrowController");

	AFreakCrowController_C_ExecuteUbergraph_FreakCrowController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

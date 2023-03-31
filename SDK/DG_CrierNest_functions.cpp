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

// Function CrierNest.CrierNest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACrierNest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrierNest.CrierNest_C.UserConstructionScript");

	ACrierNest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrierNest.CrierNest_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ACrierNest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrierNest.CrierNest_C.ReceiveBeginPlay");

	ACrierNest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrierNest.CrierNest_C.OnNestStartedBurning
// (BlueprintCallable, BlueprintEvent)

void ACrierNest_C::OnNestStartedBurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrierNest.CrierNest_C.OnNestStartedBurning");

	ACrierNest_C_OnNestStartedBurning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrierNest.CrierNest_C.StartCrierNestJob
// (BlueprintCallable, BlueprintEvent)

void ACrierNest_C::StartCrierNestJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrierNest.CrierNest_C.StartCrierNestJob");

	ACrierNest_C_StartCrierNestJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrierNest.CrierNest_C.ExecuteUbergraph_CrierNest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrierNest_C::ExecuteUbergraph_CrierNest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrierNest.CrierNest_C.ExecuteUbergraph_CrierNest");

	ACrierNest_C_ExecuteUbergraph_CrierNest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

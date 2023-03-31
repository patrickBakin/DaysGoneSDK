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

// Function BendCrowdManagerBP.BendCrowdManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendCrowdManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendCrowdManagerBP.BendCrowdManagerBP_C.UserConstructionScript");

	ABendCrowdManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendCrowdManagerBP.BendCrowdManagerBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABendCrowdManagerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendCrowdManagerBP.BendCrowdManagerBP_C.ReceiveBeginPlay");

	ABendCrowdManagerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendCrowdManagerBP.BendCrowdManagerBP_C.OnFocusModeToggle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnteredFocusMode               (Parm, ZeroConstructor, IsPlainOldData)

void ABendCrowdManagerBP_C::OnFocusModeToggle_Event_1(bool EnteredFocusMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendCrowdManagerBP.BendCrowdManagerBP_C.OnFocusModeToggle_Event_1");

	ABendCrowdManagerBP_C_OnFocusModeToggle_Event_1_Params params;
	params.EnteredFocusMode = EnteredFocusMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendCrowdManagerBP.BendCrowdManagerBP_C.OnFocusFadingFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABendCrowdManagerBP_C::OnFocusFadingFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendCrowdManagerBP.BendCrowdManagerBP_C.OnFocusFadingFinished_Event_1");

	ABendCrowdManagerBP_C_OnFocusFadingFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendCrowdManagerBP.BendCrowdManagerBP_C.ExecuteUbergraph_BendCrowdManagerBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendCrowdManagerBP_C::ExecuteUbergraph_BendCrowdManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendCrowdManagerBP.BendCrowdManagerBP_C.ExecuteUbergraph_BendCrowdManagerBP");

	ABendCrowdManagerBP_C_ExecuteUbergraph_BendCrowdManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

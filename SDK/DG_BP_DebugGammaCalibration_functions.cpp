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

// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.DisableInstructions
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugGammaCalibration_C::DisableInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.DisableInstructions");

	ABP_DebugGammaCalibration_C_DisableInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.SetUIGammaToMatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Gamma                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugGammaCalibration_C::SetUIGammaToMatch(const struct FVector& Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.SetUIGammaToMatch");

	ABP_DebugGammaCalibration_C_SetUIGammaToMatch_Params params;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.DeactivateMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugGammaCalibration_C::DeactivateMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.DeactivateMenu");

	ABP_DebugGammaCalibration_C_DeactivateMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ActivateMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugGammaCalibration_C::ActivateMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ActivateMenu");

	ABP_DebugGammaCalibration_C_ActivateMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugGammaCalibration_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.UserConstructionScript");

	ABP_DebugGammaCalibration_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_DebugGammaCalibration_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ReceiveBeginPlay");

	ABP_DebugGammaCalibration_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugGammaCalibration_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ReceiveTick");

	ABP_DebugGammaCalibration_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ExecuteUbergraph_BP_DebugGammaCalibration
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugGammaCalibration_C::ExecuteUbergraph_BP_DebugGammaCalibration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugGammaCalibration.BP_DebugGammaCalibration_C.ExecuteUbergraph_BP_DebugGammaCalibration");

	ABP_DebugGammaCalibration_C_ExecuteUbergraph_BP_DebugGammaCalibration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

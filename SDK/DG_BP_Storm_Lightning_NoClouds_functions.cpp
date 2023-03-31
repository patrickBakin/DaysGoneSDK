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

// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ResetLightningEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::ResetLightningEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ResetLightningEffects");

	ABP_Storm_Lightning_NoClouds_C_ResetLightningEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsDespawner
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::LightningEffectsDespawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsDespawner");

	ABP_Storm_Lightning_NoClouds_C_LightningEffectsDespawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsManager
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::LightningEffectsManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsManager");

	ABP_Storm_Lightning_NoClouds_C_LightningEffectsManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsSpawner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::LightningEffectsSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.LightningEffectsSpawner");

	ABP_Storm_Lightning_NoClouds_C_LightningEffectsSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.GetStrikeTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  StrikeTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_NoClouds_C::GetStrikeTarget(class AActor** StrikeTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.GetStrikeTarget");

	ABP_Storm_Lightning_NoClouds_C_GetStrikeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StrikeTarget != nullptr)
		*StrikeTarget = params.StrikeTarget;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.TargetLightningController
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::TargetLightningController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.TargetLightningController");

	ABP_Storm_Lightning_NoClouds_C_TargetLightningController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.AmbientLightningController
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::AmbientLightningController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.AmbientLightningController");

	ABP_Storm_Lightning_NoClouds_C_AmbientLightningController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.UserConstructionScript");

	ABP_Storm_Lightning_NoClouds_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_NoClouds_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ReceiveTick");

	ABP_Storm_Lightning_NoClouds_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Editor Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::Editor_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Editor Tick");

	ABP_Storm_Lightning_NoClouds_C_Editor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.End Storm
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::End_Storm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.End Storm");

	ABP_Storm_Lightning_NoClouds_C_End_Storm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Invoke Lightning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Storm_Lightning_StrikeTarget_Component_C* Lightning_Strike_Target        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_NoClouds_C::Invoke_Lightning(class UBP_Storm_Lightning_StrikeTarget_Component_C* Lightning_Strike_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Invoke Lightning");

	ABP_Storm_Lightning_NoClouds_C_Invoke_Lightning_Params params;
	params.Lightning_Strike_Target = Lightning_Strike_Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ReceiveBeginPlay");

	ABP_Storm_Lightning_NoClouds_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Reset Storm
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Lightning_NoClouds_C::Reset_Storm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.Reset Storm");

	ABP_Storm_Lightning_NoClouds_C_Reset_Storm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ExecuteUbergraph_BP_Storm_Lightning_NoClouds
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Lightning_NoClouds_C::ExecuteUbergraph_BP_Storm_Lightning_NoClouds(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C.ExecuteUbergraph_BP_Storm_Lightning_NoClouds");

	ABP_Storm_Lightning_NoClouds_C_ExecuteUbergraph_BP_Storm_Lightning_NoClouds_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

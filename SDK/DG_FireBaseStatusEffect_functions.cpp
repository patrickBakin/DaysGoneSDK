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

// Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnTick
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopEffect                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFireBaseStatusEffect_C::OnTick(bool* StopEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnTick");

	UFireBaseStatusEffect_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StopEffect != nullptr)
		*StopEffect = params.StopEffect;
}


// Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnStart
// (Event, Protected, BlueprintEvent)

void UFireBaseStatusEffect_C::OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnStart");

	UFireBaseStatusEffect_C_OnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnEnd
// (Event, Protected, BlueprintEvent)

void UFireBaseStatusEffect_C::OnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireBaseStatusEffect.FireBaseStatusEffect_C.OnEnd");

	UFireBaseStatusEffect_C_OnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireBaseStatusEffect.FireBaseStatusEffect_C.SpawnFirstEffect
// (BlueprintCallable, BlueprintEvent)

void UFireBaseStatusEffect_C::SpawnFirstEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireBaseStatusEffect.FireBaseStatusEffect_C.SpawnFirstEffect");

	UFireBaseStatusEffect_C_SpawnFirstEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireBaseStatusEffect.FireBaseStatusEffect_C.SpawnSecondEffect
// (BlueprintCallable, BlueprintEvent)

void UFireBaseStatusEffect_C::SpawnSecondEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireBaseStatusEffect.FireBaseStatusEffect_C.SpawnSecondEffect");

	UFireBaseStatusEffect_C_SpawnSecondEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireBaseStatusEffect.FireBaseStatusEffect_C.KillFireParticles
// (BlueprintCallable, BlueprintEvent)

void UFireBaseStatusEffect_C::KillFireParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireBaseStatusEffect.FireBaseStatusEffect_C.KillFireParticles");

	UFireBaseStatusEffect_C_KillFireParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireBaseStatusEffect.FireBaseStatusEffect_C.ExecuteUbergraph_FireBaseStatusEffect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFireBaseStatusEffect_C::ExecuteUbergraph_FireBaseStatusEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireBaseStatusEffect.FireBaseStatusEffect_C.ExecuteUbergraph_FireBaseStatusEffect");

	UFireBaseStatusEffect_C_ExecuteUbergraph_FireBaseStatusEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

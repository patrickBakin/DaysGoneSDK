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

// Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnTick
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopEffect                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USuicideFireStatusEffect_C::OnTick(bool* StopEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnTick");

	USuicideFireStatusEffect_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StopEffect != nullptr)
		*StopEffect = params.StopEffect;
}


// Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnEnd
// (Event, Protected, BlueprintEvent)

void USuicideFireStatusEffect_C::OnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnEnd");

	USuicideFireStatusEffect_C_OnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnStart
// (Event, Protected, BlueprintEvent)

void USuicideFireStatusEffect_C::OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.OnStart");

	USuicideFireStatusEffect_C_OnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.ExecuteUbergraph_SuicideFireStatusEffect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USuicideFireStatusEffect_C::ExecuteUbergraph_SuicideFireStatusEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SuicideFireStatusEffect.SuicideFireStatusEffect_C.ExecuteUbergraph_SuicideFireStatusEffect");

	USuicideFireStatusEffect_C_ExecuteUbergraph_SuicideFireStatusEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

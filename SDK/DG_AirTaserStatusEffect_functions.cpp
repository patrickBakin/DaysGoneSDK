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

// Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnTick
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopEffect                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAirTaserStatusEffect_C::OnTick(bool* StopEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnTick");

	UAirTaserStatusEffect_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StopEffect != nullptr)
		*StopEffect = params.StopEffect;
}


// Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnStart
// (Event, Protected, BlueprintEvent)

void UAirTaserStatusEffect_C::OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnStart");

	UAirTaserStatusEffect_C_OnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnEnd
// (Event, Protected, BlueprintEvent)

void UAirTaserStatusEffect_C::OnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AirTaserStatusEffect.AirTaserStatusEffect_C.OnEnd");

	UAirTaserStatusEffect_C_OnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AirTaserStatusEffect.AirTaserStatusEffect_C.ExecuteUbergraph_AirTaserStatusEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAirTaserStatusEffect_C::ExecuteUbergraph_AirTaserStatusEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AirTaserStatusEffect.AirTaserStatusEffect_C.ExecuteUbergraph_AirTaserStatusEffect");

	UAirTaserStatusEffect_C_ExecuteUbergraph_AirTaserStatusEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

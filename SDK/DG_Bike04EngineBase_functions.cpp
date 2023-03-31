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

// Function Bike04EngineBase.Bike04EngineBase_C.GetEngineSoundsByExhaust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ExhaustNumber                  (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              EngineSound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              EngineStartSound               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              EngineStopSound                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBike04EngineBase_C::GetEngineSoundsByExhaust(int ExhaustNumber, class USoundBase** EngineSound, class USoundBase** EngineStartSound, class USoundBase** EngineStopSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bike04EngineBase.Bike04EngineBase_C.GetEngineSoundsByExhaust");

	UBike04EngineBase_C_GetEngineSoundsByExhaust_Params params;
	params.ExhaustNumber = ExhaustNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EngineSound != nullptr)
		*EngineSound = params.EngineSound;
	if (EngineStartSound != nullptr)
		*EngineStartSound = params.EngineStartSound;
	if (EngineStopSound != nullptr)
		*EngineStopSound = params.EngineStopSound;
}


// Function Bike04EngineBase.Bike04EngineBase_C.SetEngineSounds
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ExhaustNumber                  (Parm, ZeroConstructor, IsPlainOldData)
// class ABillsBike_C*            BikeRef                        (Parm, ZeroConstructor, IsPlainOldData)

void UBike04EngineBase_C::SetEngineSounds(int ExhaustNumber, class ABillsBike_C* BikeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bike04EngineBase.Bike04EngineBase_C.SetEngineSounds");

	UBike04EngineBase_C_SetEngineSounds_Params params;
	params.ExhaustNumber = ExhaustNumber;
	params.BikeRef = BikeRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bike04EngineBase.Bike04EngineBase_C.OnVehiclePartAttached
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AVehiclePawn**           VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void UBike04EngineBase_C::OnVehiclePartAttached(class AVehiclePawn** VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bike04EngineBase.Bike04EngineBase_C.OnVehiclePartAttached");

	UBike04EngineBase_C_OnVehiclePartAttached_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

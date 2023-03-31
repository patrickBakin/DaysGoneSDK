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

// Function Bike04ExhaustBase.Bike04ExhaustBase_C.SetEngineSounds
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USoundBase*              EngineSound                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              EngineStartSound               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              EngineStopSound                (Parm, ZeroConstructor, IsPlainOldData)
// class ABillsBike_C*            BikeRef                        (Parm, ZeroConstructor, IsPlainOldData)

void UBike04ExhaustBase_C::SetEngineSounds(class USoundBase* EngineSound, class USoundBase* EngineStartSound, class USoundBase* EngineStopSound, class ABillsBike_C* BikeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bike04ExhaustBase.Bike04ExhaustBase_C.SetEngineSounds");

	UBike04ExhaustBase_C_SetEngineSounds_Params params;
	params.EngineSound = EngineSound;
	params.EngineStartSound = EngineStartSound;
	params.EngineStopSound = EngineStopSound;
	params.BikeRef = BikeRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bike04ExhaustBase.Bike04ExhaustBase_C.OnVehiclePartAttached
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AVehiclePawn**           VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void UBike04ExhaustBase_C::OnVehiclePartAttached(class AVehiclePawn** VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bike04ExhaustBase.Bike04ExhaustBase_C.OnVehiclePartAttached");

	UBike04ExhaustBase_C_OnVehiclePartAttached_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bike04ExhaustBase.Bike04ExhaustBase_C.SetEngineSounds
struct UBike04ExhaustBase_C_SetEngineSounds_Params
{
	class USoundBase*                                  EngineSound;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  EngineStartSound;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  EngineStopSound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ABillsBike_C*                                BikeRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bike04ExhaustBase.Bike04ExhaustBase_C.OnVehiclePartAttached
struct UBike04ExhaustBase_C_OnVehiclePartAttached_Params
{
	class AVehiclePawn**                               VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

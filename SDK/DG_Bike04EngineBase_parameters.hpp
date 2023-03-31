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

// Function Bike04EngineBase.Bike04EngineBase_C.GetEngineSoundsByExhaust
struct UBike04EngineBase_C_GetEngineSoundsByExhaust_Params
{
	int                                                ExhaustNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  EngineSound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  EngineStartSound;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  EngineStopSound;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bike04EngineBase.Bike04EngineBase_C.SetEngineSounds
struct UBike04EngineBase_C_SetEngineSounds_Params
{
	int                                                ExhaustNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ABillsBike_C*                                BikeRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bike04EngineBase.Bike04EngineBase_C.OnVehiclePartAttached
struct UBike04EngineBase_C_OnVehiclePartAttached_Params
{
	class AVehiclePawn**                               VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

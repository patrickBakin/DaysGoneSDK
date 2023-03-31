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

// Function BendVehicleInterface.BendVehicleInterface_C.GetEngineSoundAsset
struct UBendVehicleInterface_C_GetEngineSoundAsset_Params
{
	class USoundBase*                                  EngineSoundAsset;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendVehicleInterface.BendVehicleInterface_C.I_SetVehicleHeadLightBrightness
struct UBendVehicleInterface_C_I_SetVehicleHeadLightBrightness_Params
{
	TEnumAsByte<EBendVehicleHeadlightBrightnessEnum>   Setting;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendVehicleInterface.BendVehicleInterface_C.I_SetBikeInCinematicMode
struct UBendVehicleInterface_C_I_SetBikeInCinematicMode_Params
{
	bool                                               ON_;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendVehicleInterface.BendVehicleInterface_C.SwitchHeadlightBrightness
struct UBendVehicleInterface_C_SwitchHeadlightBrightness_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

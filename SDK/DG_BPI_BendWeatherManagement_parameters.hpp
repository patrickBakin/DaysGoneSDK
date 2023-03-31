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

// Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetIndoors
struct UBPI_BendWeatherManagement_C_SetIndoors_Params
{
	bool                                               IsIndoors;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetWindSoundIntensity
struct UBPI_BendWeatherManagement_C_SetWindSoundIntensity_Params
{
	float                                              intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BendWeatherManagement.BPI_BendWeatherManagement_C.SetRainSoundIntensity
struct UBPI_BendWeatherManagement_C_SetRainSoundIntensity_Params
{
	float                                              intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

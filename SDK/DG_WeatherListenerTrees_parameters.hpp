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

// Function WeatherListenerTrees.WeatherListenerTrees_C.PlayAudio
struct AWeatherListenerTrees_C_PlayAudio_Params
{
};

// Function WeatherListenerTrees.WeatherListenerTrees_C.StopAudio
struct AWeatherListenerTrees_C_StopAudio_Params
{
};

// Function WeatherListenerTrees.WeatherListenerTrees_C.UserConstructionScript
struct AWeatherListenerTrees_C_UserConstructionScript_Params
{
};

// Function WeatherListenerTrees.WeatherListenerTrees_C.UpdateWeather
struct AWeatherListenerTrees_C_UpdateWeather_Params
{
};

// Function WeatherListenerTrees.WeatherListenerTrees_C.ReceiveBeginPlay
struct AWeatherListenerTrees_C_ReceiveBeginPlay_Params
{
};

// Function WeatherListenerTrees.WeatherListenerTrees_C.Every5Mins
struct AWeatherListenerTrees_C_Every5Mins_Params
{
};

// Function WeatherListenerTrees.WeatherListenerTrees_C.ExecuteUbergraph_WeatherListenerTrees
struct AWeatherListenerTrees_C_ExecuteUbergraph_WeatherListenerTrees_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time and Weather Apply Overrides
struct AAAA_TimeAndWeatherSettings_C_Time_and_Weather_Apply_Overrides_Params
{
	struct FTimeAndWeatherSettings                     InTimeAndWeather;                                         // (Parm)
	struct FTimeAndWeatherSettings                     OutTimeAndWeather;                                        // (Parm, OutParm)
};

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Lightning Event
struct AAAA_TimeAndWeatherSettings_C_Lightning_Event_Params
{
};

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Next Time and Weather Setting
struct AAAA_TimeAndWeatherSettings_C_Next_Time_and_Weather_Setting_Params
{
};

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time And Weather End
struct AAAA_TimeAndWeatherSettings_C_Time_And_Weather_End_Params
{
};

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.Time And Weather Start at Index
struct AAAA_TimeAndWeatherSettings_C_Time_And_Weather_Start_at_Index_Params
{
	int                                                StartAtIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.UserConstructionScript
struct AAAA_TimeAndWeatherSettings_C_UserConstructionScript_Params
{
};

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.ReceiveBeginPlay
struct AAAA_TimeAndWeatherSettings_C_ReceiveBeginPlay_Params
{
};

// Function AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C.ExecuteUbergraph_AAA-TimeAndWeatherSettings
struct AAAA_TimeAndWeatherSettings_C_ExecuteUbergraph_AAA_TimeAndWeatherSettings_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

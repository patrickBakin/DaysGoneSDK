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

// Function UI_WaterMeter.UI_WaterMeter_C.Construct
struct UUI_WaterMeter_C_Construct_Params
{
};

// Function UI_WaterMeter.UI_WaterMeter_C.Tick
struct UUI_WaterMeter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WaterMeter.UI_WaterMeter_C.WaterMeterStart
struct UUI_WaterMeter_C_WaterMeterStart_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WaterMeter.UI_WaterMeter_C.WaterMeterEnd
struct UUI_WaterMeter_C_WaterMeterEnd_Params
{
};

// Function UI_WaterMeter.UI_WaterMeter_C.ExecuteUbergraph_UI_WaterMeter
struct UUI_WaterMeter_C_ExecuteUbergraph_UI_WaterMeter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

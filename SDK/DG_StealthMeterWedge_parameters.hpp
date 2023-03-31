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

// Function StealthMeterWedge.StealthMeterWedge_C.TweenHatch
struct UStealthMeterWedge_C_TweenHatch_Params
{
};

// Function StealthMeterWedge.StealthMeterWedge_C.SetHatch
struct UStealthMeterWedge_C_SetHatch_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeterWedge.StealthMeterWedge_C.TweenRotation
struct UStealthMeterWedge_C_TweenRotation_Params
{
};

// Function StealthMeterWedge.StealthMeterWedge_C.SetRotation
struct UStealthMeterWedge_C_SetRotation_Params
{
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeterWedge.StealthMeterWedge_C.Init
struct UStealthMeterWedge_C_Init_Params
{
	class UMaterialInstanceDynamic*                    DMI;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StealthMeterWedge.StealthMeterWedge_C.TweenColor
struct UStealthMeterWedge_C_TweenColor_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

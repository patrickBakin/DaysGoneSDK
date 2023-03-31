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

// Function UI_MeterCircle.UI_MeterCircle_C.TweenOpacity
struct UUI_MeterCircle_C_TweenOpacity_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.TweenScale
struct UUI_MeterCircle_C_TweenScale_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.PulseThickness
struct UUI_MeterCircle_C_PulseThickness_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.TweenThickness
struct UUI_MeterCircle_C_TweenThickness_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.SetAngleStart
struct UUI_MeterCircle_C_SetAngleStart_Params
{
	float                                              AngleStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MeterCircle.UI_MeterCircle_C.SetTotalAngle
struct UUI_MeterCircle_C_SetTotalAngle_Params
{
	float                                              TotalAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MeterCircle.UI_MeterCircle_C.SetColorMainPulsing
struct UUI_MeterCircle_C_SetColorMainPulsing_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PulseTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pulsing;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MeterCircle.UI_MeterCircle_C.SetColorMain
struct UUI_MeterCircle_C_SetColorMain_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MeterCircle.UI_MeterCircle_C.TweenColorMain
struct UUI_MeterCircle_C_TweenColorMain_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.BeginSetPercentLoss
struct UUI_MeterCircle_C_BeginSetPercentLoss_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.BeginSetPercentGain
struct UUI_MeterCircle_C_BeginSetPercentGain_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.BeginSetPercentMain
struct UUI_MeterCircle_C_BeginSetPercentMain_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.OnPercentGainCurrent
struct UUI_MeterCircle_C_OnPercentGainCurrent_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.OnPercentLossCurrent
struct UUI_MeterCircle_C_OnPercentLossCurrent_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.TweenPercentGain
struct UUI_MeterCircle_C_TweenPercentGain_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.TweenPercentLoss
struct UUI_MeterCircle_C_TweenPercentLoss_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.OnPercentCurrent
struct UUI_MeterCircle_C_OnPercentCurrent_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.TweenPercentMain
struct UUI_MeterCircle_C_TweenPercentMain_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.InitMaterial
struct UUI_MeterCircle_C_InitMaterial_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.SetSegments
struct UUI_MeterCircle_C_SetSegments_Params
{
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MeterCircle.UI_MeterCircle_C.SetPercent
struct UUI_MeterCircle_C_SetPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Animate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MeterCircle.UI_MeterCircle_C.Construct
struct UUI_MeterCircle_C_Construct_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.Tick
struct UUI_MeterCircle_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MeterCircle.UI_MeterCircle_C.PercentCurrent_Event
struct UUI_MeterCircle_C_PercentCurrent_Event_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.PercentLossCurrent_Event
struct UUI_MeterCircle_C_PercentLossCurrent_Event_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.PercentGainCurrent_Event
struct UUI_MeterCircle_C_PercentGainCurrent_Event_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.ExecuteUbergraph_UI_MeterCircle
struct UUI_MeterCircle_C_ExecuteUbergraph_UI_MeterCircle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MeterCircle.UI_MeterCircle_C.PercentGainCurrent__DelegateSignature
struct UUI_MeterCircle_C_PercentGainCurrent__DelegateSignature_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.PercentLossCurrent__DelegateSignature
struct UUI_MeterCircle_C_PercentLossCurrent__DelegateSignature_Params
{
};

// Function UI_MeterCircle.UI_MeterCircle_C.PercentCurrent__DelegateSignature
struct UUI_MeterCircle_C_PercentCurrent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.DestroyIfPawnInvalid
struct UUI_GrappleMeter3_C_DestroyIfPawnInvalid_Params
{
	bool                                               Destroyed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.DebugDumpMeter
struct UUI_GrappleMeter3_C_DebugDumpMeter_Params
{
	class UUI_MeterCircle_C*                           Window;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.IfActiveCallOnComplete
struct UUI_GrappleMeter3_C_IfActiveCallOnComplete_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.SetRotatingTrue
struct UUI_GrappleMeter3_C_SetRotatingTrue_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.FlashMeter
struct UUI_GrappleMeter3_C_FlashMeter_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenResult
struct UUI_GrappleMeter3_C_TweenResult_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.BeginResultAnim
struct UUI_GrappleMeter3_C_BeginResultAnim_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenMeterColor
struct UUI_GrappleMeter3_C_TweenMeterColor_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.RandomizeWindowPositions
struct UUI_GrappleMeter3_C_RandomizeWindowPositions_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.CheckIfInWindow
struct UUI_GrappleMeter3_C_CheckIfInWindow_Params
{
	class UUI_MeterCircle_C*                           Window;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInWindow;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.BeginCloseWidget
struct UUI_GrappleMeter3_C_BeginCloseWidget_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFailHandler
struct UUI_GrappleMeter3_C_OnFailHandler_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccessHandler
struct UUI_GrappleMeter3_C_OnSuccessHandler_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.Init
struct UUI_GrappleMeter3_C_Init_Params
{
	struct FUI_GrappleMeterDetails3                    Details;                                                  // (Parm)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.CheckSuccess
struct UUI_GrappleMeter3_C_CheckSuccess_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenMeter
struct UUI_GrappleMeter3_C_TweenMeter_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.SetRotating
struct UUI_GrappleMeter3_C_SetRotating_Params
{
	bool                                               IsRotating;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPress_Event
struct UUI_GrappleMeter3_C_OnPress_Event_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnRelease_Event
struct UUI_GrappleMeter3_C_OnRelease_Event_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFail_Event
struct UUI_GrappleMeter3_C_OnFail_Event_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccess_Event
struct UUI_GrappleMeter3_C_OnSuccess_Event_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnAnimationFinished
struct UUI_GrappleMeter3_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnComplete_Event
struct UUI_GrappleMeter3_C_OnComplete_Event_Params
{
	TEnumAsByte<EUI_GrappleSuccessType>                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.Construct
struct UUI_GrappleMeter3_C_Construct_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.Tick
struct UUI_GrappleMeter3_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPercentChange_Event
struct UUI_GrappleMeter3_C_OnPercentChange_Event_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.ExecuteUbergraph_UI_GrappleMeter3
struct UUI_GrappleMeter3_C_ExecuteUbergraph_UI_GrappleMeter3_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPercentChange__DelegateSignature
struct UUI_GrappleMeter3_C_OnPercentChange__DelegateSignature_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnComplete__DelegateSignature
struct UUI_GrappleMeter3_C_OnComplete__DelegateSignature_Params
{
	TEnumAsByte<EUI_GrappleSuccessType>                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccess__DelegateSignature
struct UUI_GrappleMeter3_C_OnSuccess__DelegateSignature_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFail__DelegateSignature
struct UUI_GrappleMeter3_C_OnFail__DelegateSignature_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnRelease__DelegateSignature
struct UUI_GrappleMeter3_C_OnRelease__DelegateSignature_Params
{
};

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPress__DelegateSignature
struct UUI_GrappleMeter3_C_OnPress__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

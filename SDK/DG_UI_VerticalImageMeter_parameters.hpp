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

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetDetails
struct UUI_VerticalImageMeter_C_SetDetails_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetBGColor
struct UUI_VerticalImageMeter_C_SetBGColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetTexture
struct UUI_VerticalImageMeter_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetColors
struct UUI_VerticalImageMeter_C_SetColors_Params
{
	struct FLinearColor                                Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetPercent
struct UUI_VerticalImageMeter_C_SetPercent_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.Construct
struct UUI_VerticalImageMeter_C_Construct_Params
{
};

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.Tick
struct UUI_VerticalImageMeter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.ExecuteUbergraph_UI_VerticalImageMeter
struct UUI_VerticalImageMeter_C_ExecuteUbergraph_UI_VerticalImageMeter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.StoppedAnimating__DelegateSignature
struct UUI_VerticalImageMeter_C_StoppedAnimating__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

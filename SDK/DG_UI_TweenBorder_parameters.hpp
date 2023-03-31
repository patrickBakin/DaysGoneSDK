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

// Function UI_TweenBorder.UI_TweenBorder_C.SetAngle
struct UUI_TweenBorder_C_SetAngle_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TweenBorder.UI_TweenBorder_C.PauseTweenOpacity
struct UUI_TweenBorder_C_PauseTweenOpacity_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.SetAlignment
struct UUI_TweenBorder_C_SetAlignment_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Alignment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenAlignment
struct UUI_TweenBorder_C_TweenAlignment_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.SetScale
struct UUI_TweenBorder_C_SetScale_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TweenBorder.UI_TweenBorder_C.SetTranslation
struct UUI_TweenBorder_C_SetTranslation_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TweenBorder.UI_TweenBorder_C.SetOpacity
struct UUI_TweenBorder_C_SetOpacity_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TweenBorder.UI_TweenBorder_C.SetColor
struct UUI_TweenBorder_C_SetColor_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenVectorParameter
struct UUI_TweenBorder_C_TweenVectorParameter_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenScalarParameter
struct UUI_TweenBorder_C_TweenScalarParameter_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenPivot
struct UUI_TweenBorder_C_TweenPivot_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenAngle
struct UUI_TweenBorder_C_TweenAngle_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenScale
struct UUI_TweenBorder_C_TweenScale_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenTranslation
struct UUI_TweenBorder_C_TweenTranslation_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenOpacity
struct UUI_TweenBorder_C_TweenOpacity_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.TweenColor
struct UUI_TweenBorder_C_TweenColor_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.Construct
struct UUI_TweenBorder_C_Construct_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.ExecuteUbergraph_UI_TweenBorder
struct UUI_TweenBorder_C_ExecuteUbergraph_UI_TweenBorder_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TweenBorder.UI_TweenBorder_C.OnVectorParamEnd__DelegateSignature
struct UUI_TweenBorder_C_OnVectorParamEnd__DelegateSignature_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.OnScalarParamEnd__DelegateSignature
struct UUI_TweenBorder_C_OnScalarParamEnd__DelegateSignature_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.OnPivotEnd__DelegateSignature
struct UUI_TweenBorder_C_OnPivotEnd__DelegateSignature_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.OnAngleEnd__DelegateSignature
struct UUI_TweenBorder_C_OnAngleEnd__DelegateSignature_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.OnScaleEnd__DelegateSignature
struct UUI_TweenBorder_C_OnScaleEnd__DelegateSignature_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.OnTranslationEnd__DelegateSignature
struct UUI_TweenBorder_C_OnTranslationEnd__DelegateSignature_Params
{
};

// Function UI_TweenBorder.UI_TweenBorder_C.OnColorEnd__DelegateSignature
struct UUI_TweenBorder_C_OnColorEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

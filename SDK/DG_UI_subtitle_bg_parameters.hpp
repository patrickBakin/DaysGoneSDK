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

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetIcon
struct UUI_subtitle_bg_C_SetIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetJustification
struct UUI_subtitle_bg_C_SetJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetFont
struct UUI_subtitle_bg_C_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               // (Parm)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetTextColorWithTween
struct UUI_subtitle_bg_C_SetTextColorWithTween_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderColor
struct UUI_subtitle_bg_C_SetBorderColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetTranslationWithTween
struct UUI_subtitle_bg_C_SetTranslationWithTween_Params
{
	struct FVector2D                                   Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderColorWithTween
struct UUI_subtitle_bg_C_SetBorderColorWithTween_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.TweenBorderColor
struct UUI_subtitle_bg_C_TweenBorderColor_Params
{
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetTextColor
struct UUI_subtitle_bg_C_SetTextColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetVisible
struct UUI_subtitle_bg_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.Init
struct UUI_subtitle_bg_C_Init_Params
{
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetIconWithSize
struct UUI_subtitle_bg_C_SetIconWithSize_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderOpacity
struct UUI_subtitle_bg_C_SetBorderOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetText
struct UUI_subtitle_bg_C_SetText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.Construct
struct UUI_subtitle_bg_C_Construct_Params
{
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.Tick
struct UUI_subtitle_bg_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_subtitle_bg.UI_subtitle_bg_C.ExecuteUbergraph_UI_subtitle_bg
struct UUI_subtitle_bg_C_ExecuteUbergraph_UI_subtitle_bg_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

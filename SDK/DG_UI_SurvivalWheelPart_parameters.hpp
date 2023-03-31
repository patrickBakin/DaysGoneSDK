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

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetAttached
struct UUI_SurvivalWheelPart_C_SetAttached_Params
{
	bool                                               Attached;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetVisible
struct UUI_SurvivalWheelPart_C_SetVisible_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.TweenDistance
struct UUI_SurvivalWheelPart_C_TweenDistance_Params
{
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetDistance
struct UUI_SurvivalWheelPart_C_SetDistance_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetSelected
struct UUI_SurvivalWheelPart_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.Get_Icon_Brush_1
struct UUI_SurvivalWheelPart_C_Get_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.Tick
struct UUI_SurvivalWheelPart_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetTexture
struct UUI_SurvivalWheelPart_C_SetTexture_Params
{
	class UTexture2D*                                  tex;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SyncTexture
struct UUI_SurvivalWheelPart_C_SyncTexture_Params
{
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetTextureAsset
struct UUI_SurvivalWheelPart_C_SetTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.CustomEvent_1
struct UUI_SurvivalWheelPart_C_CustomEvent_1_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.ExecuteUbergraph_UI_SurvivalWheelPart
struct UUI_SurvivalWheelPart_C_ExecuteUbergraph_UI_SurvivalWheelPart_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

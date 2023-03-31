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

// Function UI_Challenge_Rep.UI_Challenge_Rep_C.SetTexture
struct UUI_Challenge_Rep_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rep.UI_Challenge_Rep_C.UpdatePercent
struct UUI_Challenge_Rep_C_UpdatePercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rep.UI_Challenge_Rep_C.SetDetails
struct UUI_Challenge_Rep_C_SetDetails_Params
{
	int                                                Rep_Gained;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Current_Rep;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rep_Max;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XpCount;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                XPTotal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rep.UI_Challenge_Rep_C.Construct
struct UUI_Challenge_Rep_C_Construct_Params
{
};

// Function UI_Challenge_Rep.UI_Challenge_Rep_C.Tick
struct UUI_Challenge_Rep_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rep.UI_Challenge_Rep_C.ExecuteUbergraph_UI_Challenge_Rep
struct UUI_Challenge_Rep_C_ExecuteUbergraph_UI_Challenge_Rep_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Challenge_Rep.UI_Challenge_Rep_C.FinishedAnimatingPercent__DelegateSignature
struct UUI_Challenge_Rep_C_FinishedAnimatingPercent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

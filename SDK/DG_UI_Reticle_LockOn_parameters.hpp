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

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.FattenLinesForBike
struct UUI_Reticle_LockOn_C_FattenLinesForBike_Params
{
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.TweenOuterScaleWhenOnBike
struct UUI_Reticle_LockOn_C_TweenOuterScaleWhenOnBike_Params
{
	float                                              CurrentAccuracy;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.GetReticleTightness
struct UUI_Reticle_LockOn_C_GetReticleTightness_Params
{
	float                                              ReticleTightness;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.DisplaySlowMotionIndicator
struct UUI_Reticle_LockOn_C_DisplaySlowMotionIndicator_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.SetVisible
struct UUI_Reticle_LockOn_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.TweenOuterScale
struct UUI_Reticle_LockOn_C_TweenOuterScale_Params
{
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.Tick
struct UUI_Reticle_LockOn_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.Construct
struct UUI_Reticle_LockOn_C_Construct_Params
{
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.ExecuteUbergraph_UI_Reticle_LockOn
struct UUI_Reticle_LockOn_C_ExecuteUbergraph_UI_Reticle_LockOn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_LockOn.UI_Reticle_LockOn_C.FireComplete__DelegateSignature
struct UUI_Reticle_LockOn_C_FireComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

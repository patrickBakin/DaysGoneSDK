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

// Function UI_Reticle_Shotgun.UI_Reticle_Shotgun_C.GetReticleTightness
struct UUI_Reticle_Shotgun_C_GetReticleTightness_Params
{
	float                                              ReticleTightness;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Shotgun.UI_Reticle_Shotgun_C.DisplaySlowMotionIndicator
struct UUI_Reticle_Shotgun_C_DisplaySlowMotionIndicator_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Shotgun.UI_Reticle_Shotgun_C.SetVisible
struct UUI_Reticle_Shotgun_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Shotgun.UI_Reticle_Shotgun_C.TweenOuterScale
struct UUI_Reticle_Shotgun_C_TweenOuterScale_Params
{
};

// Function UI_Reticle_Shotgun.UI_Reticle_Shotgun_C.Tick
struct UUI_Reticle_Shotgun_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Shotgun.UI_Reticle_Shotgun_C.Construct
struct UUI_Reticle_Shotgun_C_Construct_Params
{
};

// Function UI_Reticle_Shotgun.UI_Reticle_Shotgun_C.ExecuteUbergraph_UI_Reticle_Shotgun
struct UUI_Reticle_Shotgun_C_ExecuteUbergraph_UI_Reticle_Shotgun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Shotgun.UI_Reticle_Shotgun_C.FireComplete__DelegateSignature
struct UUI_Reticle_Shotgun_C_FireComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_Reticle_Assault.UI_Reticle_Assault_C.GetReticleTightness
struct UUI_Reticle_Assault_C_GetReticleTightness_Params
{
	float                                              ReticleTightness;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Assault.UI_Reticle_Assault_C.DisplaySlowMotionIndicators
struct UUI_Reticle_Assault_C_DisplaySlowMotionIndicators_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Assault.UI_Reticle_Assault_C.SetVisible
struct UUI_Reticle_Assault_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Assault.UI_Reticle_Assault_C.TweenOuterScale
struct UUI_Reticle_Assault_C_TweenOuterScale_Params
{
	class ABendPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Assault.UI_Reticle_Assault_C.Tick
struct UUI_Reticle_Assault_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Assault.UI_Reticle_Assault_C.Construct
struct UUI_Reticle_Assault_C_Construct_Params
{
};

// Function UI_Reticle_Assault.UI_Reticle_Assault_C.ExecuteUbergraph_UI_Reticle_Assault
struct UUI_Reticle_Assault_C_ExecuteUbergraph_UI_Reticle_Assault_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Assault.UI_Reticle_Assault_C.FireComplete__DelegateSignature
struct UUI_Reticle_Assault_C_FireComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

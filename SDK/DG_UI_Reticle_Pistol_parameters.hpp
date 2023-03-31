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

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.GetReticleTightness
struct UUI_Reticle_Pistol_C_GetReticleTightness_Params
{
	float                                              ReticleTightness;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.DisplayChargedIndicator
struct UUI_Reticle_Pistol_C_DisplayChargedIndicator_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.SetVisible
struct UUI_Reticle_Pistol_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.TweenOuterScale
struct UUI_Reticle_Pistol_C_TweenOuterScale_Params
{
};

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.Tick
struct UUI_Reticle_Pistol_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.Construct
struct UUI_Reticle_Pistol_C_Construct_Params
{
};

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.ExecuteUbergraph_UI_Reticle_Pistol
struct UUI_Reticle_Pistol_C_ExecuteUbergraph_UI_Reticle_Pistol_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.FireComplete__DelegateSignature
struct UUI_Reticle_Pistol_C_FireComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

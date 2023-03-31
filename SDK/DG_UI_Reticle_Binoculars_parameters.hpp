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

// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.SetShowMarkEnemiesText
struct UUI_Reticle_Binoculars_C_SetShowMarkEnemiesText_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.SetVisible
struct UUI_Reticle_Binoculars_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.Construct
struct UUI_Reticle_Binoculars_C_Construct_Params
{
};

// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.FadeFinished
struct UUI_Reticle_Binoculars_C_FadeFinished_Params
{
};

// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.Tick
struct UUI_Reticle_Binoculars_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.ExecuteUbergraph_UI_Reticle_Binoculars
struct UUI_Reticle_Binoculars_C_ExecuteUbergraph_UI_Reticle_Binoculars_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

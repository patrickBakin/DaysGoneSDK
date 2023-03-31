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

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.SetDefault
struct UUI_SkipButtonArtwork_C_SetDefault_Params
{
};

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.HideAll
struct UUI_SkipButtonArtwork_C_HideAll_Params
{
};

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.UpdateProgress
struct UUI_SkipButtonArtwork_C_UpdateProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayOptionalSkip
struct UUI_SkipButtonArtwork_C_DisplayOptionalSkip_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayStandardSkip
struct UUI_SkipButtonArtwork_C_DisplayStandardSkip_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayCannotSkip
struct UUI_SkipButtonArtwork_C_DisplayCannotSkip_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.Construct
struct UUI_SkipButtonArtwork_C_Construct_Params
{
};

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.ExecuteUbergraph_UI_SkipButtonArtwork
struct UUI_SkipButtonArtwork_C_ExecuteUbergraph_UI_SkipButtonArtwork_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

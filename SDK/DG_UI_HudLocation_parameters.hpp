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

// Function UI_HudLocation.UI_HudLocation_C.CreateProgressItem
struct UUI_HudLocation_C_CreateProgressItem_Params
{
};

// Function UI_HudLocation.UI_HudLocation_C.SetDetails
struct UUI_HudLocation_C_SetDetails_Params
{
	TEnumAsByte<Enum_HudLocation>                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       locationName;                                             // (Parm)
	float                                              PercentComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTrust;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTrustMax;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            TrustTier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCredits;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         EncampmentData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudLocation.UI_HudLocation_C.TweenVisible
struct UUI_HudLocation_C_TweenVisible_Params
{
};

// Function UI_HudLocation.UI_HudLocation_C.SetVisible
struct UUI_HudLocation_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

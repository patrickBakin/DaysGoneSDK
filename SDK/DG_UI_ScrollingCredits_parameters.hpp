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

// Function UI_ScrollingCredits.UI_ScrollingCredits_C.SetupFinalSection
struct UUI_ScrollingCredits_C_SetupFinalSection_Params
{
};

// Function UI_ScrollingCredits.UI_ScrollingCredits_C.SwitchCredits
struct UUI_ScrollingCredits_C_SwitchCredits_Params
{
};

// Function UI_ScrollingCredits.UI_ScrollingCredits_C.Tick
struct UUI_ScrollingCredits_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ScrollingCredits.UI_ScrollingCredits_C.Construct
struct UUI_ScrollingCredits_C_Construct_Params
{
};

// Function UI_ScrollingCredits.UI_ScrollingCredits_C.ExitCredits
struct UUI_ScrollingCredits_C_ExitCredits_Params
{
};

// Function UI_ScrollingCredits.UI_ScrollingCredits_C.ExecuteUbergraph_UI_ScrollingCredits
struct UUI_ScrollingCredits_C_ExecuteUbergraph_UI_ScrollingCredits_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ScrollingCredits.UI_ScrollingCredits_C.CreditsEnd__DelegateSignature
struct UUI_ScrollingCredits_C_CreditsEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

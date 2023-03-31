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

// Function UI_TitleCredits.UI_TitleCredits_C.SetPosition
struct UUI_TitleCredits_C_SetPosition_Params
{
	TEnumAsByte<Enum_AnchorPosition>                   Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TitleCredits.UI_TitleCredits_C.HideCredits
struct UUI_TitleCredits_C_HideCredits_Params
{
};

// Function UI_TitleCredits.UI_TitleCredits_C.ShowCredits
struct UUI_TitleCredits_C_ShowCredits_Params
{
};

// Function UI_TitleCredits.UI_TitleCredits_C.SetCredits
struct UUI_TitleCredits_C_SetCredits_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Name;                                                     // (Parm)
	bool                                               SlidingAnim;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TitleCredits.UI_TitleCredits_C.Construct
struct UUI_TitleCredits_C_Construct_Params
{
};

// Function UI_TitleCredits.UI_TitleCredits_C.OnAnimationFinished_Event_1
struct UUI_TitleCredits_C_OnAnimationFinished_Event_1_Params
{
};

// Function UI_TitleCredits.UI_TitleCredits_C.CloseCredits
struct UUI_TitleCredits_C_CloseCredits_Params
{
};

// Function UI_TitleCredits.UI_TitleCredits_C.ExecuteUbergraph_UI_TitleCredits
struct UUI_TitleCredits_C_ExecuteUbergraph_UI_TitleCredits_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TitleCredits.UI_TitleCredits_C.CreditComplete__DelegateSignature
struct UUI_TitleCredits_C_CreditComplete__DelegateSignature_Params
{
	class UUI_TitleCredits_C*                          Referenced;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

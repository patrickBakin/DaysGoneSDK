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

// Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.SetDetails
struct UUI_HUDObjectiveUnlocked_C_SetDetails_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FLinearColor                                AccentColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.Construct
struct UUI_HUDObjectiveUnlocked_C_Construct_Params
{
};

// Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.ExecuteUbergraph_UI_HUDObjectiveUnlocked
struct UUI_HUDObjectiveUnlocked_C_ExecuteUbergraph_UI_HUDObjectiveUnlocked_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.Init
struct UUI_JobGiverCallout2_C_Init_Params
{
};

// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.SetNewItemsAvailable
struct UUI_JobGiverCallout2_C_SetNewItemsAvailable_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.Construct
struct UUI_JobGiverCallout2_C_Construct_Params
{
};

// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.SetVisibilityOverride
struct UUI_JobGiverCallout2_C_SetVisibilityOverride_Params
{
	TEnumAsByte<ESlateVisibility>*                     VisibilityType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_JobGiverCallout2.UI_JobGiverCallout2_C.ExecuteUbergraph_UI_JobGiverCallout2
struct UUI_JobGiverCallout2_C_ExecuteUbergraph_UI_JobGiverCallout2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

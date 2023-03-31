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

// Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.SetDetails
struct UUI_ObjectiveOverrideItemRight_C_SetDetails_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.Construct
struct UUI_ObjectiveOverrideItemRight_C_Construct_Params
{
};

// Function UI_ObjectiveOverrideItemRight.UI_ObjectiveOverrideItemRight_C.ExecuteUbergraph_UI_ObjectiveOverrideItemRight
struct UUI_ObjectiveOverrideItemRight_C_ExecuteUbergraph_UI_ObjectiveOverrideItemRight_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

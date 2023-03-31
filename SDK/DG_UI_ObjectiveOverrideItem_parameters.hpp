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

// Function UI_ObjectiveOverrideItem.UI_ObjectiveOverrideItem_C.SetDetails
struct UUI_ObjectiveOverrideItem_C_SetDetails_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_ObjectiveOverrideItem.UI_ObjectiveOverrideItem_C.Construct
struct UUI_ObjectiveOverrideItem_C_Construct_Params
{
};

// Function UI_ObjectiveOverrideItem.UI_ObjectiveOverrideItem_C.ExecuteUbergraph_UI_ObjectiveOverrideItem
struct UUI_ObjectiveOverrideItem_C_ExecuteUbergraph_UI_ObjectiveOverrideItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_CategoryIcons.UI_CategoryIcons_C.SetCategory
struct UUI_CategoryIcons_C_SetCategory_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // (Parm)
	struct FText                                       DescriptionText;                                          // (Parm)
};

// Function UI_CategoryIcons.UI_CategoryIcons_C.SetSelected
struct UUI_CategoryIcons_C_SetSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryIcons.UI_CategoryIcons_C.Construct
struct UUI_CategoryIcons_C_Construct_Params
{
};

// Function UI_CategoryIcons.UI_CategoryIcons_C.ExecuteUbergraph_UI_CategoryIcons
struct UUI_CategoryIcons_C_ExecuteUbergraph_UI_CategoryIcons_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_NavBox.UI_NavBox_C.ResetSelection
struct UUI_NavBox_C_ResetSelection_Params
{
};

// Function UI_NavBox.UI_NavBox_C.SetCurrentSelection
struct UUI_NavBox_C_SetCurrentSelection_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NavBox.UI_NavBox_C.SetCurrentMenu
struct UUI_NavBox_C_SetCurrentMenu_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NavBox.UI_NavBox_C.Construct
struct UUI_NavBox_C_Construct_Params
{
};

// Function UI_NavBox.UI_NavBox_C.ExecuteUbergraph_UI_NavBox
struct UUI_NavBox_C_ExecuteUbergraph_UI_NavBox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

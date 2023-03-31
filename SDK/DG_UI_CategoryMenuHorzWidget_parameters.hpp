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

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.BuildMenuItems
struct UUI_CategoryMenuHorzWidget_C_BuildMenuItems_Params
{
};

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetCursorPosition
struct UUI_CategoryMenuHorzWidget_C_SetCursorPosition_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetSelected
struct UUI_CategoryMenuHorzWidget_C_SetSelected_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.Construct
struct UUI_CategoryMenuHorzWidget_C_Construct_Params
{
};

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SelectNext
struct UUI_CategoryMenuHorzWidget_C_SelectNext_Params
{
};

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SelectPrevious
struct UUI_CategoryMenuHorzWidget_C_SelectPrevious_Params
{
};

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.SetDesiredIndex
struct UUI_CategoryMenuHorzWidget_C_SetDesiredIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.ExecuteUbergraph_UI_CategoryMenuHorzWidget
struct UUI_CategoryMenuHorzWidget_C_ExecuteUbergraph_UI_CategoryMenuHorzWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuHorzWidget.UI_CategoryMenuHorzWidget_C.OnSelection__DelegateSignature
struct UUI_CategoryMenuHorzWidget_C_OnSelection__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

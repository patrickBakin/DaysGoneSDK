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

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.GetContainer
struct UUI_CategoryMenuWidget_C_GetContainer_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.InitWidgets
struct UUI_CategoryMenuWidget_C_InitWidgets_Params
{
};

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.CreateEntries
struct UUI_CategoryMenuWidget_C_CreateEntries_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.Construct
struct UUI_CategoryMenuWidget_C_Construct_Params
{
};

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.SetCategoryActivated
struct UUI_CategoryMenuWidget_C_SetCategoryActivated_Params
{
	bool*                                              Activated;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.Click Category
struct UUI_CategoryMenuWidget_C_Click_Category_Params
{
	int                                                CategoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.ExecuteUbergraph_UI_CategoryMenuWidget
struct UUI_CategoryMenuWidget_C_ExecuteUbergraph_UI_CategoryMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CategoryMenuWidget.UI_CategoryMenuWidget_C.BroadcastActive__DelegateSignature
struct UUI_CategoryMenuWidget_C_BroadcastActive__DelegateSignature_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

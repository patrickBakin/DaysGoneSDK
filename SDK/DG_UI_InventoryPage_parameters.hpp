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

// Function UI_InventoryPage.UI_InventoryPage_C.CircleSelectionInputGiven
struct UUI_InventoryPage_C_CircleSelectionInputGiven_Params
{
};

// Function UI_InventoryPage.UI_InventoryPage_C.Construct
struct UUI_InventoryPage_C_Construct_Params
{
};

// Function UI_InventoryPage.UI_InventoryPage_C.CrossSelectionInputGiven
struct UUI_InventoryPage_C_CrossSelectionInputGiven_Params
{
};

// Function UI_InventoryPage.UI_InventoryPage_C.R1orL1SelectionInputGiven
struct UUI_InventoryPage_C_R1orL1SelectionInputGiven_Params
{
	bool*                                              R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage.UI_InventoryPage_C.ResetHoldInput
struct UUI_InventoryPage_C_ResetHoldInput_Params
{
};

// Function UI_InventoryPage.UI_InventoryPage_C.CrossSelectionHold
struct UUI_InventoryPage_C_CrossSelectionHold_Params
{
	float*                                             HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NeverReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage.UI_InventoryPage_C.ExecuteUbergraph_UI_InventoryPage
struct UUI_InventoryPage_C_ExecuteUbergraph_UI_InventoryPage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage.UI_InventoryPage_C.OnGoToPrevPage__DelegateSignature
struct UUI_InventoryPage_C_OnGoToPrevPage__DelegateSignature_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        CurrentMenu;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage.UI_InventoryPage_C.OnGoToNextPage__DelegateSignature
struct UUI_InventoryPage_C_OnGoToNextPage__DelegateSignature_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        CurrentMenu;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

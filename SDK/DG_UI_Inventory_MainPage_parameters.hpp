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

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.UpdateSelectionDetails
struct UUI_Inventory_MainPage_C_UpdateSelectionDetails_Params
{
	class UUI_GridItem_Base_C**                        GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.Construct
struct UUI_Inventory_MainPage_C_Construct_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.CrossSelectionInputGiven
struct UUI_Inventory_MainPage_C_CrossSelectionInputGiven_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.CircleSelectionInputGiven
struct UUI_Inventory_MainPage_C_CircleSelectionInputGiven_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.DisplayAlternateNavigation
struct UUI_Inventory_MainPage_C_DisplayAlternateNavigation_Params
{
	bool*                                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.R1orL1SelectionInputGiven
struct UUI_Inventory_MainPage_C_R1orL1SelectionInputGiven_Params
{
	bool*                                              R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_2238_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Inventory_MainPage_C_BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_2238_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1520_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Inventory_MainPage_C_BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1520_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_1523_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Inventory_MainPage_C_BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_1523_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Storylines_K2Node_ComponentBoundEvent_1527_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Inventory_MainPage_C_BndEvt__MenuInteract_Storylines_K2Node_ComponentBoundEvent_1527_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.ExecuteUbergraph_UI_Inventory_MainPage
struct UUI_Inventory_MainPage_C_ExecuteUbergraph_UI_Inventory_MainPage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnMenuClicked__DelegateSignature
struct UUI_Inventory_MainPage_C_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnGoToPrevPage__DelegateSignature
struct UUI_Inventory_MainPage_C_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnGoToNextPage__DelegateSignature
struct UUI_Inventory_MainPage_C_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnRequestClose__DelegateSignature
struct UUI_Inventory_MainPage_C_OnRequestClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

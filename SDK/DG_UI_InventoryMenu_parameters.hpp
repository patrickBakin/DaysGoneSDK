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

// Function UI_InventoryMenu.UI_InventoryMenu_C.UpdateSubMenuLocations
struct UUI_InventoryMenu_C_UpdateSubMenuLocations_Params
{
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.DisplaySubmenus
struct UUI_InventoryMenu_C_DisplaySubmenus_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.GoToPageByType
struct UUI_InventoryMenu_C_GoToPageByType_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.Construct
struct UUI_InventoryMenu_C_Construct_Params
{
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.Tick
struct UUI_InventoryMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.DisplayAlternateNavigation
struct UUI_InventoryMenu_C_DisplayAlternateNavigation_Params
{
	bool*                                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.SetNavigationState
struct UUI_InventoryMenu_C_SetNavigationState_Params
{
	TEnumAsByte<EMenuTypes>*                           Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.InitStaticImages
struct UUI_InventoryMenu_C_InitStaticImages_Params
{
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.FlushStaticImages
struct UUI_InventoryMenu_C_FlushStaticImages_Params
{
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.BndEvt__UI_InventoryPage_Supplies_K2Node_ComponentBoundEvent_1071_OnGoToNextPage__DelegateSignature
struct UUI_InventoryMenu_C_BndEvt__UI_InventoryPage_Supplies_K2Node_ComponentBoundEvent_1071_OnGoToNextPage__DelegateSignature_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        CurrentMenu;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.BndEvt__UI_InventoryPage_Supplies_K2Node_ComponentBoundEvent_1073_OnGoToPrevPage__DelegateSignature
struct UUI_InventoryMenu_C_BndEvt__UI_InventoryPage_Supplies_K2Node_ComponentBoundEvent_1073_OnGoToPrevPage__DelegateSignature_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        CurrentMenu;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.BndEvt__UI_InventoryPage_Materials_K2Node_ComponentBoundEvent_1146_OnGoToNextPage__DelegateSignature
struct UUI_InventoryMenu_C_BndEvt__UI_InventoryPage_Materials_K2Node_ComponentBoundEvent_1146_OnGoToNextPage__DelegateSignature_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        CurrentMenu;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.BndEvt__UI_InventoryPage_Materials_K2Node_ComponentBoundEvent_1150_OnGoToPrevPage__DelegateSignature
struct UUI_InventoryMenu_C_BndEvt__UI_InventoryPage_Materials_K2Node_ComponentBoundEvent_1150_OnGoToPrevPage__DelegateSignature_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        CurrentMenu;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_1551_OnRequestClose__DelegateSignature
struct UUI_InventoryMenu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_1551_OnRequestClose__DelegateSignature_Params
{
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_1862_OnGoToNextPage__DelegateSignature
struct UUI_InventoryMenu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_1862_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_1869_OnGoToPrevPage__DelegateSignature
struct UUI_InventoryMenu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_1869_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_1627_OnMenuClicked__DelegateSignature
struct UUI_InventoryMenu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_1627_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.ExecuteUbergraph_UI_InventoryMenu
struct UUI_InventoryMenu_C_ExecuteUbergraph_UI_InventoryMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.OnMenuClicked__DelegateSignature
struct UUI_InventoryMenu_C_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.OnGoToPrevPage__DelegateSignature
struct UUI_InventoryMenu_C_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_InventoryMenu.UI_InventoryMenu_C.OnGoToNextPage__DelegateSignature
struct UUI_InventoryMenu_C_OnGoToNextPage__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

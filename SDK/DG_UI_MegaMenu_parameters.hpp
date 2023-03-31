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

// Function UI_MegaMenu.UI_MegaMenu_C.UpdatePanelLocations
struct UUI_MegaMenu_C_UpdatePanelLocations_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.FlushStaticImages
struct UUI_MegaMenu_C_FlushStaticImages_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.InitStaticImages
struct UUI_MegaMenu_C_InitStaticImages_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.SetCurrentMenu
struct UUI_MegaMenu_C_SetCurrentMenu_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_303_OnMenuClicked__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_303_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_810_OnMenuClicked__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_810_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1569_MenuClosed__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1569_MenuClosed__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_1593_MenuClosed__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Map_Menu_K2Node_ComponentBoundEvent_1593_MenuClosed__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_1598_MenuClosed__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_1598_MenuClosed__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_1604_MenuClosed__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_1604_MenuClosed__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1652_OnGoToNextPage__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1652_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1660_OnGoToPrevPage__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1660_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2127_OnGoToNextPage__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2127_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2137_OnGoToPrevPage__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Skills_Menu_K2Node_ComponentBoundEvent_2137_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2384_OnGoToNextPage__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2384_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2396_OnGoToPrevPage__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2396_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1678_OnMenuClicked__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Inventory_Menu_K2Node_ComponentBoundEvent_1678_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2550_OnGoToNextPage__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2550_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2565_OnGoToPrevPage__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Map_Menu_K2Node_ComponentBoundEvent_2565_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2976_OnMenuClicked__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Storylines_Menu_K2Node_ComponentBoundEvent_2976_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__Map_Menu_K2Node_ComponentBoundEvent_3169_OnMenuClicked__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__Map_Menu_K2Node_ComponentBoundEvent_3169_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MegaMenu.UI_MegaMenu_C.BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_1859_MenuClosed__DelegateSignature
struct UUI_MegaMenu_C_BndEvt__3D_Select_Left_K2Node_ComponentBoundEvent_1859_MenuClosed__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.ExecuteUbergraph_UI_MegaMenu
struct UUI_MegaMenu_C_ExecuteUbergraph_UI_MegaMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MegaMenu.UI_MegaMenu_C.OnGoToPrevPage__DelegateSignature
struct UUI_MegaMenu_C_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.OnGoToNextPage__DelegateSignature
struct UUI_MegaMenu_C_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.OnRequestClose__DelegateSignature
struct UUI_MegaMenu_C_OnRequestClose__DelegateSignature_Params
{
};

// Function UI_MegaMenu.UI_MegaMenu_C.OnMenuClicked__DelegateSignature
struct UUI_MegaMenu_C_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.SetWeaponStats
struct UUI_InventoryPage_Gear_C_SetWeaponStats_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.StoreDataByFName
struct UUI_InventoryPage_Gear_C_StoreDataByFName_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C**                        Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.DisplayStoryItemArea
struct UUI_InventoryPage_Gear_C_DisplayStoryItemArea_Params
{
	TEnumAsByte<ESlateVisibility>                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.SetTheMenuHeader
struct UUI_InventoryPage_Gear_C_SetTheMenuHeader_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.UpdateSelectionDetails
struct UUI_InventoryPage_Gear_C_UpdateSelectionDetails_Params
{
	class UUI_GridItem_Base_C**                        GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.Construct
struct UUI_InventoryPage_Gear_C_Construct_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.CircleSelectionInputGiven
struct UUI_InventoryPage_Gear_C_CircleSelectionInputGiven_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.CrossSelectionInputGiven
struct UUI_InventoryPage_Gear_C_CrossSelectionInputGiven_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.RecreateAllGrids
struct UUI_InventoryPage_Gear_C_RecreateAllGrids_Params
{
	bool*                                              DontDestroyCurrentGrids;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideDestoryIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.MenuSelected
struct UUI_InventoryPage_Gear_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.FlushStaticImages
struct UUI_InventoryPage_Gear_C_FlushStaticImages_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.InitStaticImages
struct UUI_InventoryPage_Gear_C_InitStaticImages_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.LoadImage
struct UUI_InventoryPage_Gear_C_LoadImage_Params
{
	TAssetPtr<class UTexture2D>                        Image;                                                    // (Parm)
	class UImage*                                      Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.ImageLoaded
struct UUI_InventoryPage_Gear_C_ImageLoaded_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_5609_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_5609_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_5720_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_5720_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_5723_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_5723_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_5727_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_5727_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_5921_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_5921_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.ExecuteUbergraph_UI_InventoryPage_Gear
struct UUI_InventoryPage_Gear_C_ExecuteUbergraph_UI_InventoryPage_Gear_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

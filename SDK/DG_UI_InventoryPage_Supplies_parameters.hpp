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

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CreatePocketData
struct UUI_InventoryPage_Supplies_C_CreatePocketData_Params
{
	TArray<struct FSTRUCT_MenuInventoryData>           AllPocketData;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.StoreDataByFName
struct UUI_InventoryPage_Supplies_C_StoreDataByFName_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C**                        Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.UpdateSelectionDetails
struct UUI_InventoryPage_Supplies_C_UpdateSelectionDetails_Params
{
	class UUI_GridItem_Base_C**                        GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.SetTheMenuHeader
struct UUI_InventoryPage_Supplies_C_SetTheMenuHeader_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.Construct
struct UUI_InventoryPage_Supplies_C_Construct_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.MenuSelected
struct UUI_InventoryPage_Supplies_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.RecreateAllGrids
struct UUI_InventoryPage_Supplies_C_RecreateAllGrids_Params
{
	bool*                                              DontDestroyCurrentGrids;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideDestoryIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CircleSelectionInputGiven
struct UUI_InventoryPage_Supplies_C_CircleSelectionInputGiven_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CrossSelectionInputGiven
struct UUI_InventoryPage_Supplies_C_CrossSelectionInputGiven_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.FlushStaticImages
struct UUI_InventoryPage_Supplies_C_FlushStaticImages_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.InitStaticImages
struct UUI_InventoryPage_Supplies_C_InitStaticImages_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.LoadImage
struct UUI_InventoryPage_Supplies_C_LoadImage_Params
{
	TAssetPtr<class UTexture2D>                        Image;                                                    // (Parm)
	class UImage*                                      Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.ImageLoaded
struct UUI_InventoryPage_Supplies_C_ImageLoaded_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6101_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6101_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6103_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6103_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6106_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6106_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_6143_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_6143_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6388_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6388_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.ExecuteUbergraph_UI_InventoryPage_Supplies
struct UUI_InventoryPage_Supplies_C_ExecuteUbergraph_UI_InventoryPage_Supplies_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

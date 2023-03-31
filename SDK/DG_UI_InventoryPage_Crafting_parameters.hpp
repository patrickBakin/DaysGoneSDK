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

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.StoreDataByFName
struct UUI_InventoryPage_Crafting_C_StoreDataByFName_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C**                        Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.GetDataOfItemsOfMenuType
struct UUI_InventoryPage_Crafting_C_GetDataOfItemsOfMenuType_Params
{
	struct FName*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PullFromMerchant;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PullFromMechanic;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSTRUCT_MenuInventoryData>           InventoryData;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.UpdateSelectionDetails
struct UUI_InventoryPage_Crafting_C_UpdateSelectionDetails_Params
{
	class UUI_GridItem_Base_C**                        GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.SetTheMenuHeader
struct UUI_InventoryPage_Crafting_C_SetTheMenuHeader_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.Construct
struct UUI_InventoryPage_Crafting_C_Construct_Params
{
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.MenuSelected
struct UUI_InventoryPage_Crafting_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.RecreateAllGrids
struct UUI_InventoryPage_Crafting_C_RecreateAllGrids_Params
{
	bool*                                              DontDestroyCurrentGrids;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideDestoryIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.CircleSelectionInputGiven
struct UUI_InventoryPage_Crafting_C_CircleSelectionInputGiven_Params
{
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.FlushStaticImages
struct UUI_InventoryPage_Crafting_C_FlushStaticImages_Params
{
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.InitStaticImages
struct UUI_InventoryPage_Crafting_C_InitStaticImages_Params
{
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6366_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Crafting_C_BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6366_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6368_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Crafting_C_BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6368_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6371_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Crafting_C_BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6371_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6383_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Crafting_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6383_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.ExecuteUbergraph_UI_InventoryPage_Crafting
struct UUI_InventoryPage_Crafting_C_ExecuteUbergraph_UI_InventoryPage_Crafting_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

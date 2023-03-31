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

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CreateMaterialData
struct UUI_InventoryPage_Materials_C_CreateMaterialData_Params
{
	TArray<struct FSTRUCT_MenuInventoryData>           AllPocketData;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CombineItems
struct UUI_InventoryPage_Materials_C_CombineItems_Params
{
	struct FGameplayTag                                Item;                                                     // (Parm)
	TArray<struct FSTRUCT_MenuInventoryData>           Items;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.StoreDataByFName
struct UUI_InventoryPage_Materials_C_StoreDataByFName_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C**                        Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.UpdateSelectionDetails
struct UUI_InventoryPage_Materials_C_UpdateSelectionDetails_Params
{
	class UUI_GridItem_Base_C**                        GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.SetTheMenuHeader
struct UUI_InventoryPage_Materials_C_SetTheMenuHeader_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.Construct
struct UUI_InventoryPage_Materials_C_Construct_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.RecreateAllGrids
struct UUI_InventoryPage_Materials_C_RecreateAllGrids_Params
{
	bool*                                              DontDestroyCurrentGrids;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideDestoryIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.MenuSelected
struct UUI_InventoryPage_Materials_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CircleSelectionInputGiven
struct UUI_InventoryPage_Materials_C_CircleSelectionInputGiven_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CrossSelectionInputGiven_Copy
struct UUI_InventoryPage_Materials_C_CrossSelectionInputGiven_Copy_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.FlushStaticImages
struct UUI_InventoryPage_Materials_C_FlushStaticImages_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.InitStaticImages
struct UUI_InventoryPage_Materials_C_InitStaticImages_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6354_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Materials_C_BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6354_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6356_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Materials_C_BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6356_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6359_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Materials_C_BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6359_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6378_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Materials_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6378_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.ExecuteUbergraph_UI_InventoryPage_Materials
struct UUI_InventoryPage_Materials_C_ExecuteUbergraph_UI_InventoryPage_Materials_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

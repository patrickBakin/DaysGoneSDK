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

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.UpdateIndividualData
struct UUI_StorylinesPage_Collectables_C_UpdateIndividualData_Params
{
	int                                                TypeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.StoreDataByFName
struct UUI_StorylinesPage_Collectables_C_StoreDataByFName_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C**                        Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.StoreCollectableData
struct UUI_StorylinesPage_Collectables_C_StoreCollectableData_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.UpdateSelectionDetails
struct UUI_StorylinesPage_Collectables_C_UpdateSelectionDetails_Params
{
	class UUI_GridItem_Base_C**                        GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.SetTheMenuHeader
struct UUI_StorylinesPage_Collectables_C_SetTheMenuHeader_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.Construct
struct UUI_StorylinesPage_Collectables_C_Construct_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.MenuSelected
struct UUI_StorylinesPage_Collectables_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.RecreateAllGrids
struct UUI_StorylinesPage_Collectables_C_RecreateAllGrids_Params
{
	bool*                                              DontDestroyCurrentGrids;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideDestoryIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.CrossSelectionInputGiven
struct UUI_StorylinesPage_Collectables_C_CrossSelectionInputGiven_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.CircleSelectionInputGiven
struct UUI_StorylinesPage_Collectables_C_CircleSelectionInputGiven_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.OnPlayerDiscoverCollectibleDelegate_Event_1
struct UUI_StorylinesPage_Collectables_C_OnPlayerDiscoverCollectibleDelegate_Event_1_Params
{
	class UInventoryItemCollectible*                   Collectible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.OnPostSaveGameLoaded_Collectables
struct UUI_StorylinesPage_Collectables_C_OnPostSaveGameLoaded_Collectables_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2262_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2262_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2264_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2264_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_2267_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_2267_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_2271_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_2271_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.R2orL2SelectionInputGiven
struct UUI_StorylinesPage_Collectables_C_R2orL2SelectionInputGiven_Params
{
	bool*                                              R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_5062_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_5062_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_5068_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_5068_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_5075_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_5075_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.ExecuteUbergraph_UI_StorylinesPage_Collectables
struct UUI_StorylinesPage_Collectables_C_ExecuteUbergraph_UI_StorylinesPage_Collectables_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

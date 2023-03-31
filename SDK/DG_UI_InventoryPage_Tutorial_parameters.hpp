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

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.SetDescription
struct UUI_InventoryPage_Tutorial_C_SetDescription_Params
{
	struct FText                                       Desc;                                                     // (Parm)
};

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.Construct
struct UUI_InventoryPage_Tutorial_C_Construct_Params
{
};

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.ButtonHoldComplete
struct UUI_InventoryPage_Tutorial_C_ButtonHoldComplete_Params
{
	class UUI_GridItem_Base_C**                        GridItemSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.TutorialAsyncLoadTextureAsset
struct UUI_InventoryPage_Tutorial_C_TutorialAsyncLoadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSupplies;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.CustomEvent_0_Copy
struct UUI_InventoryPage_Tutorial_C_CustomEvent_0_Copy_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6644_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_InventoryPage_Tutorial_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6644_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.CrossSelectionInputGiven
struct UUI_InventoryPage_Tutorial_C_CrossSelectionInputGiven_Params
{
};

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.ExecuteUbergraph_UI_InventoryPage_Tutorial
struct UUI_InventoryPage_Tutorial_C_ExecuteUbergraph_UI_InventoryPage_Tutorial_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

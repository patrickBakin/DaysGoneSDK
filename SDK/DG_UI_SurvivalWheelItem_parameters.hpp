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

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDetails_Internal
struct UUI_SurvivalWheelItem_C_SetDetails_Internal_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isLocked
struct UUI_SurvivalWheelItem_C_isLocked_Params
{
	bool                                               ItemIsLocked;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.IsStackFull
struct UUI_SurvivalWheelItem_C_IsStackFull_Params
{
	bool                                               Full;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.IsValidForSelection
struct UUI_SurvivalWheelItem_C_IsValidForSelection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Set Item Position
struct UUI_SurvivalWheelItem_C_Set_Item_Position_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQuantityVisible
struct UUI_SurvivalWheelItem_C_SetQuantityVisible_Params
{
	TEnumAsByte<ESlateVisibility>                      Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isMeleePart
struct UUI_SurvivalWheelItem_C_isMeleePart_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isWeaponPart
struct UUI_SurvivalWheelItem_C_isWeaponPart_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetVisible
struct UUI_SurvivalWheelItem_C_SetVisible_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isCocktail
struct UUI_SurvivalWheelItem_C_isCocktail_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetTexture
struct UUI_SurvivalWheelItem_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetAsRecipe
struct UUI_SurvivalWheelItem_C_SetAsRecipe_Params
{
	struct FInventoryMenuCraftRecipe                   Recipe;                                                   // (Parm)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.TweenDistance
struct UUI_SurvivalWheelItem_C_TweenDistance_Params
{
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDistance
struct UUI_SurvivalWheelItem_C_SetDistance_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyPosition
struct UUI_SurvivalWheelItem_C_SetQtyPosition_Params
{
	bool                                               RightSide;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetSelected
struct UUI_SurvivalWheelItem_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Construct
struct UUI_SurvivalWheelItem_C_Construct_Params
{
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Tick
struct UUI_SurvivalWheelItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyCount
struct UUI_SurvivalWheelItem_C_SetQtyCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyDescription
struct UUI_SurvivalWheelItem_C_SetQtyDescription_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ItemSelected
struct UUI_SurvivalWheelItem_C_ItemSelected_Params
{
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ItemDeselected
struct UUI_SurvivalWheelItem_C_ItemDeselected_Params
{
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetReserveCount
struct UUI_SurvivalWheelItem_C_SetReserveCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDetails
struct UUI_SurvivalWheelItem_C_SetDetails_Params
{
	class UInventoryItem**                             InInventoryItem;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ExecuteUbergraph_UI_SurvivalWheelItem
struct UUI_SurvivalWheelItem_C_ExecuteUbergraph_UI_SurvivalWheelItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

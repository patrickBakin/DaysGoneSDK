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

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenForState
struct UUI_SurvivalWheelCategory_C_TweenForState_Params
{
	TEnumAsByte<ESurvivalWheelCategoryState>           ExpansionState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetAllWeapons
struct UUI_SurvivalWheelCategory_C_GetAllWeapons_Params
{
	TArray<class ABendWeapon*>                         AllWeapons;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureExpansionIcons
struct UUI_SurvivalWheelCategory_C_ConfigureExpansionIcons_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.PolarConversion
struct UUI_SurvivalWheelCategory_C_PolarConversion_Params
{
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ShowExpansionIcons
struct UUI_SurvivalWheelCategory_C_ShowExpansionIcons_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Expansion_;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Add MB-150 Parts Expand
struct UUI_SurvivalWheelCategory_C_Add_MB_150_Parts_Expand_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetSubitemWeaponCount
struct UUI_SurvivalWheelCategory_C_GetSubitemWeaponCount_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetCrossbowAmmo
struct UUI_SurvivalWheelCategory_C_SetCrossbowAmmo_Params
{
	TEnumAsByte<EInventoryAmmoID>                      Ammo_Type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetDisplayQuantities
struct UUI_SurvivalWheelCategory_C_SetDisplayQuantities_Params
{
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reserve;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Pre;                                                      // (Parm)
	struct FText                                       post;                                                     // (Parm)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.RemoveByItem
struct UUI_SurvivalWheelCategory_C_RemoveByItem_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.DetermineSelectedItem
struct UUI_SurvivalWheelCategory_C_DetermineSelectedItem_Params
{
	class USurvivalWheelItem*                          LastValidItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.UpdateCurrentSelection
struct UUI_SurvivalWheelCategory_C_UpdateCurrentSelection_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddItemWidget
struct UUI_SurvivalWheelCategory_C_AddItemWidget_Params
{
	class UUI_SurvivalWheelItem_C*                     newItem;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UUI_SurvivalWheelItem_C*                     ItemRef;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Set Infinite Reserve Ammo
struct UUI_SurvivalWheelCategory_C_Set_Infinite_Reserve_Ammo_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Set Infinite Clip Ammo
struct UUI_SurvivalWheelCategory_C_Set_Infinite_Clip_Ammo_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemTaser?
struct UUI_SurvivalWheelCategory_C_IsItemTaser__Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Item_Taser_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddTaser
struct UUI_SurvivalWheelCategory_C_AddTaser_Params
{
	bool                                               Taser_Item_Added_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.setCategoryActiveItemLockState
struct UUI_SurvivalWheelCategory_C_setCategoryActiveItemLockState_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.getCategoryActiveItemLockState
struct UUI_SurvivalWheelCategory_C_getCategoryActiveItemLockState_Params
{
	bool                                               State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemLocked
struct UUI_SurvivalWheelCategory_C_IsItemLocked_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
	bool                                               State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.UpdateCategoryLockState
struct UUI_SurvivalWheelCategory_C_UpdateCategoryLockState_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsCategoryLocked
struct UUI_SurvivalWheelCategory_C_IsCategoryLocked_Params
{
	bool                                               State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.CanBeRepaired
struct UUI_SurvivalWheelCategory_C_CanBeRepaired_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canRepair;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               canRepairWithSkill;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsMeleeWeaponRecipe
struct UUI_SurvivalWheelCategory_C_IsMeleeWeaponRecipe_Params
{
	TArray<struct FRecipeMenuComponentCount>           RecipeComponents;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemBootKnife
struct UUI_SurvivalWheelCategory_C_IsItemBootKnife_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetBootKnife
struct UUI_SurvivalWheelCategory_C_GetBootKnife_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddBootKnife
struct UUI_SurvivalWheelCategory_C_AddBootKnife_Params
{
	class UUI_SurvivalWheelItem_C*                     Subitem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsBootKnifeActive
struct UUI_SurvivalWheelCategory_C_IsBootKnifeActive_Params
{
	bool                                               State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetFlamethrowerAmmoDisplay
struct UUI_SurvivalWheelCategory_C_SetFlamethrowerAmmoDisplay_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQuantityAndReserveVisible
struct UUI_SurvivalWheelCategory_C_SetQuantityAndReserveVisible_Params
{
	TEnumAsByte<ESlateVisibility>                      Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AdjustQuantity
struct UUI_SurvivalWheelCategory_C_AdjustQuantity_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQuantityVisible
struct UUI_SurvivalWheelCategory_C_SetQuantityVisible_Params
{
	TEnumAsByte<ESlateVisibility>                      Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetWeaponMeleeHealth
struct UUI_SurvivalWheelCategory_C_SetWeaponMeleeHealth_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.DisplayReserveQuantity
struct UUI_SurvivalWheelCategory_C_DisplayReserveQuantity_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetSubitemTimer
struct UUI_SurvivalWheelCategory_C_GetSubitemTimer_Params
{
	float                                              TimeRemaining;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ReorderItems
struct UUI_SurvivalWheelCategory_C_ReorderItems_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addCrossbowPartsExpand
struct UUI_SurvivalWheelCategory_C_addCrossbowPartsExpand_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetGuidForPart
struct UUI_SurvivalWheelCategory_C_GetGuidForPart_Params
{
	class UInventoryItem*                              PartInvItem;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryGuid                              OutGuid;                                                  // (Parm, OutParm)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.isRecipeForWeapon
struct UUI_SurvivalWheelCategory_C_isRecipeForWeapon_Params
{
	TArray<struct FRecipeMenuComponentCount>           RecipeComponents;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsMelee
struct UUI_SurvivalWheelCategory_C_ConfigureAsMelee_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMeleePartsExpand
struct UUI_SurvivalWheelCategory_C_addMeleePartsExpand_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addWeaponPartsExpand
struct UUI_SurvivalWheelCategory_C_addWeaponPartsExpand_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMeleeParts
struct UUI_SurvivalWheelCategory_C_addMeleeParts_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addCrossbowParts
struct UUI_SurvivalWheelCategory_C_addCrossbowParts_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addWeaponParts
struct UUI_SurvivalWheelCategory_C_addWeaponParts_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsWeaponExpand
struct UUI_SurvivalWheelCategory_C_ConfigureAsWeaponExpand_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMedKit
struct UUI_SurvivalWheelCategory_C_addMedKit_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetConsumable
struct UUI_SurvivalWheelCategory_C_SetConsumable_Params
{
	class UInventoryItem*                              Consumable;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddHealthSubitem
struct UUI_SurvivalWheelCategory_C_AddHealthSubitem_Params
{
	TEnumAsByte<EPlayerAttributeType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetItemBgColor
struct UUI_SurvivalWheelCategory_C_SetItemBgColor_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetParts
struct UUI_SurvivalWheelCategory_C_SetParts_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetRecipes
struct UUI_SurvivalWheelCategory_C_SetRecipes_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.HasDetails
struct UUI_SurvivalWheelCategory_C_HasDetails_Params
{
	bool                                               HasDetails;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ToggleWeaponParts
struct UUI_SurvivalWheelCategory_C_ToggleWeaponParts_Params
{
	bool                                               Open;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddPart
struct UUI_SurvivalWheelCategory_C_AddPart_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryStorageWeaponPart                 Part;                                                     // (Parm)
	class UUI_SurvivalWheelPart_C*                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenBgColor
struct UUI_SurvivalWheelCategory_C_TweenBgColor_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetIconTexture
struct UUI_SurvivalWheelCategory_C_SetIconTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenAngle
struct UUI_SurvivalWheelCategory_C_TweenAngle_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetAngle
struct UUI_SurvivalWheelCategory_C_SetAngle_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetSubitemPositions
struct UUI_SurvivalWheelCategory_C_SetSubitemPositions_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Clear
struct UUI_SurvivalWheelCategory_C_Clear_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsBait
struct UUI_SurvivalWheelCategory_C_ConfigureAsBait_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsTraps
struct UUI_SurvivalWheelCategory_C_ConfigureAsTraps_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddItemSubitem
struct UUI_SurvivalWheelCategory_C_AddItemSubitem_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelItem_C*                     Subitem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddSubitem
struct UUI_SurvivalWheelCategory_C_AddSubitem_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelItem_C*                     Subitem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsHealth
struct UUI_SurvivalWheelCategory_C_ConfigureAsHealth_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsThrowables
struct UUI_SurvivalWheelCategory_C_ConfigureAsThrowables_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetWeapon
struct UUI_SurvivalWheelCategory_C_SetWeapon_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Construct
struct UUI_SurvivalWheelCategory_C_Construct_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Tick
struct UUI_SurvivalWheelCategory_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQtyText
struct UUI_SurvivalWheelCategory_C_SetQtyText_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetReserveCount
struct UUI_SurvivalWheelCategory_C_SetReserveCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.PreSaveGameLoaded
struct UUI_SurvivalWheelCategory_C_PreSaveGameLoaded_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSelected
struct UUI_SurvivalWheelCategory_C_OnSelected_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnDeselected
struct UUI_SurvivalWheelCategory_C_OnDeselected_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnOpened
struct UUI_SurvivalWheelCategory_C_OnOpened_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnClosed
struct UUI_SurvivalWheelCategory_C_OnClosed_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnPreviewed
struct UUI_SurvivalWheelCategory_C_OnPreviewed_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnItemSelected
struct UUI_SurvivalWheelCategory_C_OnItemSelected_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnInputModeChanged
struct UUI_SurvivalWheelCategory_C_OnInputModeChanged_Params
{
	bool*                                              bUsingMouseInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ExecuteUbergraph_UI_SurvivalWheelCategory
struct UUI_SurvivalWheelCategory_C_ExecuteUbergraph_UI_SurvivalWheelCategory_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsOpening__DelegateSignature
struct UUI_SurvivalWheelCategory_C_OnSubitemsOpening__DelegateSignature_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsClosed__DelegateSignature
struct UUI_SurvivalWheelCategory_C_OnSubitemsClosed__DelegateSignature_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsOpened__DelegateSignature
struct UUI_SurvivalWheelCategory_C_OnSubitemsOpened__DelegateSignature_Params
{
};

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnCategorySelected__DelegateSignature
struct UUI_SurvivalWheelCategory_C_OnCategorySelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

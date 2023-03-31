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

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.RefreshData
struct UUI_SurvivalWheel_C_RefreshData_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateWeaponPart
struct UUI_SurvivalWheel_C_UpdateWeaponPart_Params
{
	class UUI_SurvivalWheelCategory_C*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelItem_C*                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ItemAddedToInventory
struct UUI_SurvivalWheel_C_ItemAddedToInventory_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ItemRemovedFromInventory
struct UUI_SurvivalWheel_C_ItemRemovedFromInventory_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Set Category Item Description
struct UUI_SurvivalWheel_C_Set_Category_Item_Description_Params
{
	int                                                CategoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USurvivalWheelCategory*                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CategoryItemIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class USurvivalWheelItem*                          Category_Item;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Set Category Description
struct UUI_SurvivalWheel_C_Set_Category_Description_Params
{
	int                                                CategoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USurvivalWheelCategory*                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Does Category Have Items?
struct UUI_SurvivalWheel_C_Does_Category_Have_Items__Params
{
	class USurvivalWheelCategory*                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Items;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCraftableWeapon
struct UUI_SurvivalWheel_C_GetCraftableWeapon_Params
{
	class UUI_SurvivalWheelCategory_C*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelItem_C*                     Child_Category;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChild;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CheckValidEquipAnim
struct UUI_SurvivalWheel_C_CheckValidEquipAnim_Params
{
	TEnumAsByte<EInventoryBaseType>                    CategoryType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.PostCraftCallback
struct UUI_SurvivalWheel_C_PostCraftCallback_Params
{
	class ABendWeapon*                                 NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.StartCraftUnequip
struct UUI_SurvivalWheel_C_StartCraftUnequip_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsSubitemValid
struct UUI_SurvivalWheel_C_IsSubitemValid_Params
{
	class UUI_SurvivalWheelCategory_C*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelItem_C*                     childCategory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCurrentWeaponWheelIndex
struct UUI_SurvivalWheel_C_GetCurrentWeaponWheelIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.DisplayInventoryFull
struct UUI_SurvivalWheel_C_DisplayInventoryFull_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsInventoryFull
struct UUI_SurvivalWheel_C_IsInventoryFull_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftingFailed
struct UUI_SurvivalWheel_C_CraftingFailed_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateHoldIndicator
struct UUI_SurvivalWheel_C_UpdateHoldIndicator_Params
{
	float                                              ExpansionPercent;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetSubitemSelection
struct UUI_SurvivalWheel_C_SetSubitemSelection_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetCategoryArc
struct UUI_SurvivalWheel_C_SetCategoryArc_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetWeaponAmmo
struct UUI_SurvivalWheel_C_SetWeaponAmmo_Params
{
	class UUI_SurvivalWheelItem_C*                     childCategory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetDrift
struct UUI_SurvivalWheel_C_SetDrift_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsPlayerDead
struct UUI_SurvivalWheel_C_IsPlayerDead_Params
{
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftMeleeWeapon
struct UUI_SurvivalWheel_C_CraftMeleeWeapon_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetWeaponPartDetails
struct UUI_SurvivalWheel_C_SetWeaponPartDetails_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.AttachWeaponPart
struct UUI_SurvivalWheel_C_AttachWeaponPart_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelItem_C*                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCategoryAtIndex
struct UUI_SurvivalWheel_C_GetCategoryAtIndex_Params
{
	int                                                CategoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelCategory_C*                 Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChild;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelItem_C*                     childCategory;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ChildIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               subItemsOpen;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               hasSubItems;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CallCraftRecipe
struct UUI_SurvivalWheel_C_CallCraftRecipe_Params
{
	class UUI_SurvivalWheelItem_C*                     currentItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentItemIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CallCraftMeleeWeapon
struct UUI_SurvivalWheel_C_CallCraftMeleeWeapon_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelCategory_C*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemRecipe*                        Recipe;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetCategorySubitem
struct UUI_SurvivalWheel_C_SetCategorySubitem_Params
{
	class USurvivalWheelCategory*                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UseCurrentItem
struct UUI_SurvivalWheel_C_UseCurrentItem_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetSubitemConsumable
struct UUI_SurvivalWheel_C_GetSubitemConsumable_Params
{
	int                                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelCategory_C*                 categoryWidget;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UInventoryItemConsumable*                    Consumable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetSubitemWeapon
struct UUI_SurvivalWheel_C_GetSubitemWeapon_Params
{
	int                                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUI_SurvivalWheelCategory_C*                 categoryWidget;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCategoryTranslation
struct UUI_SurvivalWheel_C_GetCategoryTranslation_Params
{
	class UUI_SurvivalWheelCategory_C*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Translation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CheckRepairable
struct UUI_SurvivalWheel_C_CheckRepairable_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeRepaired;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HealthNot100;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HaveScrap;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasSkill;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.PerformHoldFunction
struct UUI_SurvivalWheel_C_PerformHoldFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HideHoldAnim
struct UUI_SurvivalWheel_C_HideHoldAnim_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ShowHoldAnim
struct UUI_SurvivalWheel_C_ShowHoldAnim_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftRecipe
struct UUI_SurvivalWheel_C_CraftRecipe_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleFacebuttonRelease
struct UUI_SurvivalWheel_C_HandleFacebuttonRelease_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR2Release
struct UUI_SurvivalWheel_C_HandleR2Release_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OpenDetails
struct UUI_SurvivalWheel_C_OpenDetails_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UseConsumable
struct UUI_SurvivalWheel_C_UseConsumable_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.RepairWeapon
struct UUI_SurvivalWheel_C_RepairWeapon_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR2Press
struct UUI_SurvivalWheel_C_HandleR2Press_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetAmmo
struct UUI_SurvivalWheel_C_SetAmmo_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Reset
struct UUI_SurvivalWheel_C_Reset_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR1Press
struct UUI_SurvivalWheel_C_HandleR1Press_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateDescription
struct UUI_SurvivalWheel_C_UpdateDescription_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.EquipItem
struct UUI_SurvivalWheel_C_EquipItem_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Initialize
struct UUI_SurvivalWheel_C_Initialize_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetActive
struct UUI_SurvivalWheel_C_SetActive_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateCategories
struct UUI_SurvivalWheel_C_UpdateCategories_Params
{
	int                                                Category_Index;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Construct
struct UUI_SurvivalWheel_C_Construct_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Tick
struct UUI_SurvivalWheel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Crafting Complete
struct UUI_SurvivalWheel_C_Crafting_Complete_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Consumable Used
struct UUI_SurvivalWheel_C_Consumable_Used_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Event On Crafting Failed
struct UUI_SurvivalWheel_C_Event_On_Crafting_Failed_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_120_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_SurvivalWheel_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_120_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnWeaponPartAttachedDetached
struct UUI_SurvivalWheel_C_OnWeaponPartAttachedDetached_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeaponPart*                             Part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnPlayerRespawned
struct UUI_SurvivalWheel_C_OnPlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnInventoryModified
struct UUI_SurvivalWheel_C_OnInventoryModified_Params
{
	struct FInventoryOperation                         Operation;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategorySelected
struct UUI_SurvivalWheel_C_CategorySelected_Params
{
	int*                                               CategoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USurvivalWheelCategory**                     Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategoryHighlighted
struct UUI_SurvivalWheel_C_CategoryHighlighted_Params
{
	int*                                               CategoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USurvivalWheelCategory**                     Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategoryItemSelected
struct UUI_SurvivalWheel_C_CategoryItemSelected_Params
{
	int*                                               CategoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USurvivalWheelCategory**                     Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CategoryItemIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class USurvivalWheelItem**                         Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.RegisterEventListeners
struct UUI_SurvivalWheel_C_RegisterEventListeners_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveOnOpenCategoryPressed
struct UUI_SurvivalWheel_C_ReceiveOnOpenCategoryPressed_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveOnValidAnalogInput
struct UUI_SurvivalWheel_C_ReceiveOnValidAnalogInput_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveCraftReleased
struct UUI_SurvivalWheel_C_ReceiveCraftReleased_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveCraftPressed
struct UUI_SurvivalWheel_C_ReceiveCraftPressed_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveUseReleased
struct UUI_SurvivalWheel_C_ReceiveUseReleased_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveUsePressed
struct UUI_SurvivalWheel_C_ReceiveUsePressed_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ExecuteUbergraph_UI_SurvivalWheel
struct UUI_SurvivalWheel_C_ExecuteUbergraph_UI_SurvivalWheel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCraftingFailed__DelegateSignature
struct UUI_SurvivalWheel_C_OnCraftingFailed__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnConsumableUsed__DelegateSignature
struct UUI_SurvivalWheel_C_OnConsumableUsed__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCraftingComplete__DelegateSignature
struct UUI_SurvivalWheel_C_OnCraftingComplete__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSubCategoryOpened__DelegateSignature
struct UUI_SurvivalWheel_C_OnSubCategoryOpened__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR1Released__DelegateSignature
struct UUI_SurvivalWheel_C_OnR1Released__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnDPadPressed__DelegateSignature
struct UUI_SurvivalWheel_C_OnDPadPressed__DelegateSignature_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR2Released__DelegateSignature
struct UUI_SurvivalWheel_C_OnR2Released__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnTriangleReleased__DelegateSignature
struct UUI_SurvivalWheel_C_OnTriangleReleased__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCircleReleased__DelegateSignature
struct UUI_SurvivalWheel_C_OnCircleReleased__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSquareReleased__DelegateSignature
struct UUI_SurvivalWheel_C_OnSquareReleased__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCrossReleased__DelegateSignature
struct UUI_SurvivalWheel_C_OnCrossReleased__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR2Pressed__DelegateSignature
struct UUI_SurvivalWheel_C_OnR2Pressed__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnItemChanged__DelegateSignature
struct UUI_SurvivalWheel_C_OnItemChanged__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCategoryChanged__DelegateSignature
struct UUI_SurvivalWheel_C_OnCategoryChanged__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnTrianglePressed__DelegateSignature
struct UUI_SurvivalWheel_C_OnTrianglePressed__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCirclePressed__DelegateSignature
struct UUI_SurvivalWheel_C_OnCirclePressed__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCrossPressed__DelegateSignature
struct UUI_SurvivalWheel_C_OnCrossPressed__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSquarePressed__DelegateSignature
struct UUI_SurvivalWheel_C_OnSquarePressed__DelegateSignature_Params
{
};

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR1Pressed__DelegateSignature
struct UUI_SurvivalWheel_C_OnR1Pressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

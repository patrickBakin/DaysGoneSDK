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

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetVector2DFromIndex
struct UUI_MenuPage_Base_C_GetVector2DFromIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Vector;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.BindMouseInteractions
struct UUI_MenuPage_Base_C_BindMouseInteractions_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.DestroyAllGrids
struct UUI_MenuPage_Base_C_DestroyAllGrids_Params
{
	int                                                OverrideDestroyIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.FlushStaticImages
struct UUI_MenuPage_Base_C_FlushStaticImages_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.InitStaticImages
struct UUI_MenuPage_Base_C_InitStaticImages_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.DisplayAlternateNavigation
struct UUI_MenuPage_Base_C_DisplayAlternateNavigation_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CheckBikePartTrophy
struct UUI_MenuPage_Base_C_CheckBikePartTrophy_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetPlayerGunFromWeaponID
struct UUI_MenuPage_Base_C_SetPlayerGunFromWeaponID_Params
{
	TEnumAsByte<EInventoryWeaponID>                    WeaponID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetWeaponToAddPartTo
struct UUI_MenuPage_Base_C_GetWeaponToAddPartTo_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 WeaponToAddTo;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CanWeaponPartGoOnAnyOfMyGuns
struct UUI_MenuPage_Base_C_CanWeaponPartGoOnAnyOfMyGuns_Params
{
	class UInventoryItem*                              InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanGoOnGuns;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleEventCall
struct UUI_MenuPage_Base_C_HandleEventCall_Params
{
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.TriangleSelectionHold
struct UUI_MenuPage_Base_C_TriangleSelectionHold_Params
{
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeverReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CircleSelectionHold
struct UUI_MenuPage_Base_C_CircleSelectionHold_Params
{
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeverReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SquareSelectionHold
struct UUI_MenuPage_Base_C_SquareSelectionHold_Params
{
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeverReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.FigureOutValidBikeCategories
struct UUI_MenuPage_Base_C_FigureOutValidBikeCategories_Params
{
	TEnumAsByte<EBikePartMenuCategory>                 Categories;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetBikeDataOfType
struct UUI_MenuPage_Base_C_GetBikeDataOfType_Params
{
	TArray<struct FSTRUCT_MenuInventoryData>           TheData;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.MessageWeaponLoadedToCurrentPage
struct UUI_MenuPage_Base_C_MessageWeaponLoadedToCurrentPage_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.RecreateAllGrids
struct UUI_MenuPage_Base_C_RecreateAllGrids_Params
{
	bool                                               DontDestroyCurrentGrids;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverrideDestoryIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PurchaseSelection
struct UUI_MenuPage_Base_C_PurchaseSelection_Params
{
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetAmmoDataOfSpecialIndexAmmoGrid
struct UUI_MenuPage_Base_C_GetAmmoDataOfSpecialIndexAmmoGrid_Params
{
	class UInventoryWeaponItem*                        OverrideInventoryWeaponItem;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverrideSpecialIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 OverrideGun;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasWeapon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBuyAmmo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoOwned;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CostToFill;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoToAdd;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPartialFill;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       AmmoName;                                                 // (Parm, OutParm)
	struct FText                                       AmmoDescription;                                          // (Parm, OutParm)
	TEnumAsByte<EInventoryAmmoID>                      AmmoID1;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Weapon1;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ClipCurrentCount1;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ClipMaxCount1;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetAffordanceOfCurrentGridItem
struct UUI_MenuPage_Base_C_GetAffordanceOfCurrentGridItem_Params
{
	bool                                               CanAfford;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TotalCost;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PartialAmountGiven;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               InventoryFull;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CountCurrent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CountMax;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SquareSelectionInputGiven
struct UUI_MenuPage_Base_C_SquareSelectionInputGiven_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.TriangleSelectionInputGiven
struct UUI_MenuPage_Base_C_TriangleSelectionInputGiven_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SpecialMapMenuInput
struct UUI_MenuPage_Base_C_SpecialMapMenuInput_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.R2orL2SelectionInputGiven
struct UUI_MenuPage_Base_C_R2orL2SelectionInputGiven_Params
{
	bool                                               R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.DoesItemHaveTag
struct UUI_MenuPage_Base_C_DoesItemHaveTag_Params
{
	class UInventoryItem*                              ItemRef;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasTag;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.StoreDataByFName
struct UUI_MenuPage_Base_C_StoreDataByFName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C*                         Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HighlightPreviousGridScrollValue
struct UUI_MenuPage_Base_C_HighlightPreviousGridScrollValue_Params
{
	class UUI_GridItem_Base_C*                         GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.JumpToZeroOnAnyHorizontalInput
struct UUI_MenuPage_Base_C_JumpToZeroOnAnyHorizontalInput_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetScrollBarSettings
struct UUI_MenuPage_Base_C_SetScrollBarSettings_Params
{
	class UScrollBox*                                  Scroll_Box;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinIndexOfScrollBox;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScrollBuffer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowGridJumping;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.ButtonHoldComplete
struct UUI_MenuPage_Base_C_ButtonHoldComplete_Params
{
	class UUI_GridItem_Base_C*                         GridItemSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetDataOfItemsOfMenuType
struct UUI_MenuPage_Base_C_GetDataOfItemsOfMenuType_Params
{
	struct FName                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PullFromMerchant;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PullFromMechanic;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSTRUCT_MenuInventoryData>           InventoryData;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.StoreAllIItemDataByTag
struct UUI_MenuPage_Base_C_StoreAllIItemDataByTag_Params
{
	struct FVector2D                                   InitialStartValue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           EndGridValues;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               VerticalGrid;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               DataType;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               HadEnoughSlots;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CreateGridsFromValues
struct UUI_MenuPage_Base_C_CreateGridsFromValues_Params
{
	TArray<struct FVector2D>                           GridSizes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              GridClass;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UGridPanel*>                          GridPanel;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               GridsVertical;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.UpdateSelectionDetails
struct UUI_MenuPage_Base_C_UpdateSelectionDetails_Params
{
	class UUI_GridItem_Base_C*                         GridItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetTheMenuHeader
struct UUI_MenuPage_Base_C_SetTheMenuHeader_Params
{
	TEnumAsByte<ENUM_Menu_Type>                        Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.MenuSelected
struct UUI_MenuPage_Base_C_MenuSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.ResetHoldInput
struct UUI_MenuPage_Base_C_ResetHoldInput_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CrossSelectionHold
struct UUI_MenuPage_Base_C_CrossSelectionHold_Params
{
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeverReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetMenuReference
struct UUI_MenuPage_Base_C_SetMenuReference_Params
{
	class UUI_Menu_Base_C*                             Reference;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.R1orL1SelectionInputGiven
struct UUI_MenuPage_Base_C_R1orL1SelectionInputGiven_Params
{
	bool                                               R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CircleSelectionInputGiven
struct UUI_MenuPage_Base_C_CircleSelectionInputGiven_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CrossSelectionInputGiven
struct UUI_MenuPage_Base_C_CrossSelectionInputGiven_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetIndexFromVector2D
struct UUI_MenuPage_Base_C_GetIndexFromVector2D_Params
{
	struct FVector2D                                   Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.UpdateSelectedWidget
struct UUI_MenuPage_Base_C_UpdateSelectedWidget_Params
{
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Widget_Index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetPageActive
struct UUI_MenuPage_Base_C_SetPageActive_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetMaxGridValues
struct UUI_MenuPage_Base_C_SetMaxGridValues_Params
{
	struct FVector2D                                   XAndY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.DirectionalInputGiven
struct UUI_MenuPage_Base_C_DirectionalInputGiven_Params
{
	struct FVector2D                                   DirectionalInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.Construct
struct UUI_MenuPage_Base_C_Construct_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.AddWeaponNewCall
struct UUI_MenuPage_Base_C_AddWeaponNewCall_Params
{
	TEnumAsByte<EInventoryWeaponID>                    WeaponID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayExitSound
struct UUI_MenuPage_Base_C_PlayExitSound_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayEnterSound
struct UUI_MenuPage_Base_C_PlayEnterSound_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlaySelectSound
struct UUI_MenuPage_Base_C_PlaySelectSound_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayTutorialExitSound
struct UUI_MenuPage_Base_C_PlayTutorialExitSound_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.AsyncLoadTextureAsset
struct UUI_MenuPage_Base_C_AsyncLoadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleAssetLoaded
struct UUI_MenuPage_Base_C_HandleAssetLoaded_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.AsyncLoadTextureAsset_Material
struct UUI_MenuPage_Base_C_AsyncLoadTextureAsset_Material_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeInWhenLoaded;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleTextureLoaded
struct UUI_MenuPage_Base_C_HandleTextureLoaded_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.UnloadTextureAsset
struct UUI_MenuPage_Base_C_UnloadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.NewWeaponFinishedSpawning
struct UUI_MenuPage_Base_C_NewWeaponFinishedSpawning_Params
{
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseHover
struct UUI_MenuPage_Base_C_HandleMouseHover_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseClick
struct UUI_MenuPage_Base_C_HandleMouseClick_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseHold
struct UUI_MenuPage_Base_C_HandleMouseHold_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMousePress
struct UUI_MenuPage_Base_C_HandleMousePress_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.ExecuteUbergraph_UI_MenuPage_Base
struct UUI_MenuPage_Base_C_ExecuteUbergraph_UI_MenuPage_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.OnTextureLoaded__DelegateSignature
struct UUI_MenuPage_Base_C_OnTextureLoaded__DelegateSignature_Params
{
	bool                                               Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.OnItemSelectedDispatcher__DelegateSignature
struct UUI_MenuPage_Base_C_OnItemSelectedDispatcher__DelegateSignature_Params
{
	class UInventoryItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

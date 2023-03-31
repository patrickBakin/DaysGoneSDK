#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_MenuPage_Base.UI_MenuPage_Base_C
// 0x0101 (0x0349 - 0x0248)
class UUI_MenuPage_Base_C : public UGridMenuPage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector2D                                   CurrentGridValue;                                         // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PreviousGridValue;                                        // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaxGridValues;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentlyActiveWidget;                                    // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<class UUI_GridItem_Base_C*>                 GridItems;                                                // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UUI_Menu_Base_C*                             BaseMenuReference;                                        // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldTimeRequired;                                         // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CrossHoldInputBlocked;                                    // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SquareHoldInputBlocked;                                   // 0x028D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriangleHoldInputBlocked;                                 // 0x028E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CircleHoldInputBlocked;                                   // 0x028F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ENUM_Menu_Type>                        Menu_Type;                                                // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           DynamicGridCreationSizes;                                 // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UScrollBox*                                  ScrollBoxRef;                                             // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinIndexOfScrollBox;                                      // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HorizInputMakesZeroOnY;                                   // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	int                                                ScrollBuffer;                                             // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GridJumping;                                              // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSelectBlankGrids;                                      // 0x02BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02BE(0x0002) MISSED OFFSET
	TArray<float>                                      ItemBuyCostModifier;                                      // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUI_GridItem_Base_C*                         CurrentlySelectedGridItem;                                // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                L2R2_WhatPageIndexAmIOn;                                  // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                L2R2_MaxPageIndex;                                        // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponDoneLoading;                                        // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DontRecreateGridOnNextAttempt;                            // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x02E2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemSelectedDispatcher;                                 // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FInventoryStorageWeaponPart>         PartsForWeapon;                                           // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABendWeapon*                                 WeaponForParts;                                           // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMechanic;                                               // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            NavMenuType;                                              // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0312(0x0006) MISSED OFFSET
	TArray<struct FSTRUCT_TextureRequest_UMG_Image>    PendingAsyncLoadRequests;                                 // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSTRUCT_TextureRequest_Menu_Material> PendingAsyncLoadRequestsMID;                              // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnTextureLoaded;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SkipNextDirectionalSound;                                 // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MenuPage_Base.UI_MenuPage_Base_C");
		return ptr;
	}


	void GetVector2DFromIndex(int Index, struct FVector2D* Vector);
	void BindMouseInteractions();
	void DestroyAllGrids(int OverrideDestroyIndex);
	void FlushStaticImages();
	void InitStaticImages();
	void DisplayAlternateNavigation(bool State);
	void CheckBikePartTrophy(class UInventoryItem* InventoryItem);
	void SetPlayerGunFromWeaponID(TEnumAsByte<EInventoryWeaponID> WeaponID);
	void GetWeaponToAddPartTo(class UInventoryItem* InventoryItem, class ABendWeapon** WeaponToAddTo);
	void CanWeaponPartGoOnAnyOfMyGuns(class UInventoryItem* InventoryItem, bool* CanGoOnGuns);
	void HandleEventCall(int Cost);
	void TriangleSelectionHold(float HoldTime, bool NeverReset);
	void CircleSelectionHold(float HoldTime, bool NeverReset);
	void SquareSelectionHold(float HoldTime, bool NeverReset);
	void FigureOutValidBikeCategories(TEnumAsByte<EBikePartMenuCategory> Categories, bool* Success);
	void GetBikeDataOfType(TArray<struct FSTRUCT_MenuInventoryData>* TheData);
	void MessageWeaponLoadedToCurrentPage();
	void RecreateAllGrids(bool DontDestroyCurrentGrids, int OverrideDestoryIndex);
	void PurchaseSelection(int Cost);
	void GetAmmoDataOfSpecialIndexAmmoGrid(class UInventoryWeaponItem* OverrideInventoryWeaponItem, int OverrideSpecialIndex, class ABendWeapon* OverrideGun, bool* HasWeapon, bool* CanBuyAmmo, int* AmmoOwned, int* AmmoMax, int* CostToFill, int* AmmoToAdd, bool* IsPartialFill, struct FText* AmmoName, struct FText* AmmoDescription, TEnumAsByte<EInventoryAmmoID>* AmmoID1, class ABendWeapon** Weapon1, int* ClipCurrentCount1, int* ClipMaxCount1);
	void GetAffordanceOfCurrentGridItem(bool* CanAfford, int* TotalCost, bool* PartialAmountGiven, bool* InventoryFull, int* CountCurrent, int* CountMax);
	void SquareSelectionInputGiven();
	void TriangleSelectionInputGiven();
	void SpecialMapMenuInput();
	void R2orL2SelectionInputGiven(bool R2);
	void DoesItemHaveTag(class UInventoryItem* ItemRef, const struct FName& Tag, bool* HasTag);
	void StoreDataByFName(const struct FName& Name, class UUI_GridItem_Base_C* Grid_Item, int Index, bool* Success);
	void HighlightPreviousGridScrollValue(class UUI_GridItem_Base_C* GridItem);
	void JumpToZeroOnAnyHorizontalInput();
	void SetScrollBarSettings(class UScrollBox* Scroll_Box, int MinIndexOfScrollBox, int ScrollBuffer, bool AllowGridJumping);
	void ButtonHoldComplete(class UUI_GridItem_Base_C* GridItemSelected);
	void GetDataOfItemsOfMenuType(const struct FName& Type, bool PullFromMerchant, bool PullFromMechanic, TArray<struct FSTRUCT_MenuInventoryData>* InventoryData);
	void StoreAllIItemDataByTag(const struct FVector2D& InitialStartValue, bool VerticalGrid, TArray<struct FVector2D>* EndGridValues, TArray<struct FName>* DataType, bool* HadEnoughSlots);
	void CreateGridsFromValues(TArray<struct FVector2D> GridSizes, bool GridsVertical, TArray<class UClass*>* GridClass, TArray<class UGridPanel*>* GridPanel);
	void UpdateSelectionDetails(class UUI_GridItem_Base_C* GridItem, bool* Success);
	void SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type> Category, bool* Success);
	void MenuSelected(bool Selected);
	void ResetHoldInput();
	void CrossSelectionHold(float HoldTime, bool NeverReset);
	void SetMenuReference(class UUI_Menu_Base_C* Reference);
	void R1orL1SelectionInputGiven(bool R2);
	void CircleSelectionInputGiven();
	void CrossSelectionInputGiven();
	void GetIndexFromVector2D(const struct FVector2D& Vector, int* Index);
	void UpdateSelectedWidget(bool IsSelected, int Widget_Index);
	void SetPageActive(bool Active);
	void SetMaxGridValues(const struct FVector2D& XAndY);
	void DirectionalInputGiven(const struct FVector2D& DirectionalInput);
	void Construct();
	void AddWeaponNewCall(TEnumAsByte<EInventoryWeaponID> WeaponID);
	void PlayExitSound();
	void PlayEnterSound();
	void PlaySelectSound();
	void PlayTutorialExitSound();
	void AsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize);
	void HandleAssetLoaded(TAssetPtr<class UObject> ObjectAssetPtr);
	void AsyncLoadTextureAsset_Material(TAssetPtr<class UTexture2D> TextureAsset, class UMaterialInstanceDynamic* Mid, bool FadeInWhenLoaded);
	void HandleTextureLoaded(TAssetPtr<class UObject> ObjectAssetPtr);
	void UnloadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset);
	void NewWeaponFinishedSpawning();
	void HandleMouseHover(int Index);
	void HandleMouseClick(int Index);
	void HandleMouseHold(int Index, float Time);
	void HandleMousePress(int Index);
	void ExecuteUbergraph_UI_MenuPage_Base(int EntryPoint);
	void OnTextureLoaded__DelegateSignature(bool Texture);
	void OnItemSelectedDispatcher__DelegateSignature(class UInventoryItem* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

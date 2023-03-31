// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetVector2DFromIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Vector                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::GetVector2DFromIndex(int Index, struct FVector2D* Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetVector2DFromIndex");

	UUI_MenuPage_Base_C_GetVector2DFromIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.BindMouseInteractions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::BindMouseInteractions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.BindMouseInteractions");

	UUI_MenuPage_Base_C_BindMouseInteractions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.DestroyAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OverrideDestroyIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::DestroyAllGrids(int OverrideDestroyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.DestroyAllGrids");

	UUI_MenuPage_Base_C_DestroyAllGrids_Params params;
	params.OverrideDestroyIndex = OverrideDestroyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.FlushStaticImages");

	UUI_MenuPage_Base_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.InitStaticImages");

	UUI_MenuPage_Base_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.DisplayAlternateNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::DisplayAlternateNavigation(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.DisplayAlternateNavigation");

	UUI_MenuPage_Base_C_DisplayAlternateNavigation_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CheckBikePartTrophy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::CheckBikePartTrophy(class UInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.CheckBikePartTrophy");

	UUI_MenuPage_Base_C_CheckBikePartTrophy_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetPlayerGunFromWeaponID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryWeaponID> WeaponID                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::SetPlayerGunFromWeaponID(TEnumAsByte<EInventoryWeaponID> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetPlayerGunFromWeaponID");

	UUI_MenuPage_Base_C_SetPlayerGunFromWeaponID_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetWeaponToAddPartTo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             WeaponToAddTo                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::GetWeaponToAddPartTo(class UInventoryItem* InventoryItem, class ABendWeapon** WeaponToAddTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetWeaponToAddPartTo");

	UUI_MenuPage_Base_C_GetWeaponToAddPartTo_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponToAddTo != nullptr)
		*WeaponToAddTo = params.WeaponToAddTo;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CanWeaponPartGoOnAnyOfMyGuns
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanGoOnGuns                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::CanWeaponPartGoOnAnyOfMyGuns(class UInventoryItem* InventoryItem, bool* CanGoOnGuns)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.CanWeaponPartGoOnAnyOfMyGuns");

	UUI_MenuPage_Base_C_CanWeaponPartGoOnAnyOfMyGuns_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanGoOnGuns != nullptr)
		*CanGoOnGuns = params.CanGoOnGuns;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleEventCall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::HandleEventCall(int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleEventCall");

	UUI_MenuPage_Base_C_HandleEventCall_Params params;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.TriangleSelectionHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NeverReset                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::TriangleSelectionHold(float HoldTime, bool NeverReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.TriangleSelectionHold");

	UUI_MenuPage_Base_C_TriangleSelectionHold_Params params;
	params.HoldTime = HoldTime;
	params.NeverReset = NeverReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CircleSelectionHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NeverReset                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::CircleSelectionHold(float HoldTime, bool NeverReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.CircleSelectionHold");

	UUI_MenuPage_Base_C_CircleSelectionHold_Params params;
	params.HoldTime = HoldTime;
	params.NeverReset = NeverReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SquareSelectionHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NeverReset                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::SquareSelectionHold(float HoldTime, bool NeverReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SquareSelectionHold");

	UUI_MenuPage_Base_C_SquareSelectionHold_Params params;
	params.HoldTime = HoldTime;
	params.NeverReset = NeverReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.FigureOutValidBikeCategories
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBikePartMenuCategory> Categories                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::FigureOutValidBikeCategories(TEnumAsByte<EBikePartMenuCategory> Categories, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.FigureOutValidBikeCategories");

	UUI_MenuPage_Base_C_FigureOutValidBikeCategories_Params params;
	params.Categories = Categories;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetBikeDataOfType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTRUCT_MenuInventoryData> TheData                        (Parm, OutParm, ZeroConstructor)

void UUI_MenuPage_Base_C::GetBikeDataOfType(TArray<struct FSTRUCT_MenuInventoryData>* TheData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetBikeDataOfType");

	UUI_MenuPage_Base_C_GetBikeDataOfType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheData != nullptr)
		*TheData = params.TheData;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.MessageWeaponLoadedToCurrentPage
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::MessageWeaponLoadedToCurrentPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.MessageWeaponLoadedToCurrentPage");

	UUI_MenuPage_Base_C_MessageWeaponLoadedToCurrentPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.RecreateAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DontDestroyCurrentGrids        (Parm, ZeroConstructor, IsPlainOldData)
// int                            OverrideDestoryIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::RecreateAllGrids(bool DontDestroyCurrentGrids, int OverrideDestoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.RecreateAllGrids");

	UUI_MenuPage_Base_C_RecreateAllGrids_Params params;
	params.DontDestroyCurrentGrids = DontDestroyCurrentGrids;
	params.OverrideDestoryIndex = OverrideDestoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PurchaseSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::PurchaseSelection(int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.PurchaseSelection");

	UUI_MenuPage_Base_C_PurchaseSelection_Params params;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetAmmoDataOfSpecialIndexAmmoGrid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWeaponItem*    OverrideInventoryWeaponItem    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            OverrideSpecialIndex           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             OverrideGun                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasWeapon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanBuyAmmo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoOwned                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoMax                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CostToFill                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoToAdd                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsPartialFill                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   AmmoName                       (Parm, OutParm)
// struct FText                   AmmoDescription                (Parm, OutParm)
// TEnumAsByte<EInventoryAmmoID>  AmmoID1                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon1                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ClipCurrentCount1              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ClipMaxCount1                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::GetAmmoDataOfSpecialIndexAmmoGrid(class UInventoryWeaponItem* OverrideInventoryWeaponItem, int OverrideSpecialIndex, class ABendWeapon* OverrideGun, bool* HasWeapon, bool* CanBuyAmmo, int* AmmoOwned, int* AmmoMax, int* CostToFill, int* AmmoToAdd, bool* IsPartialFill, struct FText* AmmoName, struct FText* AmmoDescription, TEnumAsByte<EInventoryAmmoID>* AmmoID1, class ABendWeapon** Weapon1, int* ClipCurrentCount1, int* ClipMaxCount1)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetAmmoDataOfSpecialIndexAmmoGrid");

	UUI_MenuPage_Base_C_GetAmmoDataOfSpecialIndexAmmoGrid_Params params;
	params.OverrideInventoryWeaponItem = OverrideInventoryWeaponItem;
	params.OverrideSpecialIndex = OverrideSpecialIndex;
	params.OverrideGun = OverrideGun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasWeapon != nullptr)
		*HasWeapon = params.HasWeapon;
	if (CanBuyAmmo != nullptr)
		*CanBuyAmmo = params.CanBuyAmmo;
	if (AmmoOwned != nullptr)
		*AmmoOwned = params.AmmoOwned;
	if (AmmoMax != nullptr)
		*AmmoMax = params.AmmoMax;
	if (CostToFill != nullptr)
		*CostToFill = params.CostToFill;
	if (AmmoToAdd != nullptr)
		*AmmoToAdd = params.AmmoToAdd;
	if (IsPartialFill != nullptr)
		*IsPartialFill = params.IsPartialFill;
	if (AmmoName != nullptr)
		*AmmoName = params.AmmoName;
	if (AmmoDescription != nullptr)
		*AmmoDescription = params.AmmoDescription;
	if (AmmoID1 != nullptr)
		*AmmoID1 = params.AmmoID1;
	if (Weapon1 != nullptr)
		*Weapon1 = params.Weapon1;
	if (ClipCurrentCount1 != nullptr)
		*ClipCurrentCount1 = params.ClipCurrentCount1;
	if (ClipMaxCount1 != nullptr)
		*ClipMaxCount1 = params.ClipMaxCount1;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetAffordanceOfCurrentGridItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAfford                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TotalCost                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PartialAmountGiven             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           InventoryFull                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CountCurrent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CountMax                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::GetAffordanceOfCurrentGridItem(bool* CanAfford, int* TotalCost, bool* PartialAmountGiven, bool* InventoryFull, int* CountCurrent, int* CountMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetAffordanceOfCurrentGridItem");

	UUI_MenuPage_Base_C_GetAffordanceOfCurrentGridItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAfford != nullptr)
		*CanAfford = params.CanAfford;
	if (TotalCost != nullptr)
		*TotalCost = params.TotalCost;
	if (PartialAmountGiven != nullptr)
		*PartialAmountGiven = params.PartialAmountGiven;
	if (InventoryFull != nullptr)
		*InventoryFull = params.InventoryFull;
	if (CountCurrent != nullptr)
		*CountCurrent = params.CountCurrent;
	if (CountMax != nullptr)
		*CountMax = params.CountMax;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SquareSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::SquareSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SquareSelectionInputGiven");

	UUI_MenuPage_Base_C_SquareSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.TriangleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::TriangleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.TriangleSelectionInputGiven");

	UUI_MenuPage_Base_C_TriangleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SpecialMapMenuInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::SpecialMapMenuInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SpecialMapMenuInput");

	UUI_MenuPage_Base_C_SpecialMapMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.R2orL2SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::R2orL2SelectionInputGiven(bool R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.R2orL2SelectionInputGiven");

	UUI_MenuPage_Base_C_R2orL2SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.DoesItemHaveTag
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryItem*          ItemRef                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasTag                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::DoesItemHaveTag(class UInventoryItem* ItemRef, const struct FName& Tag, bool* HasTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.DoesItemHaveTag");

	UUI_MenuPage_Base_C_DoesItemHaveTag_Params params;
	params.ItemRef = ItemRef;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasTag != nullptr)
		*HasTag = params.HasTag;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.StoreDataByFName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C*     Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::StoreDataByFName(const struct FName& Name, class UUI_GridItem_Base_C* Grid_Item, int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.StoreDataByFName");

	UUI_MenuPage_Base_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HighlightPreviousGridScrollValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C*     GridItem                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::HighlightPreviousGridScrollValue(class UUI_GridItem_Base_C* GridItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.HighlightPreviousGridScrollValue");

	UUI_MenuPage_Base_C_HighlightPreviousGridScrollValue_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.JumpToZeroOnAnyHorizontalInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::JumpToZeroOnAnyHorizontalInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.JumpToZeroOnAnyHorizontalInput");

	UUI_MenuPage_Base_C_JumpToZeroOnAnyHorizontalInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetScrollBarSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              Scroll_Box                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinIndexOfScrollBox            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScrollBuffer                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowGridJumping               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::SetScrollBarSettings(class UScrollBox* Scroll_Box, int MinIndexOfScrollBox, int ScrollBuffer, bool AllowGridJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetScrollBarSettings");

	UUI_MenuPage_Base_C_SetScrollBarSettings_Params params;
	params.Scroll_Box = Scroll_Box;
	params.MinIndexOfScrollBox = MinIndexOfScrollBox;
	params.ScrollBuffer = ScrollBuffer;
	params.AllowGridJumping = AllowGridJumping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.ButtonHoldComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C*     GridItemSelected               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::ButtonHoldComplete(class UUI_GridItem_Base_C* GridItemSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.ButtonHoldComplete");

	UUI_MenuPage_Base_C_ButtonHoldComplete_Params params;
	params.GridItemSelected = GridItemSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetDataOfItemsOfMenuType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PullFromMerchant               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PullFromMechanic               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSTRUCT_MenuInventoryData> InventoryData                  (Parm, OutParm, ZeroConstructor)

void UUI_MenuPage_Base_C::GetDataOfItemsOfMenuType(const struct FName& Type, bool PullFromMerchant, bool PullFromMechanic, TArray<struct FSTRUCT_MenuInventoryData>* InventoryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetDataOfItemsOfMenuType");

	UUI_MenuPage_Base_C_GetDataOfItemsOfMenuType_Params params;
	params.Type = Type;
	params.PullFromMerchant = PullFromMerchant;
	params.PullFromMechanic = PullFromMechanic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryData != nullptr)
		*InventoryData = params.InventoryData;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.StoreAllIItemDataByTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InitialStartValue              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector2D>       EndGridValues                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           VerticalGrid                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           DataType                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           HadEnoughSlots                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::StoreAllIItemDataByTag(const struct FVector2D& InitialStartValue, bool VerticalGrid, TArray<struct FVector2D>* EndGridValues, TArray<struct FName>* DataType, bool* HadEnoughSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.StoreAllIItemDataByTag");

	UUI_MenuPage_Base_C_StoreAllIItemDataByTag_Params params;
	params.InitialStartValue = InitialStartValue;
	params.VerticalGrid = VerticalGrid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndGridValues != nullptr)
		*EndGridValues = params.EndGridValues;
	if (DataType != nullptr)
		*DataType = params.DataType;
	if (HadEnoughSlots != nullptr)
		*HadEnoughSlots = params.HadEnoughSlots;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CreateGridsFromValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector2D>       GridSizes                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          GridClass                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UGridPanel*>      GridPanel                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           GridsVertical                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::CreateGridsFromValues(TArray<struct FVector2D> GridSizes, bool GridsVertical, TArray<class UClass*>* GridClass, TArray<class UGridPanel*>* GridPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.CreateGridsFromValues");

	UUI_MenuPage_Base_C_CreateGridsFromValues_Params params;
	params.GridSizes = GridSizes;
	params.GridsVertical = GridsVertical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GridClass != nullptr)
		*GridClass = params.GridClass;
	if (GridPanel != nullptr)
		*GridPanel = params.GridPanel;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.UpdateSelectionDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C*     GridItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::UpdateSelectionDetails(class UUI_GridItem_Base_C* GridItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.UpdateSelectionDetails");

	UUI_MenuPage_Base_C_UpdateSelectionDetails_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetTheMenuHeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>    Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type> Category, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetTheMenuHeader");

	UUI_MenuPage_Base_C_SetTheMenuHeader_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::MenuSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.MenuSelected");

	UUI_MenuPage_Base_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.ResetHoldInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::ResetHoldInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.ResetHoldInput");

	UUI_MenuPage_Base_C_ResetHoldInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CrossSelectionHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NeverReset                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::CrossSelectionHold(float HoldTime, bool NeverReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.CrossSelectionHold");

	UUI_MenuPage_Base_C_CrossSelectionHold_Params params;
	params.HoldTime = HoldTime;
	params.NeverReset = NeverReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetMenuReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Menu_Base_C*         Reference                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::SetMenuReference(class UUI_Menu_Base_C* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetMenuReference");

	UUI_MenuPage_Base_C_SetMenuReference_Params params;
	params.Reference = Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.R1orL1SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::R1orL1SelectionInputGiven(bool R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.R1orL1SelectionInputGiven");

	UUI_MenuPage_Base_C_R1orL1SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.CircleSelectionInputGiven");

	UUI_MenuPage_Base_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.CrossSelectionInputGiven");

	UUI_MenuPage_Base_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetIndexFromVector2D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Vector                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::GetIndexFromVector2D(const struct FVector2D& Vector, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.GetIndexFromVector2D");

	UUI_MenuPage_Base_C_GetIndexFromVector2D_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.UpdateSelectedWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Widget_Index                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::UpdateSelectedWidget(bool IsSelected, int Widget_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.UpdateSelectedWidget");

	UUI_MenuPage_Base_C_UpdateSelectedWidget_Params params;
	params.IsSelected = IsSelected;
	params.Widget_Index = Widget_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetPageActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::SetPageActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetPageActive");

	UUI_MenuPage_Base_C_SetPageActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetMaxGridValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               XAndY                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::SetMaxGridValues(const struct FVector2D& XAndY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.SetMaxGridValues");

	UUI_MenuPage_Base_C_SetMaxGridValues_Params params;
	params.XAndY = XAndY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.DirectionalInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               DirectionalInput               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::DirectionalInputGiven(const struct FVector2D& DirectionalInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.DirectionalInputGiven");

	UUI_MenuPage_Base_C_DirectionalInputGiven_Params params;
	params.DirectionalInput = DirectionalInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MenuPage_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.Construct");

	UUI_MenuPage_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.AddWeaponNewCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryWeaponID> WeaponID                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::AddWeaponNewCall(TEnumAsByte<EInventoryWeaponID> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.AddWeaponNewCall");

	UUI_MenuPage_Base_C_AddWeaponNewCall_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayExitSound
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::PlayExitSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayExitSound");

	UUI_MenuPage_Base_C_PlayExitSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayEnterSound
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::PlayEnterSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayEnterSound");

	UUI_MenuPage_Base_C_PlayEnterSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlaySelectSound
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::PlaySelectSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlaySelectSound");

	UUI_MenuPage_Base_C_PlaySelectSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayTutorialExitSound
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::PlayTutorialExitSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.PlayTutorialExitSound");

	UUI_MenuPage_Base_C_PlayTutorialExitSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.AsyncLoadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MatchSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::AsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.AsyncLoadTextureAsset");

	UUI_MenuPage_Base_C_AsyncLoadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;
	params.Image = Image;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleAssetLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_MenuPage_Base_C::HandleAssetLoaded(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleAssetLoaded");

	UUI_MenuPage_Base_C_HandleAssetLoaded_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.AsyncLoadTextureAsset_Material
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UMaterialInstanceDynamic* Mid                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeInWhenLoaded               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::AsyncLoadTextureAsset_Material(TAssetPtr<class UTexture2D> TextureAsset, class UMaterialInstanceDynamic* Mid, bool FadeInWhenLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.AsyncLoadTextureAsset_Material");

	UUI_MenuPage_Base_C_AsyncLoadTextureAsset_Material_Params params;
	params.TextureAsset = TextureAsset;
	params.Mid = Mid;
	params.FadeInWhenLoaded = FadeInWhenLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleTextureLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_MenuPage_Base_C::HandleTextureLoaded(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleTextureLoaded");

	UUI_MenuPage_Base_C_HandleTextureLoaded_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.UnloadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)

void UUI_MenuPage_Base_C::UnloadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.UnloadTextureAsset");

	UUI_MenuPage_Base_C_UnloadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.NewWeaponFinishedSpawning
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuPage_Base_C::NewWeaponFinishedSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.NewWeaponFinishedSpawning");

	UUI_MenuPage_Base_C_NewWeaponFinishedSpawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::HandleMouseHover(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseHover");

	UUI_MenuPage_Base_C_HandleMouseHover_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::HandleMouseClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseClick");

	UUI_MenuPage_Base_C_HandleMouseClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseHold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::HandleMouseHold(int Index, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMouseHold");

	UUI_MenuPage_Base_C_HandleMouseHold_Params params;
	params.Index = Index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMousePress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::HandleMousePress(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.HandleMousePress");

	UUI_MenuPage_Base_C_HandleMousePress_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.ExecuteUbergraph_UI_MenuPage_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::ExecuteUbergraph_UI_MenuPage_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.ExecuteUbergraph_UI_MenuPage_Base");

	UUI_MenuPage_Base_C_ExecuteUbergraph_UI_MenuPage_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.OnTextureLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::OnTextureLoaded__DelegateSignature(bool Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.OnTextureLoaded__DelegateSignature");

	UUI_MenuPage_Base_C_OnTextureLoaded__DelegateSignature_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuPage_Base.UI_MenuPage_Base_C.OnItemSelectedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuPage_Base_C::OnItemSelectedDispatcher__DelegateSignature(class UInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuPage_Base.UI_MenuPage_Base_C.OnItemSelectedDispatcher__DelegateSignature");

	UUI_MenuPage_Base_C_OnItemSelectedDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

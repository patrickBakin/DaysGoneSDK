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

// Function UI_SurvivalWheel.UI_SurvivalWheel_C.RefreshData
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::RefreshData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.RefreshData");

	UUI_SurvivalWheel_C_RefreshData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateWeaponPart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelCategory_C* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelItem_C* Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::UpdateWeaponPart(class UUI_SurvivalWheelCategory_C* Category, class UUI_SurvivalWheelItem_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateWeaponPart");

	UUI_SurvivalWheel_C_UpdateWeaponPart_Params params;
	params.Category = Category;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ItemAddedToInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::ItemAddedToInventory(class UInventoryItem* Item, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ItemAddedToInventory");

	UUI_SurvivalWheel_C_ItemAddedToInventory_Params params;
	params.Item = Item;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ItemRemovedFromInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::ItemRemovedFromInventory(class UInventoryItem* Item, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ItemRemovedFromInventory");

	UUI_SurvivalWheel_C_ItemRemovedFromInventory_Params params;
	params.Item = Item;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Set Category Item Description
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class USurvivalWheelCategory*  Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CategoryItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// class USurvivalWheelItem*      Category_Item                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::Set_Category_Item_Description(int CategoryIndex, class USurvivalWheelCategory* Category, int CategoryItemIndex, class USurvivalWheelItem* Category_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Set Category Item Description");

	UUI_SurvivalWheel_C_Set_Category_Item_Description_Params params;
	params.CategoryIndex = CategoryIndex;
	params.Category = Category;
	params.CategoryItemIndex = CategoryItemIndex;
	params.Category_Item = Category_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Set Category Description
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class USurvivalWheelCategory*  Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::Set_Category_Description(int CategoryIndex, class USurvivalWheelCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Set Category Description");

	UUI_SurvivalWheel_C_Set_Category_Description_Params params;
	params.CategoryIndex = CategoryIndex;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Does Category Have Items?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USurvivalWheelCategory*  Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has_Items                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::Does_Category_Have_Items_(class USurvivalWheelCategory* Category, bool* Has_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Does Category Have Items?");

	UUI_SurvivalWheel_C_Does_Category_Have_Items__Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Items != nullptr)
		*Has_Items = params.Has_Items;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCraftableWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelCategory_C* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelItem_C* Child_Category                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChild                        (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::GetCraftableWeapon(class UUI_SurvivalWheelCategory_C* Category, class UUI_SurvivalWheelItem_C* Child_Category, bool IsChild, class ABendWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCraftableWeapon");

	UUI_SurvivalWheel_C_GetCraftableWeapon_Params params;
	params.Category = Category;
	params.Child_Category = Child_Category;
	params.IsChild = IsChild;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CheckValidEquipAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryBaseType> CategoryType                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::CheckValidEquipAnim(TEnumAsByte<EInventoryBaseType> CategoryType, class ABendWeapon* Weapon, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CheckValidEquipAnim");

	UUI_SurvivalWheel_C_CheckValidEquipAnim_Params params;
	params.CategoryType = CategoryType;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.PostCraftCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::PostCraftCallback(class ABendWeapon* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.PostCraftCallback");

	UUI_SurvivalWheel_C_PostCraftCallback_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.StartCraftUnequip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::StartCraftUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.StartCraftUnequip");

	UUI_SurvivalWheel_C_StartCraftUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsSubitemValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelCategory_C* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelItem_C* childCategory                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::IsSubitemValid(class UUI_SurvivalWheelCategory_C* Category, class UUI_SurvivalWheelItem_C* childCategory, bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsSubitemValid");

	UUI_SurvivalWheel_C_IsSubitemValid_Params params;
	params.Category = Category;
	params.childCategory = childCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCurrentWeaponWheelIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::GetCurrentWeaponWheelIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCurrentWeaponWheelIndex");

	UUI_SurvivalWheel_C_GetCurrentWeaponWheelIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.DisplayInventoryFull
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::DisplayInventoryFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.DisplayInventoryFull");

	UUI_SurvivalWheel_C_DisplayInventoryFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsInventoryFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::IsInventoryFull(class UInventoryItem* InventoryItem, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsInventoryFull");

	UUI_SurvivalWheel_C_IsInventoryFull_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftingFailed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::CraftingFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftingFailed");

	UUI_SurvivalWheel_C_CraftingFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateHoldIndicator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ExpansionPercent               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::UpdateHoldIndicator(float* ExpansionPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateHoldIndicator");

	UUI_SurvivalWheel_C_UpdateHoldIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpansionPercent != nullptr)
		*ExpansionPercent = params.ExpansionPercent;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetSubitemSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::SetSubitemSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetSubitemSelection");

	UUI_SurvivalWheel_C_SetSubitemSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetCategoryArc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::SetCategoryArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetCategoryArc");

	UUI_SurvivalWheel_C_SetCategoryArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetWeaponAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelItem_C* childCategory                  (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::SetWeaponAmmo(class UUI_SurvivalWheelItem_C* childCategory, class ABendWeapon* Weapon, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetWeaponAmmo");

	UUI_SurvivalWheel_C_SetWeaponAmmo_Params params;
	params.childCategory = childCategory;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetDrift
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::SetDrift()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetDrift");

	UUI_SurvivalWheel_C_SetDrift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsPlayerDead
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::IsPlayerDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.IsPlayerDead");

	UUI_SurvivalWheel_C_IsPlayerDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftMeleeWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::CraftMeleeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftMeleeWeapon");

	UUI_SurvivalWheel_C_CraftMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetWeaponPartDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::SetWeaponPartDetails(class UInventoryItem* InventoryItem, class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetWeaponPartDetails");

	UUI_SurvivalWheel_C_SetWeaponPartDetails_Params params;
	params.InventoryItem = InventoryItem;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.AttachWeaponPart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelItem_C* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::AttachWeaponPart(TEnumAsByte<EControllerInputButton> Button, class ABendWeapon* Weapon, class UInventoryItem* InventoryItem, class UUI_SurvivalWheelItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.AttachWeaponPart");

	UUI_SurvivalWheel_C_AttachWeaponPart_Params params;
	params.Button = Button;
	params.Weapon = Weapon;
	params.InventoryItem = InventoryItem;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCategoryAtIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelCategory_C* Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsChild                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelItem_C* childCategory                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ChildIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           subItemsOpen                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           hasSubItems                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::GetCategoryAtIndex(int CategoryIndex, class UUI_SurvivalWheelCategory_C** Category, int* Index, bool* IsChild, class UUI_SurvivalWheelItem_C** childCategory, int* ChildIndex, bool* subItemsOpen, bool* hasSubItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCategoryAtIndex");

	UUI_SurvivalWheel_C_GetCategoryAtIndex_Params params;
	params.CategoryIndex = CategoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
	if (Index != nullptr)
		*Index = params.Index;
	if (IsChild != nullptr)
		*IsChild = params.IsChild;
	if (childCategory != nullptr)
		*childCategory = params.childCategory;
	if (ChildIndex != nullptr)
		*ChildIndex = params.ChildIndex;
	if (subItemsOpen != nullptr)
		*subItemsOpen = params.subItemsOpen;
	if (hasSubItems != nullptr)
		*hasSubItems = params.hasSubItems;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CallCraftRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelItem_C* currentItem                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentItemIndex               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::CallCraftRecipe(class UUI_SurvivalWheelItem_C* currentItem, int CurrentItemIndex, TEnumAsByte<EControllerInputButton> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CallCraftRecipe");

	UUI_SurvivalWheel_C_CallCraftRecipe_Params params;
	params.currentItem = currentItem;
	params.CurrentItemIndex = CurrentItemIndex;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CallCraftMeleeWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelCategory_C* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemRecipe*    Recipe                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::CallCraftMeleeWeapon(class ABendWeapon* Weapon, class UUI_SurvivalWheelCategory_C* Category, TEnumAsByte<EControllerInputButton> Button, class UInventoryItemRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CallCraftMeleeWeapon");

	UUI_SurvivalWheel_C_CallCraftMeleeWeapon_Params params;
	params.Weapon = Weapon;
	params.Category = Category;
	params.Button = Button;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetCategorySubitem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USurvivalWheelCategory*  Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::SetCategorySubitem(class USurvivalWheelCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetCategorySubitem");

	UUI_SurvivalWheel_C_SetCategorySubitem_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UseCurrentItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::UseCurrentItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.UseCurrentItem");

	UUI_SurvivalWheel_C_UseCurrentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetSubitemConsumable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelCategory_C* categoryWidget                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemConsumable* Consumable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::GetSubitemConsumable(int Category, class UUI_SurvivalWheelCategory_C** categoryWidget, class UInventoryItemConsumable** Consumable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetSubitemConsumable");

	UUI_SurvivalWheel_C_GetSubitemConsumable_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (categoryWidget != nullptr)
		*categoryWidget = params.categoryWidget;
	if (Consumable != nullptr)
		*Consumable = params.Consumable;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetSubitemWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelCategory_C* categoryWidget                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::GetSubitemWeapon(int Category, class ABendWeapon** Weapon, class UUI_SurvivalWheelCategory_C** categoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetSubitemWeapon");

	UUI_SurvivalWheel_C_GetSubitemWeapon_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
	if (categoryWidget != nullptr)
		*categoryWidget = params.categoryWidget;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCategoryTranslation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelCategory_C* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Translation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::GetCategoryTranslation(class UUI_SurvivalWheelCategory_C* Category, struct FVector2D* Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.GetCategoryTranslation");

	UUI_SurvivalWheel_C_GetCategoryTranslation_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Translation != nullptr)
		*Translation = params.Translation;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CheckRepairable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeRepaired                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HealthNot100                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HaveScrap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasSkill                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::CheckRepairable(class ABendWeapon* Weapon, bool* CanBeRepaired, bool* HealthNot100, bool* HaveScrap, bool* HasSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CheckRepairable");

	UUI_SurvivalWheel_C_CheckRepairable_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanBeRepaired != nullptr)
		*CanBeRepaired = params.CanBeRepaired;
	if (HealthNot100 != nullptr)
		*HealthNot100 = params.HealthNot100;
	if (HaveScrap != nullptr)
		*HaveScrap = params.HaveScrap;
	if (HasSkill != nullptr)
		*HasSkill = params.HasSkill;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.PerformHoldFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::PerformHoldFunction(const struct FString& FunctionName, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.PerformHoldFunction");

	UUI_SurvivalWheel_C_PerformHoldFunction_Params params;
	params.FunctionName = FunctionName;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HideHoldAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::HideHoldAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.HideHoldAnim");

	UUI_SurvivalWheel_C_HideHoldAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ShowHoldAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::ShowHoldAnim(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ShowHoldAnim");

	UUI_SurvivalWheel_C_ShowHoldAnim_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::CraftRecipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CraftRecipe");

	UUI_SurvivalWheel_C_CraftRecipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleFacebuttonRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::HandleFacebuttonRelease(TEnumAsByte<EControllerInputButton> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleFacebuttonRelease");

	UUI_SurvivalWheel_C_HandleFacebuttonRelease_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR2Release
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::HandleR2Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR2Release");

	UUI_SurvivalWheel_C_HandleR2Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OpenDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OpenDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OpenDetails");

	UUI_SurvivalWheel_C_OpenDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UseConsumable
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::UseConsumable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.UseConsumable");

	UUI_SurvivalWheel_C_UseConsumable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.RepairWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::RepairWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.RepairWeapon");

	UUI_SurvivalWheel_C_RepairWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR2Press
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::HandleR2Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR2Press");

	UUI_SurvivalWheel_C_HandleR2Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::SetAmmo(TEnumAsByte<EControllerInputButton> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetAmmo");

	UUI_SurvivalWheel_C_SetAmmo_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Reset");

	UUI_SurvivalWheel_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR1Press
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::HandleR1Press(TEnumAsByte<EControllerInputButton> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.HandleR1Press");

	UUI_SurvivalWheel_C_HandleR1Press_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::UpdateDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateDescription");

	UUI_SurvivalWheel_C_UpdateDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.EquipItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::EquipItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.EquipItem");

	UUI_SurvivalWheel_C_EquipItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Initialize");

	UUI_SurvivalWheel_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.SetActive");

	UUI_SurvivalWheel_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateCategories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Category_Index                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::UpdateCategories(int Category_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.UpdateCategories");

	UUI_SurvivalWheel_C_UpdateCategories_Params params;
	params.Category_Index = Category_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SurvivalWheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Construct");

	UUI_SurvivalWheel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Tick");

	UUI_SurvivalWheel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Crafting Complete
// (BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::Crafting_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Crafting Complete");

	UUI_SurvivalWheel_C_Crafting_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Consumable Used
// (BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::Consumable_Used()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Consumable Used");

	UUI_SurvivalWheel_C_Consumable_Used_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.Event On Crafting Failed
// (BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::Event_On_Crafting_Failed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.Event On Crafting Failed");

	UUI_SurvivalWheel_C_Event_On_Crafting_Failed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_120_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_SurvivalWheel_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_120_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_120_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_SurvivalWheel_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_120_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnWeaponPartAttachedDetached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeaponPart*         Part                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::OnWeaponPartAttachedDetached(class ABendWeapon* Weapon, class ABendWeaponPart* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnWeaponPartAttachedDetached");

	UUI_SurvivalWheel_C_OnWeaponPartAttachedDetached_Params params;
	params.Weapon = Weapon;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnPlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::OnPlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnPlayerRespawned");

	UUI_SurvivalWheel_C_OnPlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnInventoryModified
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryOperation     Operation                      (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_SurvivalWheel_C::OnInventoryModified(const struct FInventoryOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnInventoryModified");

	UUI_SurvivalWheel_C_OnInventoryModified_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategorySelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CategoryIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class USurvivalWheelCategory** Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::CategorySelected(int* CategoryIndex, class USurvivalWheelCategory** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategorySelected");

	UUI_SurvivalWheel_C_CategorySelected_Params params;
	params.CategoryIndex = CategoryIndex;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategoryHighlighted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CategoryIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class USurvivalWheelCategory** Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::CategoryHighlighted(int* CategoryIndex, class USurvivalWheelCategory** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategoryHighlighted");

	UUI_SurvivalWheel_C_CategoryHighlighted_Params params;
	params.CategoryIndex = CategoryIndex;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategoryItemSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CategoryIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class USurvivalWheelCategory** Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CategoryItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// class USurvivalWheelItem**     Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::CategoryItemSelected(int* CategoryIndex, class USurvivalWheelCategory** Category, int* CategoryItemIndex, class USurvivalWheelItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.CategoryItemSelected");

	UUI_SurvivalWheel_C_CategoryItemSelected_Params params;
	params.CategoryIndex = CategoryIndex;
	params.Category = Category;
	params.CategoryItemIndex = CategoryItemIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.RegisterEventListeners
// (BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::RegisterEventListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.RegisterEventListeners");

	UUI_SurvivalWheel_C_RegisterEventListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveOnOpenCategoryPressed
// (Event, Public, BlueprintEvent)

void UUI_SurvivalWheel_C::ReceiveOnOpenCategoryPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveOnOpenCategoryPressed");

	UUI_SurvivalWheel_C_ReceiveOnOpenCategoryPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveOnValidAnalogInput
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::ReceiveOnValidAnalogInput(float* Distance, float* angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveOnValidAnalogInput");

	UUI_SurvivalWheel_C_ReceiveOnValidAnalogInput_Params params;
	params.Distance = Distance;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveCraftReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::ReceiveCraftReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveCraftReleased");

	UUI_SurvivalWheel_C_ReceiveCraftReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveCraftPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::ReceiveCraftPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveCraftPressed");

	UUI_SurvivalWheel_C_ReceiveCraftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveUseReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::ReceiveUseReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveUseReleased");

	UUI_SurvivalWheel_C_ReceiveUseReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveUsePressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::ReceiveUsePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ReceiveUsePressed");

	UUI_SurvivalWheel_C_ReceiveUsePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.ExecuteUbergraph_UI_SurvivalWheel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::ExecuteUbergraph_UI_SurvivalWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.ExecuteUbergraph_UI_SurvivalWheel");

	UUI_SurvivalWheel_C_ExecuteUbergraph_UI_SurvivalWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCraftingFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnCraftingFailed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCraftingFailed__DelegateSignature");

	UUI_SurvivalWheel_C_OnCraftingFailed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnConsumableUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnConsumableUsed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnConsumableUsed__DelegateSignature");

	UUI_SurvivalWheel_C_OnConsumableUsed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCraftingComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnCraftingComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCraftingComplete__DelegateSignature");

	UUI_SurvivalWheel_C_OnCraftingComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSubCategoryOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnSubCategoryOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSubCategoryOpened__DelegateSignature");

	UUI_SurvivalWheel_C_OnSubCategoryOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR1Released__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnR1Released__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR1Released__DelegateSignature");

	UUI_SurvivalWheel_C_OnR1Released__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnDPadPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheel_C::OnDPadPressed__DelegateSignature(TEnumAsByte<EControllerInputButton> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnDPadPressed__DelegateSignature");

	UUI_SurvivalWheel_C_OnDPadPressed__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR2Released__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnR2Released__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR2Released__DelegateSignature");

	UUI_SurvivalWheel_C_OnR2Released__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnTriangleReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnTriangleReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnTriangleReleased__DelegateSignature");

	UUI_SurvivalWheel_C_OnTriangleReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCircleReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnCircleReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCircleReleased__DelegateSignature");

	UUI_SurvivalWheel_C_OnCircleReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSquareReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnSquareReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSquareReleased__DelegateSignature");

	UUI_SurvivalWheel_C_OnSquareReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCrossReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnCrossReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCrossReleased__DelegateSignature");

	UUI_SurvivalWheel_C_OnCrossReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR2Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnR2Pressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR2Pressed__DelegateSignature");

	UUI_SurvivalWheel_C_OnR2Pressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnItemChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnItemChanged__DelegateSignature");

	UUI_SurvivalWheel_C_OnItemChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCategoryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnCategoryChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCategoryChanged__DelegateSignature");

	UUI_SurvivalWheel_C_OnCategoryChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnTrianglePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnTrianglePressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnTrianglePressed__DelegateSignature");

	UUI_SurvivalWheel_C_OnTrianglePressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCirclePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnCirclePressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCirclePressed__DelegateSignature");

	UUI_SurvivalWheel_C_OnCirclePressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCrossPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnCrossPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnCrossPressed__DelegateSignature");

	UUI_SurvivalWheel_C_OnCrossPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSquarePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnSquarePressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnSquarePressed__DelegateSignature");

	UUI_SurvivalWheel_C_OnSquarePressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR1Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheel_C::OnR1Pressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheel.UI_SurvivalWheel_C.OnR1Pressed__DelegateSignature");

	UUI_SurvivalWheel_C_OnR1Pressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

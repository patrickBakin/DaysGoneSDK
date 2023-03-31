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

// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenForState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESurvivalWheelCategoryState> ExpansionState                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::TweenForState(TEnumAsByte<ESurvivalWheelCategoryState> ExpansionState, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenForState");

	UUI_SurvivalWheelCategory_C_TweenForState_Params params;
	params.ExpansionState = ExpansionState;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetAllWeapons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABendWeapon*>     AllWeapons                     (Parm, OutParm, ZeroConstructor)

void UUI_SurvivalWheelCategory_C::GetAllWeapons(TArray<class ABendWeapon*>* AllWeapons)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetAllWeapons");

	UUI_SurvivalWheelCategory_C_GetAllWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllWeapons != nullptr)
		*AllWeapons = params.AllWeapons;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureExpansionIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::ConfigureExpansionIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureExpansionIcons");

	UUI_SurvivalWheelCategory_C_ConfigureExpansionIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.PolarConversion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::PolarConversion(float angle, float Distance, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.PolarConversion");

	UUI_SurvivalWheelCategory_C_PolarConversion_Params params;
	params.angle = angle;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ShowExpansionIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Expansion_                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::ShowExpansionIcons(bool Show, bool Is_Expansion_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ShowExpansionIcons");

	UUI_SurvivalWheelCategory_C_ShowExpansionIcons_Params params;
	params.Show = Show;
	params.Is_Expansion_ = Is_Expansion_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Add MB-150 Parts Expand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::Add_MB_150_Parts_Expand()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Add MB-150 Parts Expand");

	UUI_SurvivalWheelCategory_C_Add_MB_150_Parts_Expand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetSubitemWeaponCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::GetSubitemWeaponCount(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetSubitemWeaponCount");

	UUI_SurvivalWheelCategory_C_GetSubitemWeaponCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetCrossbowAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryAmmoID>  Ammo_Type                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::SetCrossbowAmmo(TEnumAsByte<EInventoryAmmoID> Ammo_Type, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetCrossbowAmmo");

	UUI_SurvivalWheelCategory_C_SetCrossbowAmmo_Params params;
	params.Ammo_Type = Ammo_Type;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetDisplayQuantities
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reserve                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Pre                            (Parm)
// struct FText                   post                           (Parm)

void UUI_SurvivalWheelCategory_C::SetDisplayQuantities(int Quantity, int Reserve, const struct FText& Pre, const struct FText& post)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetDisplayQuantities");

	UUI_SurvivalWheelCategory_C_SetDisplayQuantities_Params params;
	params.Quantity = Quantity;
	params.Reserve = Reserve;
	params.Pre = Pre;
	params.post = post;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.RemoveByItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::RemoveByItem(class UInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.RemoveByItem");

	UUI_SurvivalWheelCategory_C_RemoveByItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.DetermineSelectedItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USurvivalWheelItem*      LastValidItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::DetermineSelectedItem(class USurvivalWheelItem** LastValidItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.DetermineSelectedItem");

	UUI_SurvivalWheelCategory_C_DetermineSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastValidItem != nullptr)
		*LastValidItem = params.LastValidItem;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.UpdateCurrentSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::UpdateCurrentSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.UpdateCurrentSelection");

	UUI_SurvivalWheelCategory_C_UpdateCurrentSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddItemWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelItem_C* newItem                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UUI_SurvivalWheelItem_C* ItemRef                        (ConstParm, Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::AddItemWidget(class UUI_SurvivalWheelItem_C* newItem, class UUI_SurvivalWheelItem_C* ItemRef, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddItemWidget");

	UUI_SurvivalWheelCategory_C_AddItemWidget_Params params;
	params.newItem = newItem;
	params.ItemRef = ItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Set Infinite Reserve Ammo
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::Set_Infinite_Reserve_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Set Infinite Reserve Ammo");

	UUI_SurvivalWheelCategory_C_Set_Infinite_Reserve_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Set Infinite Clip Ammo
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::Set_Infinite_Clip_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Set Infinite Clip Ammo");

	UUI_SurvivalWheelCategory_C_Set_Infinite_Clip_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemTaser?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Item_Taser_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::IsItemTaser_(class ABendWeapon* Weapon, bool* Is_Item_Taser_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemTaser?");

	UUI_SurvivalWheelCategory_C_IsItemTaser__Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Item_Taser_ != nullptr)
		*Is_Item_Taser_ = params.Is_Item_Taser_;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddTaser
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Taser_Item_Added_              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::AddTaser(bool* Taser_Item_Added_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddTaser");

	UUI_SurvivalWheelCategory_C_AddTaser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taser_Item_Added_ != nullptr)
		*Taser_Item_Added_ = params.Taser_Item_Added_;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.setCategoryActiveItemLockState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::setCategoryActiveItemLockState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.setCategoryActiveItemLockState");

	UUI_SurvivalWheelCategory_C_setCategoryActiveItemLockState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.getCategoryActiveItemLockState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::getCategoryActiveItemLockState(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.getCategoryActiveItemLockState");

	UUI_SurvivalWheelCategory_C_getCategoryActiveItemLockState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)
// bool                           State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::IsItemLocked(const struct FGameplayTag& GameplayTag, bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemLocked");

	UUI_SurvivalWheelCategory_C_IsItemLocked_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.UpdateCategoryLockState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::UpdateCategoryLockState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.UpdateCategoryLockState");

	UUI_SurvivalWheelCategory_C_UpdateCategoryLockState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsCategoryLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::IsCategoryLocked(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsCategoryLocked");

	UUI_SurvivalWheelCategory_C_IsCategoryLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.CanBeRepaired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canRepair                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           canRepairWithSkill             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::CanBeRepaired(class ABendWeapon* Weapon, bool* canRepair, bool* canRepairWithSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.CanBeRepaired");

	UUI_SurvivalWheelCategory_C_CanBeRepaired_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canRepair != nullptr)
		*canRepair = params.canRepair;
	if (canRepairWithSkill != nullptr)
		*canRepairWithSkill = params.canRepairWithSkill;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsMeleeWeaponRecipe
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRecipeMenuComponentCount> RecipeComponents               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::IsMeleeWeaponRecipe(TArray<struct FRecipeMenuComponentCount>* RecipeComponents, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsMeleeWeaponRecipe");

	UUI_SurvivalWheelCategory_C_IsMeleeWeaponRecipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RecipeComponents != nullptr)
		*RecipeComponents = params.RecipeComponents;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemBootKnife
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::IsItemBootKnife(class ABendWeapon* Weapon, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsItemBootKnife");

	UUI_SurvivalWheelCategory_C_IsItemBootKnife_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetBootKnife
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::GetBootKnife(class ABendWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetBootKnife");

	UUI_SurvivalWheelCategory_C_GetBootKnife_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddBootKnife
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelItem_C* Subitem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::AddBootKnife(class UUI_SurvivalWheelItem_C** Subitem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddBootKnife");

	UUI_SurvivalWheelCategory_C_AddBootKnife_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Subitem != nullptr)
		*Subitem = params.Subitem;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsBootKnifeActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::IsBootKnifeActive(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.IsBootKnifeActive");

	UUI_SurvivalWheelCategory_C_IsBootKnifeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetFlamethrowerAmmoDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::SetFlamethrowerAmmoDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetFlamethrowerAmmoDisplay");

	UUI_SurvivalWheelCategory_C_SetFlamethrowerAmmoDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQuantityAndReserveVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>  Visibility                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::SetQuantityAndReserveVisible(TEnumAsByte<ESlateVisibility> Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQuantityAndReserveVisible");

	UUI_SurvivalWheelCategory_C_SetQuantityAndReserveVisible_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AdjustQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::AdjustQuantity(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AdjustQuantity");

	UUI_SurvivalWheelCategory_C_AdjustQuantity_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQuantityVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>  Visibility                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::SetQuantityVisible(TEnumAsByte<ESlateVisibility> Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQuantityVisible");

	UUI_SurvivalWheelCategory_C_SetQuantityVisible_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetWeaponMeleeHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::SetWeaponMeleeHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetWeaponMeleeHealth");

	UUI_SurvivalWheelCategory_C_SetWeaponMeleeHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.DisplayReserveQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::DisplayReserveQuantity(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.DisplayReserveQuantity");

	UUI_SurvivalWheelCategory_C_DisplayReserveQuantity_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetSubitemTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::GetSubitemTimer(float* TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetSubitemTimer");

	UUI_SurvivalWheelCategory_C_GetSubitemTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ReorderItems
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::ReorderItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ReorderItems");

	UUI_SurvivalWheelCategory_C_ReorderItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addCrossbowPartsExpand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::addCrossbowPartsExpand()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addCrossbowPartsExpand");

	UUI_SurvivalWheelCategory_C_addCrossbowPartsExpand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetGuidForPart
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryItem*          PartInvItem                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryGuid          OutGuid                        (Parm, OutParm)

void UUI_SurvivalWheelCategory_C::GetGuidForPart(class UInventoryItem* PartInvItem, struct FInventoryGuid* OutGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.GetGuidForPart");

	UUI_SurvivalWheelCategory_C_GetGuidForPart_Params params;
	params.PartInvItem = PartInvItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGuid != nullptr)
		*OutGuid = params.OutGuid;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.isRecipeForWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRecipeMenuComponentCount> RecipeComponents               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::isRecipeForWeapon(TArray<struct FRecipeMenuComponentCount>* RecipeComponents, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.isRecipeForWeapon");

	UUI_SurvivalWheelCategory_C_isRecipeForWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RecipeComponents != nullptr)
		*RecipeComponents = params.RecipeComponents;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsMelee
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::ConfigureAsMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsMelee");

	UUI_SurvivalWheelCategory_C_ConfigureAsMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMeleePartsExpand
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::addMeleePartsExpand()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMeleePartsExpand");

	UUI_SurvivalWheelCategory_C_addMeleePartsExpand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addWeaponPartsExpand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::addWeaponPartsExpand(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addWeaponPartsExpand");

	UUI_SurvivalWheelCategory_C_addWeaponPartsExpand_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMeleeParts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::addMeleeParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMeleeParts");

	UUI_SurvivalWheelCategory_C_addMeleeParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addCrossbowParts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::addCrossbowParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addCrossbowParts");

	UUI_SurvivalWheelCategory_C_addCrossbowParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addWeaponParts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::addWeaponParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addWeaponParts");

	UUI_SurvivalWheelCategory_C_addWeaponParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsWeaponExpand
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::ConfigureAsWeaponExpand()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsWeaponExpand");

	UUI_SurvivalWheelCategory_C_ConfigureAsWeaponExpand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMedKit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::addMedKit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.addMedKit");

	UUI_SurvivalWheelCategory_C_addMedKit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetConsumable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Consumable                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::SetConsumable(class UInventoryItem* Consumable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetConsumable");

	UUI_SurvivalWheelCategory_C_SetConsumable_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddHealthSubitem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerAttributeType> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::AddHealthSubitem(TEnumAsByte<EPlayerAttributeType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddHealthSubitem");

	UUI_SurvivalWheelCategory_C_AddHealthSubitem_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetItemBgColor
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::SetItemBgColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetItemBgColor");

	UUI_SurvivalWheelCategory_C_SetItemBgColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetParts
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::SetParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetParts");

	UUI_SurvivalWheelCategory_C_SetParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetRecipes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::SetRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetRecipes");

	UUI_SurvivalWheelCategory_C_SetRecipes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.HasDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasDetails                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::HasDetails(bool* HasDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.HasDetails");

	UUI_SurvivalWheelCategory_C_HasDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasDetails != nullptr)
		*HasDetails = params.HasDetails;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ToggleWeaponParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::ToggleWeaponParts(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ToggleWeaponParts");

	UUI_SurvivalWheelCategory_C_ToggleWeaponParts_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddPart
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryStorageWeaponPart Part                           (Parm)
// class UUI_SurvivalWheelPart_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::AddPart(class UInventoryItem* Item, const struct FInventoryStorageWeaponPart& Part, class UUI_SurvivalWheelPart_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddPart");

	UUI_SurvivalWheelCategory_C_AddPart_Params params;
	params.Item = Item;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenBgColor
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::TweenBgColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenBgColor");

	UUI_SurvivalWheelCategory_C_TweenBgColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetIconTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)

void UUI_SurvivalWheelCategory_C::SetIconTexture(class UTexture2D* Texture, TAssetPtr<class UTexture2D> TextureAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetIconTexture");

	UUI_SurvivalWheelCategory_C_SetIconTexture_Params params;
	params.Texture = Texture;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenAngle
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::TweenAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.TweenAngle");

	UUI_SurvivalWheelCategory_C_TweenAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::SetAngle(float Duration, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetAngle");

	UUI_SurvivalWheelCategory_C_SetAngle_Params params;
	params.Duration = Duration;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetSubitemPositions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::SetSubitemPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetSubitemPositions");

	UUI_SurvivalWheelCategory_C_SetSubitemPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Clear");

	UUI_SurvivalWheelCategory_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsBait
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::ConfigureAsBait()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsBait");

	UUI_SurvivalWheelCategory_C_ConfigureAsBait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsTraps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::ConfigureAsTraps()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsTraps");

	UUI_SurvivalWheelCategory_C_ConfigureAsTraps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddItemSubitem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelItem_C* Subitem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::AddItemSubitem(class UInventoryItem* Item, class UUI_SurvivalWheelItem_C** Subitem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddItemSubitem");

	UUI_SurvivalWheelCategory_C_AddItemSubitem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Subitem != nullptr)
		*Subitem = params.Subitem;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddSubitem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SurvivalWheelItem_C* Subitem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::AddSubitem(class UInventoryItem* InventoryItem, class UUI_SurvivalWheelItem_C** Subitem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.AddSubitem");

	UUI_SurvivalWheelCategory_C_AddSubitem_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Subitem != nullptr)
		*Subitem = params.Subitem;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::ConfigureAsHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsHealth");

	UUI_SurvivalWheelCategory_C_ConfigureAsHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsThrowables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::ConfigureAsThrowables()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ConfigureAsThrowables");

	UUI_SurvivalWheelCategory_C_ConfigureAsThrowables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::SetWeapon(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetWeapon");

	UUI_SurvivalWheelCategory_C_SetWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Construct");

	UUI_SurvivalWheelCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.Tick");

	UUI_SurvivalWheelCategory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQtyText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::SetQtyText(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetQtyText");

	UUI_SurvivalWheelCategory_C_SetQtyText_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetReserveCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::SetReserveCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.SetReserveCount");

	UUI_SurvivalWheelCategory_C_SetReserveCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.PreSaveGameLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::PreSaveGameLoaded(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.PreSaveGameLoaded");

	UUI_SurvivalWheelCategory_C_PreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSelected
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSelected");

	UUI_SurvivalWheelCategory_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnDeselected
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnDeselected");

	UUI_SurvivalWheelCategory_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnOpened
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnOpened");

	UUI_SurvivalWheelCategory_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnClosed");

	UUI_SurvivalWheelCategory_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnPreviewed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnPreviewed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnPreviewed");

	UUI_SurvivalWheelCategory_C_OnPreviewed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnItemSelected
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnItemSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnItemSelected");

	UUI_SurvivalWheelCategory_C_OnItemSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnInputModeChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bUsingMouseInput               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::OnInputModeChanged(bool* bUsingMouseInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnInputModeChanged");

	UUI_SurvivalWheelCategory_C_OnInputModeChanged_Params params;
	params.bUsingMouseInput = bUsingMouseInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ExecuteUbergraph_UI_SurvivalWheelCategory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCategory_C::ExecuteUbergraph_UI_SurvivalWheelCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.ExecuteUbergraph_UI_SurvivalWheelCategory");

	UUI_SurvivalWheelCategory_C_ExecuteUbergraph_UI_SurvivalWheelCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsOpening__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnSubitemsOpening__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsOpening__DelegateSignature");

	UUI_SurvivalWheelCategory_C_OnSubitemsOpening__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnSubitemsClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsClosed__DelegateSignature");

	UUI_SurvivalWheelCategory_C_OnSubitemsClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnSubitemsOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnSubitemsOpened__DelegateSignature");

	UUI_SurvivalWheelCategory_C_OnSubitemsOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnCategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCategory_C::OnCategorySelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCategory.UI_SurvivalWheelCategory_C.OnCategorySelected__DelegateSignature");

	UUI_SurvivalWheelCategory_C_OnCategorySelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ClearErrors
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelDetails_C::ClearErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ClearErrors");

	UUI_SurvivalWheelDetails_C_ClearErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.GetCurrentErrors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FText>           Out_Errors                     (Parm, OutParm, ZeroConstructor)

void UUI_SurvivalWheelDetails_C::GetCurrentErrors(TArray<struct FText>* Out_Errors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.GetCurrentErrors");

	UUI_SurvivalWheelDetails_C_GetCurrentErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Errors != nullptr)
		*Out_Errors = params.Out_Errors;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetLayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interior                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::SetLayout(bool Interior)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetLayout");

	UUI_SurvivalWheelDetails_C_SetLayout_Params params;
	params.Interior = Interior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.refreshRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelItem_C* survivalWheelItemWidget        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::refreshRecipe(class UUI_SurvivalWheelItem_C* survivalWheelItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.refreshRecipe");

	UUI_SurvivalWheelDetails_C_refreshRecipe_Params params;
	params.survivalWheelItemWidget = survivalWheelItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.DisplayError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (Parm)

void UUI_SurvivalWheelDetails_C::DisplayError(const struct FText& Error_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.DisplayError");

	UUI_SurvivalWheelDetails_C_DisplayError_Params params;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.isCocktailValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelItem_C* Subitem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::isCocktailValid(class UUI_SurvivalWheelItem_C* Subitem, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.isCocktailValid");

	UUI_SurvivalWheelDetails_C_isCocktailValid_Params params;
	params.Subitem = Subitem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.DisplayWeaponRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::DisplayWeaponRarity(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.DisplayWeaponRarity");

	UUI_SurvivalWheelDetails_C_DisplayWeaponRarity_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetWeaponRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::SetWeaponRarity(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetWeaponRarity");

	UUI_SurvivalWheelDetails_C_SetWeaponRarity_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ShowRepairDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelCategory_C* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon_Override                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::ShowRepairDetails(class UUI_SurvivalWheelCategory_C* Category, class ABendWeapon* Weapon_Override)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ShowRepairDetails");

	UUI_SurvivalWheelDetails_C_ShowRepairDetails_Params params;
	params.Category = Category;
	params.Weapon_Override = Weapon_Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetMeleeDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelCategory_C* Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::SetMeleeDetails(class UUI_SurvivalWheelCategory_C* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetMeleeDetails");

	UUI_SurvivalWheelDetails_C_SetMeleeDetails_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.AddUserInputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)
// bool                           IsUnavailable                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::AddUserInputAction(const struct FName& Action, const struct FText& Text, bool IsUnavailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.AddUserInputAction");

	UUI_SurvivalWheelDetails_C_AddUserInputAction_Params params;
	params.Action = Action;
	params.Text = Text;
	params.IsUnavailable = IsUnavailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetIngredients
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelItem_C* itemWidget                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::SetIngredients(class UUI_SurvivalWheelItem_C* itemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetIngredients");

	UUI_SurvivalWheelDetails_C_SetIngredients_Params params;
	params.itemWidget = itemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetOptionsVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::SetOptionsVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetOptionsVisible");

	UUI_SurvivalWheelDetails_C_SetOptionsVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelDetails_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.Close");

	UUI_SurvivalWheelDetails_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetCategoryDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelCategory_C* categoryWidget                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::SetCategoryDetails(class UUI_SurvivalWheelCategory_C* categoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetCategoryDetails");

	UUI_SurvivalWheelDetails_C_SetCategoryDetails_Params params;
	params.categoryWidget = categoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::SetTranslation(const struct FVector2D& Translation, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetTranslation");

	UUI_SurvivalWheelDetails_C_SetTranslation_Params params;
	params.Translation = Translation;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::SetVisible(float Duration, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetVisible");

	UUI_SurvivalWheelDetails_C_SetVisible_Params params;
	params.Duration = Duration;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SurvivalWheelDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.Construct");

	UUI_SurvivalWheelDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetItemName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_SurvivalWheelDetails_C::SetItemName(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetItemName");

	UUI_SurvivalWheelDetails_C_SetItemName_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetCategoryText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_SurvivalWheelDetails_C::SetCategoryText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.SetCategoryText");

	UUI_SurvivalWheelDetails_C_SetCategoryText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ExecuteUbergraph_UI_SurvivalWheelDetails
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelDetails_C::ExecuteUbergraph_UI_SurvivalWheelDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelDetails.UI_SurvivalWheelDetails_C.ExecuteUbergraph_UI_SurvivalWheelDetails");

	UUI_SurvivalWheelDetails_C_ExecuteUbergraph_UI_SurvivalWheelDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

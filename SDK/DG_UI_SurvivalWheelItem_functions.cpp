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

// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDetails_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetDetails_Internal(class UInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDetails_Internal");

	UUI_SurvivalWheelItem_C_SetDetails_Internal_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ItemIsLocked                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::isLocked(bool* ItemIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isLocked");

	UUI_SurvivalWheelItem_C_isLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIsLocked != nullptr)
		*ItemIsLocked = params.ItemIsLocked;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.IsStackFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Full                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::IsStackFull(bool* Full)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.IsStackFull");

	UUI_SurvivalWheelItem_C_IsStackFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Full != nullptr)
		*Full = params.Full;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.IsValidForSelection
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_SurvivalWheelItem_C::IsValidForSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.IsValidForSelection");

	UUI_SurvivalWheelItem_C_IsValidForSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Set Item Position
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::Set_Item_Position(const struct FVector2D& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Set Item Position");

	UUI_SurvivalWheelItem_C_Set_Item_Position_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQuantityVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>  Visibility                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetQuantityVisible(TEnumAsByte<ESlateVisibility> Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQuantityVisible");

	UUI_SurvivalWheelItem_C_SetQuantityVisible_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isMeleePart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::isMeleePart(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isMeleePart");

	UUI_SurvivalWheelItem_C_isMeleePart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isWeaponPart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::isWeaponPart(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isWeaponPart");

	UUI_SurvivalWheelItem_C_isWeaponPart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetVisible(float Duration, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetVisible");

	UUI_SurvivalWheelItem_C_SetVisible_Params params;
	params.Duration = Duration;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isCocktail
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::isCocktail(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.isCocktail");

	UUI_SurvivalWheelItem_C_isCocktail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)

void UUI_SurvivalWheelItem_C::SetTexture(class UTexture2D* Texture, TAssetPtr<class UTexture2D> TextureAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetTexture");

	UUI_SurvivalWheelItem_C_SetTexture_Params params;
	params.Texture = Texture;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetAsRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryMenuCraftRecipe Recipe                         (Parm)

void UUI_SurvivalWheelItem_C::SetAsRecipe(const struct FInventoryMenuCraftRecipe& Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetAsRecipe");

	UUI_SurvivalWheelItem_C_SetAsRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.TweenDistance
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelItem_C::TweenDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.TweenDistance");

	UUI_SurvivalWheelItem_C_TweenDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetDistance(float Duration, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDistance");

	UUI_SurvivalWheelItem_C_SetDistance_Params params;
	params.Duration = Duration;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RightSide                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetQtyPosition(bool RightSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyPosition");

	UUI_SurvivalWheelItem_C_SetQtyPosition_Params params;
	params.RightSide = RightSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetSelected");

	UUI_SurvivalWheelItem_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SurvivalWheelItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Construct");

	UUI_SurvivalWheelItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.Tick");

	UUI_SurvivalWheelItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetQtyCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyCount");

	UUI_SurvivalWheelItem_C_SetQtyCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyDescription
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_SurvivalWheelItem_C::SetQtyDescription(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetQtyDescription");

	UUI_SurvivalWheelItem_C_SetQtyDescription_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ItemSelected
// (Event, Public, BlueprintEvent)

void UUI_SurvivalWheelItem_C::ItemSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ItemSelected");

	UUI_SurvivalWheelItem_C_ItemSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ItemDeselected
// (Event, Public, BlueprintEvent)

void UUI_SurvivalWheelItem_C::ItemDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ItemDeselected");

	UUI_SurvivalWheelItem_C_ItemDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetReserveCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetReserveCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetReserveCount");

	UUI_SurvivalWheelItem_C_SetReserveCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDetails
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem**         InInventoryItem                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::SetDetails(class UInventoryItem** InInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.SetDetails");

	UUI_SurvivalWheelItem_C_SetDetails_Params params;
	params.InInventoryItem = InInventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ExecuteUbergraph_UI_SurvivalWheelItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelItem_C::ExecuteUbergraph_UI_SurvivalWheelItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelItem.UI_SurvivalWheelItem_C.ExecuteUbergraph_UI_SurvivalWheelItem");

	UUI_SurvivalWheelItem_C_ExecuteUbergraph_UI_SurvivalWheelItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

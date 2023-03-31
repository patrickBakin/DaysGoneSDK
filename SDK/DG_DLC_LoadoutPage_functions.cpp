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

// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetRingBSlotWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URingGridItem_C*         AsRing_Grid_Item               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::GetRingBSlotWidget(class URingGridItem_C** AsRing_Grid_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetRingBSlotWidget");

	UDLC_LoadoutPage_C_GetRingBSlotWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsRing_Grid_Item != nullptr)
		*AsRing_Grid_Item = params.AsRing_Grid_Item;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetRingASlotWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URingGridItem_C*         AsRing_Grid_Item               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::GetRingASlotWidget(class URingGridItem_C** AsRing_Grid_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetRingASlotWidget");

	UDLC_LoadoutPage_C_GetRingASlotWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsRing_Grid_Item != nullptr)
		*AsRing_Grid_Item = params.AsRing_Grid_Item;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetBikeSlotWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBikeSkinGridItem_C*     AsBike_Skin_Grid_Item          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::GetBikeSlotWidget(class UBikeSkinGridItem_C** AsBike_Skin_Grid_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetBikeSlotWidget");

	UDLC_LoadoutPage_C_GetBikeSlotWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBike_Skin_Grid_Item != nullptr)
		*AsBike_Skin_Grid_Item = params.AsBike_Skin_Grid_Item;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetCharacterSlotWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCharacterGridItem_C*    AsCharacter_Grid_Item          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::GetCharacterSlotWidget(class UCharacterGridItem_C** AsCharacter_Grid_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetCharacterSlotWidget");

	UDLC_LoadoutPage_C_GetCharacterSlotWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsCharacter_Grid_Item != nullptr)
		*AsCharacter_Grid_Item = params.AsCharacter_Grid_Item;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.PlayCharacterSelectionSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            CharacterTag                   (Parm)

void UDLC_LoadoutPage_C::PlayCharacterSelectionSound(const struct FGameplayTag& CharacterTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.PlayCharacterSelectionSound");

	UDLC_LoadoutPage_C_PlayCharacterSelectionSound_Params params;
	params.CharacterTag = CharacterTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateCategoryVisibilityByTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UDLC_LoadoutPage_C::UpdateCategoryVisibilityByTag(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateCategoryVisibilityByTag");

	UDLC_LoadoutPage_C_UpdateCategoryVisibilityByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.FormatTextForItemValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   Text                           (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCValueDisplayType> Display_Type                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Formatted_Text                 (Parm, OutParm)

void UDLC_LoadoutPage_C::FormatTextForItemValue(const struct FText& Text, float Value, TEnumAsByte<EDLCValueDisplayType> Display_Type, struct FText* Formatted_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.FormatTextForItemValue");

	UDLC_LoadoutPage_C_FormatTextForItemValue_Params params;
	params.Text = Text;
	params.Value = Value;
	params.Display_Type = Display_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Formatted_Text != nullptr)
		*Formatted_Text = params.Formatted_Text;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.PurchaseOrUpgradeItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::PurchaseOrUpgradeItem(const struct FGameplayTag& Tag, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.PurchaseOrUpgradeItem");

	UDLC_LoadoutPage_C_PurchaseOrUpgradeItem_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.IsItemOwned?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)
// bool                           bIsOwned                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::IsItemOwned_(const struct FGameplayTag& Tag, bool* bIsOwned, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.IsItemOwned?");

	UDLC_LoadoutPage_C_IsItemOwned__Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsOwned != nullptr)
		*bIsOwned = params.bIsOwned;
	if (Level != nullptr)
		*Level = params.Level;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakePurchasePriceText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Shop_Points                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UDLC_LoadoutPage_C::MakePurchasePriceText(int Shop_Points, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakePurchasePriceText");

	UDLC_LoadoutPage_C_MakePurchasePriceText_Params params;
	params.Shop_Points = Shop_Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetLockedColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::SetLockedColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetLockedColor");

	UDLC_LoadoutPage_C_SetLockedColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetActionVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Primary                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Show_Secondary                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Show_Locked                    (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::SetActionVisibility(bool Show_Primary, bool Show_Secondary, bool Show_Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetActionVisibility");

	UDLC_LoadoutPage_C_SetActionVisibility_Params params;
	params.Show_Primary = Show_Primary;
	params.Show_Secondary = Show_Secondary;
	params.Show_Locked = Show_Locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetItemCost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::GetItemCost(const struct FGameplayTag& Tag, int Level, int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetItemCost");

	UDLC_LoadoutPage_C_GetItemCost_Params params;
	params.Tag = Tag;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateChallengeGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Challenge_Key                  (Parm)

void UDLC_LoadoutPage_C::UpdateChallengeGrid(const struct FGameplayTag& Challenge_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateChallengeGrid");

	UDLC_LoadoutPage_C_UpdateChallengeGrid_Params params;
	params.Challenge_Key = Challenge_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetTitleFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFaded                         (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::SetTitleFade(bool bFaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetTitleFade");

	UDLC_LoadoutPage_C_SetTitleFade_Params params;
	params.bFaded = bFaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetSlotFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFaded                         (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::SetSlotFade(bool bFaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetSlotFade");

	UDLC_LoadoutPage_C_SetSlotFade_Params params;
	params.bFaded = bFaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetChallenge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Challenge_Tag                  (Parm)

void UDLC_LoadoutPage_C::SetChallenge(const struct FGameplayTag& Challenge_Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetChallenge");

	UDLC_LoadoutPage_C_SetChallenge_Params params;
	params.Challenge_Tag = Challenge_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateSelectedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UDLC_LoadoutPage_C::UpdateSelectedItem(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateSelectedItem");

	UDLC_LoadoutPage_C_UpdateSelectedItem_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.ClearSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::ClearSlot(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.ClearSlot");

	UDLC_LoadoutPage_C_ClearSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetLoadoutMenuBySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::SetLoadoutMenuBySlot(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.SetLoadoutMenuBySlot");

	UDLC_LoadoutPage_C_SetLoadoutMenuBySlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::GetSelectedSlot(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.GetSelectedSlot");

	UDLC_LoadoutPage_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateLoadoutData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlot                   (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::UpdateLoadoutData(int SelectedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateLoadoutData");

	UDLC_LoadoutPage_C_UpdateLoadoutData_Params params;
	params.SelectedSlot = SelectedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.IsItemEquipped?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)
// bool                           bIsEquipped                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::IsItemEquipped_(const struct FGameplayTag& Tag, bool* bIsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.IsItemEquipped?");

	UDLC_LoadoutPage_C_IsItemEquipped__Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsEquipped != nullptr)
		*bIsEquipped = params.bIsEquipped;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.EquipItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::EquipItem(int Slot, const struct FGameplayTag& Tag, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.EquipItem");

	UDLC_LoadoutPage_C_EquipItem_Params params;
	params.Slot = Slot;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.CloseSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::CloseSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.CloseSlot");

	UDLC_LoadoutPage_C_CloseSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.OpenSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::OpenSlot(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.OpenSlot");

	UDLC_LoadoutPage_C_OpenSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeRingItemGridData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDLCGridWidgetData> Data                           (Parm, OutParm, ZeroConstructor)

void UDLC_LoadoutPage_C::MakeRingItemGridData(TArray<struct FDLCGridWidgetData>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeRingItemGridData");

	UDLC_LoadoutPage_C_MakeRingItemGridData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeBikeSkinItemGridData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDLCGridWidgetData> Data                           (Parm, OutParm, ZeroConstructor)

void UDLC_LoadoutPage_C::MakeBikeSkinItemGridData(TArray<struct FDLCGridWidgetData>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeBikeSkinItemGridData");

	UDLC_LoadoutPage_C_MakeBikeSkinItemGridData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeCharacterItemGridData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDLCGridWidgetData> Data                           (Parm, OutParm, ZeroConstructor)

void UDLC_LoadoutPage_C::MakeCharacterItemGridData(TArray<struct FDLCGridWidgetData>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeCharacterItemGridData");

	UDLC_LoadoutPage_C_MakeCharacterItemGridData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateLoadoutCategorySelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UDLC_LoadoutPage_C::UpdateLoadoutCategorySelection(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.UpdateLoadoutCategorySelection");

	UDLC_LoadoutPage_C_UpdateLoadoutCategorySelection_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeLittleGridData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDLCGridWidgetData> Data                           (Parm, OutParm, ZeroConstructor)

void UDLC_LoadoutPage_C::MakeLittleGridData(TArray<struct FDLCGridWidgetData>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeLittleGridData");

	UDLC_LoadoutPage_C_MakeLittleGridData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeBigGridData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDLCGridWidgetData> Data                           (Parm, OutParm, ZeroConstructor)

void UDLC_LoadoutPage_C::MakeBigGridData(TArray<struct FDLCGridWidgetData>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.MakeBigGridData");

	UDLC_LoadoutPage_C_MakeBigGridData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnFail_1CB20138489B2B72B6B3839147F5005E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::OnFail_1CB20138489B2B72B6B3839147F5005E(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnFail_1CB20138489B2B72B6B3839147F5005E");

	UDLC_LoadoutPage_C_OnFail_1CB20138489B2B72B6B3839147F5005E_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnSuccess_1CB20138489B2B72B6B3839147F5005E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::OnSuccess_1CB20138489B2B72B6B3839147F5005E(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnSuccess_1CB20138489B2B72B6B3839147F5005E");

	UDLC_LoadoutPage_C_OnSuccess_1CB20138489B2B72B6B3839147F5005E_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveUp
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveUp");

	UDLC_LoadoutPage_C_RecieveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveDown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveDown");

	UDLC_LoadoutPage_C_RecieveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveLeft");

	UDLC_LoadoutPage_C_RecieveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveRight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveRight");

	UDLC_LoadoutPage_C_RecieveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCircle");

	UDLC_LoadoutPage_C_RecieveCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCross
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveCross()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCross");

	UDLC_LoadoutPage_C_RecieveCross_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveTriangle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveTriangle");

	UDLC_LoadoutPage_C_RecieveTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquare
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveSquare()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquare");

	UDLC_LoadoutPage_C_RecieveSquare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCrossHeld
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveCrossHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCrossHeld");

	UDLC_LoadoutPage_C_RecieveCrossHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquareHeld
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::RecieveSquareHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquareHeld");

	UDLC_LoadoutPage_C_RecieveSquareHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCrossHoldUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::RecieveCrossHoldUpdate(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveCrossHoldUpdate");

	UDLC_LoadoutPage_C_RecieveCrossHoldUpdate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquareHoldUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::RecieveSquareHoldUpdate(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.RecieveSquareHoldUpdate");

	UDLC_LoadoutPage_C_RecieveSquareHoldUpdate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1196_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LoadoutPage_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1196_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1196_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1196_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1514_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LoadoutPage_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1514_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1514_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1514_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_StartChallenge_K2Node_ComponentBoundEvent_1595_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LoadoutPage_C::BndEvt__MenuInteract_StartChallenge_K2Node_ComponentBoundEvent_1595_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_StartChallenge_K2Node_ComponentBoundEvent_1595_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__MenuInteract_StartChallenge_K2Node_ComponentBoundEvent_1595_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_2450_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LoadoutPage_C::BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_2450_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_2450_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_2450_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_SI_Equip_K2Node_ComponentBoundEvent_1352_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LoadoutPage_C::BndEvt__MenuInteract_SI_Equip_K2Node_ComponentBoundEvent_1352_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_SI_Equip_K2Node_ComponentBoundEvent_1352_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__MenuInteract_SI_Equip_K2Node_ComponentBoundEvent_1352_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_SI_Purchase_K2Node_ComponentBoundEvent_1411_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LoadoutPage_C::BndEvt__MenuInteract_SI_Purchase_K2Node_ComponentBoundEvent_1411_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_SI_Purchase_K2Node_ComponentBoundEvent_1411_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__MenuInteract_SI_Purchase_K2Node_ComponentBoundEvent_1411_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_2_K2Node_ComponentBoundEvent_1567_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::BndEvt__BigItemGrid_2_K2Node_ComponentBoundEvent_1567_OnItemClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_2_K2Node_ComponentBoundEvent_1567_OnItemClicked__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__BigItemGrid_2_K2Node_ComponentBoundEvent_1567_OnItemClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2330_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2330_OnItemClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2330_OnItemClicked__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2330_OnItemClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3205_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3205_OnItemClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3205_OnItemClicked__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3205_OnItemClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_133_OnItemHold__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_133_OnItemHold__DelegateSignature(int Index, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_133_OnItemHold__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_133_OnItemHold__DelegateSignature_Params params;
	params.Index = Index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDLC_LoadoutPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.Construct");

	UDLC_LoadoutPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.On Challenge Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Image                          (Parm)
// struct FGameplayTag            ChallengeTag                   (Parm)

void UDLC_LoadoutPage_C::On_Challenge_Image(TAssetPtr<class UTexture2D> Image, const struct FGameplayTag& ChallengeTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.On Challenge Image");

	UDLC_LoadoutPage_C_On_Challenge_Image_Params params;
	params.Image = Image;
	params.ChallengeTag = ChallengeTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Leaderboards_K2Node_ComponentBoundEvent_1717_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LoadoutPage_C::BndEvt__MenuInteract_Leaderboards_K2Node_ComponentBoundEvent_1717_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__MenuInteract_Leaderboards_K2Node_ComponentBoundEvent_1717_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__MenuInteract_Leaderboards_K2Node_ComponentBoundEvent_1717_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_2117_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UDLC_LoadoutPage_C::BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_2117_OnSelectionChanged__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_2117_OnSelectionChanged__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_2117_OnSelectionChanged__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2141_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UDLC_LoadoutPage_C::BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2141_OnSelectionChanged__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2141_OnSelectionChanged__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__CategoryItemGrid_1_K2Node_ComponentBoundEvent_2141_OnSelectionChanged__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_2761_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UDLC_LoadoutPage_C::BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_2761_OnSelectionChanged__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_2761_OnSelectionChanged__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_2761_OnSelectionChanged__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3081_OnItemHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3081_OnItemHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3081_OnItemHovered__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__LittleItemGrid_1_K2Node_ComponentBoundEvent_3081_OnItemHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_3095_OnItemHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_3095_OnItemHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_3095_OnItemHovered__DelegateSignature");

	UDLC_LoadoutPage_C_BndEvt__BigItemGrid_1_K2Node_ComponentBoundEvent_3095_OnItemHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.ExecuteUbergraph_DLC_LoadoutPage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LoadoutPage_C::ExecuteUbergraph_DLC_LoadoutPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.ExecuteUbergraph_DLC_LoadoutPage");

	UDLC_LoadoutPage_C_ExecuteUbergraph_DLC_LoadoutPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnLeaderboardsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDLC_LoadoutPage_C::OnLeaderboardsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LoadoutPage.DLC_LoadoutPage_C.OnLeaderboardsClicked__DelegateSignature");

	UDLC_LoadoutPage_C_OnLeaderboardsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_GridItem_Base.UI_GridItem_Base_C.GetMerchantItemLevelRequired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Required                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::GetMerchantItemLevelRequired(int* Required)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.GetMerchantItemLevelRequired");

	UUI_GridItem_Base_C_GetMerchantItemLevelRequired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Required != nullptr)
		*Required = params.Required;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.StoreMissionJobZoneData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData*        MissionData                    (Parm, ZeroConstructor, IsPlainOldData)
// class UJobClassInfo*           JobData                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActiveObjectiveMenu          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemColumn                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_MenuPage_Base_C*     MenuRef                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::StoreMissionJobZoneData(class UBendMissionData* MissionData, class UJobClassInfo* JobData, bool IsActiveObjectiveMenu, int ItemColumn, class UUI_MenuPage_Base_C* MenuRef, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.StoreMissionJobZoneData");

	UUI_GridItem_Base_C_StoreMissionJobZoneData_Params params;
	params.MissionData = MissionData;
	params.JobData = JobData;
	params.IsActiveObjectiveMenu = IsActiveObjectiveMenu;
	params.ItemColumn = ItemColumn;
	params.MenuRef = MenuRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.SetRememberedHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::SetRememberedHighlight(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.SetRememberedHighlight");

	UUI_GridItem_Base_C_SetRememberedHighlight_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.StoreWeaponData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             WeaponRef                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::StoreWeaponData(class ABendWeapon* WeaponRef, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.StoreWeaponData");

	UUI_GridItem_Base_C_StoreWeaponData_Params params;
	params.WeaponRef = WeaponRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.StoreItemData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRUCT_MenuInventoryData InventoryData                  (Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::StoreItemData(const struct FSTRUCT_MenuInventoryData& InventoryData, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.StoreItemData");

	UUI_GridItem_Base_C_StoreItemData_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.IsBlankButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           BlankButton                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::IsBlankButton(bool* BlankButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.IsBlankButton");

	UUI_GridItem_Base_C_IsBlankButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlankButton != nullptr)
		*BlankButton = params.BlankButton;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.SetSelected");

	UUI_GridItem_Base_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::SetTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.SetTexture");

	UUI_GridItem_Base_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GridItem_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.Construct");

	UUI_GridItem_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.AsyncLoadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MatchSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::AsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.AsyncLoadTextureAsset");

	UUI_GridItem_Base_C_AsyncLoadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;
	params.Image = Image;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_GridItem_Base_C::CustomEvent_1(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.CustomEvent_1");

	UUI_GridItem_Base_C_CustomEvent_1_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_Base.UI_GridItem_Base_C.ExecuteUbergraph_UI_GridItem_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_Base_C::ExecuteUbergraph_UI_GridItem_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_Base.UI_GridItem_Base_C.ExecuteUbergraph_UI_GridItem_Base");

	UUI_GridItem_Base_C_ExecuteUbergraph_UI_GridItem_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

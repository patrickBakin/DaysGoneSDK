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

// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.SetWeaponStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::SetWeaponStats(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.SetWeaponStats");

	UUI_InventoryPage_Gear_C_SetWeaponStats_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.StoreDataByFName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C**    Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::StoreDataByFName(struct FName* Name, class UUI_GridItem_Base_C** Grid_Item, int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.StoreDataByFName");

	UUI_InventoryPage_Gear_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.DisplayStoryItemArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>  State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::DisplayStoryItemArea(TEnumAsByte<ESlateVisibility> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.DisplayStoryItemArea");

	UUI_InventoryPage_Gear_C_DisplayStoryItemArea_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.SetTheMenuHeader
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type>* Category, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.SetTheMenuHeader");

	UUI_InventoryPage_Gear_C_SetTheMenuHeader_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.UpdateSelectionDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::UpdateSelectionDetails(class UUI_GridItem_Base_C** GridItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.UpdateSelectionDetails");

	UUI_InventoryPage_Gear_C_UpdateSelectionDetails_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InventoryPage_Gear_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.Construct");

	UUI_InventoryPage_Gear_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Gear_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.CircleSelectionInputGiven");

	UUI_InventoryPage_Gear_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Gear_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.CrossSelectionInputGiven");

	UUI_InventoryPage_Gear_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.RecreateAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DontDestroyCurrentGrids        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideDestoryIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::RecreateAllGrids(bool* DontDestroyCurrentGrids, int* OverrideDestoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.RecreateAllGrids");

	UUI_InventoryPage_Gear_C_RecreateAllGrids_Params params;
	params.DontDestroyCurrentGrids = DontDestroyCurrentGrids;
	params.OverrideDestoryIndex = OverrideDestoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.MenuSelected");

	UUI_InventoryPage_Gear_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Gear_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.FlushStaticImages");

	UUI_InventoryPage_Gear_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Gear_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.InitStaticImages");

	UUI_InventoryPage_Gear_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.LoadImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Image                          (Parm)
// class UImage*                  Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::LoadImage(TAssetPtr<class UTexture2D> Image, class UImage* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.LoadImage");

	UUI_InventoryPage_Gear_C_LoadImage_Params params;
	params.Image = Image;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.ImageLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_InventoryPage_Gear_C::ImageLoaded(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.ImageLoaded");

	UUI_InventoryPage_Gear_C_ImageLoaded_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_5609_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Gear_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_5609_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_5609_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_5609_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_5720_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Gear_C::BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_5720_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_5720_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_5720_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_5723_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Gear_C::BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_5723_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_5723_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_5723_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_5727_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Gear_C::BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_5727_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_5727_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_5727_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_5921_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Gear_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_5921_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_5921_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Gear_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_5921_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.ExecuteUbergraph_UI_InventoryPage_Gear
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Gear_C::ExecuteUbergraph_UI_InventoryPage_Gear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Gear.UI_InventoryPage_Gear_C.ExecuteUbergraph_UI_InventoryPage_Gear");

	UUI_InventoryPage_Gear_C_ExecuteUbergraph_UI_InventoryPage_Gear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

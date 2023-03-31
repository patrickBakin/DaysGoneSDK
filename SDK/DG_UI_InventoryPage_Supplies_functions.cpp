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

// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CreatePocketData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTRUCT_MenuInventoryData> AllPocketData                  (Parm, OutParm, ZeroConstructor)

void UUI_InventoryPage_Supplies_C::CreatePocketData(TArray<struct FSTRUCT_MenuInventoryData>* AllPocketData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CreatePocketData");

	UUI_InventoryPage_Supplies_C_CreatePocketData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllPocketData != nullptr)
		*AllPocketData = params.AllPocketData;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.StoreDataByFName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C**    Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Supplies_C::StoreDataByFName(struct FName* Name, class UUI_GridItem_Base_C** Grid_Item, int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.StoreDataByFName");

	UUI_InventoryPage_Supplies_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.UpdateSelectionDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Supplies_C::UpdateSelectionDetails(class UUI_GridItem_Base_C** GridItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.UpdateSelectionDetails");

	UUI_InventoryPage_Supplies_C_UpdateSelectionDetails_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.SetTheMenuHeader
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Supplies_C::SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type>* Category, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.SetTheMenuHeader");

	UUI_InventoryPage_Supplies_C_SetTheMenuHeader_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InventoryPage_Supplies_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.Construct");

	UUI_InventoryPage_Supplies_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Supplies_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.MenuSelected");

	UUI_InventoryPage_Supplies_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.RecreateAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DontDestroyCurrentGrids        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideDestoryIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Supplies_C::RecreateAllGrids(bool* DontDestroyCurrentGrids, int* OverrideDestoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.RecreateAllGrids");

	UUI_InventoryPage_Supplies_C_RecreateAllGrids_Params params;
	params.DontDestroyCurrentGrids = DontDestroyCurrentGrids;
	params.OverrideDestoryIndex = OverrideDestoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Supplies_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CircleSelectionInputGiven");

	UUI_InventoryPage_Supplies_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Supplies_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.CrossSelectionInputGiven");

	UUI_InventoryPage_Supplies_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Supplies_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.FlushStaticImages");

	UUI_InventoryPage_Supplies_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Supplies_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.InitStaticImages");

	UUI_InventoryPage_Supplies_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.LoadImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Image                          (Parm)
// class UImage*                  Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Supplies_C::LoadImage(TAssetPtr<class UTexture2D> Image, class UImage* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.LoadImage");

	UUI_InventoryPage_Supplies_C_LoadImage_Params params;
	params.Image = Image;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.ImageLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_InventoryPage_Supplies_C::ImageLoaded(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.ImageLoaded");

	UUI_InventoryPage_Supplies_C_ImageLoaded_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6101_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Supplies_C::BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6101_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6101_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6101_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6103_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Supplies_C::BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6103_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6103_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6103_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6106_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Supplies_C::BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6106_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6106_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6106_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_6143_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Supplies_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_6143_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_6143_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_6143_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6388_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Supplies_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6388_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6388_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Supplies_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6388_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.ExecuteUbergraph_UI_InventoryPage_Supplies
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Supplies_C::ExecuteUbergraph_UI_InventoryPage_Supplies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Supplies.UI_InventoryPage_Supplies_C.ExecuteUbergraph_UI_InventoryPage_Supplies");

	UUI_InventoryPage_Supplies_C_ExecuteUbergraph_UI_InventoryPage_Supplies_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

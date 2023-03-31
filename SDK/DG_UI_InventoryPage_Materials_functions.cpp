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

// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CreateMaterialData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTRUCT_MenuInventoryData> AllPocketData                  (Parm, OutParm, ZeroConstructor)

void UUI_InventoryPage_Materials_C::CreateMaterialData(TArray<struct FSTRUCT_MenuInventoryData>* AllPocketData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CreateMaterialData");

	UUI_InventoryPage_Materials_C_CreateMaterialData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllPocketData != nullptr)
		*AllPocketData = params.AllPocketData;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CombineItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Item                           (Parm)
// TArray<struct FSTRUCT_MenuInventoryData> Items                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_InventoryPage_Materials_C::CombineItems(const struct FGameplayTag& Item, TArray<struct FSTRUCT_MenuInventoryData>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CombineItems");

	UUI_InventoryPage_Materials_C_CombineItems_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.StoreDataByFName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C**    Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Materials_C::StoreDataByFName(struct FName* Name, class UUI_GridItem_Base_C** Grid_Item, int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.StoreDataByFName");

	UUI_InventoryPage_Materials_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.UpdateSelectionDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Materials_C::UpdateSelectionDetails(class UUI_GridItem_Base_C** GridItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.UpdateSelectionDetails");

	UUI_InventoryPage_Materials_C_UpdateSelectionDetails_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.SetTheMenuHeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Materials_C::SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type>* Category, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.SetTheMenuHeader");

	UUI_InventoryPage_Materials_C_SetTheMenuHeader_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InventoryPage_Materials_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.Construct");

	UUI_InventoryPage_Materials_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.RecreateAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DontDestroyCurrentGrids        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideDestoryIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Materials_C::RecreateAllGrids(bool* DontDestroyCurrentGrids, int* OverrideDestoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.RecreateAllGrids");

	UUI_InventoryPage_Materials_C_RecreateAllGrids_Params params;
	params.DontDestroyCurrentGrids = DontDestroyCurrentGrids;
	params.OverrideDestoryIndex = OverrideDestoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Materials_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.MenuSelected");

	UUI_InventoryPage_Materials_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Materials_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CircleSelectionInputGiven");

	UUI_InventoryPage_Materials_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CrossSelectionInputGiven_Copy
// (BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Materials_C::CrossSelectionInputGiven_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.CrossSelectionInputGiven_Copy");

	UUI_InventoryPage_Materials_C_CrossSelectionInputGiven_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Materials_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.FlushStaticImages");

	UUI_InventoryPage_Materials_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Materials_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.InitStaticImages");

	UUI_InventoryPage_Materials_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6354_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Materials_C::BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6354_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6354_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Materials_C_BndEvt__MenuInteract_Crafting_K2Node_ComponentBoundEvent_6354_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6356_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Materials_C::BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6356_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6356_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Materials_C_BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6356_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6359_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Materials_C::BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6359_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6359_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Materials_C_BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6359_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6378_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Materials_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6378_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6378_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Materials_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6378_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.ExecuteUbergraph_UI_InventoryPage_Materials
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Materials_C::ExecuteUbergraph_UI_InventoryPage_Materials(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Materials.UI_InventoryPage_Materials_C.ExecuteUbergraph_UI_InventoryPage_Materials");

	UUI_InventoryPage_Materials_C_ExecuteUbergraph_UI_InventoryPage_Materials_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

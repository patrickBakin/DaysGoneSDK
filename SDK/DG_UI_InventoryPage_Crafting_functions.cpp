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

// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.StoreDataByFName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C**    Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Crafting_C::StoreDataByFName(struct FName* Name, class UUI_GridItem_Base_C** Grid_Item, int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.StoreDataByFName");

	UUI_InventoryPage_Crafting_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.GetDataOfItemsOfMenuType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PullFromMerchant               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PullFromMechanic               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSTRUCT_MenuInventoryData> InventoryData                  (Parm, OutParm, ZeroConstructor)

void UUI_InventoryPage_Crafting_C::GetDataOfItemsOfMenuType(struct FName* Type, bool* PullFromMerchant, bool* PullFromMechanic, TArray<struct FSTRUCT_MenuInventoryData>* InventoryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.GetDataOfItemsOfMenuType");

	UUI_InventoryPage_Crafting_C_GetDataOfItemsOfMenuType_Params params;
	params.Type = Type;
	params.PullFromMerchant = PullFromMerchant;
	params.PullFromMechanic = PullFromMechanic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryData != nullptr)
		*InventoryData = params.InventoryData;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.UpdateSelectionDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Crafting_C::UpdateSelectionDetails(class UUI_GridItem_Base_C** GridItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.UpdateSelectionDetails");

	UUI_InventoryPage_Crafting_C_UpdateSelectionDetails_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.SetTheMenuHeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Crafting_C::SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type>* Category, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.SetTheMenuHeader");

	UUI_InventoryPage_Crafting_C_SetTheMenuHeader_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InventoryPage_Crafting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.Construct");

	UUI_InventoryPage_Crafting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Crafting_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.MenuSelected");

	UUI_InventoryPage_Crafting_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.RecreateAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DontDestroyCurrentGrids        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideDestoryIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Crafting_C::RecreateAllGrids(bool* DontDestroyCurrentGrids, int* OverrideDestoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.RecreateAllGrids");

	UUI_InventoryPage_Crafting_C_RecreateAllGrids_Params params;
	params.DontDestroyCurrentGrids = DontDestroyCurrentGrids;
	params.OverrideDestoryIndex = OverrideDestoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Crafting_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.CircleSelectionInputGiven");

	UUI_InventoryPage_Crafting_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Crafting_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.FlushStaticImages");

	UUI_InventoryPage_Crafting_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Crafting_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.InitStaticImages");

	UUI_InventoryPage_Crafting_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6366_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Crafting_C::BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6366_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6366_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Crafting_C_BndEvt__MenuInteract_Gear_K2Node_ComponentBoundEvent_6366_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6368_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Crafting_C::BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6368_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6368_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Crafting_C_BndEvt__MenuInteract_Materials_K2Node_ComponentBoundEvent_6368_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6371_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Crafting_C::BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6371_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6371_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Crafting_C_BndEvt__MenuInteract_Supplies_K2Node_ComponentBoundEvent_6371_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6383_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Crafting_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6383_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6383_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Crafting_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6383_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.ExecuteUbergraph_UI_InventoryPage_Crafting
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Crafting_C::ExecuteUbergraph_UI_InventoryPage_Crafting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Crafting.UI_InventoryPage_Crafting_C.ExecuteUbergraph_UI_InventoryPage_Crafting");

	UUI_InventoryPage_Crafting_C_ExecuteUbergraph_UI_InventoryPage_Crafting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

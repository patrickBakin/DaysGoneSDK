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

// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.UpdateIndividualData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TypeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ListIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::UpdateIndividualData(int TypeIndex, int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.UpdateIndividualData");

	UUI_StorylinesPage_Collectables_C_UpdateIndividualData_Params params;
	params.TypeIndex = TypeIndex;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.StoreDataByFName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C**    Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::StoreDataByFName(struct FName* Name, class UUI_GridItem_Base_C** Grid_Item, int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.StoreDataByFName");

	UUI_StorylinesPage_Collectables_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.StoreCollectableData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::StoreCollectableData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.StoreCollectableData");

	UUI_StorylinesPage_Collectables_C_StoreCollectableData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.UpdateSelectionDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::UpdateSelectionDetails(class UUI_GridItem_Base_C** GridItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.UpdateSelectionDetails");

	UUI_StorylinesPage_Collectables_C_UpdateSelectionDetails_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.SetTheMenuHeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type>* Category, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.SetTheMenuHeader");

	UUI_StorylinesPage_Collectables_C_SetTheMenuHeader_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.Construct");

	UUI_StorylinesPage_Collectables_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.MenuSelected");

	UUI_StorylinesPage_Collectables_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.RecreateAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DontDestroyCurrentGrids        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideDestoryIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::RecreateAllGrids(bool* DontDestroyCurrentGrids, int* OverrideDestoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.RecreateAllGrids");

	UUI_StorylinesPage_Collectables_C_RecreateAllGrids_Params params;
	params.DontDestroyCurrentGrids = DontDestroyCurrentGrids;
	params.OverrideDestoryIndex = OverrideDestoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.CrossSelectionInputGiven");

	UUI_StorylinesPage_Collectables_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.CircleSelectionInputGiven");

	UUI_StorylinesPage_Collectables_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.OnPlayerDiscoverCollectibleDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemCollectible* Collectible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::OnPlayerDiscoverCollectibleDelegate_Event_1(class UInventoryItemCollectible* Collectible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.OnPlayerDiscoverCollectibleDelegate_Event_1");

	UUI_StorylinesPage_Collectables_C_OnPlayerDiscoverCollectibleDelegate_Event_1_Params params;
	params.Collectible = Collectible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.OnPostSaveGameLoaded_Collectables
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::OnPostSaveGameLoaded_Collectables(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.OnPostSaveGameLoaded_Collectables");

	UUI_StorylinesPage_Collectables_C_OnPostSaveGameLoaded_Collectables_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2262_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2262_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2262_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2262_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2264_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2264_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2264_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2264_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_2267_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_2267_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_2267_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_2267_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_2271_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_2271_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_2271_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_2271_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.R2orL2SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::R2orL2SelectionInputGiven(bool* R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.R2orL2SelectionInputGiven");

	UUI_StorylinesPage_Collectables_C_R2orL2SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_5062_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_5062_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_5062_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_5062_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_5068_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_5068_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_5068_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_5068_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_5075_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StorylinesPage_Collectables_C::BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_5075_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_5075_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_StorylinesPage_Collectables_C_BndEvt__MenuInteract_Trophies_K2Node_ComponentBoundEvent_5075_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.ExecuteUbergraph_UI_StorylinesPage_Collectables
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_StorylinesPage_Collectables_C::ExecuteUbergraph_UI_StorylinesPage_Collectables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StorylinesPage_Collectables.UI_StorylinesPage_Collectables_C.ExecuteUbergraph_UI_StorylinesPage_Collectables");

	UUI_StorylinesPage_Collectables_C_ExecuteUbergraph_UI_StorylinesPage_Collectables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

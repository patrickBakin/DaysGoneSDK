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

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.StoreDataByFName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C**    Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_JournalPage_Trophies_C::StoreDataByFName(struct FName* Name, class UUI_GridItem_Base_C** Grid_Item, int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.StoreDataByFName");

	UUI_JournalPage_Trophies_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_JournalPage_Trophies_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.Construct");

	UUI_JournalPage_Trophies_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JournalPage_Trophies_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.MenuSelected");

	UUI_JournalPage_Trophies_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.RecreateAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DontDestroyCurrentGrids        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideDestoryIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JournalPage_Trophies_C::RecreateAllGrids(bool* DontDestroyCurrentGrids, int* OverrideDestoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.RecreateAllGrids");

	UUI_JournalPage_Trophies_C_RecreateAllGrids_Params params;
	params.DontDestroyCurrentGrids = DontDestroyCurrentGrids;
	params.OverrideDestoryIndex = OverrideDestoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_JournalPage_Trophies_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.CircleSelectionInputGiven");

	UUI_JournalPage_Trophies_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.DirectionalInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              DirectionalInput               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JournalPage_Trophies_C::DirectionalInputGiven(struct FVector2D* DirectionalInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.DirectionalInputGiven");

	UUI_JournalPage_Trophies_C_DirectionalInputGiven_Params params;
	params.DirectionalInput = DirectionalInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.R2orL2SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JournalPage_Trophies_C::R2orL2SelectionInputGiven(bool* R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.R2orL2SelectionInputGiven");

	UUI_JournalPage_Trophies_C_R2orL2SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6718_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_JournalPage_Trophies_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6718_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6718_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6718_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_6720_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_JournalPage_Trophies_C::BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_6720_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_6720_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_6720_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_6723_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_JournalPage_Trophies_C::BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_6723_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_6723_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_6723_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_6806_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_JournalPage_Trophies_C::BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_6806_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_6806_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_6806_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_6811_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_JournalPage_Trophies_C::BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_6811_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_6811_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_6811_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_6817_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_JournalPage_Trophies_C::BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_6817_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_6817_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_6817_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.ExecuteUbergraph_UI_JournalPage_Trophies
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JournalPage_Trophies_C::ExecuteUbergraph_UI_JournalPage_Trophies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.ExecuteUbergraph_UI_JournalPage_Trophies");

	UUI_JournalPage_Trophies_C_ExecuteUbergraph_UI_JournalPage_Trophies_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

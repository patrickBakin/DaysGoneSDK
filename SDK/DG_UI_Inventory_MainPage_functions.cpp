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

// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.UpdateSelectionDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_MainPage_C::UpdateSelectionDetails(class UUI_GridItem_Base_C** GridItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.UpdateSelectionDetails");

	UUI_Inventory_MainPage_C_UpdateSelectionDetails_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Inventory_MainPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.Construct");

	UUI_Inventory_MainPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_MainPage_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.CrossSelectionInputGiven");

	UUI_Inventory_MainPage_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_MainPage_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.CircleSelectionInputGiven");

	UUI_Inventory_MainPage_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.DisplayAlternateNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_MainPage_C::DisplayAlternateNavigation(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.DisplayAlternateNavigation");

	UUI_Inventory_MainPage_C_DisplayAlternateNavigation_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.R1orL1SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_MainPage_C::R1orL1SelectionInputGiven(bool* R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.R1orL1SelectionInputGiven");

	UUI_Inventory_MainPage_C_R1orL1SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_2238_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Inventory_MainPage_C::BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_2238_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_2238_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Inventory_MainPage_C_BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_2238_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1520_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Inventory_MainPage_C::BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1520_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1520_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Inventory_MainPage_C_BndEvt__MenuInteract_Map_K2Node_ComponentBoundEvent_1520_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_1523_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Inventory_MainPage_C::BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_1523_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_1523_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Inventory_MainPage_C_BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_1523_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Storylines_K2Node_ComponentBoundEvent_1527_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Inventory_MainPage_C::BndEvt__MenuInteract_Storylines_K2Node_ComponentBoundEvent_1527_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.BndEvt__MenuInteract_Storylines_K2Node_ComponentBoundEvent_1527_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Inventory_MainPage_C_BndEvt__MenuInteract_Storylines_K2Node_ComponentBoundEvent_1527_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.ExecuteUbergraph_UI_Inventory_MainPage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_MainPage_C::ExecuteUbergraph_UI_Inventory_MainPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.ExecuteUbergraph_UI_Inventory_MainPage");

	UUI_Inventory_MainPage_C_ExecuteUbergraph_UI_Inventory_MainPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnMenuClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_MainPage_C::OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnMenuClicked__DelegateSignature");

	UUI_Inventory_MainPage_C_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnGoToPrevPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_MainPage_C::OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnGoToPrevPage__DelegateSignature");

	UUI_Inventory_MainPage_C_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnGoToNextPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_MainPage_C::OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnGoToNextPage__DelegateSignature");

	UUI_Inventory_MainPage_C_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnRequestClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_MainPage_C::OnRequestClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_MainPage.UI_Inventory_MainPage_C.OnRequestClose__DelegateSignature");

	UUI_Inventory_MainPage_C_OnRequestClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

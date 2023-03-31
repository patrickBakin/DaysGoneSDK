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

// Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.OnSelected
// (Event, Public, BlueprintEvent)

void UUI_CompletedMissionsListItem_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.OnSelected");

	UUI_CompletedMissionsListItem_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.OnDeselected
// (Event, Public, BlueprintEvent)

void UUI_CompletedMissionsListItem_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.OnDeselected");

	UUI_CompletedMissionsListItem_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.OnData
// (Event, Public, BlueprintEvent)

void UUI_CompletedMissionsListItem_C::OnData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.OnData");

	UUI_CompletedMissionsListItem_C_OnData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_14523_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CompletedMissionsListItem_C::BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_14523_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_14523_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_CompletedMissionsListItem_C_BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_14523_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.ExecuteUbergraph_UI_CompletedMissionsListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsListItem_C::ExecuteUbergraph_UI_CompletedMissionsListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.ExecuteUbergraph_UI_CompletedMissionsListItem");

	UUI_CompletedMissionsListItem_C_ExecuteUbergraph_UI_CompletedMissionsListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsListItem_C::OnItemSelected__DelegateSignature(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsListItem.UI_CompletedMissionsListItem_C.OnItemSelected__DelegateSignature");

	UUI_CompletedMissionsListItem_C_OnItemSelected__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

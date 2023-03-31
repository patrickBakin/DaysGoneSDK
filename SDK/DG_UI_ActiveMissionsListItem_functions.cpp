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

// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.Set Is Tracked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Tracked                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsListItem_C::Set_Is_Tracked(bool Is_Tracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.Set Is Tracked");

	UUI_ActiveMissionsListItem_C_Set_Is_Tracked_Params params;
	params.Is_Tracked = Is_Tracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnSelected
// (Event, Public, BlueprintEvent)

void UUI_ActiveMissionsListItem_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnSelected");

	UUI_ActiveMissionsListItem_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnDeselected
// (Event, Public, BlueprintEvent)

void UUI_ActiveMissionsListItem_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnDeselected");

	UUI_ActiveMissionsListItem_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnData
// (Event, Public, BlueprintEvent)

void UUI_ActiveMissionsListItem_C::OnData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnData");

	UUI_ActiveMissionsListItem_C_OnData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_12987_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ActiveMissionsListItem_C::BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_12987_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_12987_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_ActiveMissionsListItem_C_BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_12987_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_12989_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ActiveMissionsListItem_C::BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_12989_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_12989_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_ActiveMissionsListItem_C_BndEvt__MenuInteract_Item_K2Node_ComponentBoundEvent_12989_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.ExecuteUbergraph_UI_ActiveMissionsListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsListItem_C::ExecuteUbergraph_UI_ActiveMissionsListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.ExecuteUbergraph_UI_ActiveMissionsListItem");

	UUI_ActiveMissionsListItem_C_ExecuteUbergraph_UI_ActiveMissionsListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsListItem_C::OnHovered__DelegateSignature(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnHovered__DelegateSignature");

	UUI_ActiveMissionsListItem_C_OnHovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActiveMissionsListItem_C::OnClicked__DelegateSignature(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActiveMissionsListItem.UI_ActiveMissionsListItem_C.OnClicked__DelegateSignature");

	UUI_ActiveMissionsListItem_C_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.AddActiveItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJournalEntryData       Data                           (Parm)
// class UUI_ActiveMissionsListItem_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::AddActiveItem(const struct FJournalEntryData& Data, class UUI_ActiveMissionsListItem_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.AddActiveItem");

	UUI_CompletedMissionsStorylineGroup_C_AddActiveItem_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.AddCompletedItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJournalEntryData       Data                           (Parm)
// class UUI_CompletedMissionsListItem_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::AddCompletedItem(const struct FJournalEntryData& Data, class UUI_CompletedMissionsListItem_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.AddCompletedItem");

	UUI_CompletedMissionsStorylineGroup_C_AddCompletedItem_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.GetExpansionIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_CompletedMissionsStorylineGroup_C::GetExpansionIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.GetExpansionIcon");

	UUI_CompletedMissionsStorylineGroup_C_GetExpansionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Is Empty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CompletedMissionsStorylineGroup_C::Is_Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Is Empty");

	UUI_CompletedMissionsStorylineGroup_C_Is_Empty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Get Visible List Items
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJournalListItem*> Items                          (Parm, OutParm, ZeroConstructor)

void UUI_CompletedMissionsStorylineGroup_C::Get_Visible_List_Items(TArray<class UJournalListItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Get Visible List Items");

	UUI_CompletedMissionsStorylineGroup_C_Get_Visible_List_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Get All List Items
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJournalListItem*> Items                          (Parm, OutParm, ZeroConstructor)

void UUI_CompletedMissionsStorylineGroup_C::Get_All_List_Items(TArray<class UJournalListItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Get All List Items");

	UUI_CompletedMissionsStorylineGroup_C_Get_All_List_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Expand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Shoud_Be_Expanded              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::Expand(bool Shoud_Be_Expanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Expand");

	UUI_CompletedMissionsStorylineGroup_C_Expand_Params params;
	params.Shoud_Be_Expanded = Shoud_Be_Expanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Selected                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::Select(bool Is_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Select");

	UUI_CompletedMissionsStorylineGroup_C_Select_Params params;
	params.Is_Selected = Is_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Set Storyline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendStoryLinesForScripting StoryLine                      (Parm)

void UUI_CompletedMissionsStorylineGroup_C::Set_Storyline(const struct FBendStoryLinesForScripting& StoryLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Set Storyline");

	UUI_CompletedMissionsStorylineGroup_C_Set_Storyline_Params params;
	params.StoryLine = StoryLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Construct");

	UUI_CompletedMissionsStorylineGroup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.Tick");

	UUI_CompletedMissionsStorylineGroup_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnSelected
// (Event, Public, BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnSelected");

	UUI_CompletedMissionsStorylineGroup_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnDeselected
// (Event, Public, BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnDeselected");

	UUI_CompletedMissionsStorylineGroup_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnData
// (Event, Public, BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::OnData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnData");

	UUI_CompletedMissionsStorylineGroup_C_OnData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.FreeWidgets
// (BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::FreeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.FreeWidgets");

	UUI_CompletedMissionsStorylineGroup_C_FreeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_3785_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_3785_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_3785_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_CompletedMissionsStorylineGroup_C_BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_3785_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.HandleItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::HandleItemHovered(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.HandleItemHovered");

	UUI_CompletedMissionsStorylineGroup_C_HandleItemHovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_12581_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_12581_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_12581_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_CompletedMissionsStorylineGroup_C_BndEvt__MenuInteract_Header_K2Node_ComponentBoundEvent_12581_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.HandleItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::HandleItemClicked(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.HandleItemClicked");

	UUI_CompletedMissionsStorylineGroup_C_HandleItemClicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.ExecuteUbergraph_UI_CompletedMissionsStorylineGroup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::ExecuteUbergraph_UI_CompletedMissionsStorylineGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.ExecuteUbergraph_UI_CompletedMissionsStorylineGroup");

	UUI_CompletedMissionsStorylineGroup_C_ExecuteUbergraph_UI_CompletedMissionsStorylineGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UJournalListItem*        Group                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::OnItemClicked__DelegateSignature(int Index, class UJournalListItem* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnItemClicked__DelegateSignature");

	UUI_CompletedMissionsStorylineGroup_C_OnItemClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::OnHovered__DelegateSignature(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnHovered__DelegateSignature");

	UUI_CompletedMissionsStorylineGroup_C_OnHovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UJournalListItem*        Group                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::OnItemHovered__DelegateSignature(int Index, class UJournalListItem* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnItemHovered__DelegateSignature");

	UUI_CompletedMissionsStorylineGroup_C_OnItemHovered__DelegateSignature_Params params;
	params.Index = Index;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalListItem*        Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CompletedMissionsStorylineGroup_C::OnClicked__DelegateSignature(class UJournalListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnClicked__DelegateSignature");

	UUI_CompletedMissionsStorylineGroup_C_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnCollapsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::OnCollapsed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnCollapsed__DelegateSignature");

	UUI_CompletedMissionsStorylineGroup_C_OnCollapsed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnExpanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CompletedMissionsStorylineGroup_C::OnExpanded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompletedMissionsStorylineGroup.UI_CompletedMissionsStorylineGroup_C.OnExpanded__DelegateSignature");

	UUI_CompletedMissionsStorylineGroup_C_OnExpanded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

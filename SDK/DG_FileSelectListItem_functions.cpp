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

// Function FileSelectListItem.FileSelectListItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void UFileSelectListItem_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectListItem.FileSelectListItem_C.SetSelected");

	UFileSelectListItem_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectListItem.FileSelectListItem_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFileSelectListItem_C::BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectListItem.FileSelectListItem_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature");

	UFileSelectListItem_C_BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectListItem.FileSelectListItem_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFileSelectListItem_C::BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectListItem.FileSelectListItem_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature");

	UFileSelectListItem_C_BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectListItem.FileSelectListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFileSelectListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectListItem.FileSelectListItem_C.Construct");

	UFileSelectListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectListItem.FileSelectListItem_C.ExecuteUbergraph_FileSelectListItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFileSelectListItem_C::ExecuteUbergraph_FileSelectListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectListItem.FileSelectListItem_C.ExecuteUbergraph_FileSelectListItem");

	UFileSelectListItem_C_ExecuteUbergraph_FileSelectListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectListItem.FileSelectListItem_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGameMenuItemData   Data                           (Parm)

void UFileSelectListItem_C::OnHovered__DelegateSignature(int Index, const struct FSaveGameMenuItemData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectListItem.FileSelectListItem_C.OnHovered__DelegateSignature");

	UFileSelectListItem_C_OnHovered__DelegateSignature_Params params;
	params.Index = Index;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectListItem.FileSelectListItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGameMenuItemData   Data                           (Parm)

void UFileSelectListItem_C::OnClicked__DelegateSignature(int Index, const struct FSaveGameMenuItemData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectListItem.FileSelectListItem_C.OnClicked__DelegateSignature");

	UFileSelectListItem_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

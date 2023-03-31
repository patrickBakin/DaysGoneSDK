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

// Function FileSelectMenu.FileSelectMenu_C.DisplayBlockingInfoPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)

void UFileSelectMenu_C::DisplayBlockingInfoPopup(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.DisplayBlockingInfoPopup");

	UFileSelectMenu_C_DisplayBlockingInfoPopup_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.DisplayBlockingConfirmationPopup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)
// struct FScriptDelegate         OnConfirm                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         OnCancel                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFileSelectMenu_C::DisplayBlockingConfirmationPopup(const struct FText& Message, const struct FScriptDelegate& OnConfirm, const struct FScriptDelegate& OnCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.DisplayBlockingConfirmationPopup");

	UFileSelectMenu_C_DisplayBlockingConfirmationPopup_Params params;
	params.Message = Message;
	params.OnConfirm = OnConfirm;
	params.OnCancel = OnCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.GetSlotByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFileSelectListItem_C*   FileItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFileSelectMenu_C::GetSlotByIndex(int Index, class UFileSelectListItem_C** FileItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.GetSlotByIndex");

	UFileSelectMenu_C_GetSlotByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileItem != nullptr)
		*FileItem = params.FileItem;
}


// Function FileSelectMenu.FileSelectMenu_C.SetCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UFileSelectMenu_C::SetCursorPosition(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.SetCursorPosition");

	UFileSelectMenu_C_SetCursorPosition_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFileSelectMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.Construct");

	UFileSelectMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFileSelectMenu_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnCancelPressed");

	UFileSelectMenu_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFileSelectMenu_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnConfirmPressed");

	UFileSelectMenu_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FSaveGameMenuItemData>* InData                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFileSelectMenu_C::OnData(TArray<struct FSaveGameMenuItemData>* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnData");

	UFileSelectMenu_C_OnData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGameMenuItemData   Data                           (Parm)

void UFileSelectMenu_C::OnItemClicked(int Index, const struct FSaveGameMenuItemData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnItemClicked");

	UFileSelectMenu_C_OnItemClicked_Params params;
	params.Index = Index;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGameMenuItemData   Data                           (Parm)

void UFileSelectMenu_C::OnItemHovered(int Index, const struct FSaveGameMenuItemData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnItemHovered");

	UFileSelectMenu_C_OnItemHovered_Params params;
	params.Index = Index;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.SelectSlotIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UFileSelectMenu_C::SelectSlotIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.SelectSlotIndex");

	UFileSelectMenu_C_SelectSlotIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnDialogCancel
// (BlueprintCallable, BlueprintEvent)

void UFileSelectMenu_C::OnDialogCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnDialogCancel");

	UFileSelectMenu_C_OnDialogCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnFileConfirm
// (BlueprintCallable, BlueprintEvent)

void UFileSelectMenu_C::OnFileConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnFileConfirm");

	UFileSelectMenu_C_OnFileConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature
// (BlueprintEvent)

void UFileSelectMenu_C::BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature");

	UFileSelectMenu_C_BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature
// (BlueprintEvent)

void UFileSelectMenu_C::BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature");

	UFileSelectMenu_C_BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFileSelectMenu_C::OnDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnDownPressed");

	UFileSelectMenu_C_OnDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFileSelectMenu_C::OnUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnUpPressed");

	UFileSelectMenu_C_OnUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnWidgetClosed
// (Event, Protected, BlueprintEvent)

void UFileSelectMenu_C::OnWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnWidgetClosed");

	UFileSelectMenu_C_OnWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnMenuDismissed
// (BlueprintCallable, BlueprintEvent)

void UFileSelectMenu_C::OnMenuDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnMenuDismissed");

	UFileSelectMenu_C_OnMenuDismissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.ExecuteUbergraph_FileSelectMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFileSelectMenu_C::ExecuteUbergraph_FileSelectMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.ExecuteUbergraph_FileSelectMenu");

	UFileSelectMenu_C_ExecuteUbergraph_FileSelectMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnActionCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFileSelectMenu_C::OnActionCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnActionCompleted__DelegateSignature");

	UFileSelectMenu_C_OnActionCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FileSelectMenu.FileSelectMenu_C.OnSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UFileSelectMenu_C::OnSlotSelected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FileSelectMenu.FileSelectMenu_C.OnSlotSelected__DelegateSignature");

	UFileSelectMenu_C_OnSlotSelected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

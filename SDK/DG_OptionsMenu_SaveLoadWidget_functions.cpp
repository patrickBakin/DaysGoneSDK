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

// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SpawnOverwriteSavePopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::SpawnOverwriteSavePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SpawnOverwriteSavePopup");

	UOptionsMenu_SaveLoadWidget_C_SpawnOverwriteSavePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ValidateSlotAction
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SaveLoadSlotWidget_C* Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanPerformAction               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::ValidateSlotAction(class UUI_SaveLoadSlotWidget_C* Slot, bool* CanPerformAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ValidateSlotAction");

	UOptionsMenu_SaveLoadWidget_C_ValidateSlotAction_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPerformAction != nullptr)
		*CanPerformAction = params.CanPerformAction;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.Init
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.Init");

	UOptionsMenu_SaveLoadWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.GetSlotByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_SaveLoadSlotWidget_C* Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::GetSlotByIndex(int Index, class UUI_SaveLoadSlotWidget_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.GetSlotByIndex");

	UOptionsMenu_SaveLoadWidget_C_GetSlotByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveSlotSelected
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SaveLoadSlotWidget_C* Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::OnSaveSlotSelected(class UUI_SaveLoadSlotWidget_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveSlotSelected");

	UOptionsMenu_SaveLoadWidget_C_OnSaveSlotSelected_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.LoadGame
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveGameType>     Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::LoadGame(TEnumAsByte<ESaveGameType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.LoadGame");

	UOptionsMenu_SaveLoadWidget_C_LoadGame_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SaveGame
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SaveLoadSlotWidget_C* Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::SaveGame(class UUI_SaveLoadSlotWidget_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SaveGame");

	UOptionsMenu_SaveLoadWidget_C_SaveGame_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.DisplayNotification
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UOptionsMenu_SaveLoadWidget_C::DisplayNotification(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.DisplayNotification");

	UOptionsMenu_SaveLoadWidget_C_DisplayNotification_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ConfigFor_Load
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::ConfigFor_Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ConfigFor_Load");

	UOptionsMenu_SaveLoadWidget_C_ConfigFor_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ConfigFor_Save
// (Protected, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::ConfigFor_Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ConfigFor_Save");

	UOptionsMenu_SaveLoadWidget_C_ConfigFor_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SetCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::SetCursorPosition(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SetCursorPosition");

	UOptionsMenu_SaveLoadWidget_C_SetCursorPosition_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.Construct");

	UOptionsMenu_SaveLoadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SpawnInfoPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PopupText                      (Parm)
// bool                           IsInfoOnly                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::SpawnInfoPopup(const struct FText& PopupText, bool IsInfoOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SpawnInfoPopup");

	UOptionsMenu_SaveLoadWidget_C_SpawnInfoPopup_Params params;
	params.PopupText = PopupText;
	params.IsInfoOnly = IsInfoOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnInfoPopupClosed
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnInfoPopupClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnInfoPopupClosed");

	UOptionsMenu_SaveLoadWidget_C_OnInfoPopupClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveConfirm
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnSaveConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveConfirm");

	UOptionsMenu_SaveLoadWidget_C_OnSaveConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveCompleted
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnSaveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveCompleted");

	UOptionsMenu_SaveLoadWidget_C_OnSaveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.RequestClose");

	UOptionsMenu_SaveLoadWidget_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnCancelPressed");

	UOptionsMenu_SaveLoadWidget_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnConfirmPressed");

	UOptionsMenu_SaveLoadWidget_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FSaveGameMenuItemData>* InData                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOptionsMenu_SaveLoadWidget_C::OnData(TArray<struct FSaveGameMenuItemData>* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnData");

	UOptionsMenu_SaveLoadWidget_C_OnData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGameMenuItemData   Data                           (Parm)

void UOptionsMenu_SaveLoadWidget_C::OnItemClicked(int Index, const struct FSaveGameMenuItemData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnItemClicked");

	UOptionsMenu_SaveLoadWidget_C_OnItemClicked_Params params;
	params.Index = Index;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGameMenuItemData   Data                           (Parm)

void UOptionsMenu_SaveLoadWidget_C::OnItemHovered(int Index, const struct FSaveGameMenuItemData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnItemHovered");

	UOptionsMenu_SaveLoadWidget_C_OnItemHovered_Params params;
	params.Index = Index;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SelectSlotIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::SelectSlotIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.SelectSlotIndex");

	UOptionsMenu_SaveLoadWidget_C_SelectSlotIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.CreateMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)
// TEnumAsByte<ESlatePopupStyle>  PopupStyle                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::CreateMessageDialog(const struct FText& Message, TEnumAsByte<ESlatePopupStyle> PopupStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.CreateMessageDialog");

	UOptionsMenu_SaveLoadWidget_C_CreateMessageDialog_Params params;
	params.Message = Message;
	params.PopupStyle = PopupStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDialogCancel
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnDialogCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDialogCancel");

	UOptionsMenu_SaveLoadWidget_C_OnDialogCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDialogConfirm
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnDialogConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDialogConfirm");

	UOptionsMenu_SaveLoadWidget_C_OnDialogConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature
// (BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature");

	UOptionsMenu_SaveLoadWidget_C_BndEvt__InputBar_K2Node_ComponentBoundEvent_1271_OnConfirmClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature
// (BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature");

	UOptionsMenu_SaveLoadWidget_C_BndEvt__InputBar_K2Node_ComponentBoundEvent_1273_OnCancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnDownPressed");

	UOptionsMenu_SaveLoadWidget_C_OnDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnUpPressed");

	UOptionsMenu_SaveLoadWidget_C_OnUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnLoadFailure
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnLoadFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnLoadFailure");

	UOptionsMenu_SaveLoadWidget_C_OnLoadFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnLoadSuccess
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnLoadSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnLoadSuccess");

	UOptionsMenu_SaveLoadWidget_C_OnLoadSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveFailure
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnSaveFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveFailure");

	UOptionsMenu_SaveLoadWidget_C_OnSaveFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveSuccess
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnSaveSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSaveSuccess");

	UOptionsMenu_SaveLoadWidget_C_OnSaveSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ExecuteUbergraph_OptionsMenu_SaveLoadWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::ExecuteUbergraph_OptionsMenu_SaveLoadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.ExecuteUbergraph_OptionsMenu_SaveLoadWidget");

	UOptionsMenu_SaveLoadWidget_C_ExecuteUbergraph_OptionsMenu_SaveLoadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnActionCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionsMenu_SaveLoadWidget_C::OnActionCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnActionCompleted__DelegateSignature");

	UOptionsMenu_SaveLoadWidget_C_OnActionCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenu_SaveLoadWidget_C::OnSlotSelected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenu_SaveLoadWidget.OptionsMenu_SaveLoadWidget_C.OnSlotSelected__DelegateSignature");

	UOptionsMenu_SaveLoadWidget_C_OnSlotSelected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

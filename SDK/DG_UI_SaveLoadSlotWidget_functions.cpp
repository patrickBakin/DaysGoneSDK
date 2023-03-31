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

// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SaveLoadSlotWidget_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SetSelected");

	UUI_SaveLoadSlotWidget_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.UpdateSaveGame
// (Protected, BlueprintCallable, BlueprintEvent)

void UUI_SaveLoadSlotWidget_C::UpdateSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.UpdateSaveGame");

	UUI_SaveLoadSlotWidget_C_UpdateSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SaveGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SaveLoadSlotWidget_C::SaveGame(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SaveGame");

	UUI_SaveLoadSlotWidget_C_SaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.InitializeSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SaveLoadSlotWidget_C::InitializeSlot(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.InitializeSlot");

	UUI_SaveLoadSlotWidget_C_InitializeSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SetBendSave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendSaveGame*           InSave                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SaveLoadSlotWidget_C::SetBendSave(class UBendSaveGame* InSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.SetBendSave");

	UUI_SaveLoadSlotWidget_C_SetBendSave_Params params;
	params.InSave = InSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.LoadSaveGame
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SaveLoadSlotWidget_C::LoadSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.LoadSaveGame");

	UUI_SaveLoadSlotWidget_C_LoadSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.IsSlotValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SaveLoadSlotWidget_C::IsSlotValid(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.IsSlotValid");

	UUI_SaveLoadSlotWidget_C_IsSlotValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.ConfigSlot
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Description                    (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SaveLoadSlotWidget_C::ConfigSlot(float Percentage, const struct FString& Description, bool IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.ConfigSlot");

	UUI_SaveLoadSlotWidget_C_ConfigSlot_Params params;
	params.Percentage = Percentage;
	params.Description = Description;
	params.IsValid = IsValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.InvalidateSlot
// (Protected, BlueprintCallable, BlueprintEvent)

void UUI_SaveLoadSlotWidget_C::InvalidateSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.InvalidateSlot");

	UUI_SaveLoadSlotWidget_C_InvalidateSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SaveLoadSlotWidget_C::BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_SaveLoadSlotWidget_C_BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1190_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SaveLoadSlotWidget_C::BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature");

	UUI_SaveLoadSlotWidget_C_BndEvt__MenuInteract_SaveSlot_K2Node_ComponentBoundEvent_1192_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SaveLoadSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.Construct");

	UUI_SaveLoadSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.ExecuteUbergraph_UI_SaveLoadSlotWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SaveLoadSlotWidget_C::ExecuteUbergraph_UI_SaveLoadSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.ExecuteUbergraph_UI_SaveLoadSlotWidget");

	UUI_SaveLoadSlotWidget_C_ExecuteUbergraph_UI_SaveLoadSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGameMenuItemData   Data                           (Parm)

void UUI_SaveLoadSlotWidget_C::OnHovered__DelegateSignature(int Index, const struct FSaveGameMenuItemData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnHovered__DelegateSignature");

	UUI_SaveLoadSlotWidget_C_OnHovered__DelegateSignature_Params params;
	params.Index = Index;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGameMenuItemData   Data                           (Parm)

void UUI_SaveLoadSlotWidget_C::OnClicked__DelegateSignature(int Index, const struct FSaveGameMenuItemData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnClicked__DelegateSignature");

	UUI_SaveLoadSlotWidget_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnSaveCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_SaveLoadSlotWidget_C::OnSaveCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveLoadSlotWidget.UI_SaveLoadSlotWidget_C.OnSaveCompleted__DelegateSignature");

	UUI_SaveLoadSlotWidget_C_OnSaveCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

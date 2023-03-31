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

// Function InputRemappingMenu.InputRemappingMenu_C.ClearAllConflictingBindings
// (Public, BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::ClearAllConflictingBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.ClearAllConflictingBindings");

	UInputRemappingMenu_C_ClearAllConflictingBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.HideConflictOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::HideConflictOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.HideConflictOverlay");

	UInputRemappingMenu_C_HideConflictOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.ShowConflictOverlay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBendInputMapping*> ConflictingMappings            (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInputRemappingMenu_C::ShowConflictOverlay(TArray<class UBendInputMapping*>* ConflictingMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.ShowConflictOverlay");

	UInputRemappingMenu_C_ShowConflictOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConflictingMappings != nullptr)
		*ConflictingMappings = params.ConflictingMappings;
}


// Function InputRemappingMenu.InputRemappingMenu_C.CheckForConflicts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendInputMapping*       InputMapping                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    NewKey                         (Parm)
// TArray<class UBendInputMapping*> ConflictingMappings            (Parm, OutParm, ZeroConstructor)
// bool                           HasConflicts                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInputRemappingMenu_C::CheckForConflicts(class UBendInputMapping* InputMapping, const struct FKey& NewKey, TArray<class UBendInputMapping*>* ConflictingMappings, bool* HasConflicts)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.CheckForConflicts");

	UInputRemappingMenu_C_CheckForConflicts_Params params;
	params.InputMapping = InputMapping;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConflictingMappings != nullptr)
		*ConflictingMappings = params.ConflictingMappings;
	if (HasConflicts != nullptr)
		*HasConflicts = params.HasConflicts;
}


// Function InputRemappingMenu.InputRemappingMenu_C.AcceptingInputs?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputRemappingMenu_C::AcceptingInputs_()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.AcceptingInputs?");

	UInputRemappingMenu_C_AcceptingInputs__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputRemappingMenu.InputRemappingMenu_C.PopulateKeyBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::PopulateKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.PopulateKeyBindings");

	UInputRemappingMenu_C_PopulateKeyBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputRemappingMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.Construct");

	UInputRemappingMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnMappingSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendInputMapping*       InputMapping                   (Parm, ZeroConstructor, IsPlainOldData)

void UInputRemappingMenu_C::OnMappingSelected(class UBendInputMapping* InputMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnMappingSelected");

	UInputRemappingMenu_C_OnMappingSelected_Params params;
	params.InputMapping = InputMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnInputKeyPressed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)

void UInputRemappingMenu_C::OnInputKeyPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnInputKeyPressed");

	UInputRemappingMenu_C_OnInputKeyPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.ShouldWaitForInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldWait_                    (Parm, ZeroConstructor, IsPlainOldData)

void UInputRemappingMenu_C::ShouldWaitForInput(bool ShouldWait_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.ShouldWaitForInput");

	UInputRemappingMenu_C_ShouldWaitForInput_Params params;
	params.ShouldWait_ = ShouldWait_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1488_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInputRemappingMenu_C::BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1488_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1488_OnMenuInteractClickedEvent__DelegateSignature");

	UInputRemappingMenu_C_BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1488_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_1498_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInputRemappingMenu_C::BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_1498_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_1498_OnMenuInteractClickedEvent__DelegateSignature");

	UInputRemappingMenu_C_BndEvt__MenuInteract_Back_K2Node_ComponentBoundEvent_1498_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnCancelPressed");

	UInputRemappingMenu_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_CancelBinding_K2Node_ComponentBoundEvent_1614_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInputRemappingMenu_C::BndEvt__MenuInteract_CancelBinding_K2Node_ComponentBoundEvent_1614_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_CancelBinding_K2Node_ComponentBoundEvent_1614_OnMenuInteractClickedEvent__DelegateSignature");

	UInputRemappingMenu_C_BndEvt__MenuInteract_CancelBinding_K2Node_ComponentBoundEvent_1614_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_ClearBinding_K2Node_ComponentBoundEvent_1618_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInputRemappingMenu_C::BndEvt__MenuInteract_ClearBinding_K2Node_ComponentBoundEvent_1618_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_ClearBinding_K2Node_ComponentBoundEvent_1618_OnMenuInteractClickedEvent__DelegateSignature");

	UInputRemappingMenu_C_BndEvt__MenuInteract_ClearBinding_K2Node_ComponentBoundEvent_1618_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.ClearActiveBinding
// (BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::ClearActiveBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.ClearActiveBinding");

	UInputRemappingMenu_C_ClearActiveBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnClearPressed
// (BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnClearPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnClearPressed");

	UInputRemappingMenu_C_OnClearPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnClearReleased
// (BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnClearReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnClearReleased");

	UInputRemappingMenu_C_OnClearReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UInputRemappingMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.Tick");

	UInputRemappingMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnClearHeld
// (BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnClearHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnClearHeld");

	UInputRemappingMenu_C_OnClearHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnConfirmPressed");

	UInputRemappingMenu_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_CancelConflict_K2Node_ComponentBoundEvent_2132_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInputRemappingMenu_C::BndEvt__MenuInteract_CancelConflict_K2Node_ComponentBoundEvent_2132_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_CancelConflict_K2Node_ComponentBoundEvent_2132_OnMenuInteractClickedEvent__DelegateSignature");

	UInputRemappingMenu_C_BndEvt__MenuInteract_CancelConflict_K2Node_ComponentBoundEvent_2132_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_AcceptConflict_K2Node_ComponentBoundEvent_2150_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInputRemappingMenu_C::BndEvt__MenuInteract_AcceptConflict_K2Node_ComponentBoundEvent_2150_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.BndEvt__MenuInteract_AcceptConflict_K2Node_ComponentBoundEvent_2150_OnMenuInteractClickedEvent__DelegateSignature");

	UInputRemappingMenu_C_BndEvt__MenuInteract_AcceptConflict_K2Node_ComponentBoundEvent_2150_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnPauseMenuClosed
// (BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnPauseMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnPauseMenuClosed");

	UInputRemappingMenu_C_OnPauseMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnSelect1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnSelect1Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnSelect1Pressed");

	UInputRemappingMenu_C_OnSelect1Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnDismissHeld
// (BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnDismissHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnDismissHeld");

	UInputRemappingMenu_C_OnDismissHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnDismissReleased
// (BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnDismissReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnDismissReleased");

	UInputRemappingMenu_C_OnDismissReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnInputKeyTapped
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)

void UInputRemappingMenu_C::OnInputKeyTapped(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnInputKeyTapped");

	UInputRemappingMenu_C_OnInputKeyTapped_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.OnDismissPressed
// (BlueprintCallable, BlueprintEvent)

void UInputRemappingMenu_C::OnDismissPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.OnDismissPressed");

	UInputRemappingMenu_C_OnDismissPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingMenu.InputRemappingMenu_C.ExecuteUbergraph_InputRemappingMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInputRemappingMenu_C::ExecuteUbergraph_InputRemappingMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingMenu.InputRemappingMenu_C.ExecuteUbergraph_InputRemappingMenu");

	UInputRemappingMenu_C_ExecuteUbergraph_InputRemappingMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

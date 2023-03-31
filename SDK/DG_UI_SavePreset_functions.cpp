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

// Function UI_SavePreset.UI_SavePreset_C.IsPresetNameValid
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   InPresetName                   (Parm)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SavePreset_C::IsPresetNameValid(const struct FText& InPresetName, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.IsPresetNameValid");

	UUI_SavePreset_C_IsPresetNameValid_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function UI_SavePreset.UI_SavePreset_C.SavePreset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBendPhotoModePostPreset StructOut                      (Parm, OutParm)

void UUI_SavePreset_C::SavePreset(const struct FText& InText, struct FBendPhotoModePostPreset* StructOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.SavePreset");

	UUI_SavePreset_C_SavePreset_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StructOut != nullptr)
		*StructOut = params.StructOut;
}


// Function UI_SavePreset.UI_SavePreset_C.ShowSaveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowedToSave                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SavePreset_C::ShowSaveButton(bool AllowedToSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.ShowSaveButton");

	UUI_SavePreset_C_ShowSaveButton_Params params;
	params.AllowedToSave = AllowedToSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SavePreset.UI_SavePreset_C.BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SavePreset_C::BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_SavePreset_C_BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SavePreset.UI_SavePreset_C.BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1590_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_SavePreset_C::BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1590_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1590_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_SavePreset_C_BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1590_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SavePreset.UI_SavePreset_C.BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1596_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SavePreset_C::BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1596_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1596_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_SavePreset_C_BndEvt__PresetNameTextBox_K2Node_ComponentBoundEvent_1596_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SavePreset.UI_SavePreset_C.BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SavePreset_C::BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_SavePreset_C_BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SavePreset.UI_SavePreset_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SavePreset_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.Tick");

	UUI_SavePreset_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SavePreset.UI_SavePreset_C.ExecuteUbergraph_UI_SavePreset
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SavePreset_C::ExecuteUbergraph_UI_SavePreset(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SavePreset.UI_SavePreset_C.ExecuteUbergraph_UI_SavePreset");

	UUI_SavePreset_C_ExecuteUbergraph_UI_SavePreset_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

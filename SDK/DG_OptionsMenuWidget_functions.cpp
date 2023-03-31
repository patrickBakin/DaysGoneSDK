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

// Function OptionsMenuWidget.OptionsMenuWidget_C.DoesCurrentMenuAllowDefaults
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           DefaultsAllowed_               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::DoesCurrentMenuAllowDefaults(bool* DefaultsAllowed_)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.DoesCurrentMenuAllowDefaults");

	UOptionsMenuWidget_C_DoesCurrentMenuAllowDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultsAllowed_ != nullptr)
		*DefaultsAllowed_ = params.DefaultsAllowed_;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.DoesCurrentMenuAllowPerformance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           PerformanceAllowed_            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::DoesCurrentMenuAllowPerformance(bool* PerformanceAllowed_)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.DoesCurrentMenuAllowPerformance");

	UOptionsMenuWidget_C_DoesCurrentMenuAllowPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerformanceAllowed_ != nullptr)
		*PerformanceAllowed_ = params.PerformanceAllowed_;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.UpdateOptionTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionValueControl*     OptionWidget                   (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::UpdateOptionTooltip(class UOptionValueControl* OptionWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.UpdateOptionTooltip");

	UOptionsMenuWidget_C_UpdateOptionTooltip_Params params;
	params.OptionWidget = OptionWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.SetActiveOptionGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::SetActiveOptionGroup(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.SetActiveOptionGroup");

	UOptionsMenuWidget_C_SetActiveOptionGroup_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.UpdateHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::UpdateHeader(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.UpdateHeader");

	UOptionsMenuWidget_C_UpdateHeader_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.ShowBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::ShowBackground(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.ShowBackground");

	UOptionsMenuWidget_C_ShowBackground_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.GetSelectedOption
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOptionsMenuProfileEntry_C* SelectedOption                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::GetSelectedOption(class UOptionsMenuProfileEntry_C** SelectedOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.GetSelectedOption");

	UOptionsMenuWidget_C_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedOption != nullptr)
		*SelectedOption = params.SelectedOption;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.GetMaxMenuIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOptionsMenuWidget_C::GetMaxMenuIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.GetMaxMenuIndex");

	UOptionsMenuWidget_C_GetMaxMenuIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.IsHDR_Enabled
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsHDR_Enabled                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::IsHDR_Enabled(bool* bIsHDR_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.IsHDR_Enabled");

	UOptionsMenuWidget_C_IsHDR_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsHDR_Enabled != nullptr)
		*bIsHDR_Enabled = params.bIsHDR_Enabled;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.GetProfileMenuEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UOptionsMenuProfileEntry_C* ProfileEntryWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::GetProfileMenuEntry(TEnumAsByte<EPlayerSaveProfileType> Type, class UOptionsMenuProfileEntry_C** ProfileEntryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.GetProfileMenuEntry");

	UOptionsMenuWidget_C_GetProfileMenuEntry_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProfileEntryWidget != nullptr)
		*ProfileEntryWidget = params.ProfileEntryWidget;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnEntryChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> Option_Type                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Option_Value                   (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::OnEntryChanged(TEnumAsByte<EPlayerSaveProfileType> Option_Type, float Option_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnEntryChanged");

	UOptionsMenuWidget_C_OnEntryChanged_Params params;
	params.Option_Type = Option_Type;
	params.Option_Value = Option_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.ConfigureDynamicRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::ConfigureDynamicRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.ConfigureDynamicRange");

	UOptionsMenuWidget_C_ConfigureDynamicRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.AddDisabledProfileEntry
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> ProfileType                    (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::AddDisabledProfileEntry(TEnumAsByte<EPlayerSaveProfileType> ProfileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.AddDisabledProfileEntry");

	UOptionsMenuWidget_C_AddDisabledProfileEntry_Params params;
	params.ProfileType = ProfileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.SetProfileEntriesInputDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::SetProfileEntriesInputDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.SetProfileEntriesInputDisabled");

	UOptionsMenuWidget_C_SetProfileEntriesInputDisabled_Params params;
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.IsProfileOptionDisabled
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> ProfileOption                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDisabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::IsProfileOptionDisabled(TEnumAsByte<EPlayerSaveProfileType> ProfileOption, bool* IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.IsProfileOptionDisabled");

	UOptionsMenuWidget_C_IsProfileOptionDisabled_Params params;
	params.ProfileOption = ProfileOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDisabled != nullptr)
		*IsDisabled = params.IsDisabled;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.SyncDisabledProfileOptionText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> ProfileOption                  (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::SyncDisabledProfileOptionText(TEnumAsByte<EPlayerSaveProfileType> ProfileOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.SyncDisabledProfileOptionText");

	UOptionsMenuWidget_C_SyncDisabledProfileOptionText_Params params;
	params.ProfileOption = ProfileOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.DisableAnyProfileEntries
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::DisableAnyProfileEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.DisableAnyProfileEntries");

	UOptionsMenuWidget_C_DisableAnyProfileEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.NotifyProfileModified
// (Private, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::NotifyProfileModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.NotifyProfileModified");

	UOptionsMenuWidget_C_NotifyProfileModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.ProfileModified
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Modified                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::ProfileModified(bool* Modified)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.ProfileModified");

	UOptionsMenuWidget_C_ProfileModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modified != nullptr)
		*Modified = params.Modified;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.SetProfileEntrySelected
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::SetProfileEntrySelected(int Index, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.SetProfileEntrySelected");

	UOptionsMenuWidget_C_SetProfileEntrySelected_Params params;
	params.Index = Index;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.SetCursorPosition
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InPosition                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::SetCursorPosition(int InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.SetCursorPosition");

	UOptionsMenuWidget_C_SetCursorPosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.ConfigureProfileEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProfileOption>    InProfileType                  (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::ConfigureProfileEntries(TEnumAsByte<EProfileOption> InProfileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.ConfigureProfileEntries");

	UOptionsMenuWidget_C_ConfigureProfileEntries_Params params;
	params.InProfileType = InProfileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.Construct");

	UOptionsMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.RequestClose");

	UOptionsMenuWidget_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__CategoryWidget_K2Node_ComponentBoundEvent_736_OnSelection__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__CategoryWidget_K2Node_ComponentBoundEvent_736_OnSelection__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__CategoryWidget_K2Node_ComponentBoundEvent_736_OnSelection__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__CategoryWidget_K2Node_ComponentBoundEvent_736_OnSelection__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__ProfileCategoryWidget_K2Node_ComponentBoundEvent_332_OnSelection__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__ProfileCategoryWidget_K2Node_ComponentBoundEvent_332_OnSelection__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__ProfileCategoryWidget_K2Node_ComponentBoundEvent_332_OnSelection__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__ProfileCategoryWidget_K2Node_ComponentBoundEvent_332_OnSelection__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnCancelPressed");

	UOptionsMenuWidget_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnHDRPopupClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::OnHDRPopupClosed(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnHDRPopupClosed");

	UOptionsMenuWidget_C_OnHDRPopupClosed_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.SpawnHDRPopup
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::SpawnHDRPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.SpawnHDRPopup");

	UOptionsMenuWidget_C_SpawnHDRPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnAudioPageInitialized
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnAudioPageInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnAudioPageInitialized");

	UOptionsMenuWidget_C_OnAudioPageInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnAudioFormatChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionsMenuProfileEntry_C* ProfileEntry                   (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::OnAudioFormatChanged(class UOptionsMenuProfileEntry_C* ProfileEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnAudioFormatChanged");

	UOptionsMenuWidget_C_OnAudioFormatChanged_Params params;
	params.ProfileEntry = ProfileEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnProfileEntryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> OptionType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OptionValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::OnProfileEntryChanged(TEnumAsByte<EPlayerSaveProfileType> OptionType, float OptionValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnProfileEntryChanged");

	UOptionsMenuWidget_C_OnProfileEntryChanged_Params params;
	params.OptionType = OptionType;
	params.OptionValue = OptionValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnUpPressed");

	UOptionsMenuWidget_C_OnUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnDownPressed");

	UOptionsMenuWidget_C_OnDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnTabNextPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnTabNextPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnTabNextPressed");

	UOptionsMenuWidget_C_OnTabNextPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnTabPreviousPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnTabPreviousPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnTabPreviousPressed");

	UOptionsMenuWidget_C_OnTabPreviousPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnPageNextPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnPageNextPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnPageNextPressed");

	UOptionsMenuWidget_C_OnPageNextPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnPagePreviousPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnPagePreviousPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnPagePreviousPressed");

	UOptionsMenuWidget_C_OnPagePreviousPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnLeftPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnLeftPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnLeftPressed");

	UOptionsMenuWidget_C_OnLeftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnRightPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnRightPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnRightPressed");

	UOptionsMenuWidget_C_OnRightPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnConfirmPressed");

	UOptionsMenuWidget_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__KeyboardOptionsPanel_K2Node_ComponentBoundEvent_1659_OptionList_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__KeyboardOptionsPanel_K2Node_ComponentBoundEvent_1659_OptionList_ItemSelected__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__KeyboardOptionsPanel_K2Node_ComponentBoundEvent_1659_OptionList_ItemSelected__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__KeyboardOptionsPanel_K2Node_ComponentBoundEvent_1659_OptionList_ItemSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__GamepadOptionsPanel_K2Node_ComponentBoundEvent_1664_OptionList_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__GamepadOptionsPanel_K2Node_ComponentBoundEvent_1664_OptionList_ItemSelected__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__GamepadOptionsPanel_K2Node_ComponentBoundEvent_1664_OptionList_ItemSelected__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__GamepadOptionsPanel_K2Node_ComponentBoundEvent_1664_OptionList_ItemSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Gamepad_K2Node_ComponentBoundEvent_1909_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Gamepad_K2Node_ComponentBoundEvent_1909_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Gamepad_K2Node_ComponentBoundEvent_1909_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Gamepad_K2Node_ComponentBoundEvent_1909_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Keyboard_K2Node_ComponentBoundEvent_1934_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Keyboard_K2Node_ComponentBoundEvent_1934_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Keyboard_K2Node_ComponentBoundEvent_1934_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Keyboard_K2Node_ComponentBoundEvent_1934_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionValueControl*     OptionWidget                   (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::OnOptionSelected(class UOptionValueControl* OptionWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionSelected");

	UOptionsMenuWidget_C_OnOptionSelected_Params params;
	params.OptionWidget = OptionWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__AudioOptionsPanel_K2Node_ComponentBoundEvent_2195_OptionList_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__AudioOptionsPanel_K2Node_ComponentBoundEvent_2195_OptionList_ItemSelected__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__AudioOptionsPanel_K2Node_ComponentBoundEvent_2195_OptionList_ItemSelected__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__AudioOptionsPanel_K2Node_ComponentBoundEvent_2195_OptionList_ItemSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Audio_K2Node_ComponentBoundEvent_2826_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Audio_K2Node_ComponentBoundEvent_2826_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Audio_K2Node_ComponentBoundEvent_2826_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Audio_K2Node_ComponentBoundEvent_2826_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Language_K2Node_ComponentBoundEvent_2878_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Language_K2Node_ComponentBoundEvent_2878_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Language_K2Node_ComponentBoundEvent_2878_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Language_K2Node_ComponentBoundEvent_2878_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Gameplay_K2Node_ComponentBoundEvent_2897_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Gameplay_K2Node_ComponentBoundEvent_2897_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Gameplay_K2Node_ComponentBoundEvent_2897_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Gameplay_K2Node_ComponentBoundEvent_2897_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Accessibility_K2Node_ComponentBoundEvent_2917_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Accessibility_K2Node_ComponentBoundEvent_2917_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Accessibility_K2Node_ComponentBoundEvent_2917_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Accessibility_K2Node_ComponentBoundEvent_2917_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Language_K2Node_ComponentBoundEvent_2938_OptionList_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__OptionsGroup_Language_K2Node_ComponentBoundEvent_2938_OptionList_ItemSelected__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Language_K2Node_ComponentBoundEvent_2938_OptionList_ItemSelected__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__OptionsGroup_Language_K2Node_ComponentBoundEvent_2938_OptionList_ItemSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Gameplay_K2Node_ComponentBoundEvent_2960_OptionList_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__OptionsGroup_Gameplay_K2Node_ComponentBoundEvent_2960_OptionList_ItemSelected__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Gameplay_K2Node_ComponentBoundEvent_2960_OptionList_ItemSelected__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__OptionsGroup_Gameplay_K2Node_ComponentBoundEvent_2960_OptionList_ItemSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Accessibility_K2Node_ComponentBoundEvent_2983_OptionList_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__OptionsGroup_Accessibility_K2Node_ComponentBoundEvent_2983_OptionList_ItemSelected__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Accessibility_K2Node_ComponentBoundEvent_2983_OptionList_ItemSelected__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__OptionsGroup_Accessibility_K2Node_ComponentBoundEvent_2983_OptionList_ItemSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2516_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2516_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2516_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2516_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Display_K2Node_ComponentBoundEvent_1895_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Display_K2Node_ComponentBoundEvent_1895_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Display_K2Node_ComponentBoundEvent_1895_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Display_K2Node_ComponentBoundEvent_1895_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_2457_OptionList_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_2457_OptionList_ItemSelected__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_2457_OptionList_ItemSelected__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_2457_OptionList_ItemSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Scalability_K2Node_ComponentBoundEvent_2089_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Scalability_K2Node_ComponentBoundEvent_2089_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Scalability_K2Node_ComponentBoundEvent_2089_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Scalability_K2Node_ComponentBoundEvent_2089_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Scalability_K2Node_ComponentBoundEvent_2404_OptionList_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::BndEvt__OptionsGroup_Scalability_K2Node_ComponentBoundEvent_2404_OptionList_ItemSelected__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Scalability_K2Node_ComponentBoundEvent_2404_OptionList_ItemSelected__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__OptionsGroup_Scalability_K2Node_ComponentBoundEvent_2404_OptionList_ItemSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.StartAutodetect
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::StartAutodetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.StartAutodetect");

	UOptionsMenuWidget_C_StartAutodetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.FinishAutodetect
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::FinishAutodetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.FinishAutodetect");

	UOptionsMenuWidget_C_FinishAutodetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_1723_OnMonitorChanged__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_1723_OnMonitorChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_1723_OnMonitorChanged__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__OptionsGroup_Display_K2Node_ComponentBoundEvent_1723_OnMonitorChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.TransitionToOptionGroup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::TransitionToOptionGroup(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.TransitionToOptionGroup");

	UOptionsMenuWidget_C_TransitionToOptionGroup_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionGroupMenuChangeCallback
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnOptionGroupMenuChangeCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionGroupMenuChangeCallback");

	UOptionsMenuWidget_C_OnOptionGroupMenuChangeCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionGroupMenuCloseCallback
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnOptionGroupMenuCloseCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnOptionGroupMenuCloseCallback");

	UOptionsMenuWidget_C_OnOptionGroupMenuCloseCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1742_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1742_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1742_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__MenuInteract_Defaults_K2Node_ComponentBoundEvent_1742_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnSelect1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnSelect1Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnSelect1Pressed");

	UOptionsMenuWidget_C_OnSelect1Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.ResetToDefaults
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::ResetToDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.ResetToDefaults");

	UOptionsMenuWidget_C_ResetToDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.ConfirmResetToDefaults
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::ConfirmResetToDefaults(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.ConfirmResetToDefaults");

	UOptionsMenuWidget_C_ConfirmResetToDefaults_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionGroup_Gamepad_K2Node_ComponentBoundEvent_2647_OnShowControls__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuWidget_C::BndEvt__OptionGroup_Gamepad_K2Node_ComponentBoundEvent_2647_OnShowControls__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.BndEvt__OptionGroup_Gamepad_K2Node_ComponentBoundEvent_2647_OnShowControls__DelegateSignature");

	UOptionsMenuWidget_C_BndEvt__OptionGroup_Gamepad_K2Node_ComponentBoundEvent_2647_OnShowControls__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.CancelRepeat
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::CancelRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.CancelRepeat");

	UOptionsMenuWidget_C_CancelRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.Tick");

	UOptionsMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.StartRepeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DirectionID                    (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::StartRepeat(int DirectionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.StartRepeat");

	UOptionsMenuWidget_C_StartRepeat_Params params;
	params.DirectionID = DirectionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnRightReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnRightReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnRightReleased");

	UOptionsMenuWidget_C_OnRightReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnDownReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnDownReleased");

	UOptionsMenuWidget_C_OnDownReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnLeftReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnLeftReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnLeftReleased");

	UOptionsMenuWidget_C_OnLeftReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.OnUpReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::OnUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.OnUpReleased");

	UOptionsMenuWidget_C_OnUpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.ExecuteUbergraph_OptionsMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuWidget_C::ExecuteUbergraph_OptionsMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.ExecuteUbergraph_OptionsMenuWidget");

	UOptionsMenuWidget_C_ExecuteUbergraph_OptionsMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuWidget.OptionsMenuWidget_C.NotifyProfileOptionModifed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionsMenuWidget_C::NotifyProfileOptionModifed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuWidget.OptionsMenuWidget_C.NotifyProfileOptionModifed__DelegateSignature");

	UOptionsMenuWidget_C_NotifyProfileOptionModifed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

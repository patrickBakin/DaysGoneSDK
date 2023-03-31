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

// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_Frame_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UUI_PhotoModeFilters_C::Get_UI_PhotoMode_Selector_Frame_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_Frame_ToolTipWidget_1");

	UUI_PhotoModeFilters_C_Get_UI_PhotoMode_Selector_Frame_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_LogoPosition_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UUI_PhotoModeFilters_C::Get_UI_PhotoMode_Selector_LogoPosition_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_LogoPosition_ToolTipWidget_1");

	UUI_PhotoModeFilters_C_Get_UI_PhotoMode_Selector_LogoPosition_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_LogoColor_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UUI_PhotoModeFilters_C::Get_UI_PhotoMode_Selector_LogoColor_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_LogoColor_ToolTipWidget_1");

	UUI_PhotoModeFilters_C_Get_UI_PhotoMode_Selector_LogoColor_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_Filter_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UUI_PhotoModeFilters_C::Get_UI_PhotoMode_Selector_Filter_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Get_UI_PhotoMode_Selector_Filter_ToolTipWidget_1");

	UUI_PhotoModeFilters_C_Get_UI_PhotoMode_Selector_Filter_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.SetPresetEntries
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendPhotoModePostPreset> Presets                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_PhotoModeFilters_C::SetPresetEntries(TArray<struct FBendPhotoModePostPreset>* Presets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.SetPresetEntries");

	UUI_PhotoModeFilters_C_SetPresetEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Presets != nullptr)
		*Presets = params.Presets;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.GetPresets
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendPhotoModePostPreset> Presets                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FBendPhotoModePostPreset> UserCreatedPresets             (Parm, OutParm, ZeroConstructor)

void UUI_PhotoModeFilters_C::GetPresets(TArray<struct FBendPhotoModePostPreset>* Presets, TArray<struct FBendPhotoModePostPreset>* UserCreatedPresets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.GetPresets");

	UUI_PhotoModeFilters_C_GetPresets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Presets != nullptr)
		*Presets = params.Presets;
	if (UserCreatedPresets != nullptr)
		*UserCreatedPresets = params.UserCreatedPresets;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.DeletePresetButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFilters_C::DeletePresetButtonVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.DeletePresetButtonVisibility");

	UUI_PhotoModeFilters_C_DeletePresetButtonVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.HasValidPresetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBendPhotoModePostPreset Preset                         (Parm)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFilters_C::HasValidPresetName(const struct FBendPhotoModePostPreset& Preset, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.HasValidPresetName");

	UUI_PhotoModeFilters_C_HasValidPresetName_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.LoadPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendPhotoModePostPreset Preset                         (Parm)

void UUI_PhotoModeFilters_C::LoadPreset(const struct FBendPhotoModePostPreset& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.LoadPreset");

	UUI_PhotoModeFilters_C_LoadPreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PhotoModeFilters_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.Construct");

	UUI_PhotoModeFilters_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_LogoPosition_K2Node_ComponentBoundEvent_1483_MenuChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFilters_C::BndEvt__UI_PhotoMode_Selector_LogoPosition_K2Node_ComponentBoundEvent_1483_MenuChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_LogoPosition_K2Node_ComponentBoundEvent_1483_MenuChanged__DelegateSignature");

	UUI_PhotoModeFilters_C_BndEvt__UI_PhotoMode_Selector_LogoPosition_K2Node_ComponentBoundEvent_1483_MenuChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_LogoColor_K2Node_ComponentBoundEvent_1509_MenuChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFilters_C::BndEvt__UI_PhotoMode_Selector_LogoColor_K2Node_ComponentBoundEvent_1509_MenuChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_LogoColor_K2Node_ComponentBoundEvent_1509_MenuChanged__DelegateSignature");

	UUI_PhotoModeFilters_C_BndEvt__UI_PhotoMode_Selector_LogoColor_K2Node_ComponentBoundEvent_1509_MenuChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_Frame_K2Node_ComponentBoundEvent_496_MenuChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFilters_C::BndEvt__UI_PhotoMode_Selector_Frame_K2Node_ComponentBoundEvent_496_MenuChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_Frame_K2Node_ComponentBoundEvent_496_MenuChanged__DelegateSignature");

	UUI_PhotoModeFilters_C_BndEvt__UI_PhotoMode_Selector_Frame_K2Node_ComponentBoundEvent_496_MenuChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_Filter_K2Node_ComponentBoundEvent_325_MenuChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFilters_C::BndEvt__UI_PhotoMode_Selector_Filter_K2Node_ComponentBoundEvent_325_MenuChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__UI_PhotoMode_Selector_Filter_K2Node_ComponentBoundEvent_325_MenuChanged__DelegateSignature");

	UUI_PhotoModeFilters_C_BndEvt__UI_PhotoMode_Selector_Filter_K2Node_ComponentBoundEvent_325_MenuChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.RefreshPresets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetNewlyCreatePresetActive     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PresetWasDeleted               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFilters_C::RefreshPresets(bool SetNewlyCreatePresetActive, bool PresetWasDeleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.RefreshPresets");

	UUI_PhotoModeFilters_C_RefreshPresets_Params params;
	params.SetNewlyCreatePresetActive = SetNewlyCreatePresetActive;
	params.PresetWasDeleted = PresetWasDeleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__SavePreset_K2Node_ComponentBoundEvent_1731_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeFilters_C::BndEvt__SavePreset_K2Node_ComponentBoundEvent_1731_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__SavePreset_K2Node_ComponentBoundEvent_1731_ButtonClicked__DelegateSignature");

	UUI_PhotoModeFilters_C_BndEvt__SavePreset_K2Node_ComponentBoundEvent_1731_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__DeletePreset_K2Node_ComponentBoundEvent_1795_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeFilters_C::BndEvt__DeletePreset_K2Node_ComponentBoundEvent_1795_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.BndEvt__DeletePreset_K2Node_ComponentBoundEvent_1795_ButtonClicked__DelegateSignature");

	UUI_PhotoModeFilters_C_BndEvt__DeletePreset_K2Node_ComponentBoundEvent_1795_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.ExecuteUbergraph_UI_PhotoModeFilters
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFilters_C::ExecuteUbergraph_UI_PhotoModeFilters(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFilters.UI_PhotoModeFilters_C.ExecuteUbergraph_UI_PhotoModeFilters");

	UUI_PhotoModeFilters_C_ExecuteUbergraph_UI_PhotoModeFilters_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

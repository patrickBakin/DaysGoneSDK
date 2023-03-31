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

// Function DisplayOptionsPanel.DisplayOptionsPanel_C.RequestMenuChange
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOptionListReply>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EOptionListReply> UDisplayOptionsPanel_C::RequestMenuChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.RequestMenuChange");

	UDisplayOptionsPanel_C_RequestMenuChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.UpdateOptionLocks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::UpdateOptionLocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.UpdateOptionLocks");

	UDisplayOptionsPanel_C_UpdateOptionLocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.PopulateOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::PopulateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.PopulateOptions");

	UDisplayOptionsPanel_C_PopulateOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.FindRefreshIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            _0                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            _1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::FindRefreshIndex(int* Index, float* Rate, int* _0, int* _1)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.FindRefreshIndex");

	UDisplayOptionsPanel_C_FindRefreshIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (Rate != nullptr)
		*Rate = params.Rate;
	if (_0 != nullptr)
		*_0 = params._0;
	if (_1 != nullptr)
		*_1 = params._1;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.ClearParameters
// (Public, BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::ClearParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.ClearParameters");

	UDisplayOptionsPanel_C_ClearParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.RefreshParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::RefreshParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.RefreshParameters");

	UDisplayOptionsPanel_C_RefreshParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.RevertVideoSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::RevertVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.RevertVideoSettings");

	UDisplayOptionsPanel_C_RevertVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.FindResolutionIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::FindResolutionIndex(int* Index, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.FindResolutionIndex");

	UDisplayOptionsPanel_C_FindResolutionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDisplayOptionsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.Construct");

	UDisplayOptionsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.ResetToDefaults
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::ResetToDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.ResetToDefaults");

	UDisplayOptionsPanel_C_ResetToDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.SynchronizeOptionValues
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::SynchronizeOptionValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.SynchronizeOptionValues");

	UDisplayOptionsPanel_C_SynchronizeOptionValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__TempApply_K2Node_ComponentBoundEvent_2373_OptionValueControl_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__TempApply_K2Node_ComponentBoundEvent_2373_OptionValueControl_Clicked__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__TempApply_K2Node_ComponentBoundEvent_2373_OptionValueControl_Clicked__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__TempApply_K2Node_ComponentBoundEvent_2373_OptionValueControl_Clicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Confirm Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::Confirm_Display(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.Confirm Display");

	UDisplayOptionsPanel_C_Confirm_Display_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__WindowMode_K2Node_ComponentBoundEvent_2421_OptionValueControl_ValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__WindowMode_K2Node_ComponentBoundEvent_2421_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__WindowMode_K2Node_ComponentBoundEvent_2421_OptionValueControl_ValueChanged__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__WindowMode_K2Node_ComponentBoundEvent_2421_OptionValueControl_ValueChanged__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.Tick");

	UDisplayOptionsPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__Resolution_K2Node_ComponentBoundEvent_1473_OptionValueControl_ValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__Resolution_K2Node_ComponentBoundEvent_1473_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__Resolution_K2Node_ComponentBoundEvent_1473_OptionValueControl_ValueChanged__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__Resolution_K2Node_ComponentBoundEvent_1473_OptionValueControl_ValueChanged__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__Monitor_K2Node_ComponentBoundEvent_1851_OptionValueControl_ValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__Monitor_K2Node_ComponentBoundEvent_1851_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__Monitor_K2Node_ComponentBoundEvent_1851_OptionValueControl_ValueChanged__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__Monitor_K2Node_ComponentBoundEvent_1851_OptionValueControl_ValueChanged__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__RefreshRate_K2Node_ComponentBoundEvent_1862_OptionValueControl_ValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__RefreshRate_K2Node_ComponentBoundEvent_1862_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__RefreshRate_K2Node_ComponentBoundEvent_1862_OptionValueControl_ValueChanged__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__RefreshRate_K2Node_ComponentBoundEvent_1862_OptionValueControl_ValueChanged__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__HDR_K2Node_ComponentBoundEvent_1887_OptionValueControl_ValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__HDR_K2Node_ComponentBoundEvent_1887_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__HDR_K2Node_ComponentBoundEvent_1887_OptionValueControl_ValueChanged__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__HDR_K2Node_ComponentBoundEvent_1887_OptionValueControl_ValueChanged__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__VSync_K2Node_ComponentBoundEvent_1793_OptionValueControl_ValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__VSync_K2Node_ComponentBoundEvent_1793_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__VSync_K2Node_ComponentBoundEvent_1793_OptionValueControl_ValueChanged__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__VSync_K2Node_ComponentBoundEvent_1793_OptionValueControl_ValueChanged__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__FrameRate_K2Node_ComponentBoundEvent_1693_OptionValueControl_ValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__FrameRate_K2Node_ComponentBoundEvent_1693_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__FrameRate_K2Node_ComponentBoundEvent_1693_OptionValueControl_ValueChanged__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__FrameRate_K2Node_ComponentBoundEvent_1693_OptionValueControl_ValueChanged__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Match Settings
// (BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::Match_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.Match Settings");

	UDisplayOptionsPanel_C_Match_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Apply Display Changes
// (BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::Apply_Display_Changes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.Apply Display Changes");

	UDisplayOptionsPanel_C_Apply_Display_Changes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.Notify On Unsaved Settings
// (BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::Notify_On_Unsaved_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.Notify On Unsaved Settings");

	UDisplayOptionsPanel_C_Notify_On_Unsaved_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.On Unsaved Settings Selection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::On_Unsaved_Settings_Selection(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.On Unsaved Settings Selection");

	UDisplayOptionsPanel_C_On_Unsaved_Settings_Selection_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__SyncInterval_K2Node_ComponentBoundEvent_2464_OptionValueControl_ValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOptionValueControl*     Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::BndEvt__SyncInterval_K2Node_ComponentBoundEvent_2464_OptionValueControl_ValueChanged__DelegateSignature(class UOptionValueControl* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.BndEvt__SyncInterval_K2Node_ComponentBoundEvent_2464_OptionValueControl_ValueChanged__DelegateSignature");

	UDisplayOptionsPanel_C_BndEvt__SyncInterval_K2Node_ComponentBoundEvent_2464_OptionValueControl_ValueChanged__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.ExecuteUbergraph_DisplayOptionsPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDisplayOptionsPanel_C::ExecuteUbergraph_DisplayOptionsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.ExecuteUbergraph_DisplayOptionsPanel");

	UDisplayOptionsPanel_C_ExecuteUbergraph_DisplayOptionsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisplayOptionsPanel.DisplayOptionsPanel_C.OnMonitorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDisplayOptionsPanel_C::OnMonitorChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisplayOptionsPanel.DisplayOptionsPanel_C.OnMonitorChanged__DelegateSignature");

	UDisplayOptionsPanel_C_OnMonitorChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

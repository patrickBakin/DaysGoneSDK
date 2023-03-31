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

// Function UI_NPCCallout.UI_NPCCallout_C.AddProfileListener
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::AddProfileListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.AddProfileListener");

	UUI_NPCCallout_C_AddProfileListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.RemoveProfileListener
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::RemoveProfileListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.RemoveProfileListener");

	UUI_NPCCallout_C_RemoveProfileListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetMarkedCalloutVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECalloutWidgetType> NPCType                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetMarkedCalloutVisible(bool Visible, TEnumAsByte<ECalloutWidgetType> NPCType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetMarkedCalloutVisible");

	UUI_NPCCallout_C_SetMarkedCalloutVisible_Params params;
	params.Visible = Visible;
	params.NPCType = NPCType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetProgress(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetProgress");

	UUI_NPCCallout_C_SetProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetAlert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetAlert(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetAlert");

	UUI_NPCCallout_C_SetAlert_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetSuspicious
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetSuspicious(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetSuspicious");

	UUI_NPCCallout_C_SetSuspicious_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.HideAllIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::HideAllIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.HideAllIcons");

	UUI_NPCCallout_C_HideAllIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.ShowOffscreenArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::ShowOffscreenArrow(bool State, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.ShowOffscreenArrow");

	UUI_NPCCallout_C_ShowOffscreenArrow_Params params;
	params.State = State;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.UpdateCalloutPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::UpdateCalloutPosition(class AActor* Actor, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.UpdateCalloutPosition");

	UUI_NPCCallout_C_UpdateCalloutPosition_Params params;
	params.Actor = Actor;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetObjectiveCalloutWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetObjectiveCalloutWarning(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetObjectiveCalloutWarning");

	UUI_NPCCallout_C_SetObjectiveCalloutWarning_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetStatusEffectVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPoison                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetStatusEffectVisible(bool isPoison, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetStatusEffectVisible");

	UUI_NPCCallout_C_SetStatusEffectVisible_Params params;
	params.isPoison = isPoison;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetObjectiveCalloutVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WarningState                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetObjectiveCalloutVisible(bool Visible, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, bool WarningState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetObjectiveCalloutVisible");

	UUI_NPCCallout_C_SetObjectiveCalloutVisible_Params params;
	params.Visible = Visible;
	params.Category = Category;
	params.Type = Type;
	params.WarningState = WarningState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.Init");

	UUI_NPCCallout_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetHealth(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetHealth");

	UUI_NPCCallout_C_SetHealth_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.TweenVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::TweenVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.TweenVisibility");

	UUI_NPCCallout_C_TweenVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::SetCalloutDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutDisabled");

	UUI_NPCCallout_C_SetCalloutDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::SetCalloutHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutHidden");

	UUI_NPCCallout_C_SetCalloutHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_CalloutType>  NPCType                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetCalloutVisible(bool Visible, TEnumAsByte<Enum_CalloutType> NPCType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutVisible");

	UUI_NPCCallout_C_SetCalloutVisible_Params params;
	params.Visible = Visible;
	params.NPCType = NPCType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_NPCCallout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.Construct");

	UUI_NPCCallout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.TriggerSuspiciousState
// (BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::TriggerSuspiciousState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.TriggerSuspiciousState");

	UUI_NPCCallout_C_TriggerSuspiciousState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.TriggerAlertState
// (BlueprintCallable, BlueprintEvent)

void UUI_NPCCallout_C::TriggerAlertState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.TriggerAlertState");

	UUI_NPCCallout_C_TriggerAlertState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.ActivateSuspiciousIndicator
// (Event, Public, BlueprintEvent)

void UUI_NPCCallout_C::ActivateSuspiciousIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.ActivateSuspiciousIndicator");

	UUI_NPCCallout_C_ActivateSuspiciousIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.ActivateAlertIndicator
// (Event, Public, BlueprintEvent)

void UUI_NPCCallout_C::ActivateAlertIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.ActivateAlertIndicator");

	UUI_NPCCallout_C_ActivateAlertIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.DeactivateAwarenessCallout
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          DeactivateDueToAware           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::DeactivateAwarenessCallout(bool* DeactivateDueToAware)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.DeactivateAwarenessCallout");

	UUI_NPCCallout_C_DeactivateAwarenessCallout_Params params;
	params.DeactivateDueToAware = DeactivateDueToAware;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.SetIndicatorProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         NormalizedProgress             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::SetIndicatorProgress(float* NormalizedProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.SetIndicatorProgress");

	UUI_NPCCallout_C_SetIndicatorProgress_Params params;
	params.NormalizedProgress = NormalizedProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.ActivateMarkedCallout
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECalloutWidgetType>* CalloutType                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::ActivateMarkedCallout(TEnumAsByte<ECalloutWidgetType>* CalloutType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.ActivateMarkedCallout");

	UUI_NPCCallout_C_ActivateMarkedCallout_Params params;
	params.CalloutType = CalloutType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.DeactivateMarkedCallout
// (Event, Public, BlueprintEvent)

void UUI_NPCCallout_C::DeactivateMarkedCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.DeactivateMarkedCallout");

	UUI_NPCCallout_C_DeactivateMarkedCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.UpdateHealthOnCallout
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::UpdateHealthOnCallout(float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.UpdateHealthOnCallout");

	UUI_NPCCallout_C_UpdateHealthOnCallout_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.OnColorModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::OnColorModeChange(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.OnColorModeChange");

	UUI_NPCCallout_C_OnColorModeChange_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NPCCallout.UI_NPCCallout_C.ExecuteUbergraph_UI_NPCCallout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NPCCallout_C::ExecuteUbergraph_UI_NPCCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NPCCallout.UI_NPCCallout_C.ExecuteUbergraph_UI_NPCCallout");

	UUI_NPCCallout_C_ExecuteUbergraph_UI_NPCCallout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

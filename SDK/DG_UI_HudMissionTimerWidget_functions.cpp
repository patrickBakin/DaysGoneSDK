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

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.RemoveMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionTimerWidget_C::RemoveMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.RemoveMissionTimer");

	UUI_HudMissionTimerWidget_C_RemoveMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.NotifyParentOfComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionTimerWidget_C::NotifyParentOfComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.NotifyParentOfComplete");

	UUI_HudMissionTimerWidget_C_NotifyParentOfComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.UpdateMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::UpdateMissionTimer(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.UpdateMissionTimer");

	UUI_HudMissionTimerWidget_C_UpdateMissionTimer_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetParentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudObjective_C*      Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::SetParentReference(class UUI_HudObjective_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetParentReference");

	UUI_HudMissionTimerWidget_C_SetParentReference_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.NewMissionTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Invert                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHealthBar                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::NewMissionTimer(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, float Percent, bool Invert, bool IsHealthBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.NewMissionTimer");

	UUI_HudMissionTimerWidget_C_NewMissionTimer_Params params;
	params.Type = Type;
	params.Title = Title;
	params.Percent = Percent;
	params.Invert = Invert;
	params.IsHealthBar = IsHealthBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Paused                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::SetPaused(bool Paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPaused");

	UUI_HudMissionTimerWidget_C_SetPaused_Params params;
	params.Paused = Paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.CheckGamePaused
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionTimerWidget_C::CheckGamePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.CheckGamePaused");

	UUI_HudMissionTimerWidget_C_CheckGamePaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.TweenHeight
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionTimerWidget_C::TweenHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.TweenHeight");

	UUI_HudMissionTimerWidget_C_TweenHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.StartTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionTimerWidget_C::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.StartTimer");

	UUI_HudMissionTimerWidget_C_StartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// bool                           Inverted                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHealthBar_                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::SetDetails(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, bool Inverted, bool IsHealthBar_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetDetails");

	UUI_HudMissionTimerWidget_C_SetDetails_Params params;
	params.Type = Type;
	params.Title = Title;
	params.Inverted = Inverted;
	params.IsHealthBar_ = IsHealthBar_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.TweenColor
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionTimerWidget_C::TweenColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.TweenColor");

	UUI_HudMissionTimerWidget_C_TweenColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetVisible");

	UUI_HudMissionTimerWidget_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPercentInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::SetPercentInternal(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPercentInternal");

	UUI_HudMissionTimerWidget_C_SetPercentInternal_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudMissionTimerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.Construct");

	UUI_HudMissionTimerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.Tick");

	UUI_HudMissionTimerWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ActivateTimer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHudMissionTimerDetails* Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_HudMissionTimerWidget_C::ActivateTimer(struct FHudMissionTimerDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ActivateTimer");

	UUI_HudMissionTimerWidget_C_ActivateTimer_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ClearTimer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionTimerWidget_C::ClearTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ClearTimer");

	UUI_HudMissionTimerWidget_C_ClearTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPercent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::SetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPercent");

	UUI_HudMissionTimerWidget_C_SetPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ExecuteUbergraph_UI_HudMissionTimerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionTimerWidget_C::ExecuteUbergraph_UI_HudMissionTimerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ExecuteUbergraph_UI_HudMissionTimerWidget");

	UUI_HudMissionTimerWidget_C_ExecuteUbergraph_UI_HudMissionTimerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

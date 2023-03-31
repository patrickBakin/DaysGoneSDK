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

// Function UI_GrappleMeter3.UI_GrappleMeter3_C.DestroyIfPawnInvalid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Destroyed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::DestroyIfPawnInvalid(bool* Destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.DestroyIfPawnInvalid");

	UUI_GrappleMeter3_C_DestroyIfPawnInvalid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.DebugDumpMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MeterCircle_C*       Window                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::DebugDumpMeter(class UUI_MeterCircle_C* Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.DebugDumpMeter");

	UUI_GrappleMeter3_C_DebugDumpMeter_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.IfActiveCallOnComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::IfActiveCallOnComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.IfActiveCallOnComplete");

	UUI_GrappleMeter3_C_IfActiveCallOnComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.SetRotatingTrue
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::SetRotatingTrue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.SetRotatingTrue");

	UUI_GrappleMeter3_C_SetRotatingTrue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.FlashMeter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::FlashMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.FlashMeter");

	UUI_GrappleMeter3_C_FlashMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenResult
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::TweenResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenResult");

	UUI_GrappleMeter3_C_TweenResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.BeginResultAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::BeginResultAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.BeginResultAnim");

	UUI_GrappleMeter3_C_BeginResultAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenMeterColor
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::TweenMeterColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenMeterColor");

	UUI_GrappleMeter3_C_TweenMeterColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.RandomizeWindowPositions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::RandomizeWindowPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.RandomizeWindowPositions");

	UUI_GrappleMeter3_C_RandomizeWindowPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.CheckIfInWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MeterCircle_C*       Window                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInWindow                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::CheckIfInWindow(class UUI_MeterCircle_C* Window, bool* IsInWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.CheckIfInWindow");

	UUI_GrappleMeter3_C_CheckIfInWindow_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInWindow != nullptr)
		*IsInWindow = params.IsInWindow;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.BeginCloseWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::BeginCloseWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.BeginCloseWidget");

	UUI_GrappleMeter3_C_BeginCloseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFailHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnFailHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFailHandler");

	UUI_GrappleMeter3_C_OnFailHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccessHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnSuccessHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccessHandler");

	UUI_GrappleMeter3_C_OnSuccessHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_GrappleMeterDetails3 Details                        (Parm)

void UUI_GrappleMeter3_C::Init(const struct FUI_GrappleMeterDetails3& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.Init");

	UUI_GrappleMeter3_C_Init_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.CheckSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::CheckSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.CheckSuccess");

	UUI_GrappleMeter3_C_CheckSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenMeter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::TweenMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.TweenMeter");

	UUI_GrappleMeter3_C_TweenMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.SetRotating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRotating                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::SetRotating(bool IsRotating)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.SetRotating");

	UUI_GrappleMeter3_C_SetRotating_Params params;
	params.IsRotating = IsRotating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPress_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnPress_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPress_Event");

	UUI_GrappleMeter3_C_OnPress_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnRelease_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnRelease_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnRelease_Event");

	UUI_GrappleMeter3_C_OnRelease_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFail_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnFail_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFail_Event");

	UUI_GrappleMeter3_C_OnFail_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccess_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnSuccess_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccess_Event");

	UUI_GrappleMeter3_C_OnSuccess_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnAnimationFinished");

	UUI_GrappleMeter3_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_GrappleSuccessType> Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::OnComplete_Event(TEnumAsByte<EUI_GrappleSuccessType> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnComplete_Event");

	UUI_GrappleMeter3_C_OnComplete_Event_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GrappleMeter3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.Construct");

	UUI_GrappleMeter3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.Tick");

	UUI_GrappleMeter3_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPercentChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::OnPercentChange_Event(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPercentChange_Event");

	UUI_GrappleMeter3_C_OnPercentChange_Event_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.ExecuteUbergraph_UI_GrappleMeter3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::ExecuteUbergraph_UI_GrappleMeter3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.ExecuteUbergraph_UI_GrappleMeter3");

	UUI_GrappleMeter3_C_ExecuteUbergraph_UI_GrappleMeter3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPercentChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::OnPercentChange__DelegateSignature(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPercentChange__DelegateSignature");

	UUI_GrappleMeter3_C_OnPercentChange__DelegateSignature_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_GrappleSuccessType> Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GrappleMeter3_C::OnComplete__DelegateSignature(TEnumAsByte<EUI_GrappleSuccessType> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnComplete__DelegateSignature");

	UUI_GrappleMeter3_C_OnComplete__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnSuccess__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnSuccess__DelegateSignature");

	UUI_GrappleMeter3_C_OnSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnFail__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnFail__DelegateSignature");

	UUI_GrappleMeter3_C_OnFail__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnRelease__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnRelease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnRelease__DelegateSignature");

	UUI_GrappleMeter3_C_OnRelease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_GrappleMeter3_C::OnPress__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GrappleMeter3.UI_GrappleMeter3_C.OnPress__DelegateSignature");

	UUI_GrappleMeter3_C_OnPress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

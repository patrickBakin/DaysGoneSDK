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

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ClearNotifications
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::ClearNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ClearNotifications");

	UUI_HudNotificationItemNew_C_ClearNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ResetQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::ResetQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ResetQueue");

	UUI_HudNotificationItemNew_C_ResetQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.OverrideLevelUpBanner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::OverrideLevelUpBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.OverrideLevelUpBanner");

	UUI_HudNotificationItemNew_C_OverrideLevelUpBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.GetBannerVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::GetBannerVisibility(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.GetBannerVisibility");

	UUI_HudNotificationItemNew_C_GetBannerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ResetVisibilityTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::ResetVisibilityTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ResetVisibilityTimer");

	UUI_HudNotificationItemNew_C_ResetVisibilityTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.CompareNotificationStruct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails DetailsA                       (Parm, OutParm, ReferenceParm)
// struct FUI_HudNotificationDetails DetailsB                       (Parm, OutParm, ReferenceParm)
// bool                           AreEqual                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::CompareNotificationStruct(struct FUI_HudNotificationDetails* DetailsA, struct FUI_HudNotificationDetails* DetailsB, bool* AreEqual)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.CompareNotificationStruct");

	UUI_HudNotificationItemNew_C_CompareNotificationStruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DetailsA != nullptr)
		*DetailsA = params.DetailsA;
	if (DetailsB != nullptr)
		*DetailsB = params.DetailsB;
	if (AreEqual != nullptr)
		*AreEqual = params.AreEqual;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.CancelNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm, OutParm, ReferenceParm)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::CancelNotification(struct FUI_HudNotificationDetails* Details, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.CancelNotification");

	UUI_HudNotificationItemNew_C_CancelNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetTranslationWithTween
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::SetTranslationWithTween(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetTranslationWithTween");

	UUI_HudNotificationItemNew_C_SetTranslationWithTween_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ProcessQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::ProcessQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ProcessQueue");

	UUI_HudNotificationItemNew_C_ProcessQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.AddDetailsToQueue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm, OutParm, ReferenceParm)

void UUI_HudNotificationItemNew_C::AddDetailsToQueue(struct FUI_HudNotificationDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.AddDetailsToQueue");

	UUI_HudNotificationItemNew_C_AddDetailsToQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetFailed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::SetFailed(bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetFailed");

	UUI_HudNotificationItemNew_C_SetFailed_Params params;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetBgOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::SetBgOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetBgOpacity");

	UUI_HudNotificationItemNew_C_SetBgOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetEnabled");

	UUI_HudNotificationItemNew_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm, OutParm, ReferenceParm)

void UUI_HudNotificationItemNew_C::SetDetails(struct FUI_HudNotificationDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetDetails");

	UUI_HudNotificationItemNew_C_SetDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Init");

	UUI_HudNotificationItemNew_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudNotificationType> NotificationType               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::SetType(TEnumAsByte<EUI_HudNotificationType> NotificationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetType");

	UUI_HudNotificationItemNew_C_SetType_Params params;
	params.NotificationType = NotificationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetStrikeout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Strikeout                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::SetStrikeout(bool Strikeout)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetStrikeout");

	UUI_HudNotificationItemNew_C_SetStrikeout_Params params;
	params.Strikeout = Strikeout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.TweenStrikeout
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::TweenStrikeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.TweenStrikeout");

	UUI_HudNotificationItemNew_C_TweenStrikeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::SetInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetInvisible");

	UUI_HudNotificationItemNew_C_SetInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetVisible");

	UUI_HudNotificationItemNew_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudNotificationItemNew_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Construct");

	UUI_HudNotificationItemNew_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Tick");

	UUI_HudNotificationItemNew_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationAdded_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::NotificationAdded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationAdded_Event");

	UUI_HudNotificationItemNew_C_NotificationAdded_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.OnAnimationFinished");

	UUI_HudNotificationItemNew_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudNotificationItemNew_C* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::NotificationComplete_Event(class UUI_HudNotificationItemNew_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationComplete_Event");

	UUI_HudNotificationItemNew_C_NotificationComplete_Event_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ExecuteUbergraph_UI_HudNotificationItemNew
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::ExecuteUbergraph_UI_HudNotificationItemNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ExecuteUbergraph_UI_HudNotificationItemNew");

	UUI_HudNotificationItemNew_C_ExecuteUbergraph_UI_HudNotificationItemNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudNotificationItemNew_C* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudNotificationItemNew_C::NotificationComplete__DelegateSignature(class UUI_HudNotificationItemNew_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationComplete__DelegateSignature");

	UUI_HudNotificationItemNew_C_NotificationComplete__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudNotificationItemNew_C::NotificationAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationAdded__DelegateSignature");

	UUI_HudNotificationItemNew_C_NotificationAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

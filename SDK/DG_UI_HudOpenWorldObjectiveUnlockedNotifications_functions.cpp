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

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotifyParentOfComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::NotifyParentOfComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotifyParentOfComplete");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotifyParentOfComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetParentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudObjective_C*      Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetParentReference(class UUI_HudObjective_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetParentReference");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetParentReference_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ResetVisibilityTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::ResetVisibilityTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ResetVisibilityTimer");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_ResetVisibilityTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.CompareNotificationStruct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails DetailsA                       (Parm, OutParm, ReferenceParm)
// struct FUI_HudNotificationDetails DetailsB                       (Parm, OutParm, ReferenceParm)
// bool                           AreEqual                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::CompareNotificationStruct(struct FUI_HudNotificationDetails* DetailsA, struct FUI_HudNotificationDetails* DetailsB, bool* AreEqual)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.CompareNotificationStruct");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_CompareNotificationStruct_Params params;

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


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.CancelNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm, OutParm, ReferenceParm)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::CancelNotification(struct FUI_HudNotificationDetails* Details, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.CancelNotification");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_CancelNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetTranslationWithTween
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetTranslationWithTween(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetTranslationWithTween");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetTranslationWithTween_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ProcessQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::ProcessQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ProcessQueue");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_ProcessQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.AddDetailsToQueue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm, OutParm, ReferenceParm)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::AddDetailsToQueue(struct FUI_HudNotificationDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.AddDetailsToQueue");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_AddDetailsToQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetFailed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetFailed(bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetFailed");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetFailed_Params params;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetBgOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetBgOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetBgOpacity");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetBgOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetEnabled");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm, OutParm, ReferenceParm)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetDetails(struct FUI_HudNotificationDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetDetails");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.Init");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudNotificationType> NotificationType               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetType(TEnumAsByte<EUI_HudNotificationType> NotificationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetType");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetType_Params params;
	params.NotificationType = NotificationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetInvisible");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetVisible");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.Construct");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationAdded_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::NotificationAdded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationAdded_Event");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotificationAdded_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.OnAnimationFinished");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudOpenWorldObjectiveUnlockedNotifications_C* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::NotificationComplete_Event(class UUI_HudOpenWorldObjectiveUnlockedNotifications_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationComplete_Event");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotificationComplete_Event_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.QueueFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::QueueFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.QueueFinished");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_QueueFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ExecuteUbergraph_UI_HudOpenWorldObjectiveUnlockedNotifications
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::ExecuteUbergraph_UI_HudOpenWorldObjectiveUnlockedNotifications(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ExecuteUbergraph_UI_HudOpenWorldObjectiveUnlockedNotifications");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_ExecuteUbergraph_UI_HudOpenWorldObjectiveUnlockedNotifications_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudOpenWorldObjectiveUnlockedNotifications_C* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::NotificationComplete__DelegateSignature(class UUI_HudOpenWorldObjectiveUnlockedNotifications_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationComplete__DelegateSignature");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotificationComplete__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudOpenWorldObjectiveUnlockedNotifications_C::NotificationAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationAdded__DelegateSignature");

	UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotificationAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

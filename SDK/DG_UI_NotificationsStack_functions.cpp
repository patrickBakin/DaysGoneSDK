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

// Function UI_NotificationsStack.UI_NotificationsStack_C.ClearNotifications
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NotificationsStack_C::ClearNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.ClearNotifications");

	UUI_NotificationsStack_C_ClearNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.ResetQueue
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NotificationsStack_C::ResetQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.ResetQueue");

	UUI_NotificationsStack_C_ResetQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.GetFreeNotifyWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudNotificationItemNew_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::GetFreeNotifyWidget(class UUI_HudNotificationItemNew_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.GetFreeNotifyWidget");

	UUI_NotificationsStack_C_GetFreeNotifyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.HandleDuplicate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails NewDetails                     (Parm)
// bool                           Unique                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::HandleDuplicate(const struct FUI_HudNotificationDetails& NewDetails, bool* Unique)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.HandleDuplicate");

	UUI_NotificationsStack_C_HandleDuplicate_Params params;
	params.NewDetails = NewDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unique != nullptr)
		*Unique = params.Unique;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.SetVisible");

	UUI_NotificationsStack_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.CancelNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::CancelNotification(const struct FUI_HudNotificationDetails& Details, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.CancelNotification");

	UUI_NotificationsStack_C_CancelNotification_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.UpdatePositions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)

void UUI_NotificationsStack_C::UpdatePositions(const struct FUI_HudNotificationDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.UpdatePositions");

	UUI_NotificationsStack_C_UpdatePositions_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.ProcessQueue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudNotificationItemNew_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::ProcessQueue(class UUI_HudNotificationItemNew_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.ProcessQueue");

	UUI_NotificationsStack_C_ProcessQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.DisplayNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)
// class UUI_HudNotificationItemNew_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::DisplayNotification(const struct FUI_HudNotificationDetails& Details, class UUI_HudNotificationItemNew_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.DisplayNotification");

	UUI_NotificationsStack_C_DisplayNotification_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.AddNotificationToQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)

void UUI_NotificationsStack_C::AddNotificationToQueue(const struct FUI_HudNotificationDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.AddNotificationToQueue");

	UUI_NotificationsStack_C_AddNotificationToQueue_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_NotificationsStack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.Construct");

	UUI_NotificationsStack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationAdded_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_NotificationsStack_C::SingleNotificationAdded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationAdded_Event");

	UUI_NotificationsStack_C_SingleNotificationAdded_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudNotificationItemNew_C* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::SingleNotificationComplete_Event(class UUI_HudNotificationItemNew_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationComplete_Event");

	UUI_NotificationsStack_C_SingleNotificationComplete_Event_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.ExecuteUbergraph_UI_NotificationsStack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::ExecuteUbergraph_UI_NotificationsStack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.ExecuteUbergraph_UI_NotificationsStack");

	UUI_NotificationsStack_C_ExecuteUbergraph_UI_NotificationsStack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_NotificationsStack_C::SingleNotificationAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationAdded__DelegateSignature");

	UUI_NotificationsStack_C_SingleNotificationAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HudNotificationItemNew_C* Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationsStack_C::SingleNotificationComplete__DelegateSignature(class UUI_HudNotificationItemNew_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationComplete__DelegateSignature");

	UUI_NotificationsStack_C_SingleNotificationComplete__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

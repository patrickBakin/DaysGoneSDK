#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_NotificationsStack.UI_NotificationsStack_C.ClearNotifications
struct UUI_NotificationsStack_C_ClearNotifications_Params
{
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.ResetQueue
struct UUI_NotificationsStack_C_ResetQueue_Params
{
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.GetFreeNotifyWidget
struct UUI_NotificationsStack_C_GetFreeNotifyWidget_Params
{
	class UUI_HudNotificationItemNew_C*                Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.HandleDuplicate
struct UUI_NotificationsStack_C_HandleDuplicate_Params
{
	struct FUI_HudNotificationDetails                  NewDetails;                                               // (Parm)
	bool                                               Unique;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.SetVisible
struct UUI_NotificationsStack_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.CancelNotification
struct UUI_NotificationsStack_C_CancelNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
	bool                                               Removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.UpdatePositions
struct UUI_NotificationsStack_C_UpdatePositions_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.ProcessQueue
struct UUI_NotificationsStack_C_ProcessQueue_Params
{
	class UUI_HudNotificationItemNew_C*                Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.DisplayNotification
struct UUI_NotificationsStack_C_DisplayNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
	class UUI_HudNotificationItemNew_C*                Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.AddNotificationToQueue
struct UUI_NotificationsStack_C_AddNotificationToQueue_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.Construct
struct UUI_NotificationsStack_C_Construct_Params
{
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationAdded_Event
struct UUI_NotificationsStack_C_SingleNotificationAdded_Event_Params
{
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationComplete_Event
struct UUI_NotificationsStack_C_SingleNotificationComplete_Event_Params
{
	class UUI_HudNotificationItemNew_C*                Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.ExecuteUbergraph_UI_NotificationsStack
struct UUI_NotificationsStack_C_ExecuteUbergraph_UI_NotificationsStack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationAdded__DelegateSignature
struct UUI_NotificationsStack_C_SingleNotificationAdded__DelegateSignature_Params
{
};

// Function UI_NotificationsStack.UI_NotificationsStack_C.SingleNotificationComplete__DelegateSignature
struct UUI_NotificationsStack_C_SingleNotificationComplete__DelegateSignature_Params
{
	class UUI_HudNotificationItemNew_C*                Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

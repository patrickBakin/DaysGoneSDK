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

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotifyParentOfComplete
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotifyParentOfComplete_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetParentReference
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetParentReference_Params
{
	class UUI_HudObjective_C*                          Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ResetVisibilityTimer
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_ResetVisibilityTimer_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.CompareNotificationStruct
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_CompareNotificationStruct_Params
{
	struct FUI_HudNotificationDetails                  DetailsA;                                                 // (Parm, OutParm, ReferenceParm)
	struct FUI_HudNotificationDetails                  DetailsB;                                                 // (Parm, OutParm, ReferenceParm)
	bool                                               AreEqual;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.CancelNotification
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_CancelNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm, OutParm, ReferenceParm)
	bool                                               Removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetTranslationWithTween
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetTranslationWithTween_Params
{
	struct FVector2D                                   Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ProcessQueue
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_ProcessQueue_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.AddDetailsToQueue
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_AddDetailsToQueue_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetFailed
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetFailed_Params
{
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetBgOpacity
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetBgOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetEnabled
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetDetails
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetDetails_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.Init
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_Init_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetType
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetType_Params
{
	TEnumAsByte<EUI_HudNotificationType>               NotificationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetInvisible
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetInvisible_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.SetVisible
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_SetVisible_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.Construct
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_Construct_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationAdded_Event
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotificationAdded_Event_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.OnAnimationFinished
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationComplete_Event
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotificationComplete_Event_Params
{
	class UUI_HudOpenWorldObjectiveUnlockedNotifications_C* Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.QueueFinished
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_QueueFinished_Params
{
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.ExecuteUbergraph_UI_HudOpenWorldObjectiveUnlockedNotifications
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_ExecuteUbergraph_UI_HudOpenWorldObjectiveUnlockedNotifications_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationComplete__DelegateSignature
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotificationComplete__DelegateSignature_Params
{
	class UUI_HudOpenWorldObjectiveUnlockedNotifications_C* Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudOpenWorldObjectiveUnlockedNotifications.UI_HudOpenWorldObjectiveUnlockedNotifications_C.NotificationAdded__DelegateSignature
struct UUI_HudOpenWorldObjectiveUnlockedNotifications_C_NotificationAdded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

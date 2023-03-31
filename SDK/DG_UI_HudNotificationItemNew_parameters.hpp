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

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ClearNotifications
struct UUI_HudNotificationItemNew_C_ClearNotifications_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ResetQueue
struct UUI_HudNotificationItemNew_C_ResetQueue_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.OverrideLevelUpBanner
struct UUI_HudNotificationItemNew_C_OverrideLevelUpBanner_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.GetBannerVisibility
struct UUI_HudNotificationItemNew_C_GetBannerVisibility_Params
{
	bool                                               State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ResetVisibilityTimer
struct UUI_HudNotificationItemNew_C_ResetVisibilityTimer_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.CompareNotificationStruct
struct UUI_HudNotificationItemNew_C_CompareNotificationStruct_Params
{
	struct FUI_HudNotificationDetails                  DetailsA;                                                 // (Parm, OutParm, ReferenceParm)
	struct FUI_HudNotificationDetails                  DetailsB;                                                 // (Parm, OutParm, ReferenceParm)
	bool                                               AreEqual;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.CancelNotification
struct UUI_HudNotificationItemNew_C_CancelNotification_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm, OutParm, ReferenceParm)
	bool                                               Removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetTranslationWithTween
struct UUI_HudNotificationItemNew_C_SetTranslationWithTween_Params
{
	struct FVector2D                                   Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ProcessQueue
struct UUI_HudNotificationItemNew_C_ProcessQueue_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.AddDetailsToQueue
struct UUI_HudNotificationItemNew_C_AddDetailsToQueue_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetFailed
struct UUI_HudNotificationItemNew_C_SetFailed_Params
{
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetBgOpacity
struct UUI_HudNotificationItemNew_C_SetBgOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetEnabled
struct UUI_HudNotificationItemNew_C_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetDetails
struct UUI_HudNotificationItemNew_C_SetDetails_Params
{
	struct FUI_HudNotificationDetails                  Details;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Init
struct UUI_HudNotificationItemNew_C_Init_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetType
struct UUI_HudNotificationItemNew_C_SetType_Params
{
	TEnumAsByte<EUI_HudNotificationType>               NotificationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetStrikeout
struct UUI_HudNotificationItemNew_C_SetStrikeout_Params
{
	bool                                               Strikeout;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.TweenStrikeout
struct UUI_HudNotificationItemNew_C_TweenStrikeout_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetInvisible
struct UUI_HudNotificationItemNew_C_SetInvisible_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.SetVisible
struct UUI_HudNotificationItemNew_C_SetVisible_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Construct
struct UUI_HudNotificationItemNew_C_Construct_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.Tick
struct UUI_HudNotificationItemNew_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationAdded_Event
struct UUI_HudNotificationItemNew_C_NotificationAdded_Event_Params
{
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.OnAnimationFinished
struct UUI_HudNotificationItemNew_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationComplete_Event
struct UUI_HudNotificationItemNew_C_NotificationComplete_Event_Params
{
	class UUI_HudNotificationItemNew_C*                Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.ExecuteUbergraph_UI_HudNotificationItemNew
struct UUI_HudNotificationItemNew_C_ExecuteUbergraph_UI_HudNotificationItemNew_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationComplete__DelegateSignature
struct UUI_HudNotificationItemNew_C_NotificationComplete__DelegateSignature_Params
{
	class UUI_HudNotificationItemNew_C*                Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudNotificationItemNew.UI_HudNotificationItemNew_C.NotificationAdded__DelegateSignature
struct UUI_HudNotificationItemNew_C_NotificationAdded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

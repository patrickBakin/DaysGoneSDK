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

// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.SetDetails
struct UUI_HUDBannerNotificationWidget_C_SetDetails_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	TEnumAsByte<Enum_BannerType>                       BannerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUI_HudNotificationType>               NotificationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayFastTravelAward
struct UUI_HUDBannerNotificationWidget_C_DisplayFastTravelAward_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayTrustAward
struct UUI_HUDBannerNotificationWidget_C_DisplayTrustAward_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplaySkillPointAward
struct UUI_HUDBannerNotificationWidget_C_DisplaySkillPointAward_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
};

// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayAttributeAward
struct UUI_HUDBannerNotificationWidget_C_DisplayAttributeAward_Params
{
	TEnumAsByte<Enum_BannerType>                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       SubTitle;                                                 // (Parm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.Construct
struct UUI_HUDBannerNotificationWidget_C_Construct_Params
{
};

// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.ExecuteUbergraph_UI_HUDBannerNotificationWidget
struct UUI_HUDBannerNotificationWidget_C_ExecuteUbergraph_UI_HUDBannerNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

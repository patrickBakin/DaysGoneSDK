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

// Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.SetDetails
struct UUI_HUDResourceNotificationWidget_C_SetDetails_Params
{
	struct FText                                       Amount;                                                   // (Parm)
	TEnumAsByte<Enum_NotifyProgressType>               ProgressType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TypeText;                                                 // (Parm)
	struct FText                                       NameText;                                                 // (Parm)
	TEnumAsByte<ETextJustify>                          Justification;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.Construct
struct UUI_HUDResourceNotificationWidget_C_Construct_Params
{
};

// Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.ExecuteUbergraph_UI_HUDResourceNotificationWidget
struct UUI_HUDResourceNotificationWidget_C_ExecuteUbergraph_UI_HUDResourceNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

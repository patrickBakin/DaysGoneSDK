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

// Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.SetDetails
struct UUI_HUDOneLineNotificationWidget_C_SetDetails_Params
{
	struct FText                                       TitleText;                                                // (Parm)
	TEnumAsByte<ETextJustify>                          Justification;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.Construct
struct UUI_HUDOneLineNotificationWidget_C_Construct_Params
{
};

// Function UI_HUDOneLineNotificationWidget.UI_HUDOneLineNotificationWidget_C.ExecuteUbergraph_UI_HUDOneLineNotificationWidget
struct UUI_HUDOneLineNotificationWidget_C_ExecuteUbergraph_UI_HUDOneLineNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

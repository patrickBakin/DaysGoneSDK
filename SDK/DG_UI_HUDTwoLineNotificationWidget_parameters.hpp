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

// Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.SetDetails
struct UUI_HUDTwoLineNotificationWidget_C_SetDetails_Params
{
	struct FText                                       TypeText;                                                 // (Parm)
	struct FText                                       NameText;                                                 // (Parm)
	TEnumAsByte<ETextJustify>                          Justification;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowTouchpad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.Construct
struct UUI_HUDTwoLineNotificationWidget_C_Construct_Params
{
};

// Function UI_HUDTwoLineNotificationWidget.UI_HUDTwoLineNotificationWidget_C.ExecuteUbergraph_UI_HUDTwoLineNotificationWidget
struct UUI_HUDTwoLineNotificationWidget_C_ExecuteUbergraph_UI_HUDTwoLineNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

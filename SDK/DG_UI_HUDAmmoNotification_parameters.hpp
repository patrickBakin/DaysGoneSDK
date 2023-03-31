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

// Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.SetDetails
struct UUI_HUDAmmoNotification_C_SetDetails_Params
{
	struct FText                                       Amount;                                                   // (Parm)
	struct FText                                       TypeText;                                                 // (Parm)
	struct FText                                       NameText;                                                 // (Parm)
	TEnumAsByte<ETextJustify>                          Justification;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_NotifyProgressType>               ProgressType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.Construct
struct UUI_HUDAmmoNotification_C_Construct_Params
{
};

// Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.ExecuteUbergraph_UI_HUDAmmoNotification
struct UUI_HUDAmmoNotification_C_ExecuteUbergraph_UI_HUDAmmoNotification_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_GunLocker.UI_GunLocker_C.Construct
struct UUI_GunLocker_C_Construct_Params
{
};

// Function UI_GunLocker.UI_GunLocker_C.SetVisibilityOverride
struct UUI_GunLocker_C_SetVisibilityOverride_Params
{
	TEnumAsByte<ESlateVisibility>*                     VisibilityType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GunLocker.UI_GunLocker_C.DisplayNewItemsNotification
struct UUI_GunLocker_C_DisplayNewItemsNotification_Params
{
	bool                                               bShouldDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GunLocker.UI_GunLocker_C.ExecuteUbergraph_UI_GunLocker
struct UUI_GunLocker_C_ExecuteUbergraph_UI_GunLocker_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_MerchantCallout.UI_MerchantCallout_C.SetIcon
struct UUI_MerchantCallout_C_SetIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MerchantCallout.UI_MerchantCallout_C.SetDetails
struct UUI_MerchantCallout_C_SetDetails_Params
{
	struct FText                                       Title;                                                    // (Parm)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       NotifyText;                                               // (Parm)
};

// Function UI_MerchantCallout.UI_MerchantCallout_C.Construct
struct UUI_MerchantCallout_C_Construct_Params
{
};

// Function UI_MerchantCallout.UI_MerchantCallout_C.SetVisibilityOverride
struct UUI_MerchantCallout_C_SetVisibilityOverride_Params
{
	TEnumAsByte<ESlateVisibility>*                     VisibilityType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MerchantCallout.UI_MerchantCallout_C.SetNewItemsAvailable
struct UUI_MerchantCallout_C_SetNewItemsAvailable_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MerchantCallout.UI_MerchantCallout_C.ExecuteUbergraph_UI_MerchantCallout
struct UUI_MerchantCallout_C_ExecuteUbergraph_UI_MerchantCallout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.GetInteractActionName
struct UUI_HudUpgradeWidget_C_GetInteractActionName_Params
{
	TEnumAsByte<EInteractButton>                       InteractButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.ResetAll
struct UUI_HudUpgradeWidget_C_ResetAll_Params
{
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetUIActive
struct UUI_HudUpgradeWidget_C_SetUIActive_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.TurnOff
struct UUI_HudUpgradeWidget_C_TurnOff_Params
{
	bool                                               NoChoiceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetupSettings
struct UUI_HudUpgradeWidget_C_SetupSettings_Params
{
	bool                                               DisableInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateLookAtCamera;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerInCinMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitTimeBeforeRemove;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.SetChoiceDetails
struct UUI_HudUpgradeWidget_C_SetChoiceDetails_Params
{
	struct FText                                       TriangleText;                                             // (Parm)
	struct FText                                       TriangleDescriptionText;                                  // (Parm)
	struct FText                                       CircleText;                                               // (Parm)
	struct FText                                       CircleDescriptionText;                                    // (Parm)
	struct FText                                       SquareText;                                               // (Parm)
	struct FText                                       SquareDescriptionText;                                    // (Parm)
	struct FText                                       CrossText;                                                // (Parm)
	struct FText                                       CrossDescriptionText;                                     // (Parm)
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.Tick
struct UUI_HudUpgradeWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.Construct
struct UUI_HudUpgradeWidget_C_Construct_Params
{
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.ExecuteUbergraph_UI_HudUpgradeWidget
struct UUI_HudUpgradeWidget_C_ExecuteUbergraph_UI_HudUpgradeWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.OnEnd__DelegateSignature
struct UUI_HudUpgradeWidget_C_OnEnd__DelegateSignature_Params
{
};

// Function UI_HudUpgradeWidget.UI_HudUpgradeWidget_C.OnChoiceSelected__DelegateSignature
struct UUI_HudUpgradeWidget_C_OnChoiceSelected__DelegateSignature_Params
{
	TEnumAsByte<EInteractButton>                       ChoiceSelection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

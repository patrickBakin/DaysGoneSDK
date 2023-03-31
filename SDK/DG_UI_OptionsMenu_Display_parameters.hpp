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

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.LoadSettings
struct UUI_OptionsMenu_Display_C_LoadSettings_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.SetSelectedEntry
struct UUI_OptionsMenu_Display_C_SetSelectedEntry_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateFPS
struct UUI_OptionsMenu_Display_C_UpdateFPS_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BuildResultString
struct UUI_OptionsMenu_Display_C_BuildResultString_Params
{
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateResolutions
struct UUI_OptionsMenu_Display_C_UpdateResolutions_Params
{
	int                                                MonitorIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.UpdateRefreshRates
struct UUI_OptionsMenu_Display_C_UpdateRefreshRates_Params
{
	int                                                MonitorIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResolutionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnUpPressed
struct UUI_OptionsMenu_Display_C_OnUpPressed_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnDownPressed
struct UUI_OptionsMenu_Display_C_OnDownPressed_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnLeftPressed
struct UUI_OptionsMenu_Display_C_OnLeftPressed_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnRightPressed
struct UUI_OptionsMenu_Display_C_OnRightPressed_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.Construct
struct UUI_OptionsMenu_Display_C_Construct_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2570_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_OptionsMenu_Display_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2570_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2572_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_OptionsMenu_Display_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2572_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.RequestClose
struct UUI_OptionsMenu_Display_C_RequestClose_Params
{
	bool*                                              ClosedByPhotoMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnConfirmPressed
struct UUI_OptionsMenu_Display_C_OnConfirmPressed_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnCancelPressed
struct UUI_OptionsMenu_Display_C_OnCancelPressed_Params
{
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ItemChanged_Event_1
struct UUI_OptionsMenu_Display_C_ItemChanged_Event_1_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnHovered_Event_1
struct UUI_OptionsMenu_Display_C_OnHovered_Event_1_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnMonitorSelectionChanged_Event_1
struct UUI_OptionsMenu_Display_C_OnMonitorSelectionChanged_Event_1_Params
{
	int                                                MonitorIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ItemChanged_Event_2
struct UUI_OptionsMenu_Display_C_ItemChanged_Event_2_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.ExecuteUbergraph_UI_OptionsMenu_Display
struct UUI_OptionsMenu_Display_C_ExecuteUbergraph_UI_OptionsMenu_Display_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsMenu_Display.UI_OptionsMenu_Display_C.OnClose__DelegateSignature
struct UUI_OptionsMenu_Display_C_OnClose__DelegateSignature_Params
{
	struct FEventReply                                 Result;                                                   // (Parm)
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

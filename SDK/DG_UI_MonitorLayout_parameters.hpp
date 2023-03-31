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

// Function UI_MonitorLayout.UI_MonitorLayout_C.PreviousItem
struct UUI_MonitorLayout_C_PreviousItem_Params
{
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.NextItem
struct UUI_MonitorLayout_C_NextItem_Params
{
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.Init
struct UUI_MonitorLayout_C_Init_Params
{
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.GetSelectedMonitor
struct UUI_MonitorLayout_C_GetSelectedMonitor_Params
{
	int                                                MonitorIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.SetSelectedMonitor
struct UUI_MonitorLayout_C_SetSelectedMonitor_Params
{
	int                                                MonitorIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.GetSpan
struct UUI_MonitorLayout_C_GetSpan_Params
{
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.GetScale
struct UUI_MonitorLayout_C_GetScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.Construct
struct UUI_MonitorLayout_C_Construct_Params
{
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.HandleStateChanged
struct UUI_MonitorLayout_C_HandleStateChanged_Params
{
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_4105_OnMenuInteractHoverEvent__DelegateSignature
struct UUI_MonitorLayout_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_4105_OnMenuInteractHoverEvent__DelegateSignature_Params
{
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.NextValue
struct UUI_MonitorLayout_C_NextValue_Params
{
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.PreviousValue
struct UUI_MonitorLayout_C_PreviousValue_Params
{
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.ExecuteUbergraph_UI_MonitorLayout
struct UUI_MonitorLayout_C_ExecuteUbergraph_UI_MonitorLayout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MonitorLayout.UI_MonitorLayout_C.OnMonitorSelectionChanged__DelegateSignature
struct UUI_MonitorLayout_C_OnMonitorSelectionChanged__DelegateSignature_Params
{
	int                                                MonitorIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

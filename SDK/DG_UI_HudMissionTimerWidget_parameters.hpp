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

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.RemoveMissionTimer
struct UUI_HudMissionTimerWidget_C_RemoveMissionTimer_Params
{
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.NotifyParentOfComplete
struct UUI_HudMissionTimerWidget_C_NotifyParentOfComplete_Params
{
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.UpdateMissionTimer
struct UUI_HudMissionTimerWidget_C_UpdateMissionTimer_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetParentReference
struct UUI_HudMissionTimerWidget_C_SetParentReference_Params
{
	class UUI_HudObjective_C*                          Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.NewMissionTimer
struct UUI_HudMissionTimerWidget_C_NewMissionTimer_Params
{
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHealthBar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPaused
struct UUI_HudMissionTimerWidget_C_SetPaused_Params
{
	bool                                               Paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.CheckGamePaused
struct UUI_HudMissionTimerWidget_C_CheckGamePaused_Params
{
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.TweenHeight
struct UUI_HudMissionTimerWidget_C_TweenHeight_Params
{
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.StartTimer
struct UUI_HudMissionTimerWidget_C_StartTimer_Params
{
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetDetails
struct UUI_HudMissionTimerWidget_C_SetDetails_Params
{
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	bool                                               Inverted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHealthBar_;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.TweenColor
struct UUI_HudMissionTimerWidget_C_TweenColor_Params
{
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetVisible
struct UUI_HudMissionTimerWidget_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPercentInternal
struct UUI_HudMissionTimerWidget_C_SetPercentInternal_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.Construct
struct UUI_HudMissionTimerWidget_C_Construct_Params
{
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.Tick
struct UUI_HudMissionTimerWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ActivateTimer
struct UUI_HudMissionTimerWidget_C_ActivateTimer_Params
{
	struct FHudMissionTimerDetails*                    Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ClearTimer
struct UUI_HudMissionTimerWidget_C_ClearTimer_Params
{
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.SetPercent
struct UUI_HudMissionTimerWidget_C_SetPercent_Params
{
	float*                                             Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionTimerWidget.UI_HudMissionTimerWidget_C.ExecuteUbergraph_UI_HudMissionTimerWidget
struct UUI_HudMissionTimerWidget_C_ExecuteUbergraph_UI_HudMissionTimerWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

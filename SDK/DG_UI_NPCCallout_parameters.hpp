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

// Function UI_NPCCallout.UI_NPCCallout_C.AddProfileListener
struct UUI_NPCCallout_C_AddProfileListener_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.RemoveProfileListener
struct UUI_NPCCallout_C_RemoveProfileListener_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetMarkedCalloutVisible
struct UUI_NPCCallout_C_SetMarkedCalloutVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECalloutWidgetType>                    NPCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetProgress
struct UUI_NPCCallout_C_SetProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetAlert
struct UUI_NPCCallout_C_SetAlert_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetSuspicious
struct UUI_NPCCallout_C_SetSuspicious_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.HideAllIcons
struct UUI_NPCCallout_C_HideAllIcons_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.ShowOffscreenArrow
struct UUI_NPCCallout_C_ShowOffscreenArrow_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.UpdateCalloutPosition
struct UUI_NPCCallout_C_UpdateCalloutPosition_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetObjectiveCalloutWarning
struct UUI_NPCCallout_C_SetObjectiveCalloutWarning_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetStatusEffectVisible
struct UUI_NPCCallout_C_SetStatusEffectVisible_Params
{
	bool                                               isPoison;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetObjectiveCalloutVisible
struct UUI_NPCCallout_C_SetObjectiveCalloutVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WarningState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.Init
struct UUI_NPCCallout_C_Init_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetHealth
struct UUI_NPCCallout_C_SetHealth_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.TweenVisibility
struct UUI_NPCCallout_C_TweenVisibility_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutDisabled
struct UUI_NPCCallout_C_SetCalloutDisabled_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutHidden
struct UUI_NPCCallout_C_SetCalloutHidden_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetCalloutVisible
struct UUI_NPCCallout_C_SetCalloutVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_CalloutType>                      NPCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.Construct
struct UUI_NPCCallout_C_Construct_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.TriggerSuspiciousState
struct UUI_NPCCallout_C_TriggerSuspiciousState_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.TriggerAlertState
struct UUI_NPCCallout_C_TriggerAlertState_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.ActivateSuspiciousIndicator
struct UUI_NPCCallout_C_ActivateSuspiciousIndicator_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.ActivateAlertIndicator
struct UUI_NPCCallout_C_ActivateAlertIndicator_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.DeactivateAwarenessCallout
struct UUI_NPCCallout_C_DeactivateAwarenessCallout_Params
{
	bool*                                              DeactivateDueToAware;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.SetIndicatorProgress
struct UUI_NPCCallout_C_SetIndicatorProgress_Params
{
	float*                                             NormalizedProgress;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.ActivateMarkedCallout
struct UUI_NPCCallout_C_ActivateMarkedCallout_Params
{
	TEnumAsByte<ECalloutWidgetType>*                   CalloutType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.DeactivateMarkedCallout
struct UUI_NPCCallout_C_DeactivateMarkedCallout_Params
{
};

// Function UI_NPCCallout.UI_NPCCallout_C.UpdateHealthOnCallout
struct UUI_NPCCallout_C_UpdateHealthOnCallout_Params
{
	float*                                             Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.OnColorModeChange
struct UUI_NPCCallout_C_OnColorModeChange_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NPCCallout.UI_NPCCallout_C.ExecuteUbergraph_UI_NPCCallout
struct UUI_NPCCallout_C_ExecuteUbergraph_UI_NPCCallout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

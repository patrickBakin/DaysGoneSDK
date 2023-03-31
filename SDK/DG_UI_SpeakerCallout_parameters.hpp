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

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.ShowOffscreenArrow
struct UUI_SpeakerCallout_C_ShowOffscreenArrow_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.UpdateCalloutPosition
struct UUI_SpeakerCallout_C_UpdateCalloutPosition_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetObjectiveCalloutWarning
struct UUI_SpeakerCallout_C_SetObjectiveCalloutWarning_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetStatusEffectVisible
struct UUI_SpeakerCallout_C_SetStatusEffectVisible_Params
{
	bool                                               isPoison;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetObjectiveCalloutVisible
struct UUI_SpeakerCallout_C_SetObjectiveCalloutVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WarningState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.Init
struct UUI_SpeakerCallout_C_Init_Params
{
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetHealth
struct UUI_SpeakerCallout_C_SetHealth_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.TweenVisibility
struct UUI_SpeakerCallout_C_TweenVisibility_Params
{
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutDisabled
struct UUI_SpeakerCallout_C_SetCalloutDisabled_Params
{
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutHidden
struct UUI_SpeakerCallout_C_SetCalloutHidden_Params
{
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutVisible
struct UUI_SpeakerCallout_C_SetCalloutVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_CalloutType>                      NPCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.Construct
struct UUI_SpeakerCallout_C_Construct_Params
{
};

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.ExecuteUbergraph_UI_SpeakerCallout
struct UUI_SpeakerCallout_C_ExecuteUbergraph_UI_SpeakerCallout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

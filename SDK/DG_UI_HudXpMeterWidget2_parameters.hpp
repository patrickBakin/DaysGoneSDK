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

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.StopSounds
struct UUI_HudXpMeterWidget2_C_StopSounds_Params
{
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.HandleTick
struct UUI_HudXpMeterWidget2_C_HandleTick_Params
{
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.FadeOut
struct UUI_HudXpMeterWidget2_C_FadeOut_Params
{
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.UpdateTrust
struct UUI_HudXpMeterWidget2_C_UpdateTrust_Params
{
	int                                                TrustGained;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrustUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.DisplayTrust
struct UUI_HudXpMeterWidget2_C_DisplayTrust_Params
{
	int                                                TrustGained;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.SetInvisible
struct UUI_HudXpMeterWidget2_C_SetInvisible_Params
{
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.SetVisible
struct UUI_HudXpMeterWidget2_C_SetVisible_Params
{
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.DisplayXP
struct UUI_HudXpMeterWidget2_C_DisplayXP_Params
{
	int                                                xp;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLeftOverXP;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.UpdateXP
struct UUI_HudXpMeterWidget2_C_UpdateXP_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XPadded;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.Construct
struct UUI_HudXpMeterWidget2_C_Construct_Params
{
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.Tick
struct UUI_HudXpMeterWidget2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.OnPreSaveGameLoaded_Event_1
struct UUI_HudXpMeterWidget2_C_OnPreSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.CinematicStarted
struct UUI_HudXpMeterWidget2_C_CinematicStarted_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.ExecuteUbergraph_UI_HudXpMeterWidget2
struct UUI_HudXpMeterWidget2_C_ExecuteUbergraph_UI_HudXpMeterWidget2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.NewEventDispatcher_0__DelegateSignature
struct UUI_HudXpMeterWidget2_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

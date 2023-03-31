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

// Function UI_SoundMeter.UI_SoundMeter_C.HideMeter
struct UUI_SoundMeter_C_HideMeter_Params
{
};

// Function UI_SoundMeter.UI_SoundMeter_C.ShowMeter
struct UUI_SoundMeter_C_ShowMeter_Params
{
};

// Function UI_SoundMeter.UI_SoundMeter_C.DisplayPlayerStealth
struct UUI_SoundMeter_C_DisplayPlayerStealth_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SoundMeter.UI_SoundMeter_C.SetPlayerVisibleLevel
struct UUI_SoundMeter_C_SetPlayerVisibleLevel_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SoundMeter.UI_SoundMeter_C.SetPlayerSoundLevel
struct UUI_SoundMeter_C_SetPlayerSoundLevel_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SoundMeter.UI_SoundMeter_C.Construct
struct UUI_SoundMeter_C_Construct_Params
{
};

// Function UI_SoundMeter.UI_SoundMeter_C.SilentStarted
struct UUI_SoundMeter_C_SilentStarted_Params
{
};

// Function UI_SoundMeter.UI_SoundMeter_C.silent
struct UUI_SoundMeter_C_silent_Params
{
};

// Function UI_SoundMeter.UI_SoundMeter_C.ExecuteUbergraph_UI_SoundMeter
struct UUI_SoundMeter_C_ExecuteUbergraph_UI_SoundMeter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

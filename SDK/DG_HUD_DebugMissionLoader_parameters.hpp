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

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.LevelThePlayerUp
struct UHUD_DebugMissionLoader_C_LevelThePlayerUp_Params
{
	int                                                StaminaLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FocusLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealthLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.GiveThePlayerAmmo
struct UHUD_DebugMissionLoader_C_GiveThePlayerAmmo_Params
{
};

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.GiveThePlayerWeapons&Level
struct UHUD_DebugMissionLoader_C_GiveThePlayerWeapons_Level_Params
{
};

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.SetStatisticText
struct UHUD_DebugMissionLoader_C_SetStatisticText_Params
{
};

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.CirclePressed
struct UHUD_DebugMissionLoader_C_CirclePressed_Params
{
};

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.XPressed
struct UHUD_DebugMissionLoader_C_XPressed_Params
{
};

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.Construct
struct UHUD_DebugMissionLoader_C_Construct_Params
{
};

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.Tick
struct UHUD_DebugMissionLoader_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DebugMissionLoader.HUD_DebugMissionLoader_C.ExecuteUbergraph_HUD_DebugMissionLoader
struct UHUD_DebugMissionLoader_C_ExecuteUbergraph_HUD_DebugMissionLoader_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

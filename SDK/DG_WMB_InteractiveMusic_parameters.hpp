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

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.TickMusic
struct UWMB_InteractiveMusic_C_TickMusic_Params
{
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.Damaged_Player
struct UWMB_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.BulletBy_Player
struct UWMB_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UWMB_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.OnPlayerDamaged
struct UWMB_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.OnTick
struct UWMB_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.SetEndingState
struct UWMB_InteractiveMusic_C_SetEndingState_Params
{
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.SetHighState
struct UWMB_InteractiveMusic_C_SetHighState_Params
{
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.SetLow1State
struct UWMB_InteractiveMusic_C_SetLow1State_Params
{
};

// Function WMB_InteractiveMusic.WMB_InteractiveMusic_C.ExecuteUbergraph_WMB_InteractiveMusic
struct UWMB_InteractiveMusic_C_ExecuteUbergraph_WMB_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.TickMusic
struct UAON_InteractiveMusic_C_TickMusic_Params
{
};

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.Damaged_Player
struct UAON_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.BulletBy_Player
struct UAON_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UAON_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.OnPlayerDamaged
struct UAON_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.OnTick
struct UAON_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.SetLow1State
struct UAON_InteractiveMusic_C_SetLow1State_Params
{
};

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.SetHighState
struct UAON_InteractiveMusic_C_SetHighState_Params
{
};

// Function AON_InteractiveMusic.AON_InteractiveMusic_C.ExecuteUbergraph_AON_InteractiveMusic
struct UAON_InteractiveMusic_C_ExecuteUbergraph_AON_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

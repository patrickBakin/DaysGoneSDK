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

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.TickMusic
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_TickMusic_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.Damaged_Player
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.BulletBy_Player
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnPlayerDamaged
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnTick
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetMediumState
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetMediumState_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetHighState
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetHighState_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetLow1State
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetLow1State_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetIdleState
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetIdleState_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetLow2State
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetLow2State_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnPlay
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_OnPlay_Params
{
};

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.ExecuteUbergraph_OW_CombSys_FreakerEnemies_InteractiveMusic
struct UOW_CombSys_FreakerEnemies_InteractiveMusic_C_ExecuteUbergraph_OW_CombSys_FreakerEnemies_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

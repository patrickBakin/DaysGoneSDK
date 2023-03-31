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

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.TickMusic
struct UWADN_FreakerEnemies_InteractiveMusic_C_TickMusic_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.Damaged_Player
struct UWADN_FreakerEnemies_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.BulletBy_Player
struct UWADN_FreakerEnemies_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UWADN_FreakerEnemies_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.OnPlayerDamaged
struct UWADN_FreakerEnemies_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.OnTick
struct UWADN_FreakerEnemies_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.SetMediumState
struct UWADN_FreakerEnemies_InteractiveMusic_C_SetMediumState_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.SetHighState
struct UWADN_FreakerEnemies_InteractiveMusic_C_SetHighState_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.SetLow1State
struct UWADN_FreakerEnemies_InteractiveMusic_C_SetLow1State_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.SetIdleState
struct UWADN_FreakerEnemies_InteractiveMusic_C_SetIdleState_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.SetLow2State
struct UWADN_FreakerEnemies_InteractiveMusic_C_SetLow2State_Params
{
};

// Function WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C.ExecuteUbergraph_WADN_FreakerEnemies_InteractiveMusic
struct UWADN_FreakerEnemies_InteractiveMusic_C_ExecuteUbergraph_WADN_FreakerEnemies_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

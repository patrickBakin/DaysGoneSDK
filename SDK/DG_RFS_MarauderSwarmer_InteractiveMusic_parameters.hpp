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

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.TickMusic
struct URFS_MarauderSwarmer_InteractiveMusic_C_TickMusic_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.Damaged_Player
struct URFS_MarauderSwarmer_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.BulletBy_Player
struct URFS_MarauderSwarmer_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct URFS_MarauderSwarmer_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.OnPlayerDamaged
struct URFS_MarauderSwarmer_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.OnTick
struct URFS_MarauderSwarmer_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.SetMediumState
struct URFS_MarauderSwarmer_InteractiveMusic_C_SetMediumState_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.SetHighState
struct URFS_MarauderSwarmer_InteractiveMusic_C_SetHighState_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.SetLow1State
struct URFS_MarauderSwarmer_InteractiveMusic_C_SetLow1State_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.SetIdleState
struct URFS_MarauderSwarmer_InteractiveMusic_C_SetIdleState_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.SetLow2State
struct URFS_MarauderSwarmer_InteractiveMusic_C_SetLow2State_Params
{
};

// Function RFS_MarauderSwarmer_InteractiveMusic.RFS_MarauderSwarmer_InteractiveMusic_C.ExecuteUbergraph_RFS_MarauderSwarmer_InteractiveMusic
struct URFS_MarauderSwarmer_InteractiveMusic_C_ExecuteUbergraph_RFS_MarauderSwarmer_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.TickMusic
struct URBC_Escort_InteractiveMusic_C_TickMusic_Params
{
};

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.Damaged_Player
struct URBC_Escort_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.BulletBy_Player
struct URBC_Escort_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct URBC_Escort_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.OnPlayerDamaged
struct URBC_Escort_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.OnTick
struct URBC_Escort_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.SetLow1State
struct URBC_Escort_InteractiveMusic_C_SetLow1State_Params
{
};

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.SetHighState
struct URBC_Escort_InteractiveMusic_C_SetHighState_Params
{
};

// Function RBC_Escort_InteractiveMusic.RBC_Escort_InteractiveMusic_C.ExecuteUbergraph_RBC_Escort_InteractiveMusic
struct URBC_Escort_InteractiveMusic_C_ExecuteUbergraph_RBC_Escort_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

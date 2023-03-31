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

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.SetIsOffBike
struct ULRH_BikeRide_InteractiveMusic_C_SetIsOffBike_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.SetIsOnBike
struct ULRH_BikeRide_InteractiveMusic_C_SetIsOnBike_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.TickMusic
struct ULRH_BikeRide_InteractiveMusic_C_TickMusic_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.Damaged_Player
struct ULRH_BikeRide_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.BulletBy_Player
struct ULRH_BikeRide_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct ULRH_BikeRide_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.OnPlayerDamaged
struct ULRH_BikeRide_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.OnTick
struct ULRH_BikeRide_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.SetMediumState
struct ULRH_BikeRide_InteractiveMusic_C_SetMediumState_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.SetHighState
struct ULRH_BikeRide_InteractiveMusic_C_SetHighState_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.SetLow1State
struct ULRH_BikeRide_InteractiveMusic_C_SetLow1State_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.SetIdleState
struct ULRH_BikeRide_InteractiveMusic_C_SetIdleState_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.SetLow2State
struct ULRH_BikeRide_InteractiveMusic_C_SetLow2State_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.OnPlay
struct ULRH_BikeRide_InteractiveMusic_C_OnPlay_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.SetBikeState
struct ULRH_BikeRide_InteractiveMusic_C_SetBikeState_Params
{
};

// Function LRH_BikeRide_InteractiveMusic.LRH_BikeRide_InteractiveMusic_C.ExecuteUbergraph_LRH_BikeRide_InteractiveMusic
struct ULRH_BikeRide_InteractiveMusic_C_ExecuteUbergraph_LRH_BikeRide_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

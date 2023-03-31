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

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.TickMusic
struct UMBU_InteractiveMusic_C_TickMusic_Params
{
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.Damaged_Player
struct UMBU_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.BulletBy_Player
struct UMBU_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UMBU_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.OnPlayerDamaged
struct UMBU_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.OnTick
struct UMBU_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.SetLow1State
struct UMBU_InteractiveMusic_C_SetLow1State_Params
{
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.SetHighState
struct UMBU_InteractiveMusic_C_SetHighState_Params
{
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.SetMediumState
struct UMBU_InteractiveMusic_C_SetMediumState_Params
{
};

// Function MBU_InteractiveMusic.MBU_InteractiveMusic_C.ExecuteUbergraph_MBU_InteractiveMusic
struct UMBU_InteractiveMusic_C_ExecuteUbergraph_MBU_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

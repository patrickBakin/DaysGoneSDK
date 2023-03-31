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

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.TickMusic
struct UGEN_Stealth_InteractiveMusic_C_TickMusic_Params
{
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.Damaged_Player
struct UGEN_Stealth_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.BulletBy_Player
struct UGEN_Stealth_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UGEN_Stealth_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.OnPlayerDamaged
struct UGEN_Stealth_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.OnTick
struct UGEN_Stealth_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.SetLow2State
struct UGEN_Stealth_InteractiveMusic_C_SetLow2State_Params
{
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.SetMediumState
struct UGEN_Stealth_InteractiveMusic_C_SetMediumState_Params
{
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.OnPlay
struct UGEN_Stealth_InteractiveMusic_C_OnPlay_Params
{
};

// Function GEN_Stealth_InteractiveMusic.GEN_Stealth_InteractiveMusic_C.ExecuteUbergraph_GEN_Stealth_InteractiveMusic
struct UGEN_Stealth_InteractiveMusic_C_ExecuteUbergraph_GEN_Stealth_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

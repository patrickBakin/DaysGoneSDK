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

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.TickMusic
struct UBIP_InteractiveMusic_C_TickMusic_Params
{
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.Damaged_Player
struct UBIP_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.BulletBy_Player
struct UBIP_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UBIP_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.OnPlayerDamaged
struct UBIP_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.OnTick
struct UBIP_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.SetLow1State
struct UBIP_InteractiveMusic_C_SetLow1State_Params
{
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.SetHighState
struct UBIP_InteractiveMusic_C_SetHighState_Params
{
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.SetMediumState
struct UBIP_InteractiveMusic_C_SetMediumState_Params
{
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.OnPlay
struct UBIP_InteractiveMusic_C_OnPlay_Params
{
};

// Function BIP_InteractiveMusic.BIP_InteractiveMusic_C.ExecuteUbergraph_BIP_InteractiveMusic
struct UBIP_InteractiveMusic_C_ExecuteUbergraph_BIP_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

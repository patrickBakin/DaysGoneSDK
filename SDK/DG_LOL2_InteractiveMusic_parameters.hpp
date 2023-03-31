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

// Function LOL2_InteractiveMusic.LOL2_InteractiveMusic_C.TickMusic
struct ULOL2_InteractiveMusic_C_TickMusic_Params
{
};

// Function LOL2_InteractiveMusic.LOL2_InteractiveMusic_C.Damaged_Player
struct ULOL2_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function LOL2_InteractiveMusic.LOL2_InteractiveMusic_C.BulletBy_Player
struct ULOL2_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function LOL2_InteractiveMusic.LOL2_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct ULOL2_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function LOL2_InteractiveMusic.LOL2_InteractiveMusic_C.OnPlayerDamaged
struct ULOL2_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LOL2_InteractiveMusic.LOL2_InteractiveMusic_C.OnTick
struct ULOL2_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LOL2_InteractiveMusic.LOL2_InteractiveMusic_C.OnPlay
struct ULOL2_InteractiveMusic_C_OnPlay_Params
{
};

// Function LOL2_InteractiveMusic.LOL2_InteractiveMusic_C.ExecuteUbergraph_LOL2_InteractiveMusic
struct ULOL2_InteractiveMusic_C_ExecuteUbergraph_LOL2_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

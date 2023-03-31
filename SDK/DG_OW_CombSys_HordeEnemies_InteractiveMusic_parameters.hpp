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

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic3
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_TickMusic3_Params
{
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic2
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_TickMusic2_Params
{
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic1
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_TickMusic1_Params
{
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.IntSwitchFunction
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_IntSwitchFunction_Params
{
	TArray<int>                                        ListOfValues;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ValueInRegister;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_TickMusic_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.Damaged_Player
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.BulletBy_Player
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnPlayerDamaged
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnTick
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnPlay
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_OnPlay_Params
{
};

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.ExecuteUbergraph_OW_CombSys_HordeEnemies_InteractiveMusic
struct UOW_CombSys_HordeEnemies_InteractiveMusic_C_ExecuteUbergraph_OW_CombSys_HordeEnemies_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

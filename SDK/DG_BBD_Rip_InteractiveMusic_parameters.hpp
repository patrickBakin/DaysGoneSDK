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

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.TickMusic
struct UBBD_Rip_InteractiveMusic_C_TickMusic_Params
{
};

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.Damaged_Player
struct UBBD_Rip_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.BulletBy_Player
struct UBBD_Rip_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UBBD_Rip_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.OnPlayerDamaged
struct UBBD_Rip_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.OnTick
struct UBBD_Rip_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.SetLow1State
struct UBBD_Rip_InteractiveMusic_C_SetLow1State_Params
{
};

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.SetHighState
struct UBBD_Rip_InteractiveMusic_C_SetHighState_Params
{
};

// Function BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C.ExecuteUbergraph_BBD_Rip_InteractiveMusic
struct UBBD_Rip_InteractiveMusic_C_ExecuteUbergraph_BBD_Rip_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

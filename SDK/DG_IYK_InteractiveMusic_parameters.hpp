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

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.TickMusic
struct UIYK_InteractiveMusic_C_TickMusic_Params
{
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.Damaged_Player
struct UIYK_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.BulletBy_Player
struct UIYK_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UIYK_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnPlayerDamaged
struct UIYK_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnTick
struct UIYK_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetLow1State
struct UIYK_InteractiveMusic_C_SetLow1State_Params
{
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetHighState
struct UIYK_InteractiveMusic_C_SetHighState_Params
{
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetMediumState
struct UIYK_InteractiveMusic_C_SetMediumState_Params
{
};

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.ExecuteUbergraph_IYK_InteractiveMusic
struct UIYK_InteractiveMusic_C_ExecuteUbergraph_IYK_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetPercentNoTween
struct UWeapon_Stat_Progress_C_SetPercentNoTween_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.Init
struct UWeapon_Stat_Progress_C_Init_Params
{
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetMainPercent
struct UWeapon_Stat_Progress_C_SetMainPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetNewPercent
struct UWeapon_Stat_Progress_C_SetNewPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.TweenNewPercent
struct UWeapon_Stat_Progress_C_TweenNewPercent_Params
{
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.TweenMainPercent
struct UWeapon_Stat_Progress_C_TweenMainPercent_Params
{
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetPercent
struct UWeapon_Stat_Progress_C_SetPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.Construct
struct UWeapon_Stat_Progress_C_Construct_Params
{
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.FirstPercentComplete_Event
struct UWeapon_Stat_Progress_C_FirstPercentComplete_Event_Params
{
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.ExecuteUbergraph_Weapon_Stat_Progress
struct UWeapon_Stat_Progress_C_ExecuteUbergraph_Weapon_Stat_Progress_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.FirstPercentComplete__DelegateSignature
struct UWeapon_Stat_Progress_C_FirstPercentComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

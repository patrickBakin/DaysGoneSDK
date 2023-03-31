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

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.IsFiring
struct ABend_Wpn_Pistol_Base_C_IsFiring_Params
{
	class ABendWeapon_Projectile*                      Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFiring;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.UserConstructionScript
struct ABend_Wpn_Pistol_Base_C_UserConstructionScript_Params
{
};

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnReloadStarted
struct ABend_Wpn_Pistol_Base_C_OnReloadStarted_Params
{
};

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnFired
struct ABend_Wpn_Pistol_Base_C_OnFired_Params
{
};

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnOutOfAmmo
struct ABend_Wpn_Pistol_Base_C_OnOutOfAmmo_Params
{
};

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnFireOnEmpty
struct ABend_Wpn_Pistol_Base_C_OnFireOnEmpty_Params
{
};

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnHolsterFinished
struct ABend_Wpn_Pistol_Base_C_OnHolsterFinished_Params
{
};

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.OnDrawStarted
struct ABend_Wpn_Pistol_Base_C_OnDrawStarted_Params
{
};

// Function Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C.ExecuteUbergraph_Bend_Wpn_Pistol_Base
struct ABend_Wpn_Pistol_Base_C_ExecuteUbergraph_Bend_Wpn_Pistol_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

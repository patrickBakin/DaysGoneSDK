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

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.IsFiring
struct ABend_WpnAirTaser_C_IsFiring_Params
{
	class ABendWeapon_Projectile**                     Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFiring;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.UserConstructionScript
struct ABend_WpnAirTaser_C_UserConstructionScript_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnClipLoaded
struct ABend_WpnAirTaser_C_OnClipLoaded_Params
{
	int*                                               MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnDrawStarted
struct ABend_WpnAirTaser_C_OnDrawStarted_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnHolsterFinished
struct ABend_WpnAirTaser_C_OnHolsterFinished_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnReloadFinished
struct ABend_WpnAirTaser_C_OnReloadFinished_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnShellLoaded
struct ABend_WpnAirTaser_C_OnShellLoaded_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnThrowWeapon
struct ABend_WpnAirTaser_C_OnThrowWeapon_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnOutOfAmmo
struct ABend_WpnAirTaser_C_OnOutOfAmmo_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnFireOnEmpty
struct ABend_WpnAirTaser_C_OnFireOnEmpty_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnReloadStarted
struct ABend_WpnAirTaser_C_OnReloadStarted_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.OnFired
struct ABend_WpnAirTaser_C_OnFired_Params
{
};

// Function Bend_WpnAirTaser.Bend_WpnAirTaser_C.ExecuteUbergraph_Bend_WpnAirTaser
struct ABend_WpnAirTaser_C_ExecuteUbergraph_Bend_WpnAirTaser_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

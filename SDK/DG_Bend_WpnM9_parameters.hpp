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

// Function Bend_WpnM9.Bend_WpnM9_C.IsFiring
struct ABend_WpnM9_C_IsFiring_Params
{
	class ABendWeapon_Projectile**                     Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFiring;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnM9.Bend_WpnM9_C.UserConstructionScript
struct ABend_WpnM9_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

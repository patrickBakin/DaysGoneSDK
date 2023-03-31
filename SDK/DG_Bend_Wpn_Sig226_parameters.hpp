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

// Function Bend_Wpn_Sig226.Bend_Wpn_Sig226_C.IsFiring
struct ABend_Wpn_Sig226_C_IsFiring_Params
{
	class ABendWeapon_Projectile**                     Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFiring;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Sig226.Bend_Wpn_Sig226_C.UserConstructionScript
struct ABend_Wpn_Sig226_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

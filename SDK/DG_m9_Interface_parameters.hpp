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

// Function m9_Interface.m9_Interface_C.IsFiring
struct Um9_Interface_C_IsFiring_Params
{
	class ABendWeapon_Projectile*                      Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFiring;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.UserConstructionScript
struct ABend_WpnMelee_BaseballBat_C_UserConstructionScript_Params
{
};

// Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.OnDamaged
struct ABend_WpnMelee_BaseballBat_C_OnDamaged_Params
{
	bool*                                              OwnerIsPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponsHealthPercentage;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.ExecuteUbergraph_Bend_WpnMelee_BaseballBat
struct ABend_WpnMelee_BaseballBat_C_ExecuteUbergraph_Bend_WpnMelee_BaseballBat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

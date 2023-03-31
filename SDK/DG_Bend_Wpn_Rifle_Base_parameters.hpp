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

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.UserConstructionScript
struct ABend_Wpn_Rifle_Base_C_UserConstructionScript_Params
{
};

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.OnClipLoaded
struct ABend_Wpn_Rifle_Base_C_OnClipLoaded_Params
{
	int*                                               MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.OnDrawFinished
struct ABend_Wpn_Rifle_Base_C_OnDrawFinished_Params
{
};

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.OnHolsterFinished
struct ABend_Wpn_Rifle_Base_C_OnHolsterFinished_Params
{
};

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.OnFired
struct ABend_Wpn_Rifle_Base_C_OnFired_Params
{
};

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.OnClipRemoved
struct ABend_Wpn_Rifle_Base_C_OnClipRemoved_Params
{
	int*                                               MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.OnOutOfAmmo
struct ABend_Wpn_Rifle_Base_C_OnOutOfAmmo_Params
{
};

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.OnOutOfAmmo_Copy
struct ABend_Wpn_Rifle_Base_C_OnOutOfAmmo_Copy_Params
{
};

// Function Bend_Wpn_Rifle_Base.Bend_Wpn_Rifle_Base_C.ExecuteUbergraph_Bend_Wpn_Rifle_Base
struct ABend_Wpn_Rifle_Base_C_ExecuteUbergraph_Bend_Wpn_Rifle_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

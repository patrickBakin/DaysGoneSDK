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

// Function DirectionalHit.DirectionalHit_C.HitDetails
struct UDirectionalHit_C_HitDetails_Params
{
	float                                              angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DirectionalHit.DirectionalHit_C.Construct
struct UDirectionalHit_C_Construct_Params
{
};

// Function DirectionalHit.DirectionalHit_C.ExecuteUbergraph_DirectionalHit
struct UDirectionalHit_C_ExecuteUbergraph_DirectionalHit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

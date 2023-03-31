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

// Function BendPlayerCamCover.BendPlayerCamCover_C.OnUpdate
struct UBendPlayerCamCover_C_OnUpdate_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendPlayerCamCover.BendPlayerCamCover_C.ExecuteUbergraph_BendPlayerCamCover
struct UBendPlayerCamCover_C_ExecuteUbergraph_BendPlayerCamCover_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

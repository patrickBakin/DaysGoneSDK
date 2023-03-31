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

// Function Actor_EnvCover.Actor_EnvCover_C.RequestSMPReplacement
struct AActor_EnvCover_C_RequestSMPReplacement_Params
{
};

// Function Actor_EnvCover.Actor_EnvCover_C.AddChildCover
struct AActor_EnvCover_C_AddChildCover_Params
{
	class UBendCoverChildComponent*                    coverVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      coverClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Actor_EnvCover.Actor_EnvCover_C.UserConstructionScript
struct AActor_EnvCover_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

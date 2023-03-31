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

// Function Actor_EnvCoverManual.Actor_EnvCoverManual_C.AddChildCover
struct AActor_EnvCoverManual_C_AddChildCover_Params
{
	class UBendCoverChildComponent*                    coverVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      coverClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Actor_EnvCoverManual.Actor_EnvCoverManual_C.UserConstructionScript
struct AActor_EnvCoverManual_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

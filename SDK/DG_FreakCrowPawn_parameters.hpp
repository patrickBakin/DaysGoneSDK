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

// Function FreakCrowPawn.FreakCrowPawn_C.SpawnAndSetupSearchBodyActor
struct AFreakCrowPawn_C_SpawnAndSetupSearchBodyActor_Params
{
	class UAnimSequenceBase**                          AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          AnimSequenceCrouched;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SubClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FreakCrowPawn.FreakCrowPawn_C.UserConstructionScript
struct AFreakCrowPawn_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

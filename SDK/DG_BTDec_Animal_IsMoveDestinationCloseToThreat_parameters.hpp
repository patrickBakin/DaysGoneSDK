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

// Function BTDec_Animal_IsMoveDestinationCloseToThreat.BTDec_Animal_IsMoveDestinationCloseToThreat_C.IsLocationCloseToDestination
struct UBTDec_Animal_IsMoveDestinationCloseToThreat_C_IsLocationCloseToDestination_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BTDec_Animal_IsMoveDestinationCloseToThreat.BTDec_Animal_IsMoveDestinationCloseToThreat_C.PerformConditionCheckAI
struct UBTDec_Animal_IsMoveDestinationCloseToThreat_C_PerformConditionCheckAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

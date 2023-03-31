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

// Function BTService_Deer_Scared.BTService_Deer_Scared_C.ReceiveActivationAI
struct UBTService_Deer_Scared_C_ReceiveActivationAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_Deer_Scared.BTService_Deer_Scared_C.ReceiveDeactivationAI
struct UBTService_Deer_Scared_C_ReceiveDeactivationAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_Deer_Scared.BTService_Deer_Scared_C.ExecuteUbergraph_BTService_Deer_Scared
struct UBTService_Deer_Scared_C_ExecuteUbergraph_BTService_Deer_Scared_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

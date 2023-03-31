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

// Function BTService_EventListener.BTService_EventListener_C.ReceiveActivation
struct UBTService_EventListener_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_EventListener.BTService_EventListener_C.ReceiveDeactivation
struct UBTService_EventListener_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_EventListener.BTService_EventListener_C.targetPawn
struct UBTService_EventListener_C_targetPawn_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_EventListener.BTService_EventListener_C.ExecuteUbergraph_BTService_EventListener
struct UBTService_EventListener_C_ExecuteUbergraph_BTService_EventListener_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

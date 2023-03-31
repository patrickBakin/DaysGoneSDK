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

// Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ReceiveActivation
struct UBTService_UpdateBuddyCombatHide_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ReceiveDeactivation
struct UBTService_UpdateBuddyCombatHide_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C.ExecuteUbergraph_BTService_UpdateBuddyCombatHide
struct UBTService_UpdateBuddyCombatHide_C_ExecuteUbergraph_BTService_UpdateBuddyCombatHide_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

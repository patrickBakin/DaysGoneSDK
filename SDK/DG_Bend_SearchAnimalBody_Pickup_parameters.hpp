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

// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.GetNumDrops
struct ABend_SearchAnimalBody_Pickup_C_GetNumDrops_Params
{
	struct FName                                       AnimalSubclass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.UserConstructionScript
struct ABend_SearchAnimalBody_Pickup_C_UserConstructionScript_Params
{
};

// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.HandlePickupLogic
struct ABend_SearchAnimalBody_Pickup_C_HandlePickupLogic_Params
{
};

// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.InitInteract
struct ABend_SearchAnimalBody_Pickup_C_InitInteract_Params
{
};

// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.OnInputSucceeded
struct ABend_SearchAnimalBody_Pickup_C_OnInputSucceeded_Params
{
};

// Function Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C.ExecuteUbergraph_Bend_SearchAnimalBody_Pickup
struct ABend_SearchAnimalBody_Pickup_C_ExecuteUbergraph_Bend_SearchAnimalBody_Pickup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

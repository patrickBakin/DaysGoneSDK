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

// Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.UserConstructionScript
struct AHumanLootBehaviorPOI_C_UserConstructionScript_Params
{
};

// Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.OnGetPriority
struct AHumanLootBehaviorPOI_C_OnGetPriority_Params
{
	float*                                             defaultPriority;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EePOIUserType>*                        userType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.ExecuteUbergraph_HumanLootBehaviorPOI
struct AHumanLootBehaviorPOI_C_ExecuteUbergraph_HumanLootBehaviorPOI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

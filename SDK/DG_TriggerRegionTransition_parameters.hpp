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

// Function TriggerRegionTransition.TriggerRegionTransition_C.GetRegionNamesFromId
struct ATriggerRegionTransition_C_GetRegionNamesFromId_Params
{
	TEnumAsByte<ERegions>                              Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Proxy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TriggerRegionTransition.TriggerRegionTransition_C.UserConstructionScript
struct ATriggerRegionTransition_C_UserConstructionScript_Params
{
};

// Function TriggerRegionTransition.TriggerRegionTransition_C.ReceiveActorBeginOverlap
struct ATriggerRegionTransition_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TriggerRegionTransition.TriggerRegionTransition_C.ExecuteUbergraph_TriggerRegionTransition
struct ATriggerRegionTransition_C_ExecuteUbergraph_TriggerRegionTransition_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

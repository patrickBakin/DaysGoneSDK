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

// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.SpawnScenarioActorSlot
struct AXPEC_EventManager_CPPRM_C_SpawnScenarioActorSlot_Params
{
	class AXpecPOISlot*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.SpawnScenarioInstance
struct AXPEC_EventManager_CPPRM_C_SpawnScenarioInstance_Params
{
	class AXpecScenarioInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.UserConstructionScript
struct AXPEC_EventManager_CPPRM_C_UserConstructionScript_Params
{
};

// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.ReceiveBeginPlay
struct AXPEC_EventManager_CPPRM_C_ReceiveBeginPlay_Params
{
};

// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.FadeFinishRequestSpawn
struct AXPEC_EventManager_CPPRM_C_FadeFinishRequestSpawn_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C.ExecuteUbergraph_XPEC_EventManager_CPPRM
struct AXPEC_EventManager_CPPRM_C_ExecuteUbergraph_XPEC_EventManager_CPPRM_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

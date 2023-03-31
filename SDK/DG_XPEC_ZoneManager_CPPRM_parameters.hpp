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

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.GetNearbyWaypointsFromMigrationPath
struct AXPEC_ZoneManager_CPPRM_C_GetNearbyWaypointsFromMigrationPath_Params
{
	struct FVector*                                    loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.HideActorInMissionBlockingVolume
struct AXPEC_ZoneManager_CPPRM_C_HideActorInMissionBlockingVolume_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.OnZoneDeactivate
struct AXPEC_ZoneManager_CPPRM_C_OnZoneDeactivate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.OnZoneActivate
struct AXPEC_ZoneManager_CPPRM_C_OnZoneActivate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.UserConstructionScript
struct AXPEC_ZoneManager_CPPRM_C_UserConstructionScript_Params
{
};

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.ReceiveBeginPlay
struct AXPEC_ZoneManager_CPPRM_C_ReceiveBeginPlay_Params
{
};

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.RequestSpawn
struct AXPEC_ZoneManager_CPPRM_C_RequestSpawn_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C.ExecuteUbergraph_XPEC_ZoneManager_CPPRM
struct AXPEC_ZoneManager_CPPRM_C_ExecuteUbergraph_XPEC_ZoneManager_CPPRM_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

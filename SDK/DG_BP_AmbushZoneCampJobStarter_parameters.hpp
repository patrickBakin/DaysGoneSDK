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

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ConvertRegionToWorldRegion
struct ABP_AmbushZoneCampJobStarter_C_ConvertRegionToWorldRegion_Params
{
	TEnumAsByte<ERegions>                              Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWorldRegions>                         WorldRegion;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckCurrentRegion
struct ABP_AmbushZoneCampJobStarter_C_CheckCurrentRegion_Params
{
	bool                                               IsInRegion;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckMissionBlacklist
struct ABP_AmbushZoneCampJobStarter_C_CheckMissionBlacklist_Params
{
	bool                                               InBlacklistedMission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.CheckForMission
struct ABP_AmbushZoneCampJobStarter_C_CheckForMission_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.UserConstructionScript
struct ABP_AmbushZoneCampJobStarter_C_UserConstructionScript_Params
{
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ReceiveBeginPlay
struct ABP_AmbushZoneCampJobStarter_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnBeginOverlap_BendSphere
struct ABP_AmbushZoneCampJobStarter_C_OnBeginOverlap_BendSphere_Params
{
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnMissionComplete_MissionManager
struct ABP_AmbushZoneCampJobStarter_C_OnMissionComplete_MissionManager_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.UnlockJob
struct ABP_AmbushZoneCampJobStarter_C_UnlockJob_Params
{
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.MissionCompleteDelay
struct ABP_AmbushZoneCampJobStarter_C_MissionCompleteDelay_Params
{
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnRegionEntered_BendPlayerController
struct ABP_AmbushZoneCampJobStarter_C_OnRegionEntered_BendPlayerController_Params
{
	TEnumAsByte<ERegions>                              Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.OnPostSaveGameLoaded_Event_1
struct ABP_AmbushZoneCampJobStarter_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushZoneCampJobStarter.BP_AmbushZoneCampJobStarter_C.ExecuteUbergraph_BP_AmbushZoneCampJobStarter
struct ABP_AmbushZoneCampJobStarter_C_ExecuteUbergraph_BP_AmbushZoneCampJobStarter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

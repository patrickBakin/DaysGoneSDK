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

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckForPrerequisiteMission
struct ABP_AmbushSmokeController_C_CheckForPrerequisiteMission_Params
{
	bool                                               NotCompleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckForFlashbackMission
struct ABP_AmbushSmokeController_C_CheckForFlashbackMission_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInFlashback;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckSmokeParticle
struct ABP_AmbushSmokeController_C_CheckSmokeParticle_Params
{
	class UBendBunkerData*                             BendBunkerData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.UserConstructionScript
struct ABP_AmbushSmokeController_C_UserConstructionScript_Params
{
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnEnemyCampCleared_Event
struct ABP_AmbushSmokeController_C_OnEnemyCampCleared_Event_Params
{
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.CheckParticles
struct ABP_AmbushSmokeController_C_CheckParticles_Params
{
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.BindEvents
struct ABP_AmbushSmokeController_C_BindEvents_Params
{
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnMissionBegin
struct ABP_AmbushSmokeController_C_OnMissionBegin_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnMissionComplete
struct ABP_AmbushSmokeController_C_OnMissionComplete_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ReceiveBeginPlay
struct ABP_AmbushSmokeController_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ReceivePreSaveGameLoaded
struct ABP_AmbushSmokeController_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.InitializeParticles
struct ABP_AmbushSmokeController_C_InitializeParticles_Params
{
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.UpdatePatricle
struct ABP_AmbushSmokeController_C_UpdatePatricle_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.DeactivateParticle
struct ABP_AmbushSmokeController_C_DeactivateParticle_Params
{
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.DeactivateAndHideParticle
struct ABP_AmbushSmokeController_C_DeactivateAndHideParticle_Params
{
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnDemoJumpPoint
struct ABP_AmbushSmokeController_C_OnDemoJumpPoint_Params
{
	class UDataAsset*                                  JobOrMissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.OnPostSaveGameLoaded_Event_1
struct ABP_AmbushSmokeController_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushSmokeController.BP_AmbushSmokeController_C.ExecuteUbergraph_BP_AmbushSmokeController
struct ABP_AmbushSmokeController_C_ExecuteUbergraph_BP_AmbushSmokeController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

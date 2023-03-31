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

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckForPrerequisiteMission
struct ABP_InfestationCrowController_C_CheckForPrerequisiteMission_Params
{
	bool                                               NotCompleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckForFlashbackMission
struct ABP_InfestationCrowController_C_CheckForFlashbackMission_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInFlashback;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckCrowParticle
struct ABP_InfestationCrowController_C_CheckCrowParticle_Params
{
	class UBendNestingZone*                            InfestationData;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.UserConstructionScript
struct ABP_InfestationCrowController_C_UserConstructionScript_Params
{
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ParticleDisable__FinishedFunc
struct ABP_InfestationCrowController_C_ParticleDisable__FinishedFunc_Params
{
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ParticleDisable__UpdateFunc
struct ABP_InfestationCrowController_C_ParticleDisable__UpdateFunc_Params
{
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.CheckParticles
struct ABP_InfestationCrowController_C_CheckParticles_Params
{
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.BindEvents
struct ABP_InfestationCrowController_C_BindEvents_Params
{
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnMissionBegin
struct ABP_InfestationCrowController_C_OnMissionBegin_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnMissionComplete
struct ABP_InfestationCrowController_C_OnMissionComplete_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ReceiveBeginPlay
struct ABP_InfestationCrowController_C_ReceiveBeginPlay_Params
{
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ReceivePreSaveGameLoaded
struct ABP_InfestationCrowController_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.InitializeParticles
struct ABP_InfestationCrowController_C_InitializeParticles_Params
{
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.UpdatePatricle
struct ABP_InfestationCrowController_C_UpdatePatricle_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.DeactivateParticle
struct ABP_InfestationCrowController_C_DeactivateParticle_Params
{
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnZoneCleared_Event_1
struct ABP_InfestationCrowController_C_OnZoneCleared_Event_1_Params
{
	class ABendNestingZoneActor*                       ZoneActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.OnPostSaveGameLoaded_Event_1
struct ABP_InfestationCrowController_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfestationCrowController.BP_InfestationCrowController_C.ExecuteUbergraph_BP_InfestationCrowController
struct ABP_InfestationCrowController_C_ExecuteUbergraph_BP_InfestationCrowController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

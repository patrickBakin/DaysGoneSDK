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

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ShowTutorial
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_ShowTutorial_Params
{
	class UUI_TutorialPanel_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckHordePrereqs
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_CheckHordePrereqs_Params
{
	bool                                               HordeConditionsCleared;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckForMission
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_CheckForMission_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.CheckMissionBlacklist
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_CheckMissionBlacklist_Params
{
	bool                                               InBlacklistedMission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.MapIconState
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_MapIconState_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.UserConstructionScript
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_UserConstructionScript_Params
{
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ReceiveBeginPlay
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnMapTaken_Event
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnMapTaken_Event_Params
{
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnBeginOverlap_BendSphere
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnBeginOverlap_BendSphere_Params
{
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.StartHordeJob
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_StartHordeJob_Params
{
	bool                                               ViaAmbush;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnJobComplete
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnJobComplete_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnMissionComplete
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnMissionComplete_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.DemoJump
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_DemoJump_Params
{
	class UDataAsset*                                  JobOrMissionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.TimerUnlockJob
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_TimerUnlockJob_Params
{
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ReceivePreSaveGameLoaded
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_Horde_MiniMapLocationActor.BP_AmbushCamp_Horde_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_Horde_MiniMapLocationActor
struct ABP_AmbushCamp_Horde_MiniMapLocationActor_C_ExecuteUbergraph_BP_AmbushCamp_Horde_MiniMapLocationActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

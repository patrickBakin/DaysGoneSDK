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

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.UpdateFastTravelLocation
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_UpdateFastTravelLocation_Params
{
	bool                                               FastTravelAvailable;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.CheckMissionBlacklist
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_CheckMissionBlacklist_Params
{
	bool                                               InBlacklistedMission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.CheckForMission
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_CheckForMission_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.MapIconState
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_MapIconState_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.UserConstructionScript
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_UserConstructionScript_Params
{
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ReceiveBeginPlay
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnMapTaken_Event
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_OnMapTaken_Event_Params
{
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_660_BeginOverlapSig__DelegateSignature_Params
{
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnCheckpointDiscovered_Event_1
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_OnCheckpointDiscovered_Event_1_Params
{
	class UBendNeroCheckpointData*                     Checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.StartNEROJob
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_StartNEROJob_Params
{
	bool                                               PlayVO;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ProgressINDObjective
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ProgressINDObjective_Params
{
	class ABendPawn*                                   PawnSpeaking;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDonePlayVocalReason>                  SuccessOrFail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ArriveVO
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ArriveVO_Params
{
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnNeroCheckpointInjectorUsed_Event_1
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_OnNeroCheckpointInjectorUsed_Event_1_Params
{
	class UBendNeroCheckpointData*                     Checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BikeChaseStarted
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_BikeChaseStarted_Params
{
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.BikeChaseEnded
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_BikeChaseEnded_Params
{
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.TimerUnlockJob
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_TimerUnlockJob_Params
{
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ReceivePreSaveGameLoaded
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.OnPostSaveGameLoaded_Event_1
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbushCamp_NERO_MiniMapLocationActor.BP_AmbushCamp_NERO_MiniMapLocationActor_C.ExecuteUbergraph_BP_AmbushCamp_NERO_MiniMapLocationActor
struct ABP_AmbushCamp_NERO_MiniMapLocationActor_C_ExecuteUbergraph_BP_AmbushCamp_NERO_MiniMapLocationActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_GetCurrentCheckpointCount
struct ABP_MissionScriptBase_C_I_GetCurrentCheckpointCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_GetDoonceVariable
struct ABP_MissionScriptBase_C_I_GetDoonceVariable_Params
{
	TArray<bool>                                       init_d;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<bool>                                       Closed;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                highest_index_used;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GenerateFailingLocalizedText
struct ABP_MissionScriptBase_C_GenerateFailingLocalizedText_Params
{
	TEnumAsByte<EMissionFailureSubject>*               Subject;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionFailureType>*                  Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.UpdateHealthBar
struct ABP_MissionScriptBase_C_UpdateHealthBar_Params
{
	bool*                                              RemoveBar;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              inverseBar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.CollectMissionStarts
struct ABP_MissionScriptBase_C_CollectMissionStarts_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Pre-InitializeBuddiesForIntroCins
struct ABP_MissionScriptBase_C_Pre_InitializeBuddiesForIntroCins_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.DoesProperPawnExistInSlot
struct ABP_MissionScriptBase_C_DoesProperPawnExistInSlot_Params
{
	class ABP_MissionStartLocation_C*                  MissionStartLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExtraPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PawnExists;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   PawnRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SaveInAFrame
struct ABP_MissionScriptBase_C_SaveInAFrame_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetMissionEndingPositions
struct ABP_MissionScriptBase_C_GetMissionEndingPositions_Params
{
	struct FTransform                                  PlayerPosition;                                           // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  BikePosition;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               OnBike;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetAllObjectives
struct ABP_MissionScriptBase_C_GetAllObjectives_Params
{
	TArray<class ABendObjective*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetMainObjectives
struct ABP_MissionScriptBase_C_GetMainObjectives_Params
{
	TArray<class ABendObjective*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetSideObjectives
struct ABP_MissionScriptBase_C_GetSideObjectives_Params
{
	TArray<class ABendObjective*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.GetCurrentScoringVariables
struct ABP_MissionScriptBase_C_GetCurrentScoringVariables_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                kills;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.UpdateObjectiveProgression
struct ABP_MissionScriptBase_C_UpdateObjectiveProgression_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.DebugForceObjectiveStage
struct ABP_MissionScriptBase_C_DebugForceObjectiveStage_Params
{
	int                                                ObjectiveStage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CallOnCheckpointLoaded;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverrideCheckpointLoadedIndex;                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SaveAtThisIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SaveCheckpointByIndex
struct ABP_MissionScriptBase_C_SaveCheckpointByIndex_Params
{
	int                                                Checkpoint_Index;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ResetObjectivesToCheckpoint
struct ABP_MissionScriptBase_C_ResetObjectivesToCheckpoint_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.StoreVehicles
struct ABP_MissionScriptBase_C_StoreVehicles_Params
{
	class AVehiclePawn*                                The_Vehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MissionStartLocation_C*                  StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Should remove Any from bike
struct ABP_MissionScriptBase_C_Should_remove_Any_from_bike_Params
{
	int                                                Checkpoint__;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetupAllStartLocationsAtIndex
struct ABP_MissionScriptBase_C_SetupAllStartLocationsAtIndex_Params
{
	int                                                Checkpoint_Number;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StreamEverythingAround;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdateCamera;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraPointLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontDoPlayerTeleport;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TeleportBuddy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontTeleportPlayerBike;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontTeleportBuddyBike;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABendPawn*>                           pawns;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<class AVehiclePawn*>                        Vehicles;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.StartWithMissionFailure
struct ABP_MissionScriptBase_C_StartWithMissionFailure_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.StorePawn
struct ABP_MissionScriptBase_C_StorePawn_Params
{
	class ABendPawn*                                   ThePawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MissionStartLocation_C*                  MissionStart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExtraPawn_;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontDestroyPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Set Ai Settings
struct ABP_MissionScriptBase_C_Set_Ai_Settings_Params
{
	class ABP_MissionStartLocation_C*                  Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bitch_;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNotNewSpawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.EndingDeactivateAIAndBikes
struct ABP_MissionScriptBase_C_EndingDeactivateAIAndBikes_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetUpBuddyLocationsAtIndex
struct ABP_MissionScriptBase_C_SetUpBuddyLocationsAtIndex_Params
{
	int                                                Checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontRespawnBuddy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Don_tDoBuddyBikeTeleport;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Collect Mission Variables
struct ABP_MissionScriptBase_C_Collect_Mission_Variables_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Start Ending Mission
struct ABP_MissionScriptBase_C_Start_Ending_Mission_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.Init Mission Objectives
struct ABP_MissionScriptBase_C_Init_Mission_Objectives_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SetUpPlayerLocationsAtIndex
struct ABP_MissionScriptBase_C_SetUpPlayerLocationsAtIndex_Params
{
	int                                                Checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontDoPlayerTeleport;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontDoPlayerBikeTeleport;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontRespawnBuddy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.UserConstructionScript
struct ABP_MissionScriptBase_C_UserConstructionScript_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceiveBeginPlay
struct ABP_MissionScriptBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.MissionScript-Initialize
struct ABP_MissionScriptBase_C_MissionScript_Initialize_Params
{
	bool                                               DontDoPlayerTeleport;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RespawnBuddy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Don_tTeleportPlayerBike;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Don_tTeleportBuddyBike;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnableVolumeFailure
struct ABP_MissionScriptBase_C_EnableVolumeFailure_Params
{
	int                                                VolumeNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideFailureBuffer;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.DisableVolumeFailure
struct ABP_MissionScriptBase_C_DisableVolumeFailure_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceiveEndPlay
struct ABP_MissionScriptBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.RideAssistOnSeated
struct ABP_MissionScriptBase_C_RideAssistOnSeated_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceivePostSaveGameLoaded
struct ABP_MissionScriptBase_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnableDistanceFailure
struct ABP_MissionScriptBase_C_EnableDistanceFailure_Params
{
	class AActor*                                      DistanceCheckedActor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FailureDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ignore_Z_axis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseBuddy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideFailureBuffer;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.DisableDistanceFailure
struct ABP_MissionScriptBase_C_DisableDistanceFailure_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.SynchStreamingOnPlayer
struct ABP_MissionScriptBase_C_SynchStreamingOnPlayer_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnDriverEnteredVehicle
struct ABP_MissionScriptBase_C_OnDriverEnteredVehicle_Params
{
	class AVehiclePawn*                                VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnTeleportToCheckpoint_MM_Event_1
struct ABP_MissionScriptBase_C_OnTeleportToCheckpoint_MM_Event_1_Params
{
	int                                                Checkpoint;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.RiderEnterVehicleEvents
struct ABP_MissionScriptBase_C_RiderEnterVehicleEvents_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnRiderFinishedEnteringVehicle_Event_1
struct ABP_MissionScriptBase_C_OnRiderFinishedEnteringVehicle_Event_1_Params
{
	class ABendPawn*                                   Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.LoadThePreviousCheckpoint
struct ABP_MissionScriptBase_C_LoadThePreviousCheckpoint_Params
{
	struct FString*                                    MessageToDisplay;                                         // (Parm, ZeroConstructor)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.TrackMissionStates
struct ABP_MissionScriptBase_C_TrackMissionStates_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.EnemyKilled
struct ABP_MissionScriptBase_C_EnemyKilled_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendSpawnLocationBase*                      SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnDied_Event_1
struct ABP_MissionScriptBase_C_OnDied_Event_1_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnPlayerRespawned_Event_1
struct ABP_MissionScriptBase_C_OnPlayerRespawned_Event_1_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.I_SetDoOnceVariables
struct ABP_MissionScriptBase_C_I_SetDoOnceVariables_Params
{
	int                                                HighestIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       init_d;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       Closed;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.LoadPreviousCheckpointWithMessage
struct ABP_MissionScriptBase_C_LoadPreviousCheckpointWithMessage_Params
{
	TEnumAsByte<EMissionFailureSubject>*               Subject;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionFailureType>*                  Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnFadedToBlack_MM_Event_1
struct ABP_MissionScriptBase_C_OnFadedToBlack_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ReceivePreSaveGameLoaded
struct ABP_MissionScriptBase_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.AsynchLoadImage
struct ABP_MissionScriptBase_C_AsynchLoadImage_Params
{
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.AsynchLoad
struct ABP_MissionScriptBase_C_AsynchLoad_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.BeginTheMissionFailing
struct ABP_MissionScriptBase_C_BeginTheMissionFailing_Params
{
	TEnumAsByte<EMissionFailureOptions>*               FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ClearTheMissionFailing
struct ABP_MissionScriptBase_C_ClearTheMissionFailing_Params
{
	TEnumAsByte<EMissionFailureOptions>*               FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.ExecuteUbergraph_BP_MissionScriptBase
struct ABP_MissionScriptBase_C_ExecuteUbergraph_BP_MissionScriptBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnVehicleSpawned__DelegateSignature
struct ABP_MissionScriptBase_C_OnVehicleSpawned__DelegateSignature_Params
{
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Vehicle_Index;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MissionStartLocation_C*                  StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnPawnSpawned__DelegateSignature
struct ABP_MissionScriptBase_C_OnPawnSpawned__DelegateSignature_Params
{
	class ABendPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PawnIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MissionStartLocation_C*                  StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionScriptBase.BP_MissionScriptBase_C.OnFailingMission__DelegateSignature
struct ABP_MissionScriptBase_C_OnFailingMission__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

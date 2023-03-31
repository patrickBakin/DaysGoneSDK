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

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ForceHordeOff
struct ABP_AmbientEvent_Horde_C_ForceHordeOff_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ShowTutorial
struct ABP_AmbientEvent_Horde_C_ShowTutorial_Params
{
	class UUI_TutorialPanel_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetJobObjective
struct ABP_AmbientEvent_Horde_C_SetJobObjective_Params
{
	int                                                ObjectiveNumber;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckForCompletion
struct ABP_AmbientEvent_Horde_C_CheckForCompletion_Params
{
	bool                                               IsCompleted;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CompleteHorde
struct ABP_AmbientEvent_Horde_C_CompleteHorde_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.sqDistanceToClosestPOI
struct ABP_AmbientEvent_Horde_C_sqDistanceToClosestPOI_Params
{
	float                                              DistToGen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetupReload
struct ABP_AmbientEvent_Horde_C_SetupReload_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckPrequisites
struct ABP_AmbientEvent_Horde_C_CheckPrequisites_Params
{
	bool                                               CanSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FailReason;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.RenameActors
struct ABP_AmbientEvent_Horde_C_RenameActors_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.NestsClearedinRegion
struct ABP_AmbientEvent_Horde_C_NestsClearedinRegion_Params
{
	TArray<class UBendNestingZone*>                    Zone;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ProportionRemaining;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetRegenModifierByInfestationZones
struct ABP_AmbientEvent_Horde_C_SetRegenModifierByInfestationZones_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TimespanToDays
struct ABP_AmbientEvent_Horde_C_TimespanToDays_Params
{
	struct FTimespan                                   TimespanIn;                                               // (Parm, ZeroConstructor)
	float                                              DaysOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ActivateHorde
struct ABP_AmbientEvent_Horde_C_ActivateHorde_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.GetLastRunTimeFromDatabase
struct ABP_AmbientEvent_Horde_C_GetLastRunTimeFromDatabase_Params
{
	float                                              LastRunTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.GetSizeFromDatabase
struct ABP_AmbientEvent_Horde_C_GetSizeFromDatabase_Params
{
	int                                                Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SaveDatabase
struct ABP_AmbientEvent_Horde_C_SaveDatabase_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.SetSize
struct ABP_AmbientEvent_Horde_C_SetSize_Params
{
	int                                                NewMembers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.AddHordeMembers
struct ABP_AmbientEvent_Horde_C_AddHordeMembers_Params
{
	float                                              TimeElapsedDays;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GeneratedMembers;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CalculateTimeSinceLastRun
struct ABP_AmbientEvent_Horde_C_CalculateTimeSinceLastRun_Params
{
	float                                              TimeElapsed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.UserConstructionScript
struct ABP_AmbientEvent_Horde_C_UserConstructionScript_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnEventReRunning
struct ABP_AmbientEvent_Horde_C_OnEventReRunning_Params
{
	class ABendAmbientEventMarker**                    EventMarker;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceiveBeginPlay
struct ABP_AmbientEvent_Horde_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeMemberDeath
struct ABP_AmbientEvent_Horde_C_HordeMemberDeath_Params
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

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceiveEndPlay
struct ABP_AmbientEvent_Horde_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TimerEvent1
struct ABP_AmbientEvent_Horde_C_TimerEvent1_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CheckUnloadConditions
struct ABP_AmbientEvent_Horde_C_CheckUnloadConditions_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ForceDestroyHorde
struct ABP_AmbientEvent_Horde_C_ForceDestroyHorde_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReloadHorde
struct ABP_AmbientEvent_Horde_C_ReloadHorde_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.JobStarted
struct ABP_AmbientEvent_Horde_C_JobStarted_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CreateObjectiveMeter
struct ABP_AmbientEvent_Horde_C_CreateObjectiveMeter_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.PlayTutorial
struct ABP_AmbientEvent_Horde_C_PlayTutorial_Params
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

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OtherJobEnded
struct ABP_AmbientEvent_Horde_C_OtherJobEnded_Params
{
	class UJobClassInfo*                               JobID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.RecheckConditions
struct ABP_AmbientEvent_Horde_C_RecheckConditions_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnPlayerDied
struct ABP_AmbientEvent_Horde_C_OnPlayerDied_Params
{
	float*                                             ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CustomEvent_2
struct ABP_AmbientEvent_Horde_C_CustomEvent_2_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ReceivePreSaveGameLoaded
struct ABP_AmbientEvent_Horde_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.TrackedJobChanged
struct ABP_AmbientEvent_Horde_C_TrackedJobChanged_Params
{
	class UObject*                                     JobOrMissionData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeDespawn
struct ABP_AmbientEvent_Horde_C_HordeDespawn_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.HordeSpawned
struct ABP_AmbientEvent_Horde_C_HordeSpawned_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.CustomEvent_1
struct ABP_AmbientEvent_Horde_C_CustomEvent_1_Params
{
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.OnPostSaveGameLoaded_Event_1
struct ABP_AmbientEvent_Horde_C_OnPostSaveGameLoaded_Event_1_Params
{
	bool                                               bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientEvent_Horde.BP_AmbientEvent_Horde_C.ExecuteUbergraph_BP_AmbientEvent_Horde
struct ABP_AmbientEvent_Horde_C_ExecuteUbergraph_BP_AmbientEvent_Horde_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
